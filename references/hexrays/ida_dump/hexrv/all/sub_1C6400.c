unsigned __int64 __fastcall sub_1C6400(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 v4; // rsi
  unsigned __int64 v5; // rax
  _DWORD *v6; // rbp
  unsigned __int64 v7; // rbp
  __int64 v8; // rdx
  unsigned __int64 v10; // rbx
  _DWORD *v11; // rbp
  _QWORD v12[2]; // [rsp+0h] [rbp-78h] BYREF
  int v13; // [rsp+10h] [rbp-68h]
  _DWORD v14[4]; // [rsp+20h] [rbp-58h] BYREF
  int v15; // [rsp+30h] [rbp-48h]
  unsigned __int64 v16; // [rsp+38h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  v2 = a1[1];
  if ( v2 != a2 )
  {
    v12[0] = 0;
    v12[1] = 0;
    v13 = 0xFFFF;
    if ( a2 < v2 )
    {
      v7 = a2;
      do
      {
        v8 = 3 * v7++;
        cleanup_argloc(*a1 + 8 * v8);
      }
      while ( v2 != v7 );
    }
    else
    {
      v4 = *a1;
      v5 = a1[2];
      if ( (unsigned __int64)v12 >= *a1 && (unsigned __int64)v12 < v4 + 24 * v5 )
      {
        v14[0] = 0;
        copy_argloc(v14, v12);
        v15 = v13;
        if ( a1[2] < a2 )
          *a1 = qvector_reserve(a1, *a1, a2, 24);
        v10 = a1[1];
        if ( v10 < a2 )
        {
          do
          {
            v11 = (_DWORD *)(*a1 + 24 * v10);
            *v11 = 0;
            copy_argloc(v11, v14);
            ++v10;
            v11[4] = v15;
          }
          while ( a2 != v10 );
        }
        a1[1] = a2;
        cleanup_argloc(v14);
        goto LABEL_12;
      }
      if ( v5 < a2 )
      {
        *a1 = qvector_reserve(a1, v4, a2, 24);
        v2 = a1[1];
      }
      for ( ; v2 < a2; v6[4] = v13 )
      {
        v6 = (_DWORD *)(*a1 + 24 * v2);
        *v6 = 0;
        copy_argloc(v6, v12);
        ++v2;
      }
    }
    a1[1] = a2;
LABEL_12:
    cleanup_argloc(v12);
  }
  return v16 - __readfsqword(0x28u);
}
