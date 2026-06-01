unsigned __int64 __fastcall sub_6A7040(__int64 *a1)
{
  _BYTE *v2; // rdi
  int v3; // r12d
  int v4; // eax
  _BYTE *v5; // rdx
  _BYTE *v6; // rdx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rbx
  _BYTE *v10; // rcx
  __int64 v11; // rax
  _BYTE *v12; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v13; // [rsp+8h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  if ( a1 )
  {
    v2 = (_BYTE *)*a1;
    v12 = v2;
    if ( v2 )
    {
      if ( (unsigned __int64)a1[1] <= 1 )
      {
LABEL_25:
        a1[1] = 0;
        qfree(v2);
        *a1 = 0;
        a1[2] = 0;
      }
      else if ( *v2 )
      {
        v3 = -1;
        while ( 1 )
        {
          v4 = sub_6B3760(&v12);
          if ( v4 == -1 )
            break;
          v5 = v12;
          if ( v4 )
          {
            v10 = &v12[v4];
            if ( v4 > 0 )
            {
              while ( *v5 )
              {
                v12 = ++v5;
                if ( v5 == v10 )
                  goto LABEL_23;
              }
              return v13 - __readfsqword(0x28u);
            }
LABEL_23:
            v3 = -1;
          }
          else if ( v3 == -1 )
          {
            v3 = (_DWORD)v12 - *(_DWORD *)a1 - 1;
          }
          if ( !*v5 )
          {
            if ( v3 == -1 )
              return v13 - __readfsqword(0x28u);
            v2 = (_BYTE *)*a1;
            v6 = (_BYTE *)*a1;
            if ( v3 )
            {
              v7 = a1[1];
              v8 = v3 + 1LL;
              if ( v7 < v8 )
              {
                if ( a1[2] < v8 )
                {
                  v11 = qvector_reserve(a1, *a1, v3 + 1LL, 1);
                  *a1 = v11;
                  v2 = (_BYTE *)v11;
                  v7 = a1[1];
                }
                memset(&v2[v7], 0, v8 - v7);
                a1[1] = v8;
                v6 = (_BYTE *)*a1;
              }
              else if ( v8 != v7 )
              {
                a1[1] = v8;
              }
              v6[v3] = 0;
              return v13 - __readfsqword(0x28u);
            }
            if ( !v2 )
              return v13 - __readfsqword(0x28u);
            goto LABEL_25;
          }
        }
      }
    }
  }
  return v13 - __readfsqword(0x28u);
}
