__int64 __fastcall sub_E47940(__int64 a1, __int64 a2)
{
  size_t v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  size_t v7; // rax
  const char *v8; // rsi
  unsigned __int64 v9; // rdx
  __int64 v11; // rax
  __int16 *v12; // [rsp+0h] [rbp-88h] BYREF
  __int64 v13; // [rsp+8h] [rbp-80h]
  __int64 v14; // [rsp+10h] [rbp-78h] BYREF
  __int64 v15; // [rsp+18h] [rbp-70h]
  int v16; // [rsp+20h] [rbp-68h]
  __int16 v17; // [rsp+30h] [rbp-58h] BYREF
  __int64 v18; // [rsp+38h] [rbp-50h]
  __int64 v19; // [rsp+40h] [rbp-48h]
  int v20; // [rsp+48h] [rbp-40h]

  sub_E35B80((__int64)&v17, "CXXCtorInitializer");
  v2 = j__strlen("kind");
  sub_2206E30(a1 + 1048, "kind", v2);
  sub_2208D80(a1 + 1048, &v17);
  sub_2205EB0(a1 + 1048);
  sub_2207560(&v17);
  v3 = *(_QWORD *)a2;
  v4 = (*(__int64 *)a2 >> 1) & 3;
  if ( v4 == 1 )
  {
    v9 = v3 & 0xFFFFFFFFFFFFFFF8LL;
    goto LABEL_7;
  }
  if ( v4 == 2 )
  {
    v9 = *(_QWORD *)(*(_QWORD *)((v3 & 0xFFFFFFFFFFFFFFF8LL) + 56)
                   + 8LL * *(unsigned int *)((v3 & 0xFFFFFFFFFFFFFFF8LL) + 64)
                   - 8);
LABEL_7:
    sub_E43670((__int64)&v14, a1, v9);
    v17 = 7;
    v18 = v14;
    v14 = 0;
    v19 = v15;
    v15 = 0;
    v20 = v16;
    v16 = 0;
    v7 = j__strlen("anyInit");
    v12 = &v17;
    v13 = a1 + 1048;
    v8 = "anyInit";
    goto LABEL_8;
  }
  if ( (*(_BYTE *)(a2 + 28) & 1) != 0 )
  {
    if ( !v3 )
      BUG();
    sub_E3FD20((__int64)&v14, a1, *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFF8LL), 1);
    v17 = 7;
    v5 = v14;
    v14 = 0;
    v18 = v5;
    v6 = v15;
    v15 = 0;
    v19 = v6;
    LODWORD(v6) = v16;
    v16 = 0;
    v20 = v6;
    v7 = j__strlen("delegatingInit");
    v12 = &v17;
    v13 = a1 + 1048;
    v8 = "delegatingInit";
  }
  else
  {
    v11 = sub_B74D90(a2);
    sub_E3FD20((__int64)&v14, a1, v11 & 0xFFFFFFFFFFFFFFF0LL, 1);
    v17 = 7;
    v18 = v14;
    v14 = 0;
    v19 = v15;
    v15 = 0;
    v20 = v16;
    v16 = 0;
    v7 = j__strlen("baseInit");
    v12 = &v17;
    v13 = a1 + 1048;
    v8 = "baseInit";
  }
LABEL_8:
  sub_E34890(a1 + 1048, (__int64)v8, v7, (__int64)sub_E34840, &v12);
  sub_2207560(&v17);
  return sub_E395A0(&v14);
}

