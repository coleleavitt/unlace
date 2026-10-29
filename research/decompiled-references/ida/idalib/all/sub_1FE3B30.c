void __fastcall sub_1FE3B30(_BYTE *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  _BYTE *v13; // rax
  __int64 v14[4]; // [rsp+8h] [rbp-20h] BYREF

  v14[0] = a2;
  switch ( sub_F22B40(v14) )
  {
    case 0LL:
      v7 = sub_F22BD0(v14, 0);
      v11 = (*(_BYTE *)(v7 + 28) & 0x7Fu) - 18;
      if ( (unsigned int)v11 > 0x3F )
        goto LABEL_5;
      sub_1FE3A00((__int64)a1, *(_QWORD *)(v7 + 40), v11, v8, v9, v10);
      break;
    case 1LL:
    case 2LL:
    case 4LL:
    case 5LL:
    case 6LL:
      goto LABEL_5;
    case 3LL:
      v12 = sub_F22F50(v14);
      sub_1FE3B30(a1, *(_QWORD *)(v12 + 16));
      break;
    case 7LL:
      v2 = sub_F22F90(v14);
      if ( v2 && (v6 = *(_QWORD *)(v2 + 64), (*(_BYTE *)(v6 + 28) & 0x7Fu) - 18 <= 0x3F) )
        sub_1FE3A00((__int64)a1, *(_QWORD *)(v6 + 40), v6, v3, v4, v5);
      else
LABEL_5:
        *a1 = 1;
      break;
    case 8LL:
      v13 = sub_F23230(v14);
      sub_1FE3B30(a1, *((_QWORD *)v13 + 2));
      break;
    default:
      return;
  }
}
