/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5AE10
// Address: 0x000000000005AE10

//----- (000000000005AE10) ----------------------------------------------------
char __fastcall sub_5AE10(__int64 a1, _QWORD *a2, unsigned __int64 a3)
{
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  __int64 *v8; // rdx
  __int64 v9; // rax
  char v10; // dl
  unsigned int v11; // ecx
  int v12; // edx
  __int64 v13; // rdx
  unsigned int v14; // ebp
  __int64 v15; // rdx
  char v16; // al
  _BYTE *v17; // rbp
  void (__fastcall *v18)(_QWORD *, unsigned __int64, __int64, _QWORD); // rax
  __int64 v19; // rdx
  unsigned int v20; // esi
  __int64 v21; // rcx
  _QWORD *v22; // rdx
  _QWORD *v23; // rcx
  unsigned __int64 v24; // r8
  _QWORD *v25; // rsi
  _QWORD *v26; // rdi
  __int64 *v27; // rdi
  __int64 v28; // rdi
  bool v29; // zf
  void (__fastcall *v30)(_QWORD *, unsigned __int64, __int64, _QWORD); // rbp

  if ( *(_QWORD *)(a3 + 8) > 1u )
    goto LABEL_65;
  v6 = a2[36];
  if ( v6 > a3 || v6 + 96LL * a2[37] < a3 )
  {
    if ( !(_BYTE)under_debugger )
      interr(20086);
    BUG();
  }
  v7 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(a3 - v6) >> 5);
  v8 = a2 + 44;
  if ( v7 < a2[39] )
    v8 = a2 + 40;
  sub_57CE0((__int64)a2, a3, v8, *(_DWORD *)(a3 + 48));
  if ( *(_QWORD *)(a3 + 8) )
  {
LABEL_65:
    v9 = *(_QWORD *)a3;
    if ( *(_QWORD *)a3 )
    {
      if ( *(_BYTE *)v9 == 36 )
      {
        if ( *(_BYTE *)(v9 + 1) )
        {
          v10 = *(_BYTE *)(v9 + 2);
          if ( v10 == 46 || !v10 )
          {
            v11 = *(char *)(v9 + 1) - 97;
            if ( v11 <= 0x17 )
            {
              v12 = 8945707;
              if ( _bittest(&v12, v11) )
              {
                *(_BYTE *)(a1 + 72) = 1;
                LOBYTE(v9) = *(_BYTE *)(v9 + 1);
                if ( (unsigned __int8)(v9 - 97) <= 0x17u )
                {
                  v13 = 8912897;
                  if ( _bittest64(&v13, (unsigned __int8)(v9 - 97)) )
                  {
                    if ( (_BYTE)v9 == 116 )
                      *(_BYTE *)(a3 + 94) |= 1u;
                    v14 = 2 - ((_BYTE)v9 == 97 || (_BYTE)v9 == 120);
                    v9 = *(_QWORD *)(a1 + 56);
                    if ( v9 )
                      LOBYTE(v9) = ((__int64 (__fastcall *)(_QWORD *, unsigned __int64, _QWORD, __int64))v9)(
                                     a2,
                                     a3,
                                     v14,
                                     1);
                    if ( *(_BYTE *)(a1 + 73) )
                      LOBYTE(v9) = sub_5B110(a1, a3, v14);
                  }
                }
                return v9;
              }
            }
          }
        }
      }
    }
  }
  LOBYTE(v9) = *(_BYTE *)(a3 + 52);
  v15 = 40964;
  if ( !_bittest64(&v15, v9 & 0xF) || *(_BYTE *)(a3 + 92) > 2u )
    return v9;
  *(_BYTE *)(a3 + 80) &= ~1u;
  v16 = v9 & 0xF;
  if ( v16 == 15 )
    goto LABEL_31;
  if ( v16 == 13 )
  {
    *(_BYTE *)(a3 + 93) = 2;
    goto LABEL_31;
  }
  if ( (*(_BYTE *)(a3 + 56) & 1) != 0 )
  {
LABEL_31:
    *(_BYTE *)(a3 + 94) |= 1u;
    v17 = (_BYTE *)(a3 + 94);
    v18 = *(void (__fastcall **)(_QWORD *, unsigned __int64, __int64, _QWORD))(a1 + 56);
    if ( v18 )
      v18(a2, a3, 2, 0);
    goto LABEL_33;
  }
  v17 = (_BYTE *)(a3 + 94);
LABEL_33:
  LOBYTE(v9) = *v17;
  if ( (*v17 & 1) == 0 )
  {
    if ( *(_BYTE *)(a1 + 73) )
    {
      v19 = *(_QWORD *)(a1 + 16);
      if ( v19 )
      {
        v20 = *(_DWORD *)(a3 + 88);
        v21 = a1 + 16;
        do
        {
          if ( *(_DWORD *)(v19 + 32) >= v20 )
            v21 = v19;
          v19 = *(_QWORD *)(v19 + 8LL * (*(_DWORD *)(v19 + 32) < v20));
        }
        while ( v19 );
        if ( v21 != a1 + 16 && v20 >= *(_DWORD *)(v21 + 32) )
        {
          v22 = *(_QWORD **)(v21 + 40);
          v23 = (_QWORD *)(v21 + 48);
          if ( v22 != v23 )
          {
            v24 = *(_QWORD *)(a3 + 56);
            if ( v22[4] <= v24 )
            {
              do
              {
                v25 = v22;
                v26 = (_QWORD *)v22[1];
                if ( v26 )
                {
                  do
                  {
                    v22 = v26;
                    v26 = (_QWORD *)*v26;
                  }
                  while ( v26 );
                }
                else
                {
                  v22 = (_QWORD *)v22[2];
                  if ( (_QWORD *)*v22 != v25 )
                  {
                    v27 = v25 + 2;
                    do
                    {
                      v28 = *v27;
                      v22 = *(_QWORD **)(v28 + 16);
                      v29 = *v22 == v28;
                      v27 = (__int64 *)(v28 + 16);
                    }
                    while ( !v29 );
                  }
                }
              }
              while ( v22 != v23 && v22[4] <= v24 );
              if ( *((_DWORD *)v25 + 10) == 2 )
              {
                LOBYTE(v9) = v9 | 1;
                *v17 = v9;
                v30 = *(void (__fastcall **)(_QWORD *, unsigned __int64, __int64, _QWORD))(a1 + 56);
                if ( v30 )
                {
                  v30(a2, a3, 2, 0);
                  LOBYTE(v9) = *(_BYTE *)(a3 + 94);
                }
              }
            }
          }
        }
      }
    }
  }
  if ( (v9 & 1) == 0 )
  {
    v9 = *(_QWORD *)(a1 + 56);
    if ( v9 )
      LOBYTE(v9) = ((__int64 (__fastcall *)(_QWORD *, unsigned __int64, __int64, _QWORD))v9)(a2, a3, 1, 0);
  }
  return v9;
}
// 158B40: using guessed type __int64 under_debugger;
