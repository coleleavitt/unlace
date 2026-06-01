__int64 __fastcall sub_1469FA0(__int64 a1, char a2, unsigned __int8 a3, __m128i a4, double a5)
{
  _QWORD *v7; // r12
  _QWORD *v8; // rbp
  const char *v9; // rbp
  const char *v10; // rsi
  _QWORD *v11; // r12
  __int64 v12; // r14
  __int64 v13; // r15
  __int64 v14; // r13
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // rdi
  const char **v18; // rdx
  const char **v19; // r15
  const char **i; // r14
  void (*v21)(); // rax
  __int64 *v22; // r15
  __int64 *j; // r14
  __int64 v25; // rax
  void *v26; // rcx
  __int64 v27; // rdi
  void (*v28)(); // rax
  __int64 v29; // [rsp+8h] [rbp-90h]
  char v31; // [rsp+17h] [rbp-81h]
  __int64 v32; // [rsp+20h] [rbp-78h]
  __int64 v33; // [rsp+28h] [rbp-70h]
  _BYTE v34[4]; // [rsp+34h] [rbp-64h] BYREF
  __int64 v35; // [rsp+38h] [rbp-60h] BYREF
  _QWORD v36[11]; // [rsp+40h] [rbp-58h] BYREF

  if ( a2 )
  {
    sub_B886C0();
    sub_EE9B90();
  }
  v7 = *(_QWORD **)(a1 + 12616);
  v8 = *(_QWORD **)(a1 + 12608);
  v31 = *(_BYTE *)(a1 + 16);
  for ( *(_BYTE *)(a1 + 16) = a2; v7 != v8; ++v8 )
  {
    if ( *v8 )
      (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v8 + 16LL))(*v8, a1);
  }
  v9 = *(const char **)(a1 + 256);
  v10 = *(const char **)(a1 + 240);
  v11 = (_QWORD *)operator new(0xBB0u);
  sub_1564280(v11, v10, a1, a3);
  v12 = sub_2233900();
  if ( v12 && (v13 = sub_2219840()) != 0 )
  {
    a4 = 0;
    v14 = operator new(0x30u);
    *(_QWORD *)(v14 + 8) = v13;
    *(_BYTE *)(v14 + 16) = 0;
    v10 = (const char *)v14;
    *(_OWORD *)(v14 + 24) = 0;
    *(_QWORD *)(v14 + 40) = v12;
    *(_QWORD *)v14 = &off_2BB31C0;
    sub_2219880(v13, v14);
  }
  else
  {
    v14 = 0;
  }
  sub_2233820(v36);
  v36[2] = v11;
  v36[0] = &off_2BB31E8;
  v15 = sub_2219840();
  if ( v15 )
  {
    v16 = operator new(0x30u);
    a4 = 0;
    *(_QWORD *)(v16 + 8) = v15;
    *(_BYTE *)(v16 + 16) = 0;
    v10 = (const char *)v16;
    *(_OWORD *)(v16 + 24) = 0;
    *(_QWORD *)(v16 + 40) = v11;
    v29 = v16;
    *(_QWORD *)v16 = &off_2BB3210;
    sub_2219880(v15, v16);
  }
  else
  {
    v29 = 0;
  }
  sub_1464940(*(_QWORD *)(a1 + 240), a4, a5);
  v17 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 18360LL);
  if ( v17 )
  {
    v10 = v9;
    (*(void (__fastcall **)(__int64, const char *))(*(_QWORD *)v17 + 200LL))(v17, v9);
  }
  v32 = *(_QWORD *)(*(_QWORD *)(a1 + 240) + 1120LL);
  if ( !v32 )
    goto LABEL_21;
  v35 = a1;
  v33 = sub_224B4C0("Frontend", 8, sub_146A420, &v35);
  sub_15689F0(v11);
  v35 = 0;
  sub_18C74E0(a1, 6, 0, 4);
  v10 = (const char *)&v35;
  if ( (unsigned __int8)sub_1570690(v11, &v35, v34) )
  {
LABEL_19:
    v17 = a1;
    sub_190D5E0(a1);
    if ( v33 )
    {
      v17 = v33;
      sub_224D6D0(v33);
    }
LABEL_21:
    v18 = *(const char ***)(a1 + 3192);
    v19 = &v18[*(unsigned int *)(a1 + 3200)];
    for ( i = v18; v19 != i; ++i )
    {
      v10 = *i;
      v17 = (__int64)v9;
      (*(void (__fastcall **)(const char *, const char *))(*(_QWORD *)v9 + 24LL))(v9, v10);
    }
    v21 = *(void (**)())(*(_QWORD *)v9 + 48LL);
    if ( v21 != nullsub_428 )
    {
      v10 = *(const char **)(a1 + 248);
      v17 = (__int64)v9;
      ((void (__fastcall *)(const char *, const char *))v21)(v9, v10);
    }
    v22 = *(__int64 **)(a1 + 12616);
    for ( j = *(__int64 **)(a1 + 12608); v22 != j; ++j )
    {
      v17 = *j;
      if ( *j )
      {
        v10 = (const char *)a1;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 24LL))(v17, a1);
      }
    }
    *(_BYTE *)(a1 + 16) = v31;
    if ( a2 )
    {
      v25 = sub_227D6D0(v17, v10);
      v26 = *(void **)(v25 + 32);
      if ( *(_QWORD *)(v25 + 24) - (_QWORD)v26 > 0xCu )
      {
        qmemcpy(v26, "\nSTATISTICS:\n", 13);
        *(_QWORD *)(v25 + 32) += 13LL;
      }
      else
      {
        v10 = "\nSTATISTICS:\n";
        sub_227BF10(v25, "\nSTATISTICS:\n", 13);
      }
      if ( v32 )
        sub_15F1220(v11[12]);
      v27 = *(_QWORD *)(a1 + 248);
      sub_A5F630(v27, (__int64)v10);
      sub_B886D0(v27, (__int64)v10);
      sub_EE9770(v27, v10);
      v28 = *(void (**)())(*(_QWORD *)v9 + 152LL);
      if ( v28 != nullsub_158 )
        ((void (__fastcall *)(const char *))v28)(v9);
    }
    goto LABEL_30;
  }
  while ( !v35 || (*(unsigned __int8 (__fastcall **)(const char *))(*(_QWORD *)v9 + 24LL))(v9) )
  {
    v10 = (const char *)&v35;
    if ( (unsigned __int8)sub_156FF30(v11, &v35, v34) )
      goto LABEL_19;
  }
  sub_190D5E0(a1);
  if ( v33 )
    sub_224D6D0(v33);
LABEL_30:
  if ( v29 && !*(_BYTE *)(v29 + 16) )
    sub_22198A0(*(_QWORD *)(v29 + 8));
  v36[0] = &off_2BB31E8;
  sub_22338A0(v36);
  if ( v14 && !*(_BYTE *)(v14 + 16) )
    sub_22198A0(*(_QWORD *)(v14 + 8));
  return (*(__int64 (__fastcall **)(_QWORD *))(*v11 + 8LL))(v11);
}
