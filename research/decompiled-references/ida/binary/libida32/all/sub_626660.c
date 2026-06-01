__int64 __fastcall sub_626660(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  int v7; // eax
  int v8; // edx
  int v9; // eax
  int v10; // eax
  unsigned __int8 *v11; // r14
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rdx
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned int v20; // r15d
  __int64 v21; // rbp
  __int64 v22; // rax
  __int64 v23; // r12
  __int64 v24; // rcx
  __int64 v25; // rax
  unsigned __int8 v26; // r9
  __int64 v27; // rdx
  int v28; // ecx
  int v29; // r8d
  __int64 v31; // [rsp+0h] [rbp-58h]
  __int64 v33; // [rsp+10h] [rbp-48h]
  unsigned __int8 v35; // [rsp+1Fh] [rbp-39h]

  qlseek(a2, a3, 0);
  v7 = nbits(a4);
  v8 = v7 + 14;
  v9 = v7 + 7;
  if ( v9 < 0 )
    v9 = v8;
  v10 = v9 >> 3;
  if ( !v10 )
  {
    if ( !under_debugger )
      interr(1393);
    BUG();
  }
  v31 = v10;
  v11 = (unsigned __int8 *)qalloc((__int64)v10 << 16);
  while ( a4 < a5 )
  {
    show_auto(a4, 0);
    v20 = a5 - a4;
    if ( a5 - a4 > 0x10000 )
      v20 = 0x10000;
    v21 = v31 * v20;
    v22 = qlread(a2, v11, v21);
    v23 = v22;
    if ( *(_BYTE *)(a1 + 9) )
    {
      v13 = a4;
      v24 = v22;
      a4 += v20;
      v25 = *(_QWORD *)(*(_QWORD *)a1 + 1480LL);
      v26 = *(_BYTE *)(v25 + 96);
      *(_BYTE *)(v25 + 96) = 0;
      v33 = v25;
      v35 = v26;
      sub_3CE730(*(_QWORD *)a1, v13, v11, v24);
      *(_BYTE *)(v33 + 96) = v35;
      sub_626610((_BYTE *)a1, v13, v27, v28, v29, v35);
      if ( v23 != v21 )
LABEL_11:
        sub_384000(1233, v13, v18, v19);
    }
    else
    {
      v12 = a4;
      v13 = (__int64)v11;
      a4 += v20;
      put_bytes(v12, v11, v22);
      sub_626610((_BYTE *)a1, (int)v11, v14, v15, v16, v17);
      if ( v23 != v21 )
        goto LABEL_11;
    }
  }
  qfree(v11);
  return 1;
}

