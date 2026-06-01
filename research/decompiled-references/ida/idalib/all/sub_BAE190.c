__int64 __fastcall sub_BAE190(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int8 v6; // r15
  __int64 v7; // rbp
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  __int64 result; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 *v13; // r13
  __int64 *v14; // r12
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r14
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r13
  __int64 *v29; // r12
  __int64 *v30; // r14
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  unsigned __int8 v40; // [rsp+Ch] [rbp-3Ch]

  while ( 1 )
  {
    v6 = a4;
    v7 = a2;
    v8 = *(_QWORD *)(a1 + 120);
    v40 = a3;
    if ( !v8 )
    {
      a2 = *(_QWORD *)(a1 + 96);
      sub_A794E0((__int64 *)(a2 + 88), a2, a3, a4, a5, a6);
      v8 = *(_QWORD *)(a1 + 120);
    }
    v9 = v8 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v9 )
      return 0;
    if ( (*(_BYTE *)(v9 + 72) & 1) == 0 )
    {
      v11 = *(unsigned int *)(v9 + 24);
      v12 = *(_QWORD *)(v9 + 16);
      v13 = (__int64 *)(v12 + 8 * v11);
LABEL_8:
      if ( (*(_BYTE *)(v9 + 72) & 1) != 0 )
      {
        sub_BA8900(a1);
        v9 = *(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL;
      }
      v14 = *(__int64 **)(v9 + 16);
      goto LABEL_11;
    }
    sub_BA8900(a1);
    v12 = *(_QWORD *)(a1 + 120);
    v9 = v12 & 0xFFFFFFFFFFFFFFF8LL;
    a2 = *(unsigned int *)((v12 & 0xFFFFFFFFFFFFFFF8LL) + 24);
    v11 = *(_QWORD *)((v12 & 0xFFFFFFFFFFFFFFF8LL) + 16);
    v13 = (__int64 *)(v11 + 8 * a2);
    if ( !v12 )
    {
      a2 = *(_QWORD *)(a1 + 96);
      sub_A794E0((__int64 *)(a2 + 88), a2, 0, v11, a5, a6);
      v9 = *(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL;
    }
    v14 = nullptr;
    if ( v9 )
      goto LABEL_8;
LABEL_11:
    if ( v13 != v14 )
      break;
LABEL_21:
    if ( v40 )
    {
      v28 = sub_BAD170(a1, a2, v12, v11, a5, a6);
      if ( v28 )
      {
LABEL_23:
        v29 = *(__int64 **)(v28 + 104);
        v30 = &v29[*(unsigned int *)(v28 + 112)];
        if ( v29 == v30 )
          goto LABEL_26;
        while ( 1 )
        {
          v31 = sub_B8C330(a1);
          a2 = v7;
          result = sub_A7F320(v31, v7, *v29, v32, v33, v34);
          if ( (_BYTE)result )
            return result;
          if ( v30 == ++v29 )
          {
LABEL_26:
            while ( 1 )
            {
              v28 = *(_QWORD *)(v28 + 128);
              if ( !v28 )
                goto LABEL_30;
              if ( *(char *)(v28 + 28) >= 0 && (*(_BYTE *)(v28 + 8) & 6) == 0 )
                goto LABEL_23;
            }
          }
        }
      }
    }
LABEL_30:
    if ( !sub_BAB630(a1, a2, v12, v11, a5, a6) )
      return 0;
    v39 = sub_BAB630(a1, a2, v35, v36, v37, v38);
    a3 = v40;
    a4 = v6;
    a2 = v7;
    a1 = v39;
  }
  if ( v6 )
  {
    while ( 1 )
    {
      v23 = *v14;
      v24 = sub_B8C330(a1);
      if ( (unsigned __int8)sub_A7F320(v24, v7, v23, v25, v26, v27) )
        break;
      v19 = sub_B8C330(a1);
      a2 = v23;
      if ( (unsigned __int8)sub_A7F320(v19, v23, v7, v20, v21, v22) )
        break;
      if ( v13 == ++v14 )
        goto LABEL_21;
    }
  }
  else
  {
    while ( 1 )
    {
      v15 = sub_B8C330(a1);
      a2 = v7;
      if ( (unsigned __int8)sub_A7F320(v15, v7, *v14, v16, v17, v18) )
        break;
      if ( v13 == ++v14 )
        goto LABEL_21;
    }
  }
  return 1;
}
