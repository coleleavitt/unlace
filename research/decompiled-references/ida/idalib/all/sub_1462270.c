_DWORD *__fastcall sub_1462270(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v8; // rdi
  unsigned int v9; // esi
  __int64 v10; // r9
  unsigned int v11; // r8d
  _QWORD *v12; // rax
  __int64 v13; // rcx
  _DWORD *result; // rax
  int v15; // r11d
  _QWORD *v16; // r13
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rsi
  int v20; // eax
  int v21; // r8d
  __int64 v22; // r10
  unsigned int v23; // edi
  __int64 v24; // r9
  int v25; // eax
  int v26; // edi
  __int64 v27; // r9
  unsigned int v28; // r12d
  __int64 v29; // r8
  _QWORD *v30; // r10
  int v31; // esi
  _QWORD *v32; // r11
  int v33; // esi
  int v34; // [rsp+Ch] [rbp-2Ch]
  int v35; // [rsp+Ch] [rbp-2Ch]

  v8 = (__int64 *)(a1 + 3032);
  v9 = *(_DWORD *)(a1 + 3048);
  if ( !v9 )
    goto LABEL_20;
  v10 = *(_QWORD *)(a1 + 3032);
  v11 = (v9 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
  v12 = (_QWORD *)(v10 + 16LL * v11);
  v13 = *v12;
  if ( *v12 != a2 )
  {
    v15 = 1;
    v16 = nullptr;
    if ( v13 != -4096 )
    {
      while ( 1 )
      {
        if ( !v16 && v13 == -8192 )
          v16 = v12;
        v11 = (v9 - 1) & (v15 + v11);
        v12 = (_QWORD *)(v10 + 16LL * v11);
        v13 = *v12;
        if ( *v12 == a2 )
          goto LABEL_3;
        if ( v13 == -4096 )
          break;
        ++v15;
      }
      if ( v16 )
        v12 = v16;
    }
    a5 = 3 * v9;
    a4 = (unsigned int)(*(_DWORD *)(a1 + 3040) + 1);
    a6 = (unsigned int)(4 * a4);
    if ( (unsigned int)a6 < (unsigned int)a5 )
    {
      v17 = v9 - *(_DWORD *)(a1 + 3044) - (unsigned int)a4;
      v18 = v9 >> 3;
      if ( (unsigned int)v17 > (unsigned int)v18 )
      {
LABEL_7:
        v19 = *v12;
        goto LABEL_8;
      }
      v35 = a3;
      sub_1462070(v8, v9, a3, a4, v17, v18);
      v25 = *(_DWORD *)(a1 + 3048);
      if ( v25 )
      {
        v26 = v25 - 1;
        v27 = *(_QWORD *)(a1 + 3032);
        v19 = a2;
        v28 = (v25 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
        LODWORD(a4) = *(_DWORD *)(a1 + 3040) + 1;
        LODWORD(a3) = v35;
        v12 = (_QWORD *)(v27 + 16LL * v28);
        v29 = *v12;
        if ( *v12 != a2 )
        {
          if ( v29 != -4096 )
          {
            v30 = (_QWORD *)(v27 + 16LL * v28);
            v31 = 1;
            v12 = nullptr;
            while ( 1 )
            {
              if ( v29 == -8192 && !v12 )
                v12 = v30;
              v28 = v26 & (v31 + v28);
              v30 = (_QWORD *)(v27 + 16LL * v28);
              v29 = *v30;
              if ( *v30 == a2 )
              {
                v19 = a2;
                v12 = (_QWORD *)(v27 + 16LL * v28);
                goto LABEL_8;
              }
              if ( v29 == -4096 )
                break;
              ++v31;
            }
            if ( v12 )
              goto LABEL_7;
            v12 = (_QWORD *)(v27 + 16LL * v28);
          }
LABEL_23:
          *(_DWORD *)(a1 + 3040) = a4;
LABEL_10:
          *v12 = a2;
          *((_DWORD *)v12 + 2) = 0;
          goto LABEL_3;
        }
        goto LABEL_8;
      }
      goto LABEL_47;
    }
LABEL_20:
    v34 = a3;
    sub_1462070(v8, 2 * v9, a3, a4, a5, a6);
    v20 = *(_DWORD *)(a1 + 3048);
    if ( v20 )
    {
      v21 = v20 - 1;
      v22 = *(_QWORD *)(a1 + 3032);
      v19 = a2;
      v23 = (v20 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
      LODWORD(a4) = *(_DWORD *)(a1 + 3040) + 1;
      LODWORD(a3) = v34;
      v12 = (_QWORD *)(v22 + 16LL * v23);
      v24 = *v12;
      if ( *v12 != a2 )
      {
        if ( v24 != -4096 )
        {
          v32 = (_QWORD *)(v22 + 16LL * (v21 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4))));
          v33 = 1;
          v12 = nullptr;
          while ( 1 )
          {
            if ( !v12 && v24 == -8192 )
              v12 = v32;
            v23 = v21 & (v33 + v23);
            v32 = (_QWORD *)(v22 + 16LL * v23);
            v24 = *v32;
            if ( *v32 == a2 )
            {
              v19 = a2;
              v12 = (_QWORD *)(v22 + 16LL * v23);
              goto LABEL_8;
            }
            if ( v24 == -4096 )
              break;
            ++v33;
          }
          if ( v12 )
            goto LABEL_7;
          v12 = (_QWORD *)(v22 + 16LL * v23);
        }
        goto LABEL_23;
      }
LABEL_8:
      *(_DWORD *)(a1 + 3040) = a4;
      if ( v19 != -4096 )
        --*(_DWORD *)(a1 + 3044);
      goto LABEL_10;
    }
LABEL_47:
    ++*(_DWORD *)(a1 + 3040);
    BUG();
  }
LABEL_3:
  result = v12 + 1;
  *result = a3;
  return result;
}
