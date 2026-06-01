/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4121F0
// Address: 0x00000000004121F0

//----- (00000000004121F0) ----------------------------------------------------
unsigned __int64 __fastcall sub_4121F0(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi
  __int64 v4; // rbx
  void *v5; // rdi
  void *v6; // rdi
  void *v7; // rdi
  void *v8; // rdi
  __int64 v9; // rbx
  _QWORD *v10; // rbp
  void *v11; // rdi
  __int64 v12; // r14
  _QWORD *v13; // r12
  void *v14; // rdi
  void *v15; // rdi
  __int64 v16; // rbx
  _QWORD *v17; // rbp
  void *v18; // rdi
  void *v19; // rdi
  void *v20; // rdi
  __int64 v21; // rbx
  void *v22; // rdi
  void *v23; // rdi
  void *v24; // rdi
  void *v25; // rdi
  void *v26; // rdi

  *a1 = off_4C42C0;
  a1[175] = 0;
  a1[119] = 0;
  a1[166] = 0;
  v2 = (void *)a1[180];
  if ( v2 )
  {
    a1[181] = 0;
    j__free(v2);
  }
  v3 = (void *)a1[177];
  if ( v3 )
  {
    a1[178] = 0;
    j__free(v3);
  }
  v4 = a1[171];
  while ( v4 )
  {
    sub_40FDA0(*(_QWORD **)(v4 + 24));
    v5 = (void *)v4;
    v4 = *(_QWORD *)(v4 + 16);
    operator delete(v5, 0x28u);
  }
  v6 = (void *)a1[163];
  if ( v6 )
  {
    a1[164] = 0;
    j__free(v6);
  }
  v7 = (void *)a1[160];
  if ( v7 )
  {
    a1[161] = 0;
    j__free(v7);
  }
  v8 = (void *)a1[157];
  if ( v8 )
  {
    a1[158] = 0;
    j__free(v8);
  }
  v9 = a1[153];
  while ( v9 )
  {
    v10 = (_QWORD *)v9;
    sub_40F6B0(*(_QWORD **)(v9 + 24));
    v11 = *(void **)(v9 + 72);
    v9 = *(_QWORD *)(v9 + 16);
    if ( v11 )
    {
      v10[10] = 0;
      j__free(v11);
    }
    operator delete(v10, 0x60u);
  }
  v12 = a1[147];
  while ( v12 )
  {
    v13 = (_QWORD *)v12;
    sub_4104B0(*(_QWORD **)(v12 + 24));
    v14 = *(void **)(v12 + 176);
    v12 = *(_QWORD *)(v12 + 16);
    if ( v14 )
    {
      v13[23] = 0;
      j__free(v14);
    }
    v15 = (void *)v13[19];
    if ( v15 )
    {
      v13[20] = 0;
      j__free(v15);
    }
    v16 = v13[15];
    while ( v16 )
    {
      v17 = (_QWORD *)v16;
      sub_40F970(*(_QWORD **)(v16 + 24));
      v18 = *(void **)(v16 + 40);
      v16 = *(_QWORD *)(v16 + 16);
      if ( v18 )
      {
        v17[6] = 0;
        j__free(v18);
      }
      operator delete(v17, 0x40u);
    }
    v19 = (void *)v13[10];
    if ( v19 )
    {
      v13[11] = 0;
      j__free(v19);
    }
    v20 = (void *)v13[7];
    if ( v20 )
    {
      v13[8] = 0;
      j__free(v20);
    }
    operator delete(v13, 0xD0u);
  }
  v21 = a1[141];
  while ( v21 )
  {
    sub_40FDA0(*(_QWORD **)(v21 + 24));
    v22 = (void *)v21;
    v21 = *(_QWORD *)(v21 + 16);
    operator delete(v22, 0x28u);
  }
  v23 = (void *)a1[136];
  if ( v23 )
  {
    a1[137] = 0;
    j__free(v23);
  }
  v24 = (void *)a1[133];
  if ( v24 )
  {
    a1[134] = 0;
    j__free(v24);
  }
  v25 = (void *)a1[130];
  if ( v25 )
  {
    a1[131] = 0;
    j__free(v25);
  }
  v26 = (void *)a1[127];
  if ( v26 )
  {
    a1[128] = 0;
    j__free(v26);
  }
  *a1 = off_4C4968;
  return sub_411CE0((__int64)a1);
}
// 4C42C0: using guessed type __int64 (__fastcall *off_4C42C0[5])();
// 4C4968: using guessed type __int64 (__fastcall *off_4C4968[4])();
