__int64 __fastcall sub_18BE010(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        unsigned __int8 a6,
        double a7,
        double a8)
{
  __int64 *v12; // rbp
  bool v13; // r14
  bool v14; // al
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  __int64 v17; // rdi
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 *v20; // r14
  __int64 v21; // rax
  __int64 v23; // rax
  unsigned __int64 v24; // [rsp+0h] [rbp-58h]
  __int64 v26; // [rsp+18h] [rbp-40h]

  v12 = (__int64 *)(a5 & 0xFFFFFFFFFFFFFFF0LL);
  v24 = a4 & 0xFFFFFFFFFFFFFFF0LL;
  v26 = a4;
  v13 = sub_F58100(*(_QWORD *)(a4 & 0xFFFFFFFFFFFFFFF0LL));
  v14 = sub_F58100(*v12);
  v16 = *(_QWORD *)(*(_QWORD *)v24 + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
  v17 = *(_QWORD *)v16;
  v18 = *(unsigned __int8 *)(*(_QWORD *)v16 + 16LL);
  if ( (_BYTE)v18 == 13 && (((*(_WORD *)(v17 + 18) >> 3) + 56) & 0x1FFu) <= 0x17
    || (v19 = *(_QWORD *)(*(_QWORD *)(*v12 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v19 + 16) == 13)
    && (((*(_WORD *)(v19 + 18) >> 3) + 56) & 0x1FFu) <= 0x17 )
  {
    if ( !v13 )
    {
      if ( !a6 )
      {
        v20 = a2;
        v21 = sub_160A600(a1, *a2 & 0xFFFFFFFFFFFFFFFELL, a5, 0x1Fu, 0, 0, a7, a8, 0);
        goto LABEL_24;
      }
      return a5;
    }
    v23 = sub_160A600(a1, *a3 & 0xFFFFFFFFFFFFFFFELL, a4, 0x1Fu, 0, 0, a7, a8, 0);
    goto LABEL_20;
  }
  if ( v13 && v14 )
  {
    if ( (int)sub_A637F0(*(_QWORD *)(a1 + 248), a4, a5, v15, v18) <= 0 )
    {
      if ( !a6 )
      {
        v20 = a2;
        v21 = sub_160A600(a1, *a2 & 0xFFFFFFFFFFFFFFFELL, a5, 0x27u, 0, 0, a7, a8, 0);
LABEL_24:
        *v20 = v21;
        return a5;
      }
      return a5;
    }
    v23 = sub_160A600(a1, *a3 & 0xFFFFFFFFFFFFFFFELL, a4, 0x27u, 0, 0, a7, a8, 0);
LABEL_20:
    *a3 = v23;
    return a4;
  }
  if ( !v13 )
    return sub_18BDE80(a1, a3, a2, a5, a4, 1, a7, a8, a6 ^ 1u);
  if ( (_BYTE)v18 == 13
    && ((*(_WORD *)(v17 + 18) >> 3) & 0x1FF) == 0x1E0
    && (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 60LL) & 4) == 0 )
  {
    v26 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 18800LL);
  }
  return sub_18BDE80(a1, a2, a3, v26, a5, a6 ^ 1u, a7, a8, 1);
}
