__int64 __fastcall sub_18BAEC0(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        char a6,
        double a7,
        double a8)
{
  _QWORD *v13; // rdi
  int v14; // r13d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  char v19; // r15
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  char v24; // al
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdx
  int v29; // r13d
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 *v35; // rax
  unsigned __int64 v36; // r13
  __int64 v37; // [rsp+0h] [rbp-48h] BYREF
  __int64 v38; // [rsp+8h] [rbp-40h] BYREF

  v13 = *(_QWORD **)(a1 + 248);
  v38 = a4;
  v37 = a5;
  v14 = sub_AADE70(v13, a4, a5, a4, a5);
  v19 = sub_F65320(*(_QWORD *)(v38 & 0xFFFFFFFFFFFFFFF0LL), a4, v15, v16, v17, v18);
  v24 = sub_F65320(*(_QWORD *)(v37 & 0xFFFFFFFFFFFFFFF0LL), a4, v20, v21, v22, v23);
  if ( v19 == v24 )
  {
    if ( v14 < 0 )
      goto LABEL_4;
    goto LABEL_8;
  }
  v27 = v19 == 0 ? -1 : 1;
  if ( (_DWORD)v27 != v14 )
  {
    if ( !v24 )
    {
LABEL_4:
      if ( !a6 )
        *a2 = sub_160A600(a1, *a2 & 0xFFFFFFFFFFFFFFFELL, v37, 0x1Bu, 0, 0, a7, a8, 0);
      return v37;
    }
LABEL_8:
    *a3 = sub_160A600(a1, *a3 & 0xFFFFFFFFFFFFFFFELL, v38, 0x1Bu, 0, 0, a7, a8, 0);
    return v38;
  }
  v29 = sub_AAC1F0(*(_QWORD *)(a1 + 248), v38, v27, v25, v26);
  if ( v29 != (unsigned int)sub_AAC1F0(*(_QWORD *)(a1 + 248), v37, v30, v31, v32) )
  {
    if ( !v19 )
      goto LABEL_4;
    goto LABEL_8;
  }
  v35 = &v38;
  if ( !v19 )
    v35 = &v37;
  v36 = sub_A70710(*(_QWORD **)(a1 + 248), *v35, (__int64)&v37, v33, v34);
  *a3 = sub_160A600(a1, *a3 & 0xFFFFFFFFFFFFFFFELL, v36, 0x1Bu, 0, 0, a7, a8, 0);
  if ( !a6 )
    *a2 = sub_160A600(a1, *a2 & 0xFFFFFFFFFFFFFFFELL, v36, 0x1Bu, 0, 0, a7, a8, 0);
  return v36;
}
