__int64 __fastcall sub_139F910(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // r13d
  __int64 v9; // r14
  unsigned __int64 v10; // r12
  __int64 v11; // rbp
  unsigned int v12; // esi
  __int64 *v13; // rdi
  __int64 v14; // r9
  unsigned int v15; // r13d
  unsigned int v16; // r8d
  unsigned __int64 *v17; // rax
  unsigned __int64 v18; // rdx
  _QWORD *v19; // r15
  __int64 v20; // rax
  unsigned int *v21; // rax
  int v22; // r11d
  unsigned __int64 *v23; // r15
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned __int64 v26; // rsi
  int v27; // eax
  int v28; // r9d
  __int64 v29; // r8
  unsigned int v30; // edi
  unsigned __int64 v31; // r10
  int v32; // eax
  int v33; // edi
  __int64 v34; // r9
  unsigned int v35; // r13d
  unsigned __int64 v36; // r8
  int v37; // esi
  unsigned __int64 *v38; // r10
  unsigned __int64 *v39; // r11
  int v40; // r13d
  __int64 v41; // [rsp+0h] [rbp-78h]
  __int64 v42; // [rsp+0h] [rbp-78h]
  __int64 v43; // [rsp+0h] [rbp-78h]
  int v44[4]; // [rsp+Ch] [rbp-6Ch] BYREF
  int v45; // [rsp+1Ch] [rbp-5Ch] BYREF
  _QWORD v46[11]; // [rsp+20h] [rbp-58h] BYREF

  v6 = 0;
  v44[0] = a2;
  if ( a4 )
  {
    v9 = *(_QWORD *)(a1 + 8);
    v10 = a3;
    v11 = *(_QWORD *)(v9 + 32);
    v12 = *(_DWORD *)(v11 + 2392);
    v13 = (__int64 *)(v11 + 2376);
    if ( !v12 )
      goto LABEL_14;
    v14 = *(_QWORD *)(v11 + 2376);
    v15 = ((unsigned int)a3 >> 9) ^ ((unsigned int)a3 >> 4);
    v16 = (v12 - 1) & v15;
    v17 = (unsigned __int64 *)(v14 + 32LL * v16);
    v18 = *v17;
    if ( *v17 == v10 )
    {
LABEL_5:
      v6 = *((_DWORD *)v17 + 2);
      v19 = v17 + 1;
      if ( v6 )
        goto LABEL_2;
LABEL_6:
      v20 = *(unsigned int *)(v11 + 2384);
      v19[2] = a4;
      v19[1] = v10;
      *(_DWORD *)v19 = v20;
      v41 = a4;
      v46[0] = 4;
      v46[1] = v20;
      v46[2] = a4;
      v45 = 4;
      v21 = sub_A25EE0(v11 + 1496, &v45);
      sub_A26740(v11 + 1312, *v21, (__int64)v46, 3, v10, v41, 0);
      v6 = *(_DWORD *)v19;
      goto LABEL_2;
    }
    v22 = 1;
    v23 = nullptr;
    if ( v18 != -4096 )
    {
      while ( 1 )
      {
        if ( !v23 && v18 == -8192 )
          v23 = v17;
        v16 = (v12 - 1) & (v22 + v16);
        v17 = (unsigned __int64 *)(v14 + 32LL * v16);
        v18 = *v17;
        if ( *v17 == v10 )
          goto LABEL_5;
        if ( v18 == -4096 )
          break;
        ++v22;
      }
      if ( v23 )
        v17 = v23;
    }
    a5 = 3 * v12;
    a3 = (unsigned int)(*(_DWORD *)(v11 + 2384) + 1);
    a6 = (unsigned int)(4 * a3);
    if ( (unsigned int)a6 < (unsigned int)a5 )
    {
      v24 = v12 - *(_DWORD *)(v11 + 2388) - (unsigned int)a3;
      v25 = v12 >> 3;
      if ( (unsigned int)v24 > (unsigned int)v25 )
      {
LABEL_10:
        v26 = *v17;
        goto LABEL_11;
      }
      v43 = a4;
      sub_139E900(v13, v12, a3, a4, v24, v25);
      v32 = *(_DWORD *)(v11 + 2392);
      if ( v32 )
      {
        v33 = v32 - 1;
        v34 = *(_QWORD *)(v11 + 2376);
        v26 = v10;
        v35 = (v32 - 1) & v15;
        LODWORD(a3) = *(_DWORD *)(v11 + 2384) + 1;
        a4 = v43;
        v17 = (unsigned __int64 *)(v34 + 32LL * v35);
        v36 = *v17;
        if ( *v17 == v10 )
          goto LABEL_11;
        v37 = 1;
        v38 = nullptr;
        if ( v36 != -4096 )
        {
          while ( 1 )
          {
            if ( v36 == -8192 && !v38 )
              v38 = v17;
            v35 = v33 & (v37 + v35);
            v17 = (unsigned __int64 *)(v34 + 32LL * v35);
            v36 = *v17;
            if ( *v17 == v10 )
            {
              v26 = v10;
              goto LABEL_11;
            }
            if ( v36 == -4096 )
              break;
            ++v37;
          }
          if ( v38 )
          {
            v26 = *v38;
            v17 = v38;
LABEL_11:
            *(_DWORD *)(v11 + 2384) = a3;
            if ( v26 != -4096 )
              --*(_DWORD *)(v11 + 2388);
            goto LABEL_13;
          }
        }
LABEL_17:
        *(_DWORD *)(v11 + 2384) = a3;
LABEL_13:
        *v17 = v10;
        v19 = v17 + 1;
        v11 = *(_QWORD *)(v9 + 32);
        *((_DWORD *)v17 + 2) = 0;
        v17[2] = 0;
        v17[3] = 0;
        goto LABEL_6;
      }
    }
    else
    {
LABEL_14:
      v42 = a4;
      sub_139E900(v13, 2 * v12, a3, a4, a5, a6);
      v27 = *(_DWORD *)(v11 + 2392);
      if ( v27 )
      {
        v28 = v27 - 1;
        v29 = *(_QWORD *)(v11 + 2376);
        v26 = v10;
        LODWORD(a3) = *(_DWORD *)(v11 + 2384) + 1;
        a4 = v42;
        v30 = (v27 - 1) & (((unsigned int)v10 >> 9) ^ ((unsigned int)v10 >> 4));
        v17 = (unsigned __int64 *)(v29 + 32LL * v30);
        v31 = *v17;
        if ( *v17 == v10 )
          goto LABEL_11;
        if ( v31 != -4096 )
        {
          v39 = (unsigned __int64 *)(v29 + 32LL * (v28 & (((unsigned int)v10 >> 9) ^ ((unsigned int)v10 >> 4))));
          v40 = 1;
          v17 = nullptr;
          while ( 1 )
          {
            if ( !v17 && v31 == -8192 )
              v17 = v39;
            v30 = v28 & (v40 + v30);
            v39 = (unsigned __int64 *)(v29 + 32LL * v30);
            v31 = *v39;
            if ( *v39 == v10 )
            {
              v26 = v10;
              v17 = (unsigned __int64 *)(v29 + 32LL * v30);
              goto LABEL_11;
            }
            if ( v31 == -4096 )
              break;
            ++v40;
          }
          if ( v17 )
            goto LABEL_10;
          v17 = (unsigned __int64 *)(v29 + 32LL * v30);
        }
        goto LABEL_17;
      }
    }
    ++*(_DWORD *)(v11 + 2384);
    BUG();
  }
LABEL_2:
  *sub_A25EE0(a1 + 64, v44) = v6;
  std::_V2::system_category((std::_V2 *)(a1 + 64));
  return 0;
}
