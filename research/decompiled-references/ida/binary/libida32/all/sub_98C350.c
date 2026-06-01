void __fastcall sub_98C350(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v4; // rax
  int v5; // r12d
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned int v10; // edi
  __int64 *v11; // rsi
  __int64 v12; // r8
  unsigned __int64 v13; // r15
  _QWORD *v14; // rdx
  int v15; // edx
  __int64 v16; // rdi
  int v17; // edi
  char *v18; // r13
  __int64 v19; // rdx
  __int64 v20; // r14
  char *v21; // rax
  __int64 v22; // rdx
  void (*v23)(); // r10
  __int64 v24; // r11
  int v25; // esi
  int v26; // r8d
  __int64 v27; // r10
  __m128 v28[4]; // [rsp+0h] [rbp-48h] BYREF

  v2 = a2;
  v4 = *a1;
  v5 = *(_DWORD *)(*a1 + 56);
  if ( v5 )
  {
    v6 = *(_QWORD *)(a2 + 8);
    if ( (*(_WORD *)v6 & 0x1FF) == 0x3C && (*(_DWORD *)v6 & 0x80000) == 0 )
      v6 = *(_QWORD *)(v6 + 16);
    v7 = sub_BD7CB0(v6);
    v8 = *((unsigned int *)a1 + 8);
    v9 = a1[2];
    if ( (_DWORD)v8 )
    {
      v10 = (v8 - 1) & (((unsigned int)v7 >> 9) ^ ((unsigned int)v7 >> 4));
      v11 = (__int64 *)(v9 + ((unsigned __int64)v10 << 6));
      v12 = *v11;
      if ( v7 == *v11 )
      {
LABEL_9:
        sub_9885F0(v28, v11, (_QWORD *)((v8 << 6) + v9), (__int64)(a1 + 2), 1);
        v13 = v28[0].m128_u64[0];
        goto LABEL_10;
      }
      v25 = 1;
      if ( v12 != -4096 )
      {
        do
        {
          v26 = v25 + 1;
          v10 = (v8 - 1) & (v25 + v10);
          v11 = (__int64 *)(v9 + ((unsigned __int64)v10 << 6));
          v27 = *v11;
          if ( v7 == *v11 )
            goto LABEL_9;
          v25 = v26;
        }
        while ( v27 != -4096 );
      }
    }
    sub_9885F0(
      v28,
      (_QWORD *)(v9 + ((unsigned __int64)(unsigned int)v8 << 6)),
      (_QWORD *)(v9 + ((unsigned __int64)(unsigned int)v8 << 6)),
      (__int64)(a1 + 2),
      1);
    v13 = v28[0].m128_u64[0];
LABEL_10:
    v14 = (_QWORD *)(a1[2] + ((unsigned __int64)*((unsigned int *)a1 + 8) << 6));
    sub_9885F0(v28, v14, v14, (__int64)(a1 + 2), 1);
    if ( v28[0].m128_u64[0] == v13 )
      goto LABEL_16;
    v15 = *(_DWORD *)(v13 + 8);
    v16 = a1[1];
    if ( v15 == 4 )
    {
      v17 = sub_98A100(v16, *(_QWORD *)(v13 + 16));
    }
    else if ( v15 == 5 )
    {
      v17 = sub_98C240(v16, *(_QWORD *)(v13 + 16));
    }
    else
    {
      v17 = 0;
      if ( v15 != 1 )
      {
LABEL_14:
        v18 = sub_986660(v17);
        v20 = v19;
        v21 = sub_986660(v5);
        a2 = *(unsigned int *)(v2 + 4);
        if ( v23 == nullsub_334 )
        {
LABEL_17:
          v4 = *a1;
          goto LABEL_3;
        }
        ((void (__fastcall *)(__int64, __int64, char *, __int64, char *, __int64))v23)(v24, a2, v21, v22, v18, v20);
LABEL_16:
        LODWORD(a2) = *(_DWORD *)(v2 + 4);
        goto LABEL_17;
      }
      v17 = *(_DWORD *)(v13 + 16);
    }
    if ( v5 == v17 )
      goto LABEL_16;
    goto LABEL_14;
  }
  LODWORD(a2) = *(_DWORD *)(a2 + 4);
LABEL_3:
  sub_98A210(a1[1], a2, *(_QWORD *)(v4 + 64));
}

