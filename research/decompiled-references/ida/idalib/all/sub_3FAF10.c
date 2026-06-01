void __fastcall sub_3FAF10(__int64 a1)
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

  sub_3BC200(*(_QWORD *)(a1 + 1672));
  sub_381E80(*(_QWORD **)(a1 + 1632));
  sub_4B3890(*(_QWORD *)(a1 + 1712));
  sub_4EA670(*(_QWORD *)(a1 + 1744));
  *(_QWORD *)(a1 + 96) = 0;
  v2 = *(void **)(a1 + 1672);
  byte_2CCB5A4 = 0;
  qword_2CCB598 = 0;
  sub_3CCDB0(v2);
  v3 = *(char ***)(a1 + 1680);
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
  sub_754D90(*(void **)(a1 + 1568));
  sub_5A96D0(*(void **)(a1 + 1592));
  sub_591020(*(void **)(a1 + 1544));
  sub_3E8800(*(char ***)(a1 + 1552));
  sub_3DCEE0(*(_QWORD **)(a1 + 1560));
  sub_37D410(*(void **)(a1 + 1608));
  sub_5C7080(*(void **)(a1 + 1616));
  sub_52E990(*(void **)(a1 + 1808));
  sub_50E0B0(*(void **)(a1 + 1760));
  sub_5180A0(*(void **)(a1 + 1768));
  sub_640990(*(_QWORD *)(a1 + 1696));
  sub_4DEBA0(*(void **)(a1 + 1728));
  sub_4D3AF0(*(void **)(a1 + 1720));
  sub_3A1320(*(_QWORD **)(a1 + 1536));
  sub_7AEE50(*(_QWORD *)(a1 + 1736));
  sub_41B120(*(void **)(a1 + 1600));
  sub_421FB0(*(_QWORD *)(a1 + 1640));
  sub_608B00(*(void **)(a1 + 1648));
  sub_559F30(*(void **)(a1 + 1656));
  sub_63C660(*(_QWORD *)(a1 + 1664));
  sub_63D080(*(void **)(a1 + 1688));
  sub_64C8F0(*(void **)(a1 + 1704));
  sub_4F2330(*(void **)(a1 + 1752));
  sub_688650(*(void **)(a1 + 1776));
  sub_5210A0(*(void **)(a1 + 1784));
  sub_694770(*(void **)(a1 + 1816));
  sub_541C70(*(void **)(a1 + 1824));
  sub_586F20(*(void **)(a1 + 1856));
  sub_6B8BF0(*(void **)(a1 + 1864));
  sub_6CA530(*(_QWORD *)(a1 + 1872));
  sub_69A890(*(void **)(a1 + 1840));
  sub_5D9E80(*(void **)(a1 + 1624));
  sub_697B00(*(_QWORD *)(a1 + 1832));
  sub_52CBC0(*(_QWORD *)(a1 + 1584));
  sub_39AF60(*(_QWORD **)(a1 + 1528));
  sub_68FAE0(*(void **)(a1 + 1800));
  sub_359A70(*(_QWORD **)(a1 + 1792));
  sub_3AE980(*(void **)(a1 + 1576));
  sub_433700(*(void **)(a1 + 1880));
  sub_6D6580(*(void **)(a1 + 1896));
  sub_729500(*(void **)(a1 + 1888));
  sub_4EA770(*(void **)(a1 + 1744));
  sub_4B36A0(*(void **)(a1 + 1712));
  sub_57EF80(*(void **)(a1 + 1848));
  sub_380690(*(void ***)(a1 + 1632));
  *(_QWORD *)(a1 + 320) = 0;
  *(_QWORD *)(a1 + 624) = 0;
  *(_QWORD *)(a1 + 632) = 0;
  *(_QWORD *)(a1 + 1912) = 0;
  memset(
    (void *)((a1 + 640) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)a1 - (((_DWORD)a1 + 640) & 0xFFFFFFF8) + 1920) >> 3));
  v14 = *(_QWORD *)(a1 + 288);
  while ( v14 )
  {
    v15 = (_QWORD *)v14;
    sub_3FA440(*(_QWORD **)(v14 + 24));
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
