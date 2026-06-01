__int64 __fastcall sub_7C8780(__int64 a1, unsigned __int64 *a2, __int64 a3)
{
  __int64 v3; // rbx
  unsigned int v4; // r15d
  __int64 v8; // r15
  __int64 v9; // rax
  unsigned __int64 v10; // r14
  __int64 v11; // r15
  __int64 v12; // r8
  unsigned __int64 v13; // rax
  unsigned int v14; // eax
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // rax
  unsigned int v17; // edx
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 v21; // r14
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // [rsp+0h] [rbp-78h]
  __int64 v26; // [rsp+10h] [rbp-68h]
  unsigned int v27; // [rsp+24h] [rbp-54h] BYREF
  unsigned __int64 v28; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v29[9]; // [rsp+30h] [rbp-48h] BYREF

  v29[1] = __readfsqword(0x28u);
  v28 = *a2;
  v3 = a3 + v28;
  if ( !__CFADD__(a3, v28)
    && sub_7BFDB0((_DWORD *)a1, &v28)
    && sub_7BFDB0((_DWORD *)(a1 + 4), &v28)
    && sub_7BFDB0(&v27, &v28) )
  {
    v8 = v27;
    sub_7C8700((__int64 *)(a1 + 8), v27);
    if ( (_DWORD)v8 )
    {
      v9 = 8 * v8;
      v10 = v28;
      v11 = 0;
      v26 = v9;
      do
      {
        v12 = *(_QWORD *)(a1 + 8);
        v29[0] = v10;
        *(_QWORD *)(v11 + v12) = unpack_dq(v29, v3);
        v13 = v10;
        v10 = v29[0];
        v28 = v29[0];
        if ( v13 >= v29[0] )
          return 0;
        v11 += 8;
      }
      while ( v11 != v26 );
    }
    LOBYTE(v14) = sub_7BFDB0(&v27, &v28);
    v4 = v14;
    if ( (_BYTE)v14 )
    {
      v15 = v27;
      v16 = *(_QWORD *)(a1 + 40);
      v17 = v27;
      if ( v27 != v16 )
      {
        LODWORD(v29[0]) = 0;
        if ( v27 >= v16 )
        {
          v18 = *(_QWORD *)(a1 + 32);
          v19 = *(_QWORD *)(a1 + 48);
          v20 = a1 + 32;
          if ( (unsigned __int64)v29 < v18 || (unsigned __int64)v29 >= v18 + 4 * v19 )
          {
            if ( v19 >= v27
              || (v23 = qvector_reserve(v20, v18, v27, 4),
                  *(_QWORD *)(a1 + 32) = v23,
                  v18 = v23,
                  v16 = *(_QWORD *)(a1 + 40),
                  v16 < v15) )
            {
              while ( 1 )
              {
                *(_DWORD *)(v18 + 4 * v16++) = v29[0];
                if ( v15 == v16 )
                  break;
                v18 = *(_QWORD *)(a1 + 32);
              }
            }
          }
          else if ( v19 >= v27
                 || (v24 = qvector_reserve(v20, v18, v27, 4),
                     *(_QWORD *)(a1 + 32) = v24,
                     v18 = v24,
                     v16 = *(_QWORD *)(a1 + 40),
                     v16 < v15) )
          {
            while ( 1 )
            {
              *(_DWORD *)(v18 + 4 * v16++) = 0;
              if ( v15 == v16 )
                break;
              v18 = *(_QWORD *)(a1 + 32);
            }
          }
          *(_QWORD *)(a1 + 40) = v15;
LABEL_21:
          v21 = 4 * v15;
          v22 = 0;
          while ( 1 )
          {
            v25 = v22;
            if ( !sub_7BFDB0(v29, &v28) )
              return 0;
            *(_DWORD *)(*(_QWORD *)(a1 + 32) + v25) = v29[0];
            v22 = v25 + 4;
            if ( v21 == v25 + 4 )
              goto LABEL_24;
          }
        }
        *(_QWORD *)(a1 + 40) = v27;
      }
      if ( !v17 )
      {
LABEL_24:
        *a2 = v28;
        return v4;
      }
      goto LABEL_21;
    }
  }
  return 0;
}

