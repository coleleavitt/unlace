__int64 __fastcall sub_170460(_QWORD *a1)
{
  __int64 v1; // rcx
  __int64 v2; // rax
  int v3; // r15d
  __int64 v4; // r13
  _QWORD *i; // r14
  __int64 v6; // rcx
  __int64 v7; // r10
  int v8; // edi
  __int64 v9; // rdx
  _QWORD *v11; // rbp
  int v12; // r14d
  __int64 v13; // r13
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r12
  __int64 v18; // rax
  int v19; // r15d
  __int64 v20; // rbx
  __int64 v21; // rbp
  char v22; // r14
  __int64 v23; // r8
  _QWORD *v24; // r15
  __int64 v25; // r8
  __int64 v26; // r10
  __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // [rsp+8h] [rbp-70h]
  __int64 v30; // [rsp+8h] [rbp-70h]
  int v31; // [rsp+8h] [rbp-70h]
  __int64 v32; // [rsp+8h] [rbp-70h]
  __int64 v33; // [rsp+8h] [rbp-70h]
  _QWORD *v34; // [rsp+10h] [rbp-68h]
  __int64 v35; // [rsp+10h] [rbp-68h]
  unsigned __int8 v36; // [rsp+18h] [rbp-60h]
  __int64 v37; // [rsp+18h] [rbp-60h]
  __int64 v38; // [rsp+20h] [rbp-58h]
  __int64 v39; // [rsp+28h] [rbp-50h]
  int v40; // [rsp+34h] [rbp-44h]
  __int64 v41; // [rsp+38h] [rbp-40h]

  v1 = a1[8];
  if ( (*(_BYTE *)(v1 + 1) & 0x10) == 0 )
    return 0;
  v2 = a1[44];
  if ( (int)v2 <= 0 )
    return 0;
  v3 = 0;
  v4 = 0;
  for ( i = a1; ; v1 = i[8] )
  {
    v9 = *(unsigned int *)(i[43] + v4);
    if ( (unsigned int)v9 >= *(_DWORD *)(v1 + 64) )
    {
LABEL_42:
      if ( !under_debugger )
        sub_3835A0(52719);
      BUG();
    }
    ++v3;
    v7 = *(_QWORD *)(*(_QWORD *)(v1 + 528) + 8 * v9);
    v6 = *(_QWORD *)(v7 + 56);
    if ( v6 )
    {
      if ( *(_DWORD *)v6 != 55 && *(char *)(v6 + 4) >= 0 )
        goto LABEL_8;
      v29 = v7;
      v6 = sub_122410(*(_QWORD *)(v6 + 16));
      v2 = i[44];
      if ( v6 )
        break;
    }
    v4 += 4;
    if ( (int)v2 <= v3 )
      return 0;
LABEL_10:
    ;
  }
  v7 = v29;
LABEL_8:
  v8 = v2;
  if ( *(_DWORD *)(v7 + 376) != 1 )
  {
LABEL_9:
    v4 += 4;
    if ( v8 <= v3 )
      return 0;
    goto LABEL_10;
  }
  if ( (int)v2 <= v3 )
    return 0;
  v41 = v4;
  v11 = i;
  v12 = v3;
  v40 = v3;
  v39 = v6;
  v13 = 4LL * v3;
  v38 = v7;
  while ( 1 )
  {
    v14 = v11[8];
    v15 = *(unsigned int *)(v11[43] + v13);
    if ( (unsigned int)v15 >= *(_DWORD *)(v14 + 64) )
      goto LABEL_42;
    v16 = *(_QWORD *)(*(_QWORD *)(v14 + 528) + 8 * v15);
    v17 = *(_QWORD *)(v16 + 56);
    if ( !v17 )
      goto LABEL_19;
    if ( *(_DWORD *)v17 != 55 && *(char *)(v17 + 4) >= 0
      || (v30 = *(_QWORD *)(*(_QWORD *)(v14 + 528) + 8 * v15),
          v18 = sub_122410(*(_QWORD *)(v17 + 16)),
          v16 = v30,
          (v17 = v18) != 0) )
    {
      if ( *(_DWORD *)(v16 + 376) == 1 )
      {
        v34 = v11;
        v19 = 0;
        v31 = v12;
        v20 = v39;
        v37 = v16;
        v21 = *(_QWORD *)(*(_QWORD *)(v38 + 480) + 112LL);
        do
        {
          if ( sub_11FBE0((_BYTE *)v20, v21)
            || (v22 = sub_1255D0((unsigned __int8 *)v20, v21, (unsigned int *)v17, 4u)) == 0 )
          {
            v12 = v31;
            v11 = v34;
            goto LABEL_18;
          }
          ++v19;
          if ( sub_11FDC0((_BYTE *)v20, 1) )
            v19 = 6;
          v20 = sub_122410(*(_QWORD *)(v20 + 16));
          if ( !v20 )
          {
            v23 = v37;
            v11 = v34;
            v36 = v22;
            v12 = v31;
            if ( v19 > 5 && *(_QWORD *)(v23 + 48) == v17 )
            {
              v32 = v23;
              v24 = v34;
              sub_168330(v23, v17, v38);
              v25 = v32;
              v26 = v38;
              goto LABEL_38;
            }
            goto LABEL_18;
          }
          v17 = sub_122410(*(_QWORD *)(v17 + 16));
        }
        while ( v17 );
        v28 = v37;
        v11 = v34;
        v36 = v22;
        v12 = v31;
        if ( v19 > 5 && *(_QWORD *)(v20 + 8) == *(_QWORD *)(v38 + 48) )
          break;
      }
    }
LABEL_18:
    v2 = v11[44];
LABEL_19:
    ++v12;
    v8 = v2;
    v13 += 4;
    if ( v12 >= (int)v2 )
    {
      v3 = v40;
      v4 = v41;
      i = v11;
      goto LABEL_9;
    }
  }
  v35 = v28;
  v24 = v11;
  sub_168330(v38, *(_QWORD *)(v20 + 8), v28);
  v26 = v38;
  v25 = v35;
LABEL_38:
  v33 = v26;
  sub_669A0(v24[8], 1u, (__int64)"OPTIMIZE_IDENTICAL_BLOCKS(%d, %d)", *(_DWORD *)(v26 + 72), *(_DWORD *)(v25 + 72));
  sub_13F6F0((unsigned __int64 **)(v33 + 424));
  *(_BYTE *)(v33 + 440) = 1;
  sub_13F6F0((unsigned __int64 **)(v33 + 456));
  v27 = *(_QWORD *)(v33 + 64);
  *(_BYTE *)(v33 + 472) = 1;
  *(_DWORD *)(v27 + 4) &= ~8u;
  *(_DWORD *)v24[8] |= 0x400u;
  return v36;
}
