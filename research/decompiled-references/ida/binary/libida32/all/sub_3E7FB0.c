void __fastcall sub_3E7FB0(__int64 a1)
{
  void *v2; // rdi
  char **v3; // r12
  char *v4; // rdx
  char *v5; // r13
  char *i; // rbp
  char *v7; // rax
  void *v8; // rdi
  char *v9; // rdx
  char *v10; // r13
  char *j; // rbp
  char *v12; // rax
  void *v13; // rdi
  __int64 v14; // rbp
  _QWORD *v15; // r12
  void *v16; // rdi
  void *v17; // rdi
  void *v18; // rdi
  void *v19; // rdi
  void *v20; // rdi
  void *v21; // rdi
  char *v22; // rdx
  __int64 v23; // r12
  __int64 k; // rbp
  char *v25; // rax
  void *v26; // rdi
  void *v27; // rdi
  void *v28; // rdi
  void *v29; // rdi

  sub_3B7680(*(_QWORD *)(a1 + 1480));
  sub_37E3A0(*(_QWORD **)(a1 + 1440));
  sub_49E350(*(_QWORD *)(a1 + 1520));
  sub_4D2DF0(*(_QWORD *)(a1 + 1552));
  *(_QWORD *)(a1 + 96) = 0;
  v2 = *(void **)(a1 + 1480);
  byte_2CA16A4 = 0;
  qword_2CA1698 = 0;
  sub_3C7A20(v2);
  v3 = *(char ***)(a1 + 1488);
  if ( v3 )
  {
    v4 = v3[3];
    if ( v4 )
    {
      v5 = v3[4];
      if ( v5 )
      {
        for ( i = nullptr; i != v5; ++i )
        {
          v7 = &v4[24 * (_QWORD)i];
          v8 = *(void **)v7;
          if ( *(_QWORD *)v7 )
          {
            *((_QWORD *)v7 + 1) = 0;
            qfree(v8);
            v4 = v3[3];
          }
        }
      }
      v3[4] = nullptr;
      qfree(v4);
    }
    v9 = *v3;
    if ( *v3 )
    {
      v10 = v3[1];
      if ( v10 )
      {
        for ( j = nullptr; j != v10; ++j )
        {
          v12 = &v9[24 * (_QWORD)j];
          v13 = *(void **)v12;
          if ( *(_QWORD *)v12 )
          {
            *((_QWORD *)v12 + 1) = 0;
            qfree(v13);
            v9 = *v3;
          }
        }
      }
      v3[1] = nullptr;
      qfree(v9);
    }
    operator delete(v3, 0x30u);
  }
  sub_7348C0(*(void **)(a1 + 1376));
  sub_58F510(*(void **)(a1 + 1400));
  sub_5777B0(*(void **)(a1 + 1352));
  sub_3E2580(*(char ***)(a1 + 1360));
  sub_3D7020(*(_QWORD **)(a1 + 1368));
  sub_3799D0(*(void **)(a1 + 1416));
  sub_5AC5A0(*(void **)(a1 + 1424));
  sub_516550(*(void **)(a1 + 1616));
  sub_4F6940(*(void **)(a1 + 1568));
  sub_500460(*(void **)(a1 + 1576));
  sub_623710(*(_QWORD *)(a1 + 1504));
  sub_4C7A60(*(void **)(a1 + 1536));
  sub_4BCBA0(*(void **)(a1 + 1528));
  sub_39C760(*(_QWORD **)(a1 + 1344));
  sub_78E780(*(_QWORD *)(a1 + 1544));
  sub_407E80(*(void **)(a1 + 1408));
  sub_40E8B0(*(_QWORD *)(a1 + 1448));
  sub_5ECC40(*(void **)(a1 + 1456));
  sub_540D90(*(void **)(a1 + 1464));
  sub_61F550(*(_QWORD *)(a1 + 1472));
  sub_61FF20(*(void **)(a1 + 1496));
  sub_62F2F0(*(void **)(a1 + 1512));
  sub_4DAB50(*(void **)(a1 + 1560));
  sub_669450(*(void **)(a1 + 1584));
  sub_5090E0(*(void **)(a1 + 1592));
  sub_674A90(*(void **)(a1 + 1624));
  sub_528F70(*(void **)(a1 + 1632));
  sub_56D3E0(*(void **)(a1 + 1664));
  sub_698300(*(void **)(a1 + 1672));
  sub_6A95F0(*(_QWORD *)(a1 + 1680));
  sub_67A940(*(void **)(a1 + 1648));
  sub_5BE430(*(void **)(a1 + 1432));
  sub_677D00(*(_QWORD *)(a1 + 1640));
  sub_514930(*(_QWORD *)(a1 + 1392));
  sub_396250(*(_QWORD **)(a1 + 1336));
  sub_6703E0(*(void **)(a1 + 1608));
  sub_3566B0(*(_QWORD **)(a1 + 1600));
  sub_3AA260(*(void **)(a1 + 1384));
  sub_41F830(*(void **)(a1 + 1688));
  sub_6B5FA0(*(void **)(a1 + 1704));
  sub_708F20(*(void **)(a1 + 1696));
  sub_4D2EF0(*(void **)(a1 + 1552));
  sub_49E160(*(void **)(a1 + 1520));
  sub_5656A0(*(void **)(a1 + 1656));
  sub_37CC20(*(void ***)(a1 + 1440));
  *(_QWORD *)(a1 + 320) = 0;
  *(_QWORD *)(a1 + 536) = 0;
  *(_QWORD *)(a1 + 544) = 0;
  *(_QWORD *)(a1 + 1712) = 0;
  memset(
    (void *)((a1 + 552) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)a1 - (((_DWORD)a1 + 552) & 0xFFFFFFF8) + 1720) >> 3));
  v14 = *(_QWORD *)(a1 + 288);
  while ( v14 )
  {
    v15 = (_QWORD *)v14;
    sub_3E7570(*(_QWORD **)(v14 + 24));
    v16 = *(void **)(v14 + 32);
    v14 = *(_QWORD *)(v14 + 16);
    if ( v16 )
    {
      v15[5] = 0;
      qfree(v16);
    }
    operator delete(v15, 0x40u);
  }
  v17 = *(void **)(a1 + 248);
  if ( v17 )
  {
    *(_QWORD *)(a1 + 256) = 0;
    qfree(v17);
  }
  v18 = *(void **)(a1 + 224);
  if ( v18 )
  {
    *(_QWORD *)(a1 + 232) = 0;
    qfree(v18);
  }
  v19 = *(void **)(a1 + 184);
  if ( v19 )
  {
    *(_QWORD *)(a1 + 192) = 0;
    qfree(v19);
  }
  v20 = *(void **)(a1 + 160);
  if ( v20 )
  {
    *(_QWORD *)(a1 + 168) = 0;
    qfree(v20);
  }
  v21 = *(void **)(a1 + 128);
  if ( v21 )
  {
    *(_QWORD *)(a1 + 136) = 0;
    qfree(v21);
  }
  v22 = *(char **)(a1 + 104);
  if ( v22 )
  {
    v23 = *(_QWORD *)(a1 + 112);
    if ( v23 )
    {
      for ( k = 0; k != v23; ++k )
      {
        v25 = &v22[24 * k];
        v26 = *(void **)v25;
        if ( *(_QWORD *)v25 )
        {
          *((_QWORD *)v25 + 1) = 0;
          qfree(v26);
          v22 = *(char **)(a1 + 104);
        }
      }
    }
    *(_QWORD *)(a1 + 112) = 0;
    qfree(v22);
  }
  v27 = *(void **)(a1 + 48);
  if ( v27 )
  {
    *(_QWORD *)(a1 + 56) = 0;
    qfree(v27);
  }
  v28 = *(void **)(a1 + 24);
  if ( v28 )
  {
    *(_QWORD *)(a1 + 32) = 0;
    qfree(v28);
  }
  v29 = *(void **)a1;
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    qfree(v29);
  }
}

