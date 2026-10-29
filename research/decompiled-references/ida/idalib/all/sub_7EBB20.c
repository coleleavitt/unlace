__int64 __fastcall sub_7EBB20(__int64 a1, unsigned __int64 *a2, __int64 a3)
{
  unsigned int v3; // r15d
  __int64 v7; // r15
  __int64 v8; // rax
  unsigned __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // r8
  unsigned __int64 v12; // rax
  unsigned int v13; // eax
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // rax
  unsigned int v16; // edx
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // r14
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // [rsp+0h] [rbp-78h]
  __int64 v25; // [rsp+10h] [rbp-68h]
  unsigned int v26; // [rsp+24h] [rbp-54h] BYREF
  unsigned __int64 v27; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v28[9]; // [rsp+30h] [rbp-48h] BYREF

  v28[1] = __readfsqword(0x28u);
  v27 = *a2;
  if ( !__CFADD__(a3, v27)
    && sub_7E30F0((_DWORD *)a1, &v27)
    && sub_7E30F0((_DWORD *)(a1 + 4), &v27)
    && sub_7E30F0(&v26, &v27) )
  {
    v7 = v26;
    sub_44D2A0((__int64 *)(a1 + 8), v26);
    if ( (_DWORD)v7 )
    {
      v8 = 8 * v7;
      v9 = v27;
      v10 = 0;
      v25 = v8;
      do
      {
        v11 = *(_QWORD *)(a1 + 8);
        v28[0] = v9;
        *(_QWORD *)(v10 + v11) = unpack_dq(v28);
        v12 = v9;
        v9 = v28[0];
        v27 = v28[0];
        if ( v12 >= v28[0] )
          return 0;
        v10 += 8;
      }
      while ( v10 != v25 );
    }
    LOBYTE(v13) = sub_7E30F0(&v26, &v27);
    v3 = v13;
    if ( (_BYTE)v13 )
    {
      v14 = v26;
      v15 = *(_QWORD *)(a1 + 40);
      v16 = v26;
      if ( v26 != v15 )
      {
        LODWORD(v28[0]) = 0;
        if ( v26 >= v15 )
        {
          v17 = *(_QWORD *)(a1 + 32);
          v18 = *(_QWORD *)(a1 + 48);
          v19 = a1 + 32;
          if ( (unsigned __int64)v28 < v17 || (unsigned __int64)v28 >= v17 + 4 * v18 )
          {
            if ( v18 >= v26
              || (v22 = qvector_reserve(v19, v17, v26, 4),
                  *(_QWORD *)(a1 + 32) = v22,
                  v17 = v22,
                  v15 = *(_QWORD *)(a1 + 40),
                  v15 < v14) )
            {
              while ( 1 )
              {
                *(_DWORD *)(v17 + 4 * v15++) = v28[0];
                if ( v14 == v15 )
                  break;
                v17 = *(_QWORD *)(a1 + 32);
              }
            }
          }
          else if ( v18 >= v26
                 || (v23 = qvector_reserve(v19, v17, v26, 4),
                     *(_QWORD *)(a1 + 32) = v23,
                     v17 = v23,
                     v15 = *(_QWORD *)(a1 + 40),
                     v15 < v14) )
          {
            while ( 1 )
            {
              *(_DWORD *)(v17 + 4 * v15++) = 0;
              if ( v14 == v15 )
                break;
              v17 = *(_QWORD *)(a1 + 32);
            }
          }
          *(_QWORD *)(a1 + 40) = v14;
LABEL_21:
          v20 = 4 * v14;
          v21 = 0;
          while ( 1 )
          {
            v24 = v21;
            if ( !sub_7E30F0(v28, &v27) )
              return 0;
            *(_DWORD *)(*(_QWORD *)(a1 + 32) + v24) = v28[0];
            v21 = v24 + 4;
            if ( v20 == v24 + 4 )
              goto LABEL_24;
          }
        }
        *(_QWORD *)(a1 + 40) = v26;
      }
      if ( !v16 )
      {
LABEL_24:
        *a2 = v27;
        return v3;
      }
      goto LABEL_21;
    }
  }
  return 0;
}
