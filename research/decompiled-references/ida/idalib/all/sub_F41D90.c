void __fastcall sub_F41D90(__int64 *a1, __int64 *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rdi
  unsigned __int64 v10; // rsi
  __int64 v11; // rax
  unsigned int *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // r12
  __int64 v15; // rax
  __int64 v16; // r12
  __int64 v17; // rax

  sub_995540(*(_QWORD *)(*a1 + 1096), "NestedNameSpecifier");
  switch ( sub_E90000(*a2) )
  {
    case 0LL:
      sub_995540(*(_QWORD *)(*a1 + 1096), " Identifier");
      v11 = sub_995540(*(_QWORD *)(*a1 + 1096), " '");
      if ( (*(_BYTE *)(*a2 + 8) & 6) != 0 )
        BUG();
      v12 = *(unsigned int **)(*(_QWORD *)(*a2 + 16) + 16LL);
      v13 = sub_9954E0(v11, v12 + 4, *v12);
      sub_995540(v13, "'");
      break;
    case 1LL:
      sub_995540(*(_QWORD *)(*a1 + 1096), " ");
      v14 = *a1;
      v15 = sub_E90060(*a2);
      sub_F2A6D0(v14, v15);
      break;
    case 2LL:
      sub_995540(*(_QWORD *)(*a1 + 1096), " ");
      v16 = *a1;
      v17 = sub_E90090(*a2);
      sub_F2A6D0(v16, v17);
      break;
    case 3LL:
      sub_995540(*(_QWORD *)(*a1 + 1096), " TypeSpec");
      v8 = *a2;
      v9 = *a1;
      v10 = 0;
      if ( ((*(__int64 *)(*a2 + 8) >> 1) & 3) == 2 )
        v10 = *(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFF0LL;
      sub_F2A610(v9, v10);
      break;
    case 4LL:
      sub_995540(*(_QWORD *)(*a1 + 1096), " Global");
      break;
    case 5LL:
      sub_995540(*(_QWORD *)(*a1 + 1096), " Super");
      break;
    default:
      break;
  }
  if ( (*(_QWORD *)(*a2 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    sub_F41560(*a1, (__int64 (__fastcall *)())(*(_QWORD *)(*a2 + 8) & 0xFFFFFFFFFFFFFFF8LL), v4, v5, v6, v7);
}
