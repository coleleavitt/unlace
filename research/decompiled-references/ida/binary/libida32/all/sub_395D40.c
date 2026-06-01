__int64 __fastcall sub_395D40(_QWORD *a1, unsigned __int8 a2)
{
  const char *v2; // rbp
  __int64 v3; // rbx
  const char *v4; // r12
  __int64 v5; // rbx
  unsigned __int8 v6; // al
  _QWORD *v7; // rcx
  char *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int8 v11; // al
  _QWORD *v12; // rax
  __int64 v14; // rbx
  __int64 v15; // rbx

  sub_375980(3u);
  sub_615AB0(*a1, 8, a2);
  v2 = *(const char **)(a1[4] + 48LL);
  v3 = *(_QWORD *)(a1[2] + 40LL);
  v4 = *(const char **)(*(_QWORD *)(v3 + 8LL * (unsigned __int8)sub_614FB0(*a1, 8)) + 48LL);
  sub_614FB0(*a1, 8);
  if ( v2 && strcmp(v2, v4) )
    sub_395C70((int)"HIDECANCEL\nChanging the comment strings");
  v5 = *(_QWORD *)(a1[2] + 40LL);
  v6 = sub_614FB0(*a1, 8);
  v7 = (_QWORD *)a1[4];
  v8 = *(char **)(v5 + 8LL * v6);
  *v7 = *(_QWORD *)v8;
  v7[50] = *((_QWORD *)v8 + 50);
  qmemcpy(
    (void *)((unsigned __int64)(v7 + 1) & 0xFFFFFFFFFFFFFFF8LL),
    (const void *)(v8 - ((char *)v7 - ((unsigned __int64)(v7 + 1) & 0xFFFFFFFFFFFFFFF8LL))),
    8LL * (((unsigned int)v7 - (((_DWORD)v7 + 8) & 0xFFFFFFF8) + 408) >> 3));
  v9 = a1[4];
  if ( (*(_BYTE *)(v9 + 328) & 0x40) != 0 )
  {
    v15 = *(_QWORD *)(a1[2] + 40LL);
    *(_QWORD *)(a1[4] + 400LL) = *(_QWORD *)(*(_QWORD *)(v15 + 8LL * (unsigned __int8)sub_614FB0(*a1, 8)) + 400LL);
  }
  else
  {
    *(_QWORD *)(v9 + 400) = 0;
  }
  v10 = a1[4];
  if ( *(char *)(v10 + 328) < 0 )
  {
    v14 = *(_QWORD *)(a1[2] + 40LL);
    *(_QWORD *)(a1[4] + 408LL) = *(_QWORD *)(*(_QWORD *)(v14 + 8LL * (unsigned __int8)sub_614FB0(*a1, 8)) + 408LL);
  }
  else
  {
    *(_QWORD *)(v10 + 408) = 0;
  }
  v11 = sub_614FB0(*a1, 8);
  sub_375980(0x5Au, v11);
  v12 = (_QWORD *)a1[4];
  if ( !v12[1] )
    sub_375320((__int64)"illegal idp assembler definition: ash.%s can't be 0", "name");
  if ( !v12[6] )
    sub_375320((__int64)"illegal idp assembler definition: ash.%s can't be 0", "cmnt");
  if ( !v12[8] )
    sub_375320((__int64)"illegal idp assembler definition: ash.%s can't be 0", "esccodes");
  if ( !v12[9] )
    sub_375320((__int64)"illegal idp assembler definition: ash.%s can't be 0", "a_ascii");
  if ( !v12[10] )
    sub_375320((__int64)"illegal idp assembler definition: ash.%s can't be 0", "a_byte");
  return 1;
}

