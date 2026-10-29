__int64 __fastcall sub_17961C0(__int64 a1, int *a2)
{
  __int64 *v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r12
  __int64 v10; // rax
  unsigned int v11; // esi
  unsigned int v12; // r13d
  unsigned int v13; // edi
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 v17; // r12
  unsigned __int8 *v18; // rbp
  _BYTE *v19; // rdx
  __int64 v20; // rax
  unsigned __int8 *v21; // rbp
  __int64 v22; // r13
  _BYTE *v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  int v26; // eax
  __int64 v27; // rax
  __int64 v28; // r12
  __int64 v29; // r14
  __int64 v30; // r12
  void *v31; // rdi
  int v32; // edx
  int v33; // r8d
  unsigned int v34; // edi
  __int64 v35; // rsi
  __int64 v36; // rdx
  int v37; // eax
  __int64 v38; // rax
  __int64 v39; // r13
  __int64 v40; // r15
  __int64 v41; // r13
  void *v42; // rdi
  int v43; // r11d
  __int64 *v44; // r10
  __int64 v45; // r8
  int v46; // edx
  int v47; // edi
  unsigned int v48; // r13d
  int v49; // r10d
  __int64 *v50; // r9
  int v51; // r11d
  __int64 *v52; // r10
  __int64 v53; // [rsp+8h] [rbp-40h]
  __int64 v54; // [rsp+8h] [rbp-40h]

  if ( !*(_BYTE *)(a1 + 120) )
  {
    if ( !*(_BYTE *)(a1 + 132) )
      return a1;
    v9 = sub_168B9E0((_QWORD *)a1);
    v10 = *(_QWORD *)(a1 + 16);
    if ( v10 )
      v10 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v10 + 32LL))(*(_QWORD *)(a1 + 16));
    v11 = *(_DWORD *)(v9 + 16);
    if ( !v11 )
      goto LABEL_19;
    v8 = v11 - 1;
    v12 = ((unsigned int)v10 >> 9) ^ ((unsigned int)v10 >> 4);
    v13 = v8 & v12;
    v5 = (__int64 *)(*(_QWORD *)v9 + 32LL * ((unsigned int)v8 & v12));
    v14 = *v5;
    if ( v10 == *v5 )
    {
LABEL_8:
      v15 = v5[1];
LABEL_9:
      v16 = *a2;
      v17 = v15 + 32LL * *(unsigned int *)(a1 + 128);
      v18 = *(unsigned __int8 **)(v17 + 8);
      if ( !v18 )
      {
        v36 = *(_QWORD *)(v17 + 16);
        v37 = *(_DWORD *)(v36 + 14976);
        if ( v37 )
        {
          v38 = (unsigned int)(v37 - 1);
          *(_DWORD *)(v36 + 14976) = v38;
          v18 = *(unsigned __int8 **)(v36 + 8 * v38 + 14848);
          v39 = *((unsigned int *)v18 + 134);
          *v18 = 0;
          v40 = *((_QWORD *)v18 + 66);
          *((_DWORD *)v18 + 106) = 0;
          v41 = v40 + (v39 << 6);
          while ( v40 != v41 )
          {
            while ( 1 )
            {
              v41 -= 64;
              v42 = *(void **)(v41 + 24);
              if ( v42 == (void *)(v41 + 40) )
                break;
              operator delete(v42);
              if ( v40 == v41 )
                goto LABEL_33;
            }
          }
LABEL_33:
          *((_DWORD *)v18 + 134) = 0;
        }
        else
        {
          v18 = (unsigned __int8 *)operator new(0x3A0u);
          *v18 = 0;
          *((_QWORD *)v18 + 12) = v18 + 112;
          *((_QWORD *)v18 + 16) = v18 + 144;
          *((_QWORD *)v18 + 20) = v18 + 176;
          *((_QWORD *)v18 + 24) = v18 + 208;
          *((_QWORD *)v18 + 28) = v18 + 240;
          *((_QWORD *)v18 + 32) = v18 + 272;
          *((_QWORD *)v18 + 36) = v18 + 304;
          *((_QWORD *)v18 + 40) = v18 + 336;
          *((_QWORD *)v18 + 44) = v18 + 368;
          *((_QWORD *)v18 + 48) = v18 + 400;
          *((_QWORD *)v18 + 52) = v18 + 432;
          *((_QWORD *)v18 + 13) = 0;
          v18[112] = 0;
          *((_QWORD *)v18 + 17) = 0;
          v18[144] = 0;
          *((_QWORD *)v18 + 21) = 0;
          v18[176] = 0;
          *((_QWORD *)v18 + 25) = 0;
          v18[208] = 0;
          *((_QWORD *)v18 + 29) = 0;
          v18[240] = 0;
          *((_QWORD *)v18 + 33) = 0;
          v18[272] = 0;
          *((_QWORD *)v18 + 37) = 0;
          v18[304] = 0;
          *((_QWORD *)v18 + 41) = 0;
          v18[336] = 0;
          *((_QWORD *)v18 + 45) = 0;
          v18[368] = 0;
          *((_QWORD *)v18 + 49) = 0;
          v18[400] = 0;
          *((_QWORD *)v18 + 53) = 0x800000000LL;
          *((_QWORD *)v18 + 66) = v18 + 544;
          *((_QWORD *)v18 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v17 + 8) = v18;
      }
      v18[*v18 + 1] = 2;
      v19 = *(_BYTE **)(v17 + 8);
      v20 = (unsigned __int8)*v19;
      *v19 = v20 + 1;
      *(_QWORD *)&v19[8 * v20 + 16] = v16;
      return a1;
    }
    v43 = 1;
    v44 = nullptr;
    if ( v14 != -4096 )
    {
      while ( 1 )
      {
        if ( !v44 && v14 == -8192 )
          v44 = v5;
        v13 = v8 & (v43 + v13);
        v5 = (__int64 *)(*(_QWORD *)v9 + 32LL * v13);
        v14 = *v5;
        if ( v10 == *v5 )
          goto LABEL_8;
        if ( v14 == -4096 )
          break;
        ++v43;
      }
      if ( v44 )
        v5 = v44;
    }
    v6 = (unsigned int)(*(_DWORD *)(v9 + 8) + 1);
    v7 = (unsigned int)(4 * v6);
    if ( (unsigned int)v7 < 3 * v11 )
    {
      v45 = v11 >> 3;
      if ( v11 - *(_DWORD *)(v9 + 12) - (unsigned int)v6 > (unsigned int)v45 )
      {
        v35 = *v5;
        goto LABEL_21;
      }
      v54 = v10;
      sub_1587800(v9, v11, (__int64)v5, v6, v45, v8);
      v46 = *(_DWORD *)(v9 + 16);
      if ( v46 )
      {
        v47 = v46 - 1;
        v48 = (v46 - 1) & v12;
        LODWORD(v6) = *(_DWORD *)(v9 + 8) + 1;
        v10 = v54;
        v5 = (__int64 *)(*(_QWORD *)v9 + 32LL * v48);
        v35 = *v5;
        if ( v54 == *v5 )
        {
LABEL_21:
          *(_DWORD *)(v9 + 8) = v6;
          if ( v35 != -4096 )
            --*(_DWORD *)(v9 + 12);
          goto LABEL_23;
        }
        v49 = 1;
        v50 = nullptr;
        if ( v35 != -4096 )
        {
          while ( 1 )
          {
            if ( !v50 && v35 == -8192 )
              v50 = v5;
            v48 = v47 & (v49 + v48);
            v5 = (__int64 *)(*(_QWORD *)v9 + 32LL * v48);
            v35 = *v5;
            if ( v54 == *v5 )
              goto LABEL_21;
            if ( v35 == -4096 )
            {
              if ( !v50 )
                break;
              v35 = *v50;
              v5 = v50;
              goto LABEL_21;
            }
            ++v49;
          }
        }
LABEL_41:
        *(_DWORD *)(v9 + 8) = v6;
LABEL_23:
        *v5 = v10;
        v15 = 0;
        v5[1] = 0;
        v5[2] = 0;
        v5[3] = 0;
        goto LABEL_9;
      }
    }
    else
    {
LABEL_19:
      v53 = v10;
      sub_1587800(v9, 2 * v11, (__int64)v5, v6, v7, v8);
      v32 = *(_DWORD *)(v9 + 16);
      if ( v32 )
      {
        v10 = v53;
        v33 = v32 - 1;
        LODWORD(v6) = *(_DWORD *)(v9 + 8) + 1;
        v34 = (v32 - 1) & (((unsigned int)v53 >> 9) ^ ((unsigned int)v53 >> 4));
        v5 = (__int64 *)(*(_QWORD *)v9 + 32LL * v34);
        v35 = *v5;
        if ( v53 == *v5 )
          goto LABEL_21;
        v51 = 1;
        v52 = nullptr;
        if ( v35 != -4096 )
        {
          while ( 1 )
          {
            if ( !v52 && v35 == -8192 )
              v52 = v5;
            v34 = v33 & (v51 + v34);
            v5 = (__int64 *)(*(_QWORD *)v9 + 32LL * v34);
            v35 = *v5;
            if ( v53 == *v5 )
              goto LABEL_21;
            if ( v35 == -4096 )
            {
              if ( !v52 )
                goto LABEL_41;
              v35 = *v52;
              v5 = v52;
              goto LABEL_21;
            }
            ++v51;
          }
        }
        goto LABEL_41;
      }
    }
    ++*(_DWORD *)(v9 + 8);
    BUG();
  }
  v21 = *(unsigned __int8 **)(a1 + 32);
  v22 = *a2;
  if ( !v21 )
  {
    v25 = *(_QWORD *)(a1 + 40);
    v26 = *(_DWORD *)(v25 + 14976);
    if ( v26 )
    {
      v27 = (unsigned int)(v26 - 1);
      *(_DWORD *)(v25 + 14976) = v27;
      v21 = *(unsigned __int8 **)(v25 + 8 * v27 + 14848);
      v28 = *((unsigned int *)v21 + 134);
      *v21 = 0;
      v29 = *((_QWORD *)v21 + 66);
      *((_DWORD *)v21 + 106) = 0;
      v30 = v29 + (v28 << 6);
      while ( v29 != v30 )
      {
        while ( 1 )
        {
          v30 -= 64;
          v31 = *(void **)(v30 + 24);
          if ( v31 == (void *)(v30 + 40) )
            break;
          operator delete(v31);
          if ( v29 == v30 )
            goto LABEL_18;
        }
      }
LABEL_18:
      *((_DWORD *)v21 + 134) = 0;
    }
    else
    {
      v21 = (unsigned __int8 *)operator new(0x3A0u);
      *v21 = 0;
      *((_QWORD *)v21 + 12) = v21 + 112;
      *((_QWORD *)v21 + 16) = v21 + 144;
      *((_QWORD *)v21 + 20) = v21 + 176;
      *((_QWORD *)v21 + 24) = v21 + 208;
      *((_QWORD *)v21 + 28) = v21 + 240;
      *((_QWORD *)v21 + 32) = v21 + 272;
      *((_QWORD *)v21 + 36) = v21 + 304;
      *((_QWORD *)v21 + 40) = v21 + 336;
      *((_QWORD *)v21 + 44) = v21 + 368;
      *((_QWORD *)v21 + 48) = v21 + 400;
      *((_QWORD *)v21 + 52) = v21 + 432;
      *((_QWORD *)v21 + 13) = 0;
      v21[112] = 0;
      *((_QWORD *)v21 + 17) = 0;
      v21[144] = 0;
      *((_QWORD *)v21 + 21) = 0;
      v21[176] = 0;
      *((_QWORD *)v21 + 25) = 0;
      v21[208] = 0;
      *((_QWORD *)v21 + 29) = 0;
      v21[240] = 0;
      *((_QWORD *)v21 + 33) = 0;
      v21[272] = 0;
      *((_QWORD *)v21 + 37) = 0;
      v21[304] = 0;
      *((_QWORD *)v21 + 41) = 0;
      v21[336] = 0;
      *((_QWORD *)v21 + 45) = 0;
      v21[368] = 0;
      *((_QWORD *)v21 + 49) = 0;
      v21[400] = 0;
      *((_QWORD *)v21 + 53) = 0x800000000LL;
      *((_QWORD *)v21 + 66) = v21 + 544;
      *((_QWORD *)v21 + 67) = 0x600000000LL;
    }
    *(_QWORD *)(a1 + 32) = v21;
  }
  v21[*v21 + 1] = 2;
  v23 = *(_BYTE **)(a1 + 32);
  v24 = (unsigned __int8)*v23;
  *v23 = v24 + 1;
  *(_QWORD *)&v23[8 * v24 + 16] = v22;
  return a1;
}
