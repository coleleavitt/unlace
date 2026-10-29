void __fastcall sub_DAAB00(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  bool v3; // zf
  _QWORD *v4; // rdx
  int v5; // eax
  __int64 v6; // rcx
  unsigned int *v7; // r12
  __int64 v8; // rsi
  int v9; // ebp
  __int64 v10; // rdi
  unsigned int v11; // eax
  unsigned int v12; // eax
  int v13; // edx
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // edx
  _QWORD *v17; // r8
  __int64 v18; // rax
  __m128i *v19; // rdx
  __int64 v20; // rcx
  unsigned __int64 v21; // rbp
  unsigned __int64 v22; // rbp
  unsigned int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  _QWORD *v27; // rcx
  _QWORD *v28; // rdi
  __int64 v29; // rax
  _DWORD *v30; // rax
  __int64 v31; // rbp
  _QWORD *v32; // rdx
  unsigned int v33; // eax
  __int64 v34; // rcx
  int v35; // eax
  unsigned __int64 *v36; // rcx
  __int64 v37; // rbp
  _QWORD *v38; // rdx
  unsigned int v39; // eax
  __int64 v40; // rcx
  int v41; // eax
  unsigned __int64 *v42; // rcx
  _QWORD *v43; // rdx
  __int64 v44; // rax
  _DWORD *v45; // rax
  __int64 v46; // rbp
  __int64 *v47; // rdx
  __int64 v48; // rsi
  __int64 v49; // rdi
  unsigned int v50; // r12d
  size_t v51; // rsi
  unsigned int *v52; // rax
  __int64 v53; // rcx
  unsigned int v54; // r13d
  size_t v55; // rsi
  unsigned int *v56; // rax
  __int64 v57; // rax
  unsigned int v58; // r13d
  unsigned int v59; // ecx
  unsigned int *v60; // rax
  __int64 v61; // rax
  unsigned int v62; // r13d
  size_t v63; // rsi
  unsigned int *v64; // rax
  __int64 v65; // rcx
  unsigned int v66; // r13d
  size_t v67; // rsi
  unsigned int *v68; // rax
  __int64 v69; // rcx
  _QWORD *v70; // rax
  _QWORD *v71; // rax
  _QWORD *v72; // rax
  _QWORD *v73; // rax
  _QWORD *v74; // rax
  char **exception; // rbp
  __int64 v76[9]; // [rsp+10h] [rbp-48h] BYREF

  v2 = a1;
  v3 = (*(_DWORD *)(a2 + 4))-- == 1;
  v4 = *(_QWORD **)(a1 + 640);
  if ( v3 )
  {
    if ( v4 )
    {
      v24 = *((_DWORD *)v4 - 1);
      if ( v24 == *((_DWORD *)v4 - 2) )
      {
        v50 = (3 * v24 + 1) >> 1;
        v51 = 8 * v50 + 8;
        if ( 8 * v24 + 8 >= (unsigned int)v51 || v24 >= v50 )
        {
LABEL_66:
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v76, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v76);
          sub_233E40((__int64)v76);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        a1 = (__int64)(v4 - 1);
        v52 = (unsigned int *)sub_186B300(v4 - 1, v51);
        v53 = v52[1];
        v4 = v52 + 2;
        *v52 = v50;
        *(_QWORD *)(v2 + 640) = v52 + 2;
        LODWORD(v52) = v53;
        v27 = &v4[v53];
        v26 = (_DWORD)v52 + 1;
      }
      else
      {
        v25 = v24;
        v26 = v24 + 1;
        v27 = &v4[v25];
      }
    }
    else
    {
      a1 = 24;
      v70 = (_QWORD *)sub_186B270(0x18u);
      v4 = v70 + 1;
      *v70 = 2;
      v26 = 1;
      *(_QWORD *)(v2 + 640) = v4;
      v27 = v4;
    }
    *v27 = a2;
    *((_DWORD *)v4 - 1) = v26;
    while ( 1 )
    {
LABEL_3:
      v5 = *((_DWORD *)v4 - 1);
      if ( !v5 )
        return;
      v6 = (unsigned int)(v5 - 1);
      v7 = (unsigned int *)v4[v6];
      *((_DWORD *)v4 - 1) = v6;
      --*(_DWORD *)(v2 + 96);
      v8 = *((_QWORD *)v7 + 1);
      v9 = *v7;
      if ( v8 )
      {
        v10 = *((_QWORD *)v7 + 2);
        v11 = 33
            * ((4097 * *(_DWORD *)(v10 & 0xFFFFFFFFFFFFFFFELL) + 2127912214)
             ^ ((unsigned int)(4097 * *(_DWORD *)(v10 & 0xFFFFFFFFFFFFFFFELL) + 2127912214) >> 19)
             ^ 0xC761C23C);
        v12 = 9 * (((v11 + 374761393) << 9) ^ (v11 - 369570787)) - 42973499;
        v13 = v12 ^ HIWORD(v12);
        v14 = 33
            * ((4097 * *(_DWORD *)(v8 & 0xFFFFFFFFFFFFFFFELL) + 2127912214)
             ^ ((unsigned int)(4097 * *(_DWORD *)(v8 & 0xFFFFFFFFFFFFFFFELL) + 2127912214) >> 19)
             ^ 0xC761C23C);
        v15 = (9 * (((v14 + 374761393) << 9) ^ (v14 - 369570787)) - 42973499)
            ^ ((9 * (((v14 + 374761393) << 9) ^ (v14 - 369570787)) - 42973499) >> 16)
            ^ 0xB55A4F09;
        v16 = ((v13 ^ 0xB55A4F09) - v15) ^ (v15 << 8);
        v17 = nullptr;
        v18 = *(_QWORD *)(v2 + 32)
            + 16LL * ((((v16 ^ ((v15 - v16) << 16)) + v16 - v15) ^ ((v15 - v16) << 10)) & (*(_DWORD *)(v2 + 52) - 1));
        v19 = *(__m128i **)v18;
        if ( (*(_QWORD *)v18 & 7LL) != 1 )
        {
          while ( 1 )
          {
            v20 = *(_QWORD *)(v18 + 8);
            if ( v8 == *(_QWORD *)(v20 + 8) && v10 == *(_QWORD *)(v20 + 16) )
              break;
            ++*(_DWORD *)(v2 + 64);
            if ( !v19 )
              goto LABEL_13;
            v17 = (_QWORD *)v18;
            v18 = (__int64)v19;
            v19 = (__m128i *)v19->m128i_i64[0];
          }
          --*(_DWORD *)(v2 + 60);
          if ( v17 )
          {
            *v17 = v19;
            *(_QWORD *)v18 = *(_QWORD *)(v2 + 80);
            *(_QWORD *)(v2 + 80) = v18;
          }
          else if ( v19 )
          {
            *(__m128i *)v18 = _mm_loadu_si128(v19);
            v19->m128i_i64[0] = *(_QWORD *)(v2 + 80);
            *(_QWORD *)(v2 + 80) = v19;
          }
          else
          {
            --*(_DWORD *)(v2 + 56);
            *(_QWORD *)v18 = 1;
          }
        }
LABEL_13:
        if ( (unsigned __int8)sub_186AF10(v10) )
        {
          v21 = *((_QWORD *)v7 + 1) & 0xFFFFFFFFFFFFFFFELL;
          v3 = (*(_DWORD *)(v21 + 4))-- == 1;
          if ( !v3 )
            goto LABEL_15;
        }
        else
        {
          v28 = *(_QWORD **)(v2 + 24);
          if ( v28 )
          {
            v29 = *((unsigned int *)v28 - 1);
            if ( (_DWORD)v29 == *((_DWORD *)v28 - 2) )
            {
              v54 = (unsigned int)(3 * v29 + 1) >> 1;
              v55 = 4 * v54 + 8;
              if ( 4 * (int)v29 + 8 >= (unsigned int)v55 || (unsigned int)v29 >= v54 )
                goto LABEL_66;
              v56 = (unsigned int *)sub_186B300(v28 - 1, v55);
              v28 = v56 + 2;
              *v56 = v54;
              v57 = v56[1];
              *(_QWORD *)(v2 + 24) = v28;
              v30 = (_DWORD *)v28 + v57;
            }
            else
            {
              v30 = (_DWORD *)v28 + v29;
            }
          }
          else
          {
            v71 = (_QWORD *)sub_186B270(0x10u);
            v28 = v71 + 1;
            *v71 = 2;
            *(_QWORD *)(v2 + 24) = v71 + 1;
            v30 = v71 + 1;
          }
          *v30 = v9;
          v31 = *((_QWORD *)v7 + 1);
          ++*((_DWORD *)v28 - 1);
          v21 = v31 & 0xFFFFFFFFFFFFFFFELL;
          v3 = (*(_DWORD *)(v21 + 4))-- == 1;
          if ( !v3 )
          {
LABEL_15:
            v22 = *((_QWORD *)v7 + 2) & 0xFFFFFFFFFFFFFFFELL;
            v3 = (*(_DWORD *)(v22 + 4))-- == 1;
            if ( !v3 )
              goto LABEL_16;
LABEL_30:
            v38 = *(_QWORD **)(v2 + 640);
            if ( v38 )
            {
              v39 = *((_DWORD *)v38 - 1);
              if ( v39 == *((_DWORD *)v38 - 2) )
              {
                v62 = (3 * v39 + 1) >> 1;
                v63 = 8 * v62 + 8;
                if ( 8 * v39 + 8 >= (unsigned int)v63 || v39 >= v62 )
                  goto LABEL_66;
                v64 = (unsigned int *)sub_186B300(v38 - 1, v63);
                v65 = v64[1];
                v38 = v64 + 2;
                *v64 = v62;
                *(_QWORD *)(v2 + 640) = v64 + 2;
                LODWORD(v64) = v65;
                v42 = &v38[v65];
                v41 = (_DWORD)v64 + 1;
              }
              else
              {
                v40 = v39;
                v41 = v39 + 1;
                v42 = &v38[v40];
              }
            }
            else
            {
              v72 = (_QWORD *)sub_186B270(0x18u);
              v38 = v72 + 1;
              *v72 = 2;
              v41 = 1;
              *(_QWORD *)(v2 + 640) = v38;
              v42 = v38;
            }
            *v42 = v22;
            *((_DWORD *)v38 - 1) = v41;
            goto LABEL_16;
          }
        }
        v32 = *(_QWORD **)(v2 + 640);
        if ( v32 )
        {
          v33 = *((_DWORD *)v32 - 1);
          if ( v33 == *((_DWORD *)v32 - 2) )
          {
            v66 = (3 * v33 + 1) >> 1;
            v67 = 8 * v66 + 8;
            if ( 8 * v33 + 8 >= (unsigned int)v67 || v33 >= v66 )
              goto LABEL_66;
            v68 = (unsigned int *)sub_186B300(v32 - 1, v67);
            v69 = v68[1];
            v32 = v68 + 2;
            *v68 = v66;
            *(_QWORD *)(v2 + 640) = v68 + 2;
            LODWORD(v68) = v69;
            v36 = &v32[v69];
            v35 = (_DWORD)v68 + 1;
          }
          else
          {
            v34 = v33;
            v35 = v33 + 1;
            v36 = &v32[v34];
          }
        }
        else
        {
          v73 = (_QWORD *)sub_186B270(0x18u);
          v32 = v73 + 1;
          *v73 = 2;
          v35 = 1;
          *(_QWORD *)(v2 + 640) = v32;
          v36 = v32;
        }
        *v36 = v21;
        v37 = *((_QWORD *)v7 + 2);
        *((_DWORD *)v32 - 1) = v35;
        v22 = v37 & 0xFFFFFFFFFFFFFFFELL;
        v3 = (*(_DWORD *)(v22 + 4))-- == 1;
        if ( v3 )
          goto LABEL_30;
      }
      else
      {
        if ( !(unsigned __int8)sub_186AF10(a1) )
        {
          v43 = *(_QWORD **)(v2 + 8);
          if ( v43 )
          {
            v44 = *((unsigned int *)v43 - 1);
            if ( (_DWORD)v44 == *((_DWORD *)v43 - 2) )
            {
              v58 = (unsigned int)(3 * v44 + 1) >> 1;
              v59 = 4 * v58 + 8;
              if ( 4 * (int)v44 + 8 >= v59 || (unsigned int)v44 >= v58 )
                goto LABEL_66;
              v60 = (unsigned int *)sub_186B300(v43 - 1, v59);
              v43 = v60 + 2;
              *v60 = v58;
              v61 = v60[1];
              *(_QWORD *)(v2 + 8) = v43;
              v45 = (_DWORD *)v43 + v61;
            }
            else
            {
              v45 = (_DWORD *)v43 + v44;
            }
          }
          else
          {
            v74 = (_QWORD *)sub_186B270(0x10u);
            *v74 = 2;
            v43 = v74 + 1;
            *(_QWORD *)(v2 + 8) = v74 + 1;
            v45 = v74 + 1;
          }
          *v45 = v9;
          ++*((_DWORD *)v43 - 1);
        }
        v46 = 8LL * *v7;
        v47 = (__int64 *)(v46 + *(_QWORD *)(v2 + 112));
        v48 = *v47;
        if ( *v47 )
        {
          v49 = *(_QWORD *)(v2 + 104);
          v3 = (*(_DWORD *)(v48 + 8))-- == 1;
          if ( v3 )
          {
            sub_15D7BC0(v49, v48);
            v47 = (__int64 *)(v46 + *(_QWORD *)(v2 + 112));
          }
        }
        *v47 = 0;
      }
LABEL_16:
      a1 = v2 + 120;
      sub_17E9C40(v2 + 120, 32, v7);
      v4 = *(_QWORD **)(v2 + 640);
      if ( !v4 )
        return;
    }
  }
  if ( v4 )
    goto LABEL_3;
}

