/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100019D00
// Address: 0x0000000100019D00

//----- (0000000100019D00) ----------------------------------------------------
__int64 __fastcall sub_100019D00(__int64 a1, __int64 *a2, __int64 *a3)
{
  unsigned __int64 v3; // rcx
  __int64 *v4; // rbx
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // r14
  int v7; // esi
  int v8; // eax
  unsigned __int64 v9; // r15
  int v10; // r13d
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rbx
  __int64 v15; // rax
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  char **v18; // rdi
  __int64 v19; // rbx
  __int64 v21; // [rsp+8h] [rbp-A8h]
  __int64 v23; // [rsp+20h] [rbp-90h]
  __int128 v24; // [rsp+20h] [rbp-90h]
  int v26; // [rsp+3Ch] [rbp-74h]
  _OWORD v27[2]; // [rsp+40h] [rbp-70h] BYREF
  _OWORD v28[2]; // [rsp+60h] [rbp-50h] BYREF

  if ( !a2[1] )
  {
    memset(v27, 0, 24);
    sub_10001D380((void **)v27, a3);
    v19 = *(_QWORD *)&v27[0];
    memset(v27, 0, 24);
    v24 = *(_OWORD *)((char *)v27 + 8);
    sub_1000015C0((char **)a1);
LABEL_26:
    *(_QWORD *)a1 = v19;
    v28[0] = 0;
    *(_OWORD *)(a1 + 8) = v24;
    *(_QWORD *)&v28[1] = 0;
    sub_10000C380((char **)v28);
    v18 = (char **)v27;
    goto LABEL_27;
  }
  v3 = a3[1];
  if ( !v3 )
  {
    memset(v27, 0, 24);
    sub_10001D380((void **)v27, a2);
    v19 = *(_QWORD *)&v27[0];
    memset(v27, 0, 24);
    v24 = *(_OWORD *)((char *)v27 + 8);
    sub_1000015C0((char **)a1);
    goto LABEL_26;
  }
  v4 = a3;
  memset(v28, 0, 24);
  v5 = *(_QWORD *)*a2;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  while ( 2 )
  {
    v9 = -1;
    v23 = 5LL * v7;
    if ( v3 > v7 )
      v9 = *(_QWORD *)(*v4 + 80LL * v7);
    v21 = v7;
    if ( v9 == v6 || (v11 = v8, v12 = a2[1], v12 <= v8) || v5 >= v9 )
    {
      v9 = v5;
      v10 = v8;
      goto LABEL_21;
    }
    v26 = v7;
    v13 = *a2;
    while ( 1 )
    {
      v10 = v8;
      v14 = 80 * v11;
      if ( *(_QWORD *)(v13 + 80 * v11 + 8) <= v6 )
        goto LABEL_16;
      sub_10000C170((char **)v28, (__int128 *)(v14 + v13));
      if ( v6 >= v5 )
        *(_QWORD *)(*(_QWORD *)&v28[0] + 80LL * *((_QWORD *)&v28[0] + 1) - 80) = v6;
      v13 = *a2;
      v6 = *(_QWORD *)(*a2 + v14 + 8);
      if ( v6 > v9 )
        break;
      v12 = a2[1];
LABEL_16:
      v8 = v10 + 1;
      v11 = v10 + 1;
      if ( v12 > v11 )
      {
        v5 = *(_QWORD *)(v13 + 80LL * v8);
        if ( v5 < v9 )
          continue;
      }
      ++v10;
      v9 = v5;
      goto LABEL_20;
    }
    *(_QWORD *)(*(_QWORD *)&v28[0] + 80LL * *((_QWORD *)&v28[0] + 1) - 72) = v9;
LABEL_20:
    v4 = a3;
    v7 = v26;
LABEL_21:
    if ( v4[1] != v21 )
    {
      sub_10000C170((char **)v28, (__int128 *)(16 * v23 + *v4));
      v3 = v4[1];
      v6 = *(_QWORD *)(*v4 + 16 * v23 + 8);
      ++v7;
      v5 = v9;
      v8 = v10;
      continue;
    }
    break;
  }
  v15 = *(_QWORD *)&v28[0];
  *(_QWORD *)&v28[0] = *(_QWORD *)a1;
  v16 = *(_OWORD *)(a1 + 8);
  *(_QWORD *)a1 = v15;
  v17 = *(_OWORD *)((char *)v28 + 8);
  *(_OWORD *)((char *)v28 + 8) = v16;
  *(_OWORD *)(a1 + 8) = v17;
  v18 = (char **)v28;
LABEL_27:
  sub_10000C380(v18);
  return __stack_chk_guard;
}
