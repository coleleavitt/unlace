__int64 __fastcall sub_15F7970(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  unsigned int v6; // edi
  __int64 *v7; // rsi
  __int64 v8; // r8
  unsigned __int64 v9; // r12
  _QWORD *v10; // rdx
  __int64 v11; // rbp
  int v12; // eax
  _BYTE *v13; // rax
  __int64 *v14; // rcx
  unsigned int *v15; // r14
  __int64 v16; // r15
  __int64 *v17; // r13
  __int64 *v18; // r12
  _BYTE *v19; // rsi
  __int64 *v20; // rax
  size_t v21; // rbp
  unsigned __int64 v22; // rbx
  __int64 v23; // rbx
  unsigned __int64 v24; // rdi
  __int64 *v25; // rdi
  void **v27; // rbx
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rcx
  unsigned int v30; // r12d
  _BYTE *v31; // rdi
  char *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rsi
  __int64 v35; // rcx
  char *v36; // rsi
  __int64 v37; // rdx
  unsigned int *v38; // r13
  unsigned int *v39; // r12
  unsigned int *v40; // rdi
  __int64 *v41; // rdi
  __int64 v42; // rax
  __int64 v43; // rbx
  __int64 v44; // r12
  __int64 v45; // rbx
  void *v46; // rdi
  __int64 v47; // rax
  __int64 v48; // rsi
  __int64 v49; // rcx
  __int64 v50; // rax
  int v51; // esi
  int v52; // r10d
  __int64 v53; // r8
  void **v54; // [rsp+0h] [rbp-88h]
  __int64 *v55; // [rsp+8h] [rbp-80h]
  unsigned __int64 v56; // [rsp+10h] [rbp-78h]
  __int64 *v57; // [rsp+18h] [rbp-70h]
  __int64 v59; // [rsp+28h] [rbp-60h]
  __int64 i; // [rsp+30h] [rbp-58h]
  unsigned int v61; // [rsp+38h] [rbp-50h]
  unsigned __int8 v62; // [rsp+3Fh] [rbp-49h]
  __m128 v63[4]; // [rsp+40h] [rbp-48h] BYREF

  v62 = *(_BYTE *)(*(_QWORD *)(a1 + 264) + 193LL);
  if ( v62 )
    return v62;
  v1 = *(_QWORD *)(a1 + 544);
  if ( (*(_BYTE *)(v1 + 8) & 0x7Fu) - 34 > 5 || v1 == 72 )
    return v62;
  v2 = a1 + 520;
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v1 - 72) + 32LL))(v1 - 72);
  v4 = *(unsigned int *)(a1 + 536);
  v5 = *(_QWORD *)(a1 + 520);
  if ( !(_DWORD)v4 )
    goto LABEL_82;
  v6 = (v4 - 1) & (((unsigned int)v3 >> 9) ^ ((unsigned int)v3 >> 4));
  v7 = (__int64 *)(v5 + 32LL * v6);
  v8 = *v7;
  if ( v3 != *v7 )
  {
    v51 = 1;
    if ( v8 != -4096 )
    {
      do
      {
        v52 = v51 + 1;
        v6 = (v4 - 1) & (v51 + v6);
        v7 = (__int64 *)(v5 + 32LL * v6);
        v53 = *v7;
        if ( v3 == *v7 )
          goto LABEL_6;
        v51 = v52;
      }
      while ( v53 != -4096 );
    }
LABEL_82:
    sub_15F6B00(v63, (_QWORD *)(v5 + 32LL * (unsigned int)v4), (_QWORD *)(v5 + 32LL * (unsigned int)v4), v2, 1);
    v9 = v63[0].m128_u64[0];
    goto LABEL_7;
  }
LABEL_6:
  sub_15F6B00(v63, v7, (_QWORD *)(32 * v4 + v5), v2, 1);
  v9 = v63[0].m128_u64[0];
LABEL_7:
  v10 = (_QWORD *)(*(_QWORD *)(a1 + 520) + 32LL * *(unsigned int *)(a1 + 536));
  sub_15F6B00(v63, v10, v10, v2, 1);
  if ( v9 != v63[0].m128_u64[0] )
  {
    v11 = *(_QWORD *)(v9 + 8);
    for ( i = *(_QWORD *)(v9 + 16); i != v11; v11 += 32 )
    {
      v61 = *(_DWORD *)(v11 + 24);
      v56 = *(_QWORD *)(v11 + 16);
      if ( *(_QWORD *)(v11 + 8) )
      {
        v12 = *(_DWORD *)(*(_QWORD *)(v11 + 16) + 14976LL);
        if ( v12 )
        {
          v42 = (unsigned int)(v12 - 1);
          *(_DWORD *)(v56 + 14976) = v42;
          v15 = *(unsigned int **)(v56 + 8 * v42 + 14848);
          v43 = v15[134];
          *(_BYTE *)v15 = 0;
          v44 = *((_QWORD *)v15 + 66);
          v15[106] = 0;
          v45 = v44 + (v43 << 6);
          while ( v44 != v45 )
          {
            while ( 1 )
            {
              v45 -= 64;
              v46 = *(void **)(v45 + 24);
              if ( v46 == (void *)(v45 + 40) )
                break;
              operator delete(v46);
              if ( v44 == v45 )
                goto LABEL_70;
            }
          }
LABEL_70:
          v14 = (__int64 *)(v15 + 28);
          v15[134] = 0;
          v55 = (__int64 *)(v15 + 108);
        }
        else
        {
          v13 = (_BYTE *)operator new(0x3A0u);
          v14 = (__int64 *)(v13 + 112);
          v15 = (unsigned int *)v13;
          *v13 = 0;
          v13 += 144;
          *((_QWORD *)v13 - 6) = v14;
          *((_QWORD *)v13 - 5) = 0;
          *(v13 - 32) = 0;
          *((_QWORD *)v15 + 16) = v13;
          *((_QWORD *)v15 + 20) = v15 + 44;
          *((_QWORD *)v15 + 24) = v15 + 52;
          *((_QWORD *)v15 + 28) = v15 + 60;
          *((_QWORD *)v15 + 32) = v15 + 68;
          *((_QWORD *)v15 + 36) = v15 + 76;
          *((_QWORD *)v15 + 40) = v15 + 84;
          *((_QWORD *)v15 + 44) = v15 + 92;
          *((_QWORD *)v15 + 48) = v15 + 100;
          v55 = (__int64 *)(v15 + 108);
          *((_QWORD *)v15 + 17) = 0;
          *((_BYTE *)v15 + 144) = 0;
          *((_QWORD *)v15 + 21) = 0;
          *((_BYTE *)v15 + 176) = 0;
          *((_QWORD *)v15 + 25) = 0;
          *((_BYTE *)v15 + 208) = 0;
          *((_QWORD *)v15 + 29) = 0;
          *((_BYTE *)v15 + 240) = 0;
          *((_QWORD *)v15 + 33) = 0;
          *((_BYTE *)v15 + 272) = 0;
          *((_QWORD *)v15 + 37) = 0;
          *((_BYTE *)v15 + 304) = 0;
          *((_QWORD *)v15 + 41) = 0;
          *((_BYTE *)v15 + 336) = 0;
          *((_QWORD *)v15 + 45) = 0;
          *((_BYTE *)v15 + 368) = 0;
          *((_QWORD *)v15 + 49) = 0;
          *((_BYTE *)v15 + 400) = 0;
          *((_QWORD *)v15 + 52) = v15 + 108;
          *((_QWORD *)v15 + 53) = 0x800000000LL;
          *((_QWORD *)v15 + 66) = v15 + 136;
          *((_QWORD *)v15 + 67) = 0x600000000LL;
        }
        v16 = *(_QWORD *)(v11 + 8);
        v17 = v14;
        v18 = (__int64 *)(v16 + 96);
        *(_BYTE *)v15 = *(_BYTE *)v16;
        *((_BYTE *)v15 + 1) = *(_BYTE *)(v16 + 1);
        *((_BYTE *)v15 + 2) = *(_BYTE *)(v16 + 2);
        *((_BYTE *)v15 + 3) = *(_BYTE *)(v16 + 3);
        *((_BYTE *)v15 + 4) = *(_BYTE *)(v16 + 4);
        *((_BYTE *)v15 + 5) = *(_BYTE *)(v16 + 5);
        *((_BYTE *)v15 + 6) = *(_BYTE *)(v16 + 6);
        *((_BYTE *)v15 + 7) = *(_BYTE *)(v16 + 7);
        *((_BYTE *)v15 + 8) = *(_BYTE *)(v16 + 8);
        *((_BYTE *)v15 + 9) = *(_BYTE *)(v16 + 9);
        *((_BYTE *)v15 + 10) = *(_BYTE *)(v16 + 10);
        *((_QWORD *)v15 + 2) = *(_QWORD *)(v16 + 16);
        *((_QWORD *)v15 + 3) = *(_QWORD *)(v16 + 24);
        *((_QWORD *)v15 + 4) = *(_QWORD *)(v16 + 32);
        *((_QWORD *)v15 + 5) = *(_QWORD *)(v16 + 40);
        *((_QWORD *)v15 + 6) = *(_QWORD *)(v16 + 48);
        v59 = v11;
        *((_QWORD *)v15 + 7) = *(_QWORD *)(v16 + 56);
        *((_QWORD *)v15 + 8) = *(_QWORD *)(v16 + 64);
        *((_QWORD *)v15 + 9) = *(_QWORD *)(v16 + 72);
        *((_QWORD *)v15 + 10) = *(_QWORD *)(v16 + 80);
        *((_QWORD *)v15 + 11) = *(_QWORD *)(v16 + 88);
        v54 = (void **)(v15 + 24);
        do
        {
          if ( v18 != v17 - 2 )
          {
            v20 = (__int64 *)*(v17 - 2);
            v21 = v18[1];
            if ( v20 == v17 )
              v22 = 15;
            else
              v22 = *v17;
            if ( v21 > v22 )
            {
              if ( (v21 & 0x8000000000000000LL) != 0LL )
                std::__throw_length_error("basic_string::_M_create");
              v23 = 2 * v22;
              if ( v21 < v23 )
              {
                v24 = v23 + 1;
                if ( v23 < 0 )
                {
                  v24 = 0x8000000000000000LL;
                  v23 = 0x7FFFFFFFFFFFFFFFLL;
                }
              }
              else
              {
                v24 = v21 + 1;
                v23 = v18[1];
              }
              v20 = (__int64 *)operator new(v24);
              v25 = (__int64 *)*(v17 - 2);
              if ( v25 != v17 )
              {
                v57 = v20;
                operator delete(v25);
                v20 = v57;
              }
              *(v17 - 2) = (__int64)v20;
              *v17 = v23;
            }
            if ( v21 )
            {
              v19 = (_BYTE *)*v18;
              if ( v21 == 1 )
                *(_BYTE *)v20 = *v19;
              else
                memcpy(v20, v19, v21);
              v20 = (__int64 *)*(v17 - 2);
            }
            *(v17 - 1) = v21;
            *((_BYTE *)v20 + v21) = 0;
          }
          v18 += 4;
          v17 += 4;
        }
        while ( v55 != v17 );
        v27 = (void **)(v15 + 104);
        v11 = v59;
        if ( v15 + 104 != (unsigned int *)(v16 + 416) )
        {
          v28 = *(unsigned int *)(v16 + 424);
          v29 = v15[106];
          v30 = *(_DWORD *)(v16 + 424);
          if ( v28 <= v29 )
          {
            if ( *(_DWORD *)(v16 + 424) )
            {
              v48 = *((_QWORD *)v15 + 52);
              v49 = *(_QWORD *)(v16 + 416);
              v50 = 0;
              do
              {
                *(_QWORD *)(v48 + v50) = *(_QWORD *)(v49 + v50);
                *(_BYTE *)(v48 + v50 + 8) = *(_BYTE *)(v49 + v50 + 8);
                v50 += 12;
              }
              while ( 12 * v28 != v50 );
            }
          }
          else
          {
            if ( v28 > v15[107] )
            {
              v15[106] = 0;
              sub_2237220(v15 + 104, v55, v28, 12);
              v32 = *(char **)(v16 + 416);
              v31 = *((_BYTE **)v15 + 52);
              v35 = 0;
              v28 = *(unsigned int *)(v16 + 424);
              v36 = v32;
            }
            else
            {
              v31 = *((_BYTE **)v15 + 52);
              v32 = *(char **)(v16 + 416);
              if ( v15[106] )
              {
                v33 = 0;
                v34 = 12 * v29;
                v35 = 12 * v29;
                do
                {
                  *(_QWORD *)&v31[v33] = *(_QWORD *)&v32[v33];
                  v31[v33 + 8] = v32[v33 + 8];
                  v33 += 12;
                }
                while ( v34 != v33 );
                v28 = *(unsigned int *)(v16 + 424);
                v31 += v34;
                v36 = &v32[v34];
              }
              else
              {
                v36 = *(char **)(v16 + 416);
                v35 = 0;
              }
            }
            v37 = 12 * v28;
            if ( v36 != &v32[v37] )
              memcpy(v31, v36, v37 - v35);
          }
          v15[106] = v30;
        }
        sub_9EED30((__int64)(v15 + 132), (__int64 *)(v16 + 528));
        if ( sub_FD3670(*(_QWORD *)(*(_QWORD *)(a1 + 264) + 32LL), v61) )
        {
          sub_1580C40(v56, (unsigned __int64)v15);
          return 1;
        }
        if ( (unsigned __int64)v15 < v56 || (unsigned __int64)v15 > v56 + 14848 )
        {
          v38 = *((unsigned int **)v15 + 66);
          v39 = &v38[16 * (unsigned __int64)v15[134]];
          if ( v38 != v39 )
          {
            do
            {
              while ( 1 )
              {
                v39 -= 16;
                v40 = *((unsigned int **)v39 + 3);
                if ( v40 == v39 + 10 )
                  break;
                operator delete(v40);
                if ( v38 == v39 )
                  goto LABEL_48;
              }
            }
            while ( v38 != v39 );
LABEL_48:
            v39 = *((unsigned int **)v15 + 66);
          }
          if ( v39 != v15 + 136 )
            free(v39);
          v41 = *((__int64 **)v15 + 52);
          if ( v41 != v55 )
            free(v41);
          do
          {
            while ( 1 )
            {
              v27 -= 4;
              if ( *v27 == v27 + 2 )
                break;
              operator delete(*v27);
              if ( v27 == v54 )
                goto LABEL_55;
            }
          }
          while ( v27 != v54 );
LABEL_55:
          operator delete(v15, 0x3A0u);
        }
        else
        {
          v47 = *(unsigned int *)(v56 + 14976);
          *(_DWORD *)(v56 + 14976) = v47 + 1;
          *(_QWORD *)(v56 + 8 * v47 + 14848) = v15;
        }
      }
      else if ( sub_FD3670(*(_QWORD *)(*(_QWORD *)(a1 + 264) + 32LL), v61) )
      {
        return 1;
      }
    }
  }
  return v62;
}
