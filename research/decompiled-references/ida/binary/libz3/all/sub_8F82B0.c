__int64 __fastcall sub_8F82B0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char **exception; // r12
  size_t v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  size_t v10; // rdx
  unsigned int *v11; // r15
  _QWORD *v12; // rbx
  __int64 v13; // rax
  unsigned int v14; // ebp
  _DWORD *v15; // r14
  unsigned int v16; // r10d
  _DWORD *v17; // r13
  _DWORD *v18; // rsi
  _DWORD *i; // rax
  unsigned int v20; // eax
  __int64 v21; // r12
  __int64 v22; // r10
  _DWORD *v23; // rsi
  _DWORD *v24; // rax
  int v25; // edx
  __int64 v26; // rax
  size_t v27; // rdi
  __int64 v28; // rsi
  unsigned int v29; // eax
  __int64 *v30; // rsi
  int v31; // eax
  __m128i *v32; // rbp
  __int64 v33; // r13
  __m128i *v34; // r12
  char *v35; // r14
  unsigned __int64 v36; // rdx
  unsigned int *v37; // r15
  char *v38; // rax
  char *v39; // rdi
  _DWORD *v40; // rdi
  __int64 *v41; // rax
  __m128i *v42; // r15
  _QWORD *v43; // r12
  _QWORD *v44; // r14
  __int64 (*v45)(); // rax
  _DWORD *v47; // rax
  unsigned int v48; // r13d
  _QWORD *v49; // rax
  unsigned int v50; // edx
  size_t v51; // rsi
  unsigned int v52; // r12d
  unsigned int *v53; // rax
  unsigned int v54; // eax
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rsi
  int v58; // eax
  unsigned int *v59; // r13
  unsigned int v60; // esi
  unsigned int *v61; // rdx
  char *v62; // rax
  char *v63; // rdi
  __int64 v64; // [rsp+8h] [rbp-80h]
  __int64 v65; // [rsp+8h] [rbp-80h]
  __int64 v66; // [rsp+8h] [rbp-80h]
  __int64 v67; // [rsp+8h] [rbp-80h]
  __int64 v68; // [rsp+8h] [rbp-80h]
  __int64 v69; // [rsp+8h] [rbp-80h]
  unsigned int v70; // [rsp+8h] [rbp-80h]
  __int64 v71; // [rsp+8h] [rbp-80h]
  __int64 v72; // [rsp+8h] [rbp-80h]
  unsigned int v73; // [rsp+14h] [rbp-74h]
  unsigned int v74; // [rsp+18h] [rbp-70h]
  __int64 v75; // [rsp+18h] [rbp-70h]
  unsigned int v76; // [rsp+20h] [rbp-68h]
  __int64 v77; // [rsp+20h] [rbp-68h]
  unsigned int *v78; // [rsp+28h] [rbp-60h]
  __int64 v79[11]; // [rsp+30h] [rbp-58h] BYREF

  v73 = a2;
  if ( a2 == -1 )
  {
    v7 = *(_QWORD *)(a1 + 9336);
    v8 = a1;
    if ( v7 )
    {
      v9 = *(unsigned int *)(v7 - 4);
      if ( (_DWORD)v9 )
      {
        if ( *(_DWORD *)(a1 + 9468) < *(_DWORD *)(a1 + 9472) )
        {
          v10 = *(_QWORD *)(a1 + 9000);
          v11 = *(unsigned int **)(v10 + 320);
          if ( v11 )
          {
            v10 = *(v11 - 1);
            v78 = &v11[v10];
            v12 = nullptr;
            if ( v11 == v78 )
              goto LABEL_30;
            while ( 1 )
            {
              v13 = *(unsigned int *)(v8 + 9352);
              v14 = *v11;
              v15 = *(_DWORD **)(v8 + 9344);
              v16 = v13 - 1;
              a6 = 24 * v13;
              v17 = &v15[6 * v13];
              v10 = 24LL * (((_DWORD)v13 - 1) & *v11);
              v18 = (_DWORD *)((char *)v15 + v10);
              if ( v10 != 24 * v13 )
              {
                for ( i = (_DWORD *)((char *)v15 + v10); v17 != i; i += 6 )
                {
                  LODWORD(v10) = i[1];
                  if ( (_DWORD)v10 == 2 )
                  {
                    if ( v14 == *i && v14 == i[2] )
                    {
LABEL_14:
                      v20 = v14 >> 5;
                      v74 = v14 >> 5;
                      if ( v12 )
                        goto LABEL_15;
LABEL_71:
                      v68 = v8;
                      v48 = v20 + 1;
                      v49 = (_QWORD *)sub_186B270(0x10u);
                      v8 = v68;
                      v76 = 0;
                      *v49 = 2;
                      v12 = v49 + 1;
LABEL_75:
                      while ( 1 )
                      {
                        v54 = *((_DWORD *)v12 - 2);
                        if ( v54 >= v48 )
                          break;
                        v50 = (3 * v54 + 1) >> 1;
                        v51 = 4 * v50 + 8;
                        v52 = v50;
                        if ( 4 * v54 + 8 >= (unsigned int)v51 || v54 >= v50 )
                        {
                          exception = (char **)__cxa_allocate_exception(0x28u);
                          sub_8E4EB0(v79, "Overflow encountered when expanding vector");
                          *exception = (char *)off_1C63128;
                          sub_2333C0(exception + 1, v79);
                          sub_233E40((__int64)v79);
                          __cxa_throw(
                            exception,
                            (struct type_info *)&`typeinfo for'default_exception,
                            (void (*)(void *))sub_230E50);
                        }
                        v69 = v8;
                        v53 = (unsigned int *)sub_186B300(v12 - 1, v51);
                        *v53 = v52;
                        v8 = v69;
                        v12 = v53 + 2;
                      }
                      v21 = v74;
                      *((_DWORD *)v12 - 1) = v48;
                      v55 = *(unsigned int *)(v8 + 9352);
                      v15 = *(_DWORD **)(v8 + 9344);
                      v56 = 4LL * v48;
                      v57 = 4LL * v76;
                      a6 = 24 * v55;
                      v16 = v55 - 1;
                      v17 = &v15[6 * v55];
                      if ( v57 != v56 )
                      {
                        v77 = v8;
                        v75 = 24 * v55;
                        v70 = v55 - 1;
                        memset((char *)v12 + v57, 0, v56 - v57);
                        v8 = v77;
                        a6 = v75;
                        v16 = v70;
                      }
                      goto LABEL_17;
                    }
                  }
                  else if ( !(_DWORD)v10 )
                  {
                    goto LABEL_70;
                  }
                }
              }
              if ( v15 != v18 )
              {
                v47 = *(_DWORD **)(v8 + 9344);
                while ( 1 )
                {
                  LODWORD(v10) = v47[1];
                  if ( (_DWORD)v10 != 2 )
                    break;
                  if ( v14 == *v47 )
                  {
                    if ( v14 == v47[2] )
                      goto LABEL_14;
                    v47 += 6;
                    if ( v18 == v47 )
                      goto LABEL_70;
                  }
                  else
                  {
LABEL_65:
                    v47 += 6;
                    if ( v18 == v47 )
                      goto LABEL_70;
                  }
                }
                if ( !(_DWORD)v10 )
                  goto LABEL_70;
                goto LABEL_65;
              }
LABEL_70:
              v14 ^= 1u;
              v20 = v14 >> 5;
              v74 = v14 >> 5;
              if ( !v12 )
                goto LABEL_71;
LABEL_15:
              v76 = *((_DWORD *)v12 - 1);
              if ( v20 >= v76 )
              {
                v48 = v20 + 1;
                goto LABEL_75;
              }
              v21 = v20;
              if ( (*((_DWORD *)v12 + v20) & (1 << v14)) != 0 )
                goto LABEL_27;
LABEL_17:
              v22 = v14 & v16;
              *((_DWORD *)v12 + v21) |= 1 << v14;
              v23 = &v15[6 * v22];
              if ( 24 * v22 == a6 )
              {
LABEL_78:
                while ( v23 != v15 )
                {
                  v58 = v15[1];
                  if ( v58 == 2 )
                  {
                    if ( v14 == *v15 && v14 == v15[2] )
                    {
                      v24 = v15;
                      goto LABEL_24;
                    }
                  }
                  else if ( !v58 )
                  {
                    break;
                  }
                  v15 += 6;
                }
LABEL_104:
                BUG();
              }
              v24 = &v15[6 * v22];
              while ( 1 )
              {
                v25 = v24[1];
                if ( v25 != 2 )
                {
                  if ( !v25 )
                    goto LABEL_104;
                  goto LABEL_20;
                }
                if ( v14 == *v24 && v14 == v24[2] )
                  break;
LABEL_20:
                v24 += 6;
                if ( v24 == v17 )
                  goto LABEL_78;
              }
LABEL_24:
              v26 = *((_QWORD *)v24 + 2);
              v79[0] = v26;
              if ( v26 )
                ++*(_DWORD *)(v26 + 8);
              v64 = v8;
              sub_8F15F0((_QWORD *)(v8 + 9376), v79);
              v8 = v64;
LABEL_27:
              if ( v78 == ++v11 )
              {
                v7 = *(_QWORD *)(v8 + 9336);
                if ( v7 )
                {
                  v9 = *(unsigned int *)(v7 - 4);
                  goto LABEL_30;
                }
                goto LABEL_34;
              }
            }
          }
          v12 = nullptr;
LABEL_30:
          v27 = v7 + 4 * v9;
          if ( v27 != v7 )
          {
            v28 = *(_QWORD *)(v8 + 8872);
            v10 = v7;
            do
            {
              v29 = *(_DWORD *)v10;
              v10 += 4LL;
              *(_BYTE *)(v28 + 16LL * (v29 >> 1) + 11) &= ~2u;
            }
            while ( v10 != v27 );
          }
          *(_DWORD *)(v7 - 4) = 0;
LABEL_34:
          LODWORD(v30) = *(_DWORD *)(v8 + 9464);
          v31 = *(_DWORD *)(v8 + 9468);
          if ( (_DWORD)v30 != v31 )
          {
            LODWORD(v30) = (_DWORD)v30 - v31;
            v71 = v8;
            sub_8F7780(v8, (unsigned int)v30);
            v8 = v71;
            v31 = *(_DWORD *)(v71 + 9468);
          }
          v32 = *(__m128i **)(v8 + 9376);
          *(_DWORD *)(v8 + 9472) = v31;
          if ( v32 )
          {
            v33 = 8LL * v32[-1].m128i_u32[3];
            v34 = (__m128i *)((char *)v32 + v33);
            if ( &v32->m128i_i8[v33] != (__int8 *)v32 )
            {
              LODWORD(v30) = (_DWORD)v32 + v33;
              v65 = v8;
              v35 = &v32->m128i_i8[8];
              _BitScanReverse64(&v36, v33 >> 3);
              sub_8E57A0(v32, &v32->m128i_i8[v33], 2LL * (int)v36);
              v8 = v65;
              if ( (unsigned __int64)v33 > 0x80 )
              {
                v42 = v32 + 8;
                do
                {
                  v59 = *(unsigned int **)v35;
                  v60 = **(_DWORD **)v35;
                  if ( v60 < *(_DWORD *)v32->m128i_i64[0] )
                  {
                    if ( v35 - (char *)v32 <= 8 )
                    {
                      if ( v35 - (char *)v32 == 8 )
                        *(_QWORD *)v35 = v32->m128i_i64[0];
                    }
                    else
                    {
                      v72 = v8;
                      memmove(&v32->m128i_u64[1], v32, v35 - (char *)v32);
                      v8 = v72;
                    }
                    v32->m128i_i64[0] = (__int64)v59;
                  }
                  else
                  {
                    v61 = *((unsigned int **)v35 - 1);
                    v62 = v35 - 8;
                    if ( v60 >= *v61 )
                    {
                      v63 = v35;
                    }
                    else
                    {
                      do
                      {
                        *((_QWORD *)v62 + 1) = v61;
                        v63 = v62;
                        v61 = *((unsigned int **)v62 - 1);
                        v62 -= 8;
                      }
                      while ( v60 < *v61 );
                    }
                    *(_QWORD *)v63 = v59;
                  }
                  v35 += 8;
                }
                while ( v42 != (__m128i *)v35 );
                do
                {
                  v40 = (_DWORD *)v42->m128i_i64[0];
                  v10 = v42[-1].m128i_u64[1];
                  v41 = &v42[-1].m128i_i64[1];
                  LODWORD(v7) = *(_DWORD *)v42->m128i_i64[0];
                  if ( (unsigned int)v7 >= *(_DWORD *)v10 )
                  {
                    v30 = (__int64 *)v42;
                  }
                  else
                  {
                    do
                    {
                      v41[1] = v10;
                      v30 = v41;
                      v10 = *--v41;
                    }
                    while ( (unsigned int)v7 < *(_DWORD *)v10 );
                  }
                  v42 = (__m128i *)((char *)v42 + 8);
                  *v30 = (__int64)v40;
                }
                while ( v34 != v42 );
              }
              else if ( v33 != 8 )
              {
                do
                {
                  v37 = *(unsigned int **)v35;
                  LODWORD(v30) = **(_DWORD **)v35;
                  if ( (unsigned int)v30 < *(_DWORD *)v32->m128i_i64[0] )
                  {
                    v10 = v35 - (char *)v32;
                    if ( v35 - (char *)v32 <= 8 )
                    {
                      if ( v35 - (char *)v32 == 8 )
                        *(_QWORD *)v35 = v32->m128i_i64[0];
                    }
                    else
                    {
                      LODWORD(v30) = (_DWORD)v32;
                      v66 = v8;
                      memmove(&v32->m128i_u64[1], v32, v10);
                      v8 = v66;
                    }
                    v32->m128i_i64[0] = (__int64)v37;
                  }
                  else
                  {
                    v10 = *((_QWORD *)v35 - 1);
                    v38 = v35 - 8;
                    if ( (unsigned int)v30 >= *(_DWORD *)v10 )
                    {
                      v39 = v35;
                    }
                    else
                    {
                      do
                      {
                        *((_QWORD *)v38 + 1) = v10;
                        v39 = v38;
                        v10 = *((_QWORD *)v38 - 1);
                        v38 -= 8;
                      }
                      while ( (unsigned int)v30 < *(_DWORD *)v10 );
                    }
                    *(_QWORD *)v39 = v37;
                  }
                  v35 += 8;
                }
                while ( v34 != (__m128i *)v35 );
              }
            }
          }
          v67 = v8;
          sub_968B20(v8, (_DWORD)v30, v10, v7, v8, a6);
          v43 = *(_QWORD **)(v67 + 8688);
          if ( v43 )
          {
            v44 = &v43[*((unsigned int *)v43 - 1)];
            if ( v44 != v43 )
            {
              while ( 1 )
              {
                v45 = *(__int64 (**)())(*(_QWORD *)*v43 + 128LL);
                if ( v45 != sub_893DD0 && !((unsigned int (__fastcall *)(_QWORD, __int64))v45)(*v43, v67 + 9368) )
                  break;
                if ( v44 == ++v43 )
                  goto LABEL_59;
              }
              v73 = 0;
            }
          }
LABEL_59:
          if ( v12 )
            sub_186B220(v12 - 1);
        }
      }
    }
  }
  return v73;
}

