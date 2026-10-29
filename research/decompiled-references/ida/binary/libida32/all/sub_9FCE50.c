__int64 __fastcall sub_9FCE50(__int64 a1, __int64 a2)
{
  unsigned __int8 v3; // dl
  char v4; // al
  __int64 v5; // rbx
  __int64 v6; // r14
  __int64 v7; // rsi
  char *v8; // rbx
  __int64 v9; // r14
  char *v10; // r13
  char v11; // al
  char *v12; // rbx
  __int64 v13; // r13
  __int64 result; // rax
  char *v15; // r12
  char v16; // al
  char v17; // [rsp+Fh] [rbp-49h] BYREF
  __int64 v18; // [rsp+10h] [rbp-48h] BYREF
  int v19; // [rsp+18h] [rbp-40h]

  sub_9FCB50(a1, a2);
  v3 = *(_BYTE *)(a2 + 73);
  v4 = 8 * (*(_BYTE *)(a2 + 72) & 1);
  if ( (v3 & 0xE) != 0 )
    v4 |= (v3 >> 1) & 7;
  v18 = a1;
  v17 = v4;
  v19 = 1;
  sub_22581D0(a1, &v17, 1);
  v17 = *(_WORD *)(a2 + 72) >> 1;
  sub_22581D0(v18, &v17, 1);
  sub_9FCAF0(v18, *(_QWORD *)(a2 + 80), v19);
  sub_9FCB20(&v18, -4369 * ((__int64)(*(_QWORD *)(a2 + 160) - *(_QWORD *)(a2 + 152)) >> 3));
  v5 = *(_QWORD *)(a2 + 152);
  v6 = *(_QWORD *)(a2 + 160);
  while ( v6 != v5 )
  {
    v7 = v5;
    v5 += 120;
    sub_9FCC80(a1, v7);
  }
  sub_9FCB20(&v18, *(_WORD *)(a2 + 96));
  v8 = *(char **)(a2 + 88);
  v9 = v18;
  v10 = &v8[*(_QWORD *)(a2 + 96)];
  while ( v10 != v8 )
  {
    v11 = *v8++;
    v17 = v11;
    sub_22581D0(v9, &v17, 1);
  }
  sub_9FCB20(&v18, *(_WORD *)(a2 + 128));
  v12 = *(char **)(a2 + 120);
  v13 = v18;
  result = (__int64)&v12[*(_QWORD *)(a2 + 128)];
  v15 = (char *)result;
  if ( (char *)result != v12 )
  {
    do
    {
      v16 = *v12++;
      v17 = v16;
      result = sub_22581D0(v13, &v17, 1);
    }
    while ( v12 != v15 );
  }
  return result;
}

