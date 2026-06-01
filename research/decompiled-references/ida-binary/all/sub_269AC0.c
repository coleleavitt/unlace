__int64 __fastcall desktop_chooser_t__::vfunc_4(__int64 a1)
{
  __int64 i; // rax
  const char *v2; // rdx
  const char *v3; // rsi
  __int64 v4; // rbx
  const char *v5; // r13
  __int64 v6; // r13
  __int64 v7; // rbx
  char **v8; // rbp
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  char **v11; // rbx
  __int64 v12; // rdi
  const char *v13; // rdx
  __int64 v14; // rbp
  __int64 v15; // rbx
  const char *v16; // rax
  __int64 v17; // rdi
  __int64 v19; // [rsp+8h] [rbp-50h] BYREF
  const char *v20; // [rsp+10h] [rbp-48h] BYREF
  __int128 v21; // [rsp+18h] [rbp-40h]
  unsigned __int64 v22; // [rsp+28h] [rbp-30h]

  v22 = __readfsqword(0x28u);
  netnode_check(&v19, "$ desktops", 0, 0);
  v21 = 0;
  v20 = nullptr;
  for ( i = netnode_qhashfirst(v19, &v20, 72); i >= 0; i = netnode_qhashnext(v19, &v20, v2, 72) )
  {
    sub_269690(a1, (__int64)&v20, 1);
    v2 = &s1;
    if ( (_QWORD)v21 )
      v2 = v20;
  }
  if ( v20 )
  {
    *(_QWORD *)&v21 = 0;
    qfree(v20, (const char *)&v20);
  }
  v3 = "Desktops";
  v20 = nullptr;
  v21 = 0;
  if ( (unsigned __int8)reg_subkey_children(&v20, "Desktops", 0) )
  {
    v4 = (__int64)v20;
    v5 = &v20[24 * v21];
    if ( v5 != v20 )
    {
      do
      {
        v3 = (const char *)v4;
        sub_269690(a1, v4, 0);
        v4 += 24;
      }
      while ( v5 != (const char *)v4 );
    }
  }
  v6 = *(_QWORD *)(a1 + 184);
  v7 = 56LL * *(_QWORD *)(a1 + 192);
  v8 = (char **)(v6 + v7);
  if ( v6 != v6 + v7 )
  {
    v9 = 0x6DB6DB6DB6DB6DB7LL * (v7 >> 3);
    if ( v9 )
    {
      _BitScanReverse64(&v10, v9);
      sub_266BA0(*(_QWORD *)(a1 + 184), v8, 2LL * (int)v10);
      if ( v7 > 896 )
      {
        v11 = (char **)(v6 + 896);
        v3 = (const char *)(v6 + 896);
        sub_265350(v6, v6 + 896);
        do
        {
          v12 = (__int64)v11;
          v11 += 7;
          sub_265140(v12);
        }
        while ( v8 != v11 );
        goto LABEL_16;
      }
    }
    else
    {
      sub_266BA0(*(_QWORD *)(a1 + 184), v8, -2);
    }
    v3 = (const char *)(v6 + v7);
    sub_265350(v6, (__int64)v8);
  }
LABEL_16:
  v13 = v20;
  if ( v20 )
  {
    v14 = v21;
    if ( (_QWORD)v21 )
    {
      v15 = 0;
      do
      {
        v16 = &v13[24 * v15];
        v17 = *(_QWORD *)v16;
        if ( *(_QWORD *)v16 )
        {
          *((_QWORD *)v16 + 1) = 0;
          qfree(v17, v3);
          v13 = v20;
        }
        ++v15;
      }
      while ( v14 != v15 );
    }
    *(_QWORD *)&v21 = 0;
    qfree(v13, v3);
  }
  return 1;
}
