void __fastcall sub_1FA1F90(__int64 *a1, __int64 a2, char a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rbp
  __int64 v9; // rdi
  int v10; // ecx
  unsigned int v11; // edx
  __int64 v12; // rax
  int *v13; // rbp
  int v14; // ecx
  int v15; // eax
  unsigned int v16; // esi
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rdi
  int *v22; // rdx
  __int64 v23; // rdi
  int v24; // eax
  unsigned int v25; // ecx
  __int64 v26; // r14
  int *v27; // rsi
  char v28; // r8
  __int64 v29; // rcx
  int *v30; // rdx
  unsigned __int64 v31; // r12
  unsigned int *v32; // r15
  unsigned __int64 v33; // r14
  unsigned int v34; // eax
  unsigned int v35; // eax
  __int64 v36; // rax
  __int64 v37; // r11
  unsigned __int64 v38; // rdx
  unsigned int *v39; // rax
  __int64 v40; // r15
  __int64 v41; // r14
  int *v42; // rbx
  unsigned __int64 v43; // rax
  int *v44; // r11
  unsigned int v45; // esi
  unsigned int v46; // edx
  int *v47; // rax
  __int64 v48; // rdi
  int *v49; // r14
  __int64 v50; // rsi
  int v51; // r11d
  __int64 v52; // r10
  __int64 v53; // [rsp+8h] [rbp-B0h]
  __int64 v54; // [rsp+10h] [rbp-A8h]
  __int64 v55; // [rsp+20h] [rbp-98h]
  __int64 v56; // [rsp+28h] [rbp-90h] BYREF
  __m128 v57; // [rsp+30h] [rbp-88h] BYREF
  int *v58; // [rsp+40h] [rbp-78h] BYREF
  __int64 v59; // [rsp+48h] [rbp-70h]
  _BYTE v60[104]; // [rsp+50h] [rbp-68h] BYREF

  v8 = *a1;
  v56 = a2;
  if ( (*(_BYTE *)v8 & 1) != 0 )
  {
    v9 = v8 + 8;
    v10 = 63;
  }
  else
  {
    v14 = *(_DWORD *)(v8 + 16);
    v9 = *(_QWORD *)(v8 + 8);
    if ( !v14 )
    {
      v12 = 0;
      goto LABEL_9;
    }
    v10 = v14 - 1;
  }
  v11 = v10 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
  v12 = v9 + 16LL * v11;
  a5 = *(_QWORD *)v12;
  if ( a2 == *(_QWORD *)v12 )
    goto LABEL_4;
  v51 = 1;
  v52 = 0;
  if ( a5 != -4096 )
  {
    while ( 1 )
    {
      if ( !v52 && a5 == -8192 )
        v52 = v12;
      v11 = v10 & (v51 + v11);
      v12 = v9 + 16LL * v11;
      a5 = *(_QWORD *)v12;
      if ( a2 == *(_QWORD *)v12 )
        break;
      if ( a5 == -4096 )
      {
        if ( v52 )
          v12 = v52;
        goto LABEL_9;
      }
      ++v51;
    }
LABEL_4:
    v13 = (int *)(v12 + 8);
    sub_9B9C90(a1[1], *(unsigned int *)(v12 + 8));
    if ( *v13 )
      return;
    goto LABEL_16;
  }
LABEL_9:
  v58 = (int *)v12;
  v15 = (*(_DWORD *)v8 >> 1) + 1;
  if ( (*(_BYTE *)v8 & 1) != 0 )
  {
    v17 = 192;
    v16 = 64;
  }
  else
  {
    v16 = *(_DWORD *)(v8 + 16);
    v17 = 3 * v16;
  }
  v18 = (unsigned int)(4 * v15);
  if ( (unsigned int)v18 >= (unsigned int)v17 )
  {
    v16 *= 2;
  }
  else
  {
    v17 = v16 - (v15 + *(_DWORD *)(v8 + 4));
    v18 = v16 >> 3;
    if ( (unsigned int)v17 > (unsigned int)v18 )
      goto LABEL_13;
  }
  sub_1F84BA0(v8, v16, v18, v17, a5, a6);
  sub_1F72EB0(v8, &v56, &v58);
  v15 = (*(_DWORD *)v8 >> 1) + 1;
LABEL_13:
  *(_DWORD *)v8 = *(_DWORD *)v8 & 1 | (2 * v15);
  v19 = (__int64)v58;
  if ( *(_QWORD *)v58 != -4096 )
    --*(_DWORD *)(v8 + 4);
  v20 = v56;
  v21 = a1[1];
  v13 = (int *)(v19 + 8);
  *(_DWORD *)(v19 + 8) = 0;
  *(_QWORD *)v19 = v20;
  sub_9B9C90(v21, 0);
  if ( !*v13 )
  {
LABEL_16:
    v22 = (int *)a1[2];
    v23 = a1[1];
    v24 = *v22 + 1;
    *v22 = v24;
    *v13 = v24;
    v58 = (int *)v60;
    v59 = 0x600000000LL;
    v25 = *(_DWORD *)(v23 + 8);
    v53 = v25;
    if ( *(_DWORD *)(v23 + 12) <= v25 )
    {
      sub_1F6B920(v23);
      v54 = 8 * v53;
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)v23 + 8LL * v25) = 0;
      v54 = 8LL * v25;
      *(_DWORD *)(v23 + 8) = v25 + 1;
    }
    v26 = v56;
    v27 = *(int **)v56;
    if ( *(_DWORD *)(v56 + 8) )
    {
      v28 = 0;
      v29 = v56;
      v30 = (int *)(*(_QWORD *)v56 + 8LL * *(unsigned int *)(v56 + 16));
    }
    else
    {
      v28 = 1;
      v29 = v56;
      v30 = (int *)(*(_QWORD *)v56 + 8LL * *(unsigned int *)(v56 + 16));
      v27 = v30;
    }
    sub_FCE200(&v57, v27, v30, v29, v28);
    v31 = v57.m128_u64[1];
    v32 = (unsigned int *)v57.m128_u64[0];
    sub_FCE200(
      &v57,
      (int *)(*(_QWORD *)v26 + 8LL * *(unsigned int *)(v26 + 16)),
      (int *)(*(_QWORD *)v26 + 8LL * *(unsigned int *)(v26 + 16)),
      v26,
      1);
    v33 = v57.m128_u64[0];
    while ( v32 != (unsigned int *)v33 )
    {
      v34 = v32[1];
      if ( (v34 & 0x10) != 0 || a3 )
      {
        if ( (v34 & 0x10) != 0
          || (LOBYTE(v35) = sub_FD30D0(*(_QWORD *)(a1[3] + 32), *v32),
              ((8 * (*((_BYTE *)v32 + 4) >> 7))
             | (16 * ((v32[1] & 0x40) != 0))
             | (32 * ((v32[1] & 0x20) != 0))
             | v32[1] & 7
             | (((v32[1] & 0x10) != 0) << 6)
             | (((v32[1] & 8) != 0) << 7)) != ((8 * ((unsigned __int8)v35 >> 7))
                                             | (v35 >> 2) & 0x10
                                             | v35 & 0x20
                                             | v35 & 7
                                             | (4 * (_BYTE)v35) & 0x40
                                             | (16 * (_BYTE)v35) & 0x80)) )
        {
          v36 = (unsigned int)v59;
          v37 = *(_QWORD *)v32;
          v38 = (unsigned int)v59 + 1LL;
          if ( v38 > HIDWORD(v59) )
          {
            v55 = *(_QWORD *)v32;
            sub_2237220(&v58, v60, v38, 8);
            v36 = (unsigned int)v59;
            v37 = v55;
          }
          *(_QWORD *)&v58[2 * v36] = v37;
          LODWORD(v59) = v59 + 1;
        }
      }
      if ( (unsigned int *)v31 == v32 + 2 )
      {
        v32 = (unsigned int *)v31;
      }
      else if ( v32[2] < 0xFFFFFFFE )
      {
        v32 += 2;
      }
      else
      {
        v39 = v32 + 4;
        do
        {
          v32 = v39;
          if ( (unsigned int *)v31 == v39 )
            break;
          v39 += 2;
        }
        while ( *v32 >= 0xFFFFFFFE );
      }
    }
    v40 = (__int64)v58;
    v41 = 2LL * (unsigned int)v59;
    v42 = &v58[v41];
    if ( v58 != &v58[v41] )
    {
      _BitScanReverse64(&v43, (v41 * 4) >> 3);
      sub_1FA1E00((__int64)v58, (unsigned int *)&v58[v41], 2LL * (int)(63 - (v43 ^ 0x3F)));
      if ( (unsigned __int64)v41 <= 32 )
      {
        sub_1F6B7B0(v40, v42);
      }
      else
      {
        sub_1F6B7B0(v40, (int *)(v40 + 128));
        for ( ; v42 != v44; *((_BYTE *)v47 + 4) = BYTE4(v48) )
        {
          v45 = *v44;
          v46 = *(v44 - 2);
          v47 = v44 - 2;
          v48 = *(_QWORD *)v44;
          if ( v46 > *v44 )
          {
            while ( 1 )
            {
              v47[2] = v46;
              *((_BYTE *)v47 + 12) = *((_BYTE *)v47 + 4);
              v46 = *(v47 - 2);
              if ( v45 >= v46 )
                break;
              v47 -= 2;
            }
          }
          else
          {
            v47 = v44;
          }
          v44 += 2;
          *v47 = v45;
        }
      }
      v49 = v58;
      v42 = &v58[2 * (unsigned int)v59];
      if ( v58 != v42 )
      {
        do
        {
          v50 = (unsigned int)*v49;
          v49 += 2;
          sub_9B9C90(a1[1], v50);
          sub_9B9C90(
            a1[1],
            (8 * (*((_BYTE *)v49 - 4) >> 7))
          | (16 * ((*(_BYTE *)(v49 - 1) & 0x40) != 0))
          | (32 * ((*(_BYTE *)(v49 - 1) & 0x20) != 0))
          | *(_BYTE *)(v49 - 1) & 7
          | (((*(_BYTE *)(v49 - 1) & 0x10) != 0) << 6)
          | (((*(_BYTE *)(v49 - 1) & 8) != 0) << 7));
        }
        while ( v42 != v49 );
        v42 = v58;
      }
    }
    *(_QWORD *)(*(_QWORD *)a1[1] + v54) = ((unsigned __int64)*(unsigned int *)(a1[1] + 8) - v53) >> 1;
    if ( v42 != (int *)v60 )
      free(v42);
  }
}
