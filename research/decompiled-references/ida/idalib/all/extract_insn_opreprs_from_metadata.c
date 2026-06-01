unsigned __int64 __fastcall extract_insn_opreprs_from_metadata(__int64 *a1, unsigned __int8 *a2, unsigned __int8 *a3)
{
  int v3; // eax
  __int64 *v4; // r13
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx
  _QWORD *v8; // rbx
  __int64 v10; // rsi
  __int64 v11; // rsi
  __int64 v12; // rax
  unsigned __int8 *v13; // [rsp+8h] [rbp-60h] BYREF
  unsigned __int8 *v14; // [rsp+10h] [rbp-58h]
  __int64 v15; // [rsp+18h] [rbp-50h]
  char v16; // [rsp+20h] [rbp-48h]
  __int64 *v17; // [rsp+28h] [rbp-40h]
  unsigned __int64 v18; // [rsp+38h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  v17 = a1;
  v16 = 1;
  v15 = 0;
  v13 = a2;
  v14 = a3;
  LODWORD(v15) = unpack_dd(&v13);
  if ( v13 < v14 )
  {
    while ( 1 )
    {
      v3 = unpack_dd(&v13);
      if ( v16 == 1 || v3 )
        break;
      v15 = (unsigned int)unpack_dd(&v13);
      v16 = 1;
LABEL_12:
      if ( v13 >= v14 )
        return v18 - __readfsqword(0x28u);
    }
    v4 = v17;
    HIDWORD(v15) += v3;
    v5 = v17[1];
    v6 = *v17;
    if ( v17[2] < (unsigned __int64)(v5 + 1) )
    {
      v12 = qvector_reserve(v17, v6, v5 + 1, 2192);
      v5 = v4[1];
      *v4 = v12;
      v6 = v12;
    }
    v7 = 2192 * v5;
    v8 = (_QWORD *)(v6 + v7);
    *v8 = 0;
    v8[273] = 0;
    memset(
      (void *)((v6 + v7 + 8) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * (((_DWORD)v6 + (_DWORD)v7 - (((_DWORD)v6 + (_DWORD)v7 + 8) & 0xFFFFFFF8) + 2192) >> 3));
    ++v4[1];
    *v8 = v15;
    if ( v13 >= v14 )
      return v18 - __readfsqword(0x28u);
    v10 = *v13++;
    v11 = v10 << 20;
    v8[1] = v11;
    if ( (v11 & 0xF00000) != 0 )
    {
      if ( !(unsigned __int8)sub_7E31C0((__int64)(v8 + 2), v11, 0, (unsigned __int64 *)&v13) )
        return v18 - __readfsqword(0x28u);
      v11 = v8[1];
      if ( (v11 & 0xF000000) == 0 )
        goto LABEL_10;
    }
    else if ( (v11 & 0xF000000) == 0 )
    {
LABEL_10:
      if ( v16 )
        v16 = 0;
      goto LABEL_12;
    }
    if ( !(unsigned __int8)sub_7E31C0((__int64)(v8 + 36), v11, 1, (unsigned __int64 *)&v13) )
      return v18 - __readfsqword(0x28u);
    goto LABEL_10;
  }
  return v18 - __readfsqword(0x28u);
}
