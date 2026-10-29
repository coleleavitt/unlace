void __fastcall sub_1668970(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  const char *v5; // r13
  __int64 v6; // rdx
  __int64 v7; // r12
  unsigned int v8; // eax
  int v9; // eax
  __int64 *v10; // rsi
  __int64 *v11; // r13
  __int64 *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  const void *v18; // r13
  __int64 v19; // r12
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned __int64 *v25; // rax
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rdi
  unsigned __int64 v28; // rax
  __int64 *v29[6]; // [rsp+0h] [rbp-30h] BYREF

  v2 = *(_QWORD *)(a2 + 40);
  if ( (v2 & 7) == 0 && (v2 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    v5 = sub_995750(a2);
    v7 = v6;
    v8 = sub_2244B30(v5, v6);
    v9 = sub_2244E60(a1 + 1984, v5, v7, v8);
    v10 = (__int64 *)(v9 == -1
                    ? *(_QWORD *)(a1 + 1984) + 8LL * *(unsigned int *)(a1 + 1992)
                    : *(_QWORD *)(a1 + 1984) + 8LL * v9);
    sub_1668930(v29, v10, 1);
    v11 = v29[0];
    v12 = (__int64 *)(*(_QWORD *)(a1 + 1984) + 8LL * *(unsigned int *)(a1 + 1992));
    sub_1668930(v29, v12, 1);
    if ( v29[0] != v11 )
    {
      v17 = *v11;
      v18 = *(const void **)(*v11 + 16);
      v19 = *(_QWORD *)(v17 + 24);
      if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
      {
LABEL_8:
        v20 = sub_B36D80(*(_QWORD *)(a1 + 248), v18, v19, 0, 0);
        sub_B8CC60(a2, v20, v21, v22, v23, v24);
        return;
      }
      v25 = sub_B8C3D0(a2, (__int64)v12, v13, v14, v15, v16);
      v26 = *v25;
      v27 = *v25 + 8LL * *((unsigned int *)v25 + 2);
      if ( *v25 >= v27 )
      {
        if ( v26 == v27 )
          goto LABEL_8;
        while ( *(_WORD *)(*(_QWORD *)v27 + 36LL) != 356 )
        {
          v27 += 8LL;
          if ( v26 == v27 )
            goto LABEL_8;
        }
      }
      else
      {
        v28 = *v25;
        while ( *(_WORD *)(*(_QWORD *)v28 + 36LL) != 356 )
        {
          v28 += 8LL;
          if ( v27 == v28 )
            goto LABEL_8;
        }
        if ( v27 == v28 )
          goto LABEL_8;
      }
    }
  }
}
