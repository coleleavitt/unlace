unsigned __int64 __fastcall extract_user_stkpnts_from_metadata(__int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  _QWORD *v3; // rbx
  int v4; // eax
  __int64 *v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rax
  unsigned int v9; // eax
  unsigned __int64 v11; // [rsp+8h] [rbp-60h] BYREF
  unsigned __int64 v12; // [rsp+10h] [rbp-58h]
  __int64 v13; // [rsp+18h] [rbp-50h]
  char v14; // [rsp+20h] [rbp-48h]
  __int64 *v15; // [rsp+28h] [rbp-40h]
  unsigned __int64 v16; // [rsp+38h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  v15 = a1;
  v14 = 1;
  v13 = 0;
  v11 = a2;
  v12 = a3;
  LODWORD(v13) = unpack_dd(&v11);
  while ( v11 < v12 )
  {
    while ( 1 )
    {
      v4 = unpack_dd(&v11);
      if ( v14 == 1 || v4 )
        break;
      v9 = unpack_dd(&v11);
      v14 = 1;
      v13 = v9;
      if ( v11 >= v12 )
        return v16 - __readfsqword(0x28u);
    }
    v5 = v15;
    HIDWORD(v13) += v4;
    v6 = v15[1];
    v7 = *v15;
    if ( v15[2] < (unsigned __int64)(v6 + 1) )
    {
      v8 = qvector_reserve(v15, v7, v6 + 1, 16);
      *v5 = v8;
      v7 = v8;
      v6 = v5[1];
    }
    v3 = (_QWORD *)(v7 + 16 * v6);
    *v3 = -1;
    v3[1] = 0;
    ++v5[1];
    *v3 = v13;
    v3[1] = unpack_dq(&v11, v12) - 1;
    if ( v14 )
      v14 = 0;
  }
  return v16 - __readfsqword(0x28u);
}

