__int64 __fastcall sub_2106050(__int64 *a1, __int64 a2, __int64 *a3)
{
  int v3; // r13d
  __int64 v5; // rax
  int v8; // r13d
  int v9; // ecx
  __int64 v10; // rdi
  unsigned __int64 v11; // r12
  __int64 v12; // rax
  char *v13; // rcx
  unsigned int v14; // ebx
  bool v15; // r11
  bool v16; // r10
  __int64 v17; // r9
  size_t v18; // r15
  bool v19; // al
  __int64 v20; // r12
  const void *v21; // rsi
  bool v22; // al
  __int64 v23; // r9
  __int64 v24; // r9
  _QWORD *v25; // rdx
  _QWORD *v26; // r8
  int i; // r15d
  __int64 v28; // rax
  bool v29; // al
  _QWORD *v30; // r8
  __int64 v31; // rsi
  bool v32; // al
  unsigned int v33; // ebx
  int v34; // eax
  bool v35; // al
  bool v36; // al
  __int64 v37; // [rsp+0h] [rbp-B8h]
  _QWORD *v38; // [rsp+8h] [rbp-B0h]
  _QWORD *v39; // [rsp+8h] [rbp-B0h]
  int v40; // [rsp+10h] [rbp-A8h]
  __int64 v41; // [rsp+10h] [rbp-A8h]
  bool v42; // [rsp+18h] [rbp-A0h]
  __int64 v43; // [rsp+20h] [rbp-98h]
  bool v44; // [rsp+20h] [rbp-98h]
  char *v45; // [rsp+20h] [rbp-98h]
  bool v46; // [rsp+28h] [rbp-90h]
  _QWORD *v47; // [rsp+28h] [rbp-90h]
  _QWORD *v48; // [rsp+28h] [rbp-90h]
  __int64 v49; // [rsp+28h] [rbp-90h]
  bool v50; // [rsp+37h] [rbp-81h]
  bool v51; // [rsp+37h] [rbp-81h]
  char *v52; // [rsp+38h] [rbp-80h]
  bool v53; // [rsp+38h] [rbp-80h]
  _QWORD v54[4]; // [rsp+40h] [rbp-78h] BYREF
  _QWORD v55[11]; // [rsp+60h] [rbp-58h] BYREF

  v3 = *((_DWORD *)a1 + 4);
  if ( !v3 )
  {
    *a3 = 0;
    return 0;
  }
  v5 = *a1;
  v8 = v3 - 1;
  v9 = *(_DWORD *)(a2 + 4);
  v54[2] = 0;
  v37 = v5;
  v54[0] = -1;
  v54[1] = -1;
  v10 = *(_QWORD *)(a2 + 8);
  v55[0] = 0xFFFFFFFEFFFFFFFELL;
  LODWORD(v5) = *(_DWORD *)a2;
  v55[1] = -2;
  v55[2] = 0;
  v11 = ((0xBF58476D1CE4E5B9LL * ((unsigned int)(1512728442 * v5) | ((unsigned __int64)(unsigned int)(37 * v9) << 32))) >> 31)
      ^ (0xBF58476D1CE4E5B9LL * ((unsigned int)(1512728442 * v5) | ((unsigned __int64)(unsigned int)(37 * v9) << 32)));
  v12 = sub_2248890(v10, *(_QWORD *)(a2 + 16));
  v13 = *(char **)(a2 + 8);
  v14 = v8 & (((0xBF58476D1CE4E5B9LL * ((unsigned int)v11 | (unsigned __int64)(v12 << 32))) >> 31) ^ (484763065 * v11));
  v15 = v13 + 2 == nullptr;
  v16 = v13 + 1 == nullptr;
  if ( *(_QWORD *)(a2 + 16) )
  {
    v40 = 1;
    v17 = 0;
    v18 = *(_QWORD *)(a2 + 16);
    while ( 1 )
    {
      v19 = v16;
      v20 = v37 + 32LL * v14;
      v21 = *(const void **)(v20 + 8);
      if ( v21 != (const void *)-1LL )
      {
        if ( v21 == (const void *)-2LL )
        {
          v19 = v15;
        }
        else
        {
          if ( v18 != *(_QWORD *)(v20 + 16) )
            goto LABEL_8;
          v53 = v15;
          v51 = v16;
          v49 = v17;
          v45 = v13;
          v34 = memcmp(v13, v21, v18);
          v13 = v45;
          v17 = v49;
          v16 = v51;
          v15 = v53;
          v19 = v34 == 0;
        }
      }
      if ( v19 && *(_DWORD *)(v20 + 4) == *(_DWORD *)(a2 + 4) && *(_DWORD *)a2 == *(_DWORD *)v20 )
        goto LABEL_16;
LABEL_8:
      v43 = v17;
      v52 = v13;
      v50 = v15;
      v46 = v16;
      v22 = sub_21001D0(v20, (__int64)v54);
      v23 = v43;
      if ( v22 )
        goto LABEL_9;
      v36 = sub_21001D0(v20, (__int64)v55);
      v17 = v43;
      v16 = v46;
      v15 = v50;
      v13 = v52;
      if ( !v43 && v36 )
        v17 = v37 + 32LL * v14;
      v14 = v8 & (v40 + v14);
      ++v40;
    }
  }
  v24 = 0;
  v25 = v54;
  v26 = v55;
  for ( i = 1; ; ++i )
  {
    v20 = v37 + 32LL * v14;
    v28 = *(_QWORD *)(v20 + 8);
    if ( v28 == -1 )
    {
      v35 = v16;
      goto LABEL_28;
    }
    if ( v28 == -2 )
    {
      v35 = v15;
LABEL_28:
      if ( !v35 )
        goto LABEL_22;
      goto LABEL_21;
    }
    if ( *(_QWORD *)(v20 + 16) )
      goto LABEL_22;
LABEL_21:
    if ( *(_DWORD *)(a2 + 4) == *(_DWORD *)(v20 + 4) && *(_DWORD *)a2 == *(_DWORD *)v20 )
    {
LABEL_16:
      *a3 = v20;
      return 1;
    }
LABEL_22:
    v47 = v26;
    v44 = v15;
    v42 = v16;
    v41 = v24;
    v38 = v25;
    v29 = sub_21001D0(v37 + 32LL * v14, (__int64)v25);
    v23 = v41;
    v30 = v47;
    if ( v29 )
      break;
    v31 = (__int64)v47;
    v48 = v38;
    v39 = v30;
    v32 = sub_21001D0(v20, v31);
    v26 = v39;
    v16 = v42;
    v15 = v44;
    v25 = v48;
    if ( v41 || !v32 )
      v20 = v41;
    v33 = i + v14;
    v24 = v20;
    v14 = v8 & v33;
  }
LABEL_9:
  if ( !v23 )
    v23 = v20;
  *a3 = v23;
  return 0;
}
