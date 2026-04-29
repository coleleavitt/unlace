__int64 __fastcall sub_6DBE0(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rax
  int v5; // eax
  unsigned __int64 v6; // rbx
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rax
  int v11; // eax
  unsigned __int64 v12; // rdx
  __int64 v13; // rsi
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17[2]; // [rsp+0h] [rbp-48h] BYREF
  int v18; // [rsp+10h] [rbp-38h]
  __int64 *v19; // [rsp+18h] [rbp-30h]
  unsigned __int64 v20; // [rsp+28h] [rbp-20h]

  v3 = *a1;
  v20 = __readfsqword(0x28u);
  v5 = (*(__int64 (__fastcall **)(__int64 *))(v3 + 56))(a1);
  v6 = v5;
  if ( v5 )
  {
    v8 = *a2;
    if ( *a2 )
    {
      a2[1] = 0;
      qfree(v8);
      *a2 = 0;
      a2[2] = 0;
    }
    v9 = a2[3];
    if ( v9 )
    {
      a2[4] = 0;
      qfree(v9);
      a2[3] = 0;
      a2[5] = 0;
    }
    if ( (v6 & 0x80000000) != 0LL )
      goto LABEL_8;
    v12 = a2[1];
    LODWORD(v17[0]) = -1;
    if ( v6 >= v12 )
    {
      if ( v12 >= v6 )
      {
LABEL_8:
        v10 = *a1;
        v19 = a2;
        v17[0] = 0;
        v17[1] = 0;
        v18 = 0;
        v11 = (*(__int64 (__fastcall **)(__int64 *))(v10 + 80))(a1);
        sub_6CAC0(v17, (__int64)a1, v11, (__int64)v17);
        LODWORD(v6) = v18;
        qfree(v17[0]);
        return (unsigned int)v6;
      }
      v13 = *a2;
      v14 = a2[2];
      if ( (unsigned __int64)v17 < *a2 || (unsigned __int64)v17 >= v13 + 4 * v14 )
      {
        if ( v14 >= v6 || (v15 = qvector_reserve(a2, v13, v6, 4), v12 = a2[1], *a2 = v15, v13 = v15, v12 < v6) )
        {
          while ( 1 )
          {
            *(_DWORD *)(v13 + 4 * v12++) = -1;
            if ( v6 == v12 )
              break;
            v13 = *a2;
          }
        }
      }
      else if ( v14 >= v6 || (v16 = qvector_reserve(a2, v13, v6, 4), v12 = a2[1], *a2 = v16, v13 = v16, v12 < v6) )
      {
        while ( 1 )
        {
          *(_DWORD *)(v13 + 4 * v12++) = -1;
          if ( v6 == v12 )
            break;
          v13 = *a2;
        }
      }
    }
    a2[1] = v6;
    goto LABEL_8;
  }
  return (unsigned int)v6;
}
