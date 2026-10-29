__int64 __fastcall sub_18C2EC0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        double a7,
        double a8,
        char a9,
        char a10,
        int a11,
        unsigned __int64 a12)
{
  unsigned __int64 v13; // r13
  _QWORD *v15; // r14
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rsi
  unsigned __int64 v19; // rbx
  __int64 v20; // rax
  unsigned __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rbp
  unsigned __int64 v26; // rsi
  __int64 v27; // rcx
  unsigned __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rdx
  char v32; // [rsp+8h] [rbp-70h]
  __int64 v34; // [rsp+10h] [rbp-68h]
  __int64 v35; // [rsp+30h] [rbp-48h]

  v13 = a5 & 0xFFFFFFFFFFFFFFF0LL;
  v15 = *(_QWORD **)(a1 + 248);
  v32 = a4;
  v16 = sub_18BEAC0(a3 & 0xFFFFFFFFFFFFFFFELL, v15[2350], a1, a4, a7, a8);
  v17 = v15[2339];
  v16 &= ~1uLL;
  v18 = *(_QWORD *)(v16 + 8);
  v19 = v16;
  v20 = *(_QWORD *)v13;
  v21 = v18;
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v13 + 16LL) - 57 <= 1
    || (v35 = v15[2339],
        v24 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v20 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 57,
        (unsigned int)v24 <= 1)
    && (v20 = sub_F63050(v20, v18, v17, v24), v21 = v18, v17 = v35, v20) )
  {
    v22 = *(_QWORD *)(v20 + 32);
    v23 = *(_QWORD *)&byte_8[v22 & 0xFFFFFFFFFFFFFFF0LL];
    LOBYTE(v22) = v23 | v22;
    v24 = v23 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v17 == (v24 | v22 & 7) )
    {
      v25 = a2 & 0xFFFFFFFFFFFFFFFELL;
      v21 = sub_18C2B90(a1, v18, v17, v24);
      if ( !a10 )
        goto LABEL_4;
      return sub_C0BCA0(v15, v25, v19, v32, a5, a6, a9, a11, a12, v21, v21);
    }
  }
  v25 = a2 & 0xFFFFFFFFFFFFFFFELL;
  if ( a10 )
    return sub_C0BCA0(v15, v25, v19, v32, a5, a6, a9, a11, a12, v21, v21);
LABEL_4:
  v34 = v21;
  v26 = sub_18BEAC0(v25, v15[2350], a1, v24, a7, a8) & 0xFFFFFFFFFFFFFFFELL;
  v28 = sub_C09F10(v15, v26, v19, v32, v34, a6, a9, a11, a12);
  v29 = *(_QWORD *)v13;
  v30 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v13 + 16LL) - 57;
  if ( (unsigned int)v30 > 1 )
    v29 = sub_F63050(v29, v26, v30, v27);
  return sub_18BEAC0(v28, *(_QWORD *)(v29 + 32), a1, v27, a7, a8);
}
