_QWORD *__fastcall sub_A03C60(__int64 a1, __int64 a2)
{
  void *v2; // rax
  int v3; // ecx
  __int64 *v4; // rsi
  __int64 *v5; // r15
  _QWORD *v6; // r14
  int v7; // ecx
  unsigned int v8; // r12d
  __int64 v9; // rbp
  unsigned __int8 *v10; // rbx
  unsigned __int64 v11; // rax
  unsigned __int8 *v12; // rbp
  __int64 v13; // rdx
  unsigned int v14; // ecx
  int v15; // esi
  __int64 v16; // rdi
  __int64 v17; // rsi
  char *v18; // rdx
  __int64 *v19; // rax
  __int64 *v20; // rax
  unsigned int v21; // ebx
  unsigned int v22; // eax
  char *v23; // r14
  int v24; // r12d
  char *i; // rax
  char *v26; // r14
  int v27; // eax
  __int16 v28; // si
  __int64 j; // r14
  unsigned __int64 v30; // r15
  const void *v31; // rsi
  char *v32; // rax
  void *v33; // rdi
  char *v34; // r10
  char *v35; // r11
  __int64 v36; // rcx
  __int64 v37; // rsi
  char *v38; // rdx
  int v39; // eax
  __int64 v40; // rdx
  int v41; // r12d
  unsigned __int64 v42; // r14
  unsigned int v43; // ebx
  __int64 v44; // rax
  char *v46; // rax
  void *v47; // rdi
  char *v48; // r8
  char *v49; // r9
  __int64 v50; // rdx
  __int64 v51; // rcx
  char *v52; // rax
  __int64 *v53; // [rsp+8h] [rbp-1160h]
  void *v54; // [rsp+10h] [rbp-1158h]
  int v57; // [rsp+4Ch] [rbp-111Ch] BYREF
  __int64 **v58; // [rsp+50h] [rbp-1118h] BYREF
  int v59; // [rsp+58h] [rbp-1110h]
  __int64 *v60; // [rsp+60h] [rbp-1108h] BYREF
  int v61; // [rsp+68h] [rbp-1100h]
  __int128 v62; // [rsp+70h] [rbp-10F8h]
  void *dest; // [rsp+80h] [rbp-10E8h]
  char v64; // [rsp+88h] [rbp-10E0h]
  int v65; // [rsp+8Ch] [rbp-10DCh]
  void **v66; // [rsp+90h] [rbp-10D8h]
  __int64 v67; // [rsp+A0h] [rbp-10C8h] BYREF
  __m128 v68; // [rsp+A8h] [rbp-10C0h] BYREF
  char *v69; // [rsp+B8h] [rbp-10B0h]
  __int64 v70; // [rsp+C0h] [rbp-10A8h]
  char v71; // [rsp+C8h] [rbp-10A0h] BYREF
  __int128 *v72; // [rsp+E8h] [rbp-1080h]
  __int64 v73; // [rsp+F0h] [rbp-1078h]
  __int128 v74; // [rsp+F8h] [rbp-1070h] BYREF
  void *ptr; // [rsp+108h] [rbp-1060h]
  void *v76; // [rsp+110h] [rbp-1058h] BYREF
  __m128i si128; // [rsp+118h] [rbp-1050h]
  _BYTE v78[4160]; // [rsp+128h] [rbp-1040h] BYREF

  v76 = v78;
  v69 = &v71;
  si128 = _mm_load_si128((const __m128i *)&xmmword_2384D50);
  v70 = 0x400000000LL;
  v68 = 0;
  v74 = 0;
  v72 = &v74;
  v73 = 0;
  v67 = 64;
  v2 = sub_9FB8B0();
  v3 = *(_DWORD *)(a1 + 576);
  v4 = *(__int64 **)(a1 + 568);
  ptr = v2;
  sub_A00800(&v60, v4, v3 == 0);
  v5 = v60;
  sub_A00800(&v60, (__int64 *)(*(_QWORD *)(a1 + 568) + 8LL * *(unsigned int *)(a1 + 576)), 1);
  v53 = v60;
  if ( v5 != v60 )
  {
    v6 = (_QWORD *)*v5;
    v7 = v67;
    do
    {
      while ( 1 )
      {
        v8 = 2 * v7;
        v9 = *v6;
        v10 = (unsigned __int8 *)(v6 + 2);
        ++HIDWORD(v67);
        if ( 4 * HIDWORD(v67) >= (unsigned int)(3 * v7) )
        {
          v32 = (char *)sub_9FB640(v8);
          v33 = ptr;
          if ( (_DWORD)v67 )
          {
            v34 = (char *)ptr;
            v35 = (char *)ptr + 16 * (unsigned int)v67;
            do
            {
              v36 = *((_QWORD *)v34 + 1);
              if ( v36 )
              {
                do
                {
                  v37 = *(_QWORD *)(v36 + 24);
                  v38 = &v32[16 * (*(_DWORD *)(v36 + 32) & (v8 - 1))];
                  *(_QWORD *)(v36 + 24) = *((_QWORD *)v38 + 1);
                  *((_QWORD *)v38 + 1) = v36;
                  v36 = v37;
                  ++*((_DWORD *)v38 + 1);
                }
                while ( v37 );
              }
              v34 += 16;
            }
            while ( v35 != v34 );
          }
          v54 = v32;
          free(v33);
          LODWORD(v67) = v8;
          ptr = v54;
        }
        v11 = sub_A03370((__int64 *)&v68, 40, 3u);
        *(_QWORD *)(v11 + 8) = v9;
        v12 = &v10[v9];
        *(_QWORD *)v11 = v10;
        v13 = v6[1];
        *(_QWORD *)(v11 + 24) = 0;
        *(_QWORD *)(v11 + 16) = v13;
        if ( v10 == v12 )
        {
          v16 = 5381;
          v14 = 5381;
        }
        else
        {
          v14 = 5381;
          do
          {
            v15 = *v10++;
            v14 += v15 + 32 * v14;
          }
          while ( v12 != v10 );
          v16 = v14;
        }
        v17 = (unsigned int)v67;
        v6 = (_QWORD *)v5[1];
        *(_DWORD *)(v11 + 32) = v14;
        v7 = v17;
        v18 = (char *)ptr + 16 * (v16 & (v17 - 1));
        *(_QWORD *)(v11 + 24) = *((_QWORD *)v18 + 1);
        *((_QWORD *)v18 + 1) = v11;
        v19 = v5 + 1;
        ++*((_DWORD *)v18 + 1);
        if ( !v6 || v6 == (_QWORD *)-8LL )
          break;
        ++v5;
        if ( v53 == v19 )
          goto LABEL_14;
      }
      v20 = v5 + 2;
      do
      {
        do
        {
          v6 = (_QWORD *)*v20;
          v5 = v20++;
        }
        while ( v6 == (_QWORD *)-8LL );
      }
      while ( !v6 );
    }
    while ( v53 != v5 );
  }
LABEL_14:
  v62 = 0;
  v21 = 1;
  v61 = 2;
  v60 = (__int64 *)&off_2BC1F40;
  v64 = 0;
  v66 = &v76;
  v65 = 1;
  dest = nullptr;
  sub_9FB9C0(&v60);
  LODWORD(v58) = 0;
  sub_22581D0(&v60, &v58, 4);
  v58 = &v60;
  v59 = 1;
  if ( HIDWORD(v67) > 2 && (unsigned int)(4 * HIDWORD(v67)) > 2 )
  {
    _BitScanReverse(&v22, 4 * HIDWORD(v67) / 3u);
    v21 = 1 << (32 - (v22 ^ 0x1F));
  }
  if ( (_DWORD)v67 == v21 )
  {
    v23 = (char *)ptr;
  }
  else
  {
    v46 = (char *)sub_9FB640(v21);
    v47 = ptr;
    v23 = v46;
    if ( (_DWORD)v67 )
    {
      v48 = (char *)ptr;
      v49 = (char *)ptr + 16 * (unsigned int)v67;
      do
      {
        v50 = *((_QWORD *)v48 + 1);
        if ( v50 )
        {
          do
          {
            v51 = *(_QWORD *)(v50 + 24);
            v52 = &v23[16 * (*(_DWORD *)(v50 + 32) & (v21 - 1))];
            *(_QWORD *)(v50 + 24) = *((_QWORD *)v52 + 1);
            *((_QWORD *)v52 + 1) = v50;
            v50 = v51;
            ++*((_DWORD *)v52 + 1);
          }
          while ( v51 );
        }
        v48 += 16;
      }
      while ( v49 != v48 );
    }
    free(v47);
    LODWORD(v67) = v21;
    ptr = v23;
  }
  v24 = 0;
  for ( i = v23; ; i = (char *)ptr )
  {
    v26 = &i[16 * v24];
    if ( *((_QWORD *)v26 + 1) )
    {
      v27 = sub_22571A0(&v60);
      v28 = *((_WORD *)v26 + 2);
      *(_DWORD *)v26 = v27 + (_DWORD)dest - v62;
      sub_9FCB20((__int64 *)&v58, v28);
      for ( j = *((_QWORD *)v26 + 1); j; j = *(_QWORD *)(j + 24) )
      {
        sub_9FCAC0((__int64)v58, *(_DWORD *)(j + 32), v59);
        LOWORD(v57) = *(_QWORD *)(j + 8);
        sub_22581D0(&v60, &v57, 2);
        LOWORD(v57) = 4;
        sub_22581D0(&v60, &v57, 2);
        v30 = *(_QWORD *)(j + 8);
        v31 = *(const void **)j;
        if ( v30 <= *((_QWORD *)&v62 + 1) - (_QWORD)dest )
        {
          if ( v30 )
          {
            memcpy(dest, v31, *(_QWORD *)(j + 8));
            dest = (char *)dest + v30;
          }
        }
        else
        {
          sub_22581D0(&v60, v31, *(_QWORD *)(j + 8));
        }
        v57 = *(_QWORD *)(j + 16) >> 33;
        sub_22581D0(&v60, &v57, 4);
      }
    }
    if ( (unsigned int)v67 <= ++v24 )
      break;
  }
  v39 = sub_22571A0(&v60);
  v40 = (unsigned int)(v39 + (_DWORD)dest - v62);
  v41 = (v40 + 3) & 0xFFFFFFFC;
  v42 = ((v40 + 3) & 0xFFFFFFFFFFFFFFFCLL) - v40 - 1;
  if ( ((v40 + 3) & 0xFFFFFFFFFFFFFFFCLL) != v40 )
  {
    do
    {
      --v42;
      LOBYTE(v57) = 0;
      sub_22581D0(v58, &v57, 1);
    }
    while ( v42 != -1 );
  }
  sub_9FCAC0((__int64)v58, v67, v59);
  sub_9FCAC0((__int64)v58, HIDWORD(v67), v59);
  if ( (_DWORD)v67 )
  {
    v43 = 0;
    do
    {
      v44 = v43++;
      sub_9FCAC0((__int64)v58, *((_DWORD *)ptr + 4 * v44), v59);
    }
    while ( (unsigned int)v67 > v43 );
  }
  LODWORD(v58) = v41;
  v60 = (__int64 *)&unk_2C4C288;
  sub_2257A60(&v60);
  free(ptr);
  sub_A00DD0(&v68);
  sub_993350((__int64)&v68);
  v67 = a2;
  v68.m128_i32[0] = sub_A00970(a2);
  sub_A02CF0((__int64)&v67, a1 + 40, (unsigned int *)&v58, (__int64)&v76);
  if ( v76 != v78 )
    free(v76);
  return sub_A01810(a2);
}

