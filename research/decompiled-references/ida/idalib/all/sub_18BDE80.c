__int64 __fastcall sub_18BDE80(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        double a8,
        char a9)
{
  unsigned __int64 v9; // r8
  char v10; // r12
  __int64 v12; // rbx
  __int64 v13; // rdx
  char v14; // al
  unsigned __int64 v15; // rax
  _QWORD *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // [rsp+8h] [rbp-40h]

  v9 = a5 & 0xFFFFFFFFFFFFFFF0LL;
  v10 = a6;
  v12 = a4;
  v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v9 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v14 = *(_BYTE *)(v13 + 16);
  switch ( v14 )
  {
    case 13:
      if ( (((*(_WORD *)(v13 + 18) >> 3) + 76) & 0x1FFu) > 0x13 )
        break;
      goto LABEL_7;
    case 47:
      v21 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v9 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      v17 = sub_F60F10(v21, (__int64)a2, v13, a4, v9, a6);
      if ( ((*((_BYTE *)v17 + 74) & 1) != 0 || (v17[16] & 0xFFFFFFFFFFFFFFF8LL) != 0)
        && *((char *)sub_F60F10(v21, (__int64)a2, v21, v18, v19, v20) + 76) >= 0 )
      {
        if ( !a9 )
          return v12;
        goto LABEL_8;
      }
      break;
    case 10:
LABEL_7:
      if ( !a9 )
        return v12;
LABEL_8:
      *a3 = sub_160A600(a1, *a3 & 0xFFFFFFFFFFFFFFFELL, v12, 0x1Du, 0, 0, a7, a8, 0);
      return v12;
  }
  v15 = sub_A74CE0(*(_QWORD *)(a1 + 248), v12);
  v12 = v15;
  if ( a9 )
  {
    *a3 = sub_160A600(a1, *a3 & 0xFFFFFFFFFFFFFFFELL, v15, 0x35u, 0, 0, a7, a8, 0);
    if ( !v10 )
      return v12;
LABEL_18:
    *a2 = sub_160A600(a1, *a2 & 0xFFFFFFFFFFFFFFFELL, v12, 0x2Cu, 0, 0, a7, a8, 0);
    return v12;
  }
  if ( v10 )
    goto LABEL_18;
  return v12;
}
