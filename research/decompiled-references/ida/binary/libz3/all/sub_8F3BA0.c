void __fastcall sub_8F3BA0(__int64 a1, int a2, unsigned int a3)
{
  char **exception; // rbx
  __int64 v4; // r12
  unsigned int v5; // eax
  int v6; // r14d
  __int64 v8; // rbp
  unsigned int v9; // ebx
  unsigned int v10; // r14d
  unsigned int v11; // r13d
  __int64 v12; // rdx
  __int64 *v13; // r12
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned int **v17; // rbx
  __int64 v18; // r12
  unsigned int v19; // r13d
  unsigned int v20; // ebp
  __int64 v21; // rax
  char v22; // cl
  bool v23; // dl
  unsigned int *v24; // r14
  char v25; // al
  __int64 v26; // r13
  unsigned int *v27; // rdx
  _DWORD *v28; // rsi
  __int64 v29; // rax
  unsigned __int64 v30; // r13
  __int64 v31; // rbx
  __int64 v32; // rax
  unsigned __int64 v33; // rax
  unsigned int *v34; // rbp
  bool v35; // r12
  unsigned int v36; // edx
  int v37; // eax
  unsigned int v38; // edx
  int v39; // eax
  unsigned int v40; // edx
  unsigned int *v41; // rax
  __int64 v42; // rdx
  unsigned int *v43; // rsi
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rsi
  char v48; // dl
  __int64 v49; // rax
  _QWORD *v50; // r13
  _QWORD *v51; // rdx
  unsigned int v52; // eax
  __int64 v53; // rcx
  int v54; // eax
  _QWORD *v55; // rcx
  __int64 v56; // rcx
  unsigned int *v57; // rdx
  __int64 v58; // rsi
  unsigned int *v59; // rcx
  unsigned int *v60; // r10
  bool v61; // di
  char v62; // si
  unsigned int v63; // ecx
  size_t v64; // rsi
  unsigned int *v65; // rax
  _QWORD *v66; // rdx
  __int64 v67; // [rsp+8h] [rbp-90h]
  unsigned int v68; // [rsp+8h] [rbp-90h]
  unsigned int **v69; // [rsp+10h] [rbp-88h]
  unsigned int **v70; // [rsp+20h] [rbp-78h]
  __int64 *v71; // [rsp+28h] [rbp-70h]
  __int64 v72; // [rsp+30h] [rbp-68h]
  unsigned int v73; // [rsp+38h] [rbp-60h]
  unsigned int v74; // [rsp+3Ch] [rbp-5Ch]
  __int64 v75[11]; // [rsp+40h] [rbp-58h] BYREF

  v4 = *(_QWORD *)(a1 + 8904);
  if ( !v4 )
    return;
  v5 = *(_DWORD *)(v4 - 4);
  if ( !v5 )
    return;
  v6 = *(_DWORD *)(a1 + 9464);
  v8 = a1;
  v9 = v6 + a2;
  if ( v6 + a2 >= v5 )
    v9 = v5 - 1;
  v10 = v6 + 1;
  if ( v9 < v10 )
    return;
  v74 = v9;
  v11 = v10;
  v12 = 8LL * v10;
  while ( 2 )
  {
    v13 = (__int64 *)(v12 + v4);
    v14 = *v13;
    if ( !*v13 )
      goto LABEL_53;
    v15 = *(unsigned int *)(v14 - 4);
    v16 = v14 + 8 * v15;
    if ( v14 == v16 )
      goto LABEL_52;
    v71 = v13;
    v17 = (unsigned int **)*v13;
    v18 = v8;
    v73 = v11;
    v69 = (unsigned int **)(v14 + 8 * v15);
    v72 = v12;
    do
    {
      while ( 1 )
      {
        v24 = *v17;
        v25 = *((_BYTE *)*v17 + 7);
        if ( v25 >= 0 )
          break;
LABEL_14:
        ++v17;
        sub_AA4110(v24, *(_QWORD *)(v18 + 104));
        *((_BYTE *)v24 + 7) &= 0xF3u;
        if ( v69 == v17 )
          goto LABEL_51;
      }
      if ( (v25 & 8) != 0 )
      {
        if ( v24[2] >> 1 < a3 )
          sub_9677C0(*(_QWORD *)(v18 + 8856) + 8LL * (v24[2] ^ 1));
        if ( v24[3] >> 1 < a3 )
          sub_9677C0(*(_QWORD *)(v18 + 8856) + 8LL * (v24[3] ^ 1));
        v26 = *v24;
        if ( *(_DWORD *)(*(_QWORD *)(v18 + 112) + 512LL) == 6 && 4LL * (unsigned int)v26 )
        {
          v27 = v24 + 2;
          do
          {
            if ( *v27 >> 1 < a3 )
            {
              v28 = (_DWORD *)(*(_QWORD *)(v18 + 8864) + 4LL * *v27);
              if ( *v28 )
                --*v28;
            }
            ++v27;
          }
          while ( v27 != &v24[(unsigned int)v26 + 2] );
        }
        if ( (_DWORD)v26 )
        {
          v29 = 4 * v26;
          v70 = v17;
          v30 = 0;
          v67 = v29;
          v31 = v18;
          do
          {
            while ( 1 )
            {
              v32 = (__int64)&v24[(v24[1] & 0xFFFFFF) + 2];
              if ( (*((_BYTE *)v24 + 7) & 3u) - 2 < 2 )
                v32 += 4;
              v33 = (v32 + 7) & 0xFFFFFFFFFFFFFFF8LL;
              if ( (*((_BYTE *)v24 + 7) & 0x20) != 0 )
                v33 += 8LL;
              if ( (*((_BYTE *)v24 + 7) & 0x40) != 0 )
                v33 += 8LL;
              v34 = (unsigned int *)(*(_QWORD *)(v33 + 2 * v30) & 0xFFFFFFFFFFFFFFF8LL);
              v35 = (*(_QWORD *)(v33 + 2 * v30) & 7LL) == 1;
              sub_B6F780(v31);
              v36 = v35 + 2 * *(_DWORD *)(*(_QWORD *)(v31 + 8832) + 4LL * *v34);
              v24[v30 / 4 + 2] = v36;
              if ( (~*((_BYTE *)v24 + 7) & 3) == 0 )
                break;
              v30 += 4LL;
              if ( v30 == v67 )
                goto LABEL_39;
            }
            v30 += 4LL;
            (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v31 + 7488) + 48LL))(
              *(_QWORD *)(v31 + 7488),
              *(_QWORD *)(*(_QWORD *)(v31 + 8840) + 8LL * (v36 >> 1)));
            (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v31 + 7488) + 64LL))(*(_QWORD *)(v31 + 7488));
          }
          while ( v30 != v67 );
LABEL_39:
          v18 = v31;
          v17 = v70;
        }
        v37 = sub_B64E20(v18, v24, 0);
        v38 = v24[2];
        v24[2] = v24[v37 + 2];
        v24[v37 + 2] = v38;
        v39 = sub_B64E20(v18, v24, 1);
        v40 = v24[3];
        v24[3] = v24[v39 + 2];
        v24[v39 + 2] = v40;
        sub_B64F60(v18, v24, 0);
        sub_B64F60(v18, v24, 1);
        if ( *(_DWORD *)(*(_QWORD *)(v18 + 112) + 512LL) == 6 )
        {
          v41 = v24 + 2;
          v42 = *v24;
          v43 = &v24[v42 + 2];
          if ( v42 * 4 )
          {
            v44 = *(_QWORD *)(v18 + 8864);
            do
            {
              v45 = *v41++;
              ++*(_DWORD *)(v44 + 4 * v45);
            }
            while ( v41 != v43 );
          }
        }
        v46 = *(_QWORD *)(v18 + 8848);
        v47 = v24[2];
        v48 = *(_BYTE *)(v46 + v47);
        if ( v48 != -1 )
        {
          if ( *(_BYTE *)(v46 + v24[3]) == 0xFF && !v48 )
            sub_8F28B0(v18, v47, (__int64)v24, 0);
          goto LABEL_46;
        }
        goto LABEL_60;
      }
      v19 = v24[2];
      v20 = v24[3];
      if ( (~v25 & 3) == 0 )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v18 + 7488) + 48LL))(
          *(_QWORD *)(v18 + 7488),
          *(_QWORD *)(*(_QWORD *)(v18 + 8840) + 8LL * (v19 >> 1)));
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v18 + 7488) + 64LL))(*(_QWORD *)(v18 + 7488));
        (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v18 + 7488) + 48LL))(
          *(_QWORD *)(v18 + 7488),
          *(_QWORD *)(*(_QWORD *)(v18 + 8840) + 8LL * (v20 >> 1)));
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v18 + 7488) + 64LL))(*(_QWORD *)(v18 + 7488));
      }
      v21 = *(_QWORD *)(v18 + 8848);
      v22 = *(_BYTE *)(v21 + v19);
      if ( v22 == -1 )
      {
        v56 = *v24;
        if ( (_DWORD)v56 )
        {
          v57 = v24;
          while ( *(_BYTE *)(v21 + v57[2]) == 0xFF )
          {
            if ( &v24[v56] == ++v57 )
              goto LABEL_60;
          }
          goto LABEL_14;
        }
LABEL_60:
        if ( *(_QWORD *)(v18 + 8984) == qword_1C7EC50 && !*(_BYTE *)(v18 + 2416) )
        {
          *(_QWORD *)(v18 + 8984) = v24;
          *(_DWORD *)(v18 + 8992) = -2;
        }
        goto LABEL_46;
      }
      v23 = v22 == 0 && *(_BYTE *)(v21 + v20) == 0xFF;
      if ( !v23 )
        goto LABEL_14;
      v58 = *v24;
      if ( !(_DWORD)v58 )
        goto LABEL_14;
      v59 = v24;
      v60 = &v24[v58];
      v61 = 0;
      do
      {
        v62 = *(_BYTE *)(v21 + v59[2]);
        if ( v62 )
        {
          if ( v62 == 1 )
            goto LABEL_14;
        }
        else
        {
          if ( v61 )
            goto LABEL_14;
          v61 = v23;
        }
        ++v59;
      }
      while ( v60 != v59 );
      if ( !v61 )
        goto LABEL_14;
      sub_8F28B0(v18, v19, (__int64)v24, 0);
LABEL_46:
      v49 = *(unsigned int *)(v18 + 9464);
      if ( *(_DWORD *)(v18 + 9468) >= (unsigned int)v49 )
        goto LABEL_14;
      v50 = (_QWORD *)(*(_QWORD *)(v18 + 8904) + 8 * v49);
      v51 = (_QWORD *)*v50;
      if ( *v50 )
      {
        v52 = *((_DWORD *)v51 - 1);
        if ( v52 == *((_DWORD *)v51 - 2) )
        {
          v63 = (3 * v52 + 1) >> 1;
          v64 = 8 * v63 + 8;
          if ( 8 * v52 + 8 >= (unsigned int)v64 || v52 >= v63 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_8E4EB0(v75, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v75);
            sub_233E40((__int64)v75);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v68 = (3 * v52 + 1) >> 1;
          v65 = (unsigned int *)sub_186B300(v51 - 1, v64);
          v51 = v65 + 2;
          *v50 = v65 + 2;
          *v65 = v68;
          LODWORD(v65) = v65[1];
          v55 = &v51[(unsigned int)v65];
          v54 = (_DWORD)v65 + 1;
        }
        else
        {
          v53 = v52;
          v54 = v52 + 1;
          v55 = &v51[v53];
        }
      }
      else
      {
        v66 = (_QWORD *)sub_186B270(0x18u);
        *v66 = 2;
        v54 = 1;
        v51 = v66 + 1;
        *v50 = v51;
        v55 = v51;
      }
      *v55 = v24;
      ++v17;
      *((_DWORD *)v51 - 1) = v54;
    }
    while ( v69 != v17 );
LABEL_51:
    v8 = v18;
    v11 = v73;
    v12 = v72;
    v16 = *v71;
    if ( *v71 )
LABEL_52:
      *(_DWORD *)(v16 - 4) = 0;
LABEL_53:
    ++v11;
    v12 += 8;
    if ( v74 >= v11 )
    {
      v4 = *(_QWORD *)(v8 + 8904);
      continue;
    }
    break;
  }
}

