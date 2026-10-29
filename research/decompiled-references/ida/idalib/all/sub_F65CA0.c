__int64 __fastcall sub_F65CA0(__int64 *a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  _QWORD *v28; // rbx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rsi
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9

  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 2320) + 1LL) & 0x10) == 0 )
    return sub_F62C60(a1, a2, a3, a4, a5, a6);
  v6 = *a1 & 0xFFFFFFFFFFFFFFF0LL;
  v7 = *(_QWORD *)v6;
  if ( (*(_BYTE *)(*(_QWORD *)v6 + 17LL) & 4) != 0 )
    return 0;
  v8 = *(_QWORD *)&byte_8[*a1 & 0xFFFFFFFFFFFFFFF0LL];
  if ( (v8 & 8) != 0 )
  {
    a4 = v8 & 0xFFFFFFFFFFFFFFF0LL;
    if ( (((*(__int64 *)((char *)&qword_18 + (*(_QWORD *)&byte_8[*a1 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL))
          | *(_QWORD *)&byte_8[*a1 & 0xFFFFFFFFFFFFFFF0LL] & 7uLL) >> 6)
        & 6) != 0 )
      return 0;
  }
  v11 = sub_ED7E80(v7, a2, v7, a4);
  if ( sub_F58260(v11) )
    return 1;
  if ( sub_F62670(v11, nullptr, v12, v13, v14, v15) )
    return 0;
  v20 = *(_QWORD *)(a2 + 2320);
  v21 = *a1;
  if ( (*(_BYTE *)(v20 + 16) & 1) != 0 || *(char *)(v20 + 15) < 0 )
  {
    if ( (unsigned __int8)sub_A976E0(a2, v21, v16, v17, v18) )
      return 0;
  }
  if ( sub_F61140(v11, v21, v16, v17, v18, v19) )
    return 1;
  v24 = *(_QWORD *)(*(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v25 = *(unsigned __int8 *)(v24 + 16);
  if ( (unsigned int)(v25 - 57) <= 1 )
    return 1;
  if ( (_BYTE)v25 != 48 )
    return 0;
  v28 = sub_F60E90(*(_QWORD **)(v24 + 24), v21, v25, v24, v22, v23);
  if ( (*((_BYTE *)v28 + 28) & 0x7Fu) - 59 <= 2 )
  {
    if ( sub_B9E190((__int64)v28, v21, v26, v27, v29, v30) )
    {
      v35 = v28[13];
      sub_7052B0((__int64 *)(v35 + 96), v35, v31, v32, v33, v34);
      if ( (*(_BYTE *)(v28[16] + 9LL) & 1) != 0 || (unsigned __int8)sub_B9BFC0((__int64)v28, v35, v36, v37, v38, v39) )
      {
        sub_7052B0((__int64 *)(v28[13] + 96LL), v28[13], v36, v37, v38, v39);
        if ( *(char *)(v28[16] + 4LL) < 0 )
        {
          sub_7052B0((__int64 *)(v28[13] + 96LL), v28[13], v40, v41, v42, v43);
          return (*(_BYTE *)(v28[16] + 1LL) & 0x10) != 0;
        }
      }
    }
    return 0;
  }
  return 1;
}
