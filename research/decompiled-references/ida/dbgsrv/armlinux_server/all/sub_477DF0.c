/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_477DF0
// Address: 0x0000000000477DF0

//----- (0000000000477DF0) ----------------------------------------------------
__int64 __fastcall sub_477DF0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 (*v6)(void); // x1
  __int64 v7; // x19
  __int64 v8; // x0
  __int64 v9; // x20
  int v10; // w22
  __int64 (__fastcall *v11)(); // x1
  const char *v12; // x0
  const char *v13; // x19
  size_t v14; // x0
  size_t v15; // x20
  unsigned int v16; // w19
  unsigned __int64 v18; // x22
  void *v19; // x0
  const char *v20; // x1
  __int64 v21; // [xsp+60h] [xbp-10h] BYREF

  v6 = *(__int64 (**)(void))(*(_QWORD *)a1 + 24LL);
  if ( (char *)v6 == (char *)sub_477AB0 )
    v7 = *(_QWORD *)(a1 + 96);
  else
    v7 = v6();
  sub_4775F8(&v21, v7, 1u, a3);
  if ( !a3 )
  {
LABEL_17:
    v16 = 0;
    goto LABEL_18;
  }
  do
  {
    while ( (int)sub_477048(v7) > 0 )
    {
      v8 = sub_477018(v7);
      v9 = v8;
      if ( v8 <= 0 )
        goto LABEL_6;
      a3 -= v8;
      a2 += v8;
      sub_477630(&v21);
      if ( !a3 )
        goto LABEL_17;
    }
    v9 = -1;
LABEL_6:
    v10 = sub_477028(v7);
  }
  while ( v10 == -21015 );
  v11 = *(__int64 (__fastcall **)())(*(_QWORD *)a1 + 48LL);
  if ( v11 != nullsub_16 )
    ((void (__fastcall *)(__int64))v11)(a1);
  if ( !v9 || (*(_BYTE *)(a1 + 8) = 1, v10 == -15059582) )
  {
LABEL_14:
    v16 = -1;
  }
  else
  {
    v12 = (const char *)sub_477038(v7);
    v13 = v12;
    if ( !v12 || (v14 = strlen(v12), (v15 = v14) == 0) )
    {
      *(_QWORD *)(a1 + 24) = 0;
      goto LABEL_14;
    }
    v18 = v14 + 1;
    v19 = *(void **)(a1 + 16);
    if ( v18 > *(_QWORD *)(a1 + 32) )
    {
      v19 = sub_491288(a1 + 16, *(void **)(a1 + 16), v18, 1u);
      *(_QWORD *)(a1 + 16) = v19;
    }
    *(_QWORD *)(a1 + 24) = v18;
    v20 = v13;
    v16 = -1;
    memmove(v19, v20, v15);
    *(_BYTE *)(*(_QWORD *)(a1 + 16) + v15) = 0;
  }
LABEL_18:
  sub_477618(&v21);
  return v16;
}
// 477DF0: could not find valid save-restore pair for x22
// 462618: using guessed type __int64 __fastcall nullsub_16();
