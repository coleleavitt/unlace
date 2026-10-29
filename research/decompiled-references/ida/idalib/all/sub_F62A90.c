__int64 __fastcall sub_F62A90(__int64 *a1, __int64 a2)
{
  __int64 *v2; // rdx
  __int64 result; // rax
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rsi
  unsigned __int64 v17; // rbp
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  _QWORD *v26; // rbx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  unsigned __int64 v42[4]; // [rsp+0h] [rbp-20h] BYREF

  v2 = (__int64 *)(*a1 & 0xFFFFFFFFFFFFFFF0LL);
  if ( !v2 )
    return 0;
  if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) <= 4u )
  {
    v42[0] = sub_A71450(a2, *a1);
    return sub_F62A90(v42, a2);
  }
  v6 = *v2;
  if ( sub_F58260(*v2) )
    return 1;
  if ( sub_F62670(v6, nullptr, v7, v8, v9, v10) )
    return 0;
  v14 = *a1 & 0xFFFFFFFFFFFFFFF0LL;
  v15 = *(_QWORD *)&byte_8[v14];
  if ( (v15 & 8) != 0 )
  {
    v11 = v15 & 0xFFFFFFFFFFFFFFF0LL;
    if ( (((*(__int64 *)((char *)&qword_18 + (*(_QWORD *)&byte_8[*a1 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL))
          | *(_QWORD *)&byte_8[*a1 & 0xFFFFFFFFFFFFFFF0LL] & 7uLL) >> 6)
        & 6) != 0 )
      return 0;
  }
  v16 = *(_QWORD *)(*(_QWORD *)v14 + 8LL);
  v17 = v16 & 0xFFFFFFFFFFFFFFF0LL;
  v18 = *(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (*(_BYTE *)(v18 + 17) & 4) != 0 )
    return 0;
  v19 = *(_QWORD *)(a2 + 2320);
  if ( (*(_BYTE *)(v19 + 16) & 1) != 0 || *(char *)(v19 + 15) < 0 )
  {
    if ( (unsigned __int8)sub_A976E0(a2, v16, v14, v11, v12) )
      return 0;
    v18 = *(_QWORD *)v17;
  }
  if ( sub_F61140(v18, v16, v14, v11, v12, v13) )
    return 1;
  v22 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v17 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v23 = *(unsigned __int8 *)(v22 + 16);
  if ( (unsigned int)(v23 - 57) <= 1 )
    return 1;
  if ( (_BYTE)v23 != 48 )
    return 0;
  v26 = sub_F60E90(*(_QWORD **)(v22 + 24), v16, v22, v23, v20, v21);
  if ( (*((_BYTE *)v26 + 28) & 0x7Fu) - 59 > 2 )
    return 1;
  if ( !(unsigned __int8)sub_F62280((__int64)v26, v16, v24, v25, v27, v28) )
    return 0;
  v33 = v26[13];
  sub_7052B0((__int64 *)(v33 + 96), v33, v29, v30, v31, v32);
  if ( (*(_BYTE *)(v26[16] + 6LL) & 8) != 0 )
    return 0;
  result = (!(unsigned __int8)sub_B9BFC0((__int64)v26, v33, v34, v35, v36, v37)
         || (v33 = v26[13], sub_7052B0((__int64 *)(v33 + 96), v33, v38, v39, v40, v41), *(char *)(v26[16] + 4LL) < 0))
        && sub_B9E190((__int64)v26, v33, v38, v39, v40, v41);
  return result;
}
