__int64 __fastcall sub_139DC10(__int64 a1, const char *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rbx
  unsigned int v9; // esi
  __int64 v10; // r14
  __int64 *v11; // rdi
  __int64 v12; // r8
  unsigned int v13; // ecx
  const char **v14; // rax
  const char *v15; // rdx
  unsigned int *v16; // r12
  __int64 result; // rax
  int v18; // eax
  int v19; // esi
  __int64 v20; // r8
  unsigned int v21; // ecx
  const char *v22; // rdi
  const char *v23; // rcx
  unsigned int v24; // r14d
  size_t v25; // r13
  unsigned int *v26; // rax
  int v27; // r10d
  const char **v28; // r11
  __int64 v29; // rcx
  __int64 v30; // r8
  int v31; // eax
  int v32; // ecx
  __int64 v33; // rdi
  unsigned int v34; // r13d
  const char *v35; // rsi
  const char **v36; // r9
  int v37; // r10d
  const char **v38; // r8
  int v39; // r9d
  int v40; // [rsp+0h] [rbp-6Ch] BYREF
  _QWORD v41[2]; // [rsp+4h] [rbp-68h] BYREF
  __int128 v42; // [rsp+14h] [rbp-58h]
  size_t v43; // [rsp+24h] [rbp-48h]

  if ( !a2 )
    return 0;
  v8 = *(_QWORD *)(a1 + 32);
  v9 = *(_DWORD *)(v8 + 2368);
  v10 = v8;
  v11 = (__int64 *)(v8 + 2352);
  if ( !v9 )
    goto LABEL_6;
  a6 = v9 - 1;
  v12 = *(_QWORD *)(v8 + 2352);
  v13 = a6 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
  v14 = (const char **)(v12 + 16LL * v13);
  v15 = *v14;
  if ( *v14 != a2 )
  {
    v27 = 1;
    v28 = nullptr;
    if ( v15 != (const char *)-4096LL )
    {
      while ( 1 )
      {
        if ( !v28 && v15 == (const char *)-8192LL )
          v28 = v14;
        v13 = a6 & (v27 + v13);
        v14 = (const char **)(v12 + 16LL * v13);
        v15 = *v14;
        if ( *v14 == a2 )
          goto LABEL_4;
        if ( v15 == (const char *)-4096LL )
          break;
        ++v27;
      }
      if ( v28 )
        v14 = v28;
    }
    a4 = 3 * v9;
    a3 = (unsigned int)(*(_DWORD *)(v8 + 2360) + 1);
    a5 = (unsigned int)(4 * a3);
    if ( (unsigned int)a5 < (unsigned int)a4 )
    {
      v29 = v9 - *(_DWORD *)(v8 + 2364) - (unsigned int)a3;
      v30 = v9 >> 3;
      if ( (unsigned int)v29 > (unsigned int)v30 )
      {
        v23 = *v14;
        goto LABEL_9;
      }
      sub_139DA10(v11, v9, a3, v29, v30, a6);
      v31 = *(_DWORD *)(v8 + 2368);
      if ( v31 )
      {
        v32 = v31 - 1;
        v33 = *(_QWORD *)(v8 + 2352);
        v34 = (v31 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
        LODWORD(a3) = *(_DWORD *)(v8 + 2360) + 1;
        v14 = (const char **)(v33 + 16LL * v34);
        v35 = *v14;
        if ( *v14 != a2 )
        {
          if ( v35 == (const char *)-4096LL )
          {
LABEL_21:
            *(_DWORD *)(v8 + 2360) = a3;
            v8 = *(_QWORD *)(a1 + 32);
LABEL_11:
            *v14 = a2;
            v16 = (unsigned int *)(v14 + 1);
            *((_DWORD *)v14 + 2) = 0;
            goto LABEL_12;
          }
          v38 = (const char **)(v33 + 16LL * v34);
          v39 = 1;
          v14 = nullptr;
          while ( 1 )
          {
            if ( !v14 && v35 == (const char *)-8192LL )
              v14 = v38;
            v34 = v32 & (v39 + v34);
            v38 = (const char **)(v33 + 16LL * v34);
            v35 = *v38;
            if ( *v38 == a2 )
            {
              v23 = a2;
              v14 = (const char **)(v33 + 16LL * v34);
              v8 = *(_QWORD *)(a1 + 32);
              goto LABEL_9;
            }
            if ( v35 == (const char *)-4096LL )
              break;
            ++v39;
          }
          if ( !v14 )
          {
            v14 = (const char **)(v33 + 16LL * v34);
            goto LABEL_21;
          }
LABEL_46:
          v23 = *v14;
          v8 = *(_QWORD *)(a1 + 32);
LABEL_9:
          *(_DWORD *)(v10 + 2360) = a3;
          if ( v23 != (const char *)-4096LL )
            --*(_DWORD *)(v10 + 2364);
          goto LABEL_11;
        }
        goto LABEL_8;
      }
      goto LABEL_53;
    }
LABEL_6:
    sub_139DA10(v11, 2 * v9, a3, a4, a5, a6);
    v18 = *(_DWORD *)(v8 + 2368);
    if ( v18 )
    {
      v19 = v18 - 1;
      v20 = *(_QWORD *)(v8 + 2352);
      LODWORD(a3) = *(_DWORD *)(v8 + 2360) + 1;
      v21 = (v18 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
      v14 = (const char **)(v20 + 16LL * v21);
      v22 = *v14;
      if ( *v14 != a2 )
      {
        if ( v22 == (const char *)-4096LL )
          goto LABEL_21;
        v36 = (const char **)(v20 + 16LL * (v19 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4))));
        v37 = 1;
        v14 = nullptr;
        while ( 1 )
        {
          if ( !v14 && v22 == (const char *)-8192LL )
            v14 = v36;
          v21 = v19 & (v37 + v21);
          v36 = (const char **)(v20 + 16LL * v21);
          v22 = *v36;
          if ( *v36 == a2 )
          {
            v23 = a2;
            v14 = v36;
            v8 = *(_QWORD *)(a1 + 32);
            goto LABEL_9;
          }
          if ( v22 == (const char *)-4096LL )
            break;
          ++v37;
        }
        if ( !v14 )
        {
          v14 = (const char **)(v20 + 16LL * v21);
          goto LABEL_21;
        }
        goto LABEL_46;
      }
LABEL_8:
      v8 = *(_QWORD *)(a1 + 32);
      v23 = a2;
      goto LABEL_9;
    }
LABEL_53:
    ++*(_DWORD *)(v8 + 2360);
    BUG();
  }
LABEL_4:
  v16 = (unsigned int *)(v14 + 1);
  result = *((unsigned int *)v14 + 2);
  if ( !(_DWORD)result )
  {
LABEL_12:
    v24 = *(_DWORD *)(v8 + 2360);
    *v16 = v24;
    v25 = strlen(a2);
    v42 = 0;
    v43 = v25;
    v41[0] = 6;
    v41[1] = v24;
    v40 = 6;
    v26 = sub_A25EE0(v8 + 1496, &v40);
    sub_A26740(v8 + 1312, *v26, (__int64)v41, 5, (unsigned __int64)a2, v25, 0);
    return *v16;
  }
  return result;
}
