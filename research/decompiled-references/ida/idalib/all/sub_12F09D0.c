void __fastcall sub_12F09D0(__int64 a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // r14
  _QWORD *v4; // r13
  __int64 v5; // r9
  __int64 v6; // rcx
  unsigned int v7; // r8d
  __int64 *v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // esi
  int v15; // r8d
  int v16; // r8d
  __int64 v17; // r9
  int v18; // edi
  unsigned int v19; // ecx
  __int64 v20; // rsi
  void **v21; // rbp
  void **v22; // rbx
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // r8d
  int v26; // r8d
  __int64 v27; // r9
  unsigned int v28; // ecx
  __int64 *v29; // r11
  __int64 *v30; // r10
  __int64 *v31; // r11
  __int64 *v32; // r11
  __int64 v33; // [rsp+8h] [rbp-50h]
  __int64 v34; // [rsp+10h] [rbp-48h]
  __int64 v35; // [rsp+10h] [rbp-48h]
  int v36; // [rsp+10h] [rbp-48h]
  int v37; // [rsp+10h] [rbp-48h]
  int v38; // [rsp+10h] [rbp-48h]
  unsigned int v39; // [rsp+1Ch] [rbp-3Ch]

  v2 = *(_QWORD **)(a1 + 16);
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 104LL);
  v4 = &v2[4 * *(unsigned int *)(a1 + 24)];
  v33 = v3 + 912;
  if ( v2 == v4 )
    goto LABEL_14;
  do
  {
    v10 = sub_14075F0(v3 + 632, *v2, v2[1]);
    v11 = sub_6F3470(*(_QWORD *)(a1 + 8) + 552LL, (const void *)*v2, v2[1]);
    v14 = *(_DWORD *)(v3 + 928);
    if ( !v14 )
      goto LABEL_6;
    v5 = *(_QWORD *)(v3 + 912);
    v6 = ((unsigned int)v11 >> 9) ^ ((unsigned int)v11 >> 4);
    v7 = (v14 - 1) & (((unsigned int)v11 >> 9) ^ ((unsigned int)v11 >> 4));
    v8 = (__int64 *)(v5 + 16LL * v7);
    v9 = *v8;
    if ( *v8 == v11 )
      goto LABEL_4;
    if ( v9 != -4096 )
    {
      v37 = 1;
      v31 = nullptr;
      while ( 1 )
      {
        if ( !v31 && v9 == -8192 )
          v31 = v8;
        v7 = (v14 - 1) & (v37 + v7);
        v8 = (__int64 *)(v5 + 16LL * v7);
        v9 = *v8;
        if ( v11 == *v8 )
          goto LABEL_4;
        if ( v9 == -4096 )
          break;
        ++v37;
      }
      v6 = (unsigned int)v6;
      if ( v31 )
        v8 = v31;
    }
    v12 = 3 * v14;
    v18 = *(_DWORD *)(v3 + 920) + 1;
    v13 = (unsigned int)(4 * v18);
    if ( (unsigned int)v13 < (unsigned int)v12 )
    {
      v23 = v14 - *(_DWORD *)(v3 + 924) - v18;
      v24 = v14 >> 3;
      if ( (unsigned int)v23 > (unsigned int)v24 )
      {
LABEL_18:
        v20 = *v8;
        goto LABEL_19;
      }
      v39 = v6;
      v35 = v11;
      sub_12F0670(v33, v14, (__int64)v8, v6, v23, v24);
      v25 = *(_DWORD *)(v3 + 928);
      if ( !v25 )
      {
LABEL_52:
        ++*(_DWORD *)(v3 + 920);
        BUG();
      }
      v26 = v25 - 1;
      v27 = *(_QWORD *)(v3 + 912);
      v28 = v26 & v39;
      v18 = *(_DWORD *)(v3 + 920) + 1;
      v11 = v35;
      v8 = (__int64 *)(v27 + 16LL * (v26 & v39));
      v20 = *v8;
      if ( v35 == *v8 )
        goto LABEL_19;
      if ( v20 != -4096 )
      {
        v36 = 1;
        v29 = nullptr;
        while ( 1 )
        {
          if ( v20 != -8192 || v29 )
            v8 = v29;
          v28 = v26 & (v36 + v28);
          v30 = (__int64 *)(v27 + 16LL * v28);
          v20 = *v30;
          if ( v11 == *v30 )
            break;
          if ( v20 == -4096 )
          {
LABEL_44:
            if ( v8 )
              goto LABEL_18;
            v8 = v30;
            goto LABEL_9;
          }
          ++v36;
          v29 = v8;
          v8 = (__int64 *)(v27 + 16LL * v28);
        }
LABEL_29:
        v8 = v30;
LABEL_19:
        *(_DWORD *)(v3 + 920) = v18;
        if ( v20 != -4096 )
          --*(_DWORD *)(v3 + 924);
        goto LABEL_21;
      }
    }
    else
    {
LABEL_6:
      v34 = v11;
      sub_12F0670(v33, 2 * v14, (__int64)v8, v6, v12, v13);
      v15 = *(_DWORD *)(v3 + 928);
      if ( !v15 )
        goto LABEL_52;
      v11 = v34;
      v16 = v15 - 1;
      v17 = *(_QWORD *)(v3 + 912);
      v18 = *(_DWORD *)(v3 + 920) + 1;
      v19 = v16 & (((unsigned int)v34 >> 9) ^ ((unsigned int)v34 >> 4));
      v8 = (__int64 *)(v17 + 16LL * v19);
      v20 = *v8;
      if ( v34 == *v8 )
        goto LABEL_19;
      if ( v20 != -4096 )
      {
        v38 = 1;
        v32 = nullptr;
        while ( 1 )
        {
          if ( v32 || v20 != -8192 )
            v8 = v32;
          v19 = v16 & (v38 + v19);
          v30 = (__int64 *)(v17 + 16LL * v19);
          v20 = *v30;
          if ( v11 == *v30 )
            goto LABEL_29;
          if ( v20 == -4096 )
            goto LABEL_44;
          ++v38;
          v32 = v8;
          v8 = (__int64 *)(v17 + 16LL * v19);
        }
      }
    }
LABEL_9:
    *(_DWORD *)(v3 + 920) = v18;
LABEL_21:
    *v8 = v11;
    v8[1] = 0;
LABEL_4:
    v2 += 4;
    v8[1] = v10;
  }
  while ( v4 != v2 );
  v21 = *(void ***)(a1 + 16);
  v22 = &v21[4 * *(unsigned int *)(a1 + 24)];
  while ( v21 != v22 )
  {
    while ( 1 )
    {
      v22 -= 4;
      if ( *v22 == v22 + 2 )
        break;
      operator delete(*v22);
      if ( v21 == v22 )
        goto LABEL_14;
    }
  }
LABEL_14:
  *(_DWORD *)(a1 + 24) = 0;
}
