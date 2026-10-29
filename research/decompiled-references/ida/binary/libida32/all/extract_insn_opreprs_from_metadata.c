unsigned __int64 __fastcall extract_insn_opreprs_from_metadata(__int64 *a1, unsigned __int8 *a2, unsigned __int8 *a3)
{
  int v3; // eax
  __int64 *v4; // r13
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // r13
  __int64 v11; // rsi
  __int64 v12; // rsi
  __int64 v13; // rax
  unsigned __int8 *v14; // [rsp+8h] [rbp-60h] BYREF
  unsigned __int8 *v15; // [rsp+10h] [rbp-58h]
  __int64 v16; // [rsp+18h] [rbp-50h]
  char v17; // [rsp+20h] [rbp-48h]
  __int64 *v18; // [rsp+28h] [rbp-40h]
  unsigned __int64 v19; // [rsp+38h] [rbp-30h]

  v19 = __readfsqword(0x28u);
  v18 = a1;
  v17 = 1;
  v16 = 0;
  v14 = a2;
  v15 = a3;
  LODWORD(v16) = unpack_dd(&v14);
  if ( v14 < v15 )
  {
    while ( 1 )
    {
      v3 = unpack_dd(&v14);
      if ( v17 == 1 || v3 )
        break;
      v16 = (unsigned int)unpack_dd(&v14);
      v17 = 1;
LABEL_12:
      if ( v14 >= v15 )
        return v19 - __readfsqword(0x28u);
    }
    v4 = v18;
    HIDWORD(v16) += v3;
    v5 = v18[1];
    v6 = *v18;
    if ( v18[2] < (unsigned __int64)(v5 + 1) )
    {
      v13 = qvector_reserve(v18, v6, v5 + 1, 1104);
      v5 = v4[1];
      *v4 = v13;
      v6 = v13;
    }
    v7 = 1104 * v5;
    v8 = v6 + v7;
    *(_QWORD *)v8 = 0;
    *(_QWORD *)(v8 + 1096) = 0;
    memset(
      (void *)((v6 + v7 + 8) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * (((_DWORD)v6 + (_DWORD)v7 - (((_DWORD)v6 + (_DWORD)v7 + 8) & 0xFFFFFFF8) + 1104) >> 3));
    ++v4[1];
    *(_QWORD *)v8 = v16;
    v9 = (__int64)v15;
    if ( v14 >= v15 )
      return v19 - __readfsqword(0x28u);
    v11 = *v14++;
    v12 = v11 << 20;
    *(_QWORD *)(v8 + 8) = v12;
    if ( (v12 & 0xF00000) != 0 )
    {
      if ( !(unsigned __int8)sub_7BFE80((_DWORD *)(v8 + 16), v12, 0, (unsigned __int64 *)&v14, v9) )
        return v19 - __readfsqword(0x28u);
      v12 = *(_QWORD *)(v8 + 8);
      if ( (v12 & 0xF000000) == 0 )
        goto LABEL_10;
    }
    else if ( (v12 & 0xF000000) == 0 )
    {
LABEL_10:
      if ( v17 )
        v17 = 0;
      goto LABEL_12;
    }
    if ( !(unsigned __int8)sub_7BFE80((_DWORD *)(v8 + 152), v12, 1, (unsigned __int64 *)&v14, v9) )
      return v19 - __readfsqword(0x28u);
    goto LABEL_10;
  }
  return v19 - __readfsqword(0x28u);
}

