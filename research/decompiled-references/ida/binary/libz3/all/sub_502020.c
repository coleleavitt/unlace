__int64 __fastcall sub_502020(__int64 a1, unsigned int a2)
{
  char **exception; // rbx
  char **v3; // rbx
  __int64 result; // rax
  __int64 v6; // rdi
  unsigned int v7; // edx
  __int64 v8; // rcx
  unsigned int v9; // esi
  __int64 v10; // rdx
  __int64 v11; // r12
  unsigned int *v12; // rcx
  __int64 *v13; // rbp
  __int64 v14; // rax
  int v15; // edx
  unsigned int v16; // r14d
  unsigned int v17; // ebx
  _QWORD *v18; // r8
  int v19; // r13d
  unsigned int v20; // r12d
  __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rdx
  unsigned int v24; // eax
  int v25; // edi
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  int v29; // edx
  unsigned int v30; // r13d
  unsigned int v31; // ebx
  _QWORD *v32; // r8
  unsigned int v33; // r12d
  int v34; // r13d
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rsi
  unsigned int v38; // eax
  int v39; // edi
  __int64 v40; // rax
  __int64 v41; // rax
  unsigned int v42; // r14d
  size_t v43; // rdi
  unsigned int *v44; // rsi
  __int64 v45; // rdi
  __int64 v46; // r10
  unsigned __int64 v47; // rax
  __int64 v48; // r10
  unsigned int v49; // r14d
  size_t v50; // rdi
  unsigned int *v51; // rcx
  __int64 v52; // rdi
  __int64 v53; // r9
  unsigned __int64 v54; // rax
  __int64 v55; // r9
  _QWORD *v56; // rax
  _QWORD *v57; // rax
  char v58; // [rsp+1h] [rbp-99h]
  __int64 v59; // [rsp+2h] [rbp-98h]
  __int64 v60; // [rsp+2h] [rbp-98h]
  unsigned int *v61; // [rsp+Ah] [rbp-90h]
  _DWORD *v62; // [rsp+12h] [rbp-88h]
  int v63; // [rsp+1Ah] [rbp-80h]
  unsigned int v64; // [rsp+1Eh] [rbp-7Ch]
  __int64 v65; // [rsp+22h] [rbp-78h]
  __int64 *v66; // [rsp+42h] [rbp-58h] BYREF
  unsigned __int64 v67; // [rsp+4Ah] [rbp-50h]

  result = a2;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 120) + 16LL);
  v7 = a2;
  do
  {
    v8 = v7;
    v9 = v7;
    v7 = *(_DWORD *)(v6 + 4LL * v7);
  }
  while ( v7 != v9 );
  v10 = *(_QWORD *)(a1 + 128);
  if ( v10 )
  {
    v11 = a1;
    v63 = result;
    v65 = **(_QWORD **)(a1 + 48) + 16 * v8;
    do
    {
      while ( 1 )
      {
        result = *(unsigned int *)(v10 - 4);
        if ( !(_DWORD)result )
          return result;
        result = (unsigned int)(result - 1);
        v12 = (unsigned int *)(v10 + 8 * result);
        v64 = *v12;
        v58 = *((_BYTE *)v12 + 4);
        if ( v63 != *v12 )
          break;
        if ( *((_BYTE *)v12 + 4) )
        {
          *(_DWORD *)(v10 - 4) = 0;
          *(_BYTE *)(v11 + 56) = 1;
          return result;
        }
        *(_DWORD *)(v10 - 4) = result;
      }
      *(_DWORD *)(v10 - 4) = result;
      v13 = (__int64 *)(**(_QWORD **)(v11 + 48) + 16LL * v64);
      v14 = *v13;
      v66 = v13;
      if ( v14 )
      {
        v15 = *(_DWORD *)(v14 - 4);
        LODWORD(v67) = 0;
        HIDWORD(v67) = 32 * v15;
        v16 = 32 * v15;
      }
      else
      {
        v16 = 0;
        v67 = 0;
      }
      sub_313A20(&v66);
      v66 = v13;
      v17 = v67;
      v67 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v16), 224).m128i_u64[0];
      sub_313A20(&v66);
      if ( (_DWORD)v67 != v17 )
      {
        v59 = v11;
        v18 = *(_QWORD **)(v11 + 128);
        v19 = v67;
        v20 = v16;
        while ( v18 )
        {
          while ( 1 )
          {
            v21 = *((unsigned int *)v18 - 1);
            if ( (_DWORD)v21 == *((_DWORD *)v18 - 2) )
            {
              v49 = (unsigned int)(3 * v21 + 1) >> 1;
              v50 = 8 * v49 + 8;
              if ( 8 * (int)v21 + 8 >= (unsigned int)v50 || (unsigned int)v21 >= v49 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0((__int64 *)&v66, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, &v66);
                sub_233E40((__int64)&v66);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v51 = (unsigned int *)sub_186B270(v50);
              v18 = v51 + 2;
              v52 = *(_QWORD *)(v59 + 128);
              if ( v52 )
              {
                v53 = *(unsigned int *)(v52 - 4);
                v54 = 0;
                v51[1] = v53;
                v55 = 8 * v53;
                if ( v55 )
                {
                  do
                  {
                    *(_QWORD *)&v51[v54 / 4 + 2] = *(_QWORD *)(v52 + v54);
                    v54 += 8LL;
                  }
                  while ( v54 != v55 );
                }
                v62 = v51 + 2;
                v61 = v51;
                sub_186B220((void *)(v52 - 8));
                v51 = v61;
                v18 = v62;
                v22 = &v62[2 * v61[1]];
              }
              else
              {
                v51[1] = 0;
                v22 = v51 + 2;
              }
              *v51 = v49;
              *(_QWORD *)(v59 + 128) = v18;
            }
            else
            {
              v22 = &v18[v21];
            }
LABEL_14:
            *(_DWORD *)v22 = v17++;
            v23 = *v13;
            *((_BYTE *)v22 + 4) = 1;
            ++*((_DWORD *)v18 - 1);
            if ( v17 != v20 )
              break;
            if ( v23 )
            {
              v24 = v17 >> 5;
              if ( v17 >> 5 < *(_DWORD *)(v23 - 4) )
                goto LABEL_89;
              goto LABEL_31;
            }
            if ( v17 == v19 )
              goto LABEL_32;
          }
          if ( v23 )
          {
            while ( 1 )
            {
              v24 = v17 >> 5;
              if ( v17 >> 5 < *(_DWORD *)(v23 - 4) && (*(_DWORD *)(v23 + 4LL * v24) & (1 << (v17 & 0x1F))) != 0 )
                break;
              if ( (v17 & 0x1F) == 0 )
                break;
              if ( v20 == ++v17 )
              {
                v24 = v20 >> 5;
                if ( v20 >> 5 < *(_DWORD *)(v23 - 4) )
                  goto LABEL_89;
                goto LABEL_31;
              }
            }
            if ( v24 >= *(_DWORD *)(v23 - 4) )
            {
              if ( v20 == v17 )
                goto LABEL_31;
              goto LABEL_22;
            }
LABEL_89:
            v25 = *(_DWORD *)(v23 + 4LL * v24);
            if ( (v25 & (1 << v17)) == 0 && v20 != v17 )
            {
LABEL_23:
              while ( !v25 )
              {
                v17 += 32;
                ++v24;
                if ( v17 == v20 )
                  goto LABEL_31;
LABEL_22:
                v25 = *(_DWORD *)(v23 + 4LL * v24);
              }
              if ( v17 != v20 )
              {
                v26 = v17 >> 5;
                if ( v23 )
                {
                  if ( (unsigned int)v26 < *(_DWORD *)(v23 - 4) && (*(_DWORD *)(v23 + 4 * v26) & (1 << v17)) != 0
                    || (++v17, v17 != v20) )
                  {
                    do
                    {
                      v27 = v17 >> 5;
                      if ( (unsigned int)v27 < *(_DWORD *)(v23 - 4)
                        && (*(_DWORD *)(v23 + 4 * v27) & (1 << (v17 & 0x1F))) != 0 )
                      {
                        break;
                      }
                      if ( (v17 & 0x1F) == 0 )
                        break;
                      ++v17;
                    }
                    while ( v20 != v17 );
                  }
                }
                else
                {
                  do
                    ++v17;
                  while ( v17 != v20 && (v17 & 0x1F) != 0 );
                }
              }
            }
          }
          else
          {
            while ( (v17 & 0x1F) != 0 )
            {
              if ( ++v17 == v20 )
                goto LABEL_31;
            }
            if ( v17 != v20 )
            {
              v24 = v17 >> 5;
              v25 = *(_DWORD *)(4LL * (v17 >> 5));
              goto LABEL_23;
            }
          }
LABEL_31:
          if ( v17 == v19 )
          {
LABEL_32:
            v11 = v59;
            goto LABEL_33;
          }
        }
        v57 = (_QWORD *)sub_186B270(0x18u);
        v18 = v57 + 1;
        *v57 = 2;
        *(_QWORD *)(v59 + 128) = v57 + 1;
        v22 = v57 + 1;
        goto LABEL_14;
      }
LABEL_33:
      v28 = v13[1];
      v66 = v13 + 1;
      if ( v28 )
      {
        v29 = *(_DWORD *)(v28 - 4);
        LODWORD(v67) = 0;
        HIDWORD(v67) = 32 * v29;
        v30 = 32 * v29;
      }
      else
      {
        v30 = 0;
        v67 = 0;
      }
      sub_313A20(&v66);
      v66 = v13 + 1;
      v31 = v67;
      v67 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v30), 224).m128i_u64[0];
      sub_313A20(&v66);
      if ( (_DWORD)v67 == v31 )
        goto LABEL_59;
      v60 = v11;
      v32 = *(_QWORD **)(v11 + 128);
      v33 = v30;
      v34 = v67;
      while ( 1 )
      {
        if ( !v32 )
        {
          v56 = (_QWORD *)sub_186B270(0x18u);
          v32 = v56 + 1;
          *v56 = 2;
          *(_QWORD *)(v60 + 128) = v56 + 1;
          v36 = (__int64)(v56 + 1);
          goto LABEL_40;
        }
LABEL_38:
        v35 = *((unsigned int *)v32 - 1);
        if ( (_DWORD)v35 == *((_DWORD *)v32 - 2) )
        {
          v42 = (unsigned int)(3 * v35 + 1) >> 1;
          v43 = 8 * v42 + 8;
          if ( 8 * (int)v35 + 8 >= (unsigned int)v43 || (unsigned int)v35 >= v42 )
          {
            v3 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)&v66, "Overflow encountered when expanding vector");
            *v3 = (char *)off_1C63128;
            sub_2333C0(v3 + 1, &v66);
            sub_233E40((__int64)&v66);
            __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v44 = (unsigned int *)sub_186B270(v43);
          v32 = v44 + 2;
          v45 = *(_QWORD *)(v60 + 128);
          if ( v45 )
          {
            v46 = *(unsigned int *)(v45 - 4);
            v47 = 0;
            v44[1] = v46;
            v48 = 8 * v46;
            if ( v48 )
            {
              do
              {
                *(_QWORD *)&v44[v47 / 4 + 2] = *(_QWORD *)(v45 + v47);
                v47 += 8LL;
              }
              while ( v47 != v48 );
            }
            sub_186B220((void *)(v45 - 8));
            v32 = v44 + 2;
            v36 = (__int64)&v44[2 * v44[1] + 2];
          }
          else
          {
            v44[1] = 0;
            v36 = (__int64)(v44 + 2);
          }
          *v44 = v42;
          *(_QWORD *)(v60 + 128) = v32;
        }
        else
        {
          v36 = (__int64)&v32[v35];
        }
LABEL_40:
        *(_DWORD *)v36 = v31++;
        *(_BYTE *)(v36 + 4) = v58;
        v37 = v13[1];
        ++*((_DWORD *)v32 - 1);
        if ( v31 != v33 )
        {
          if ( v37 )
          {
            do
            {
              v38 = v31 >> 5;
              if ( v31 >> 5 < *(_DWORD *)(v37 - 4) && (*(_DWORD *)(v37 + 4LL * v38) & (1 << (v31 & 0x1F))) != 0
                || (v31 & 0x1F) == 0 )
              {
                if ( v38 < *(_DWORD *)(v37 - 4) )
                  goto LABEL_83;
                goto LABEL_45;
              }
              ++v31;
            }
            while ( v33 != v31 );
            v38 = v33 >> 5;
            if ( v33 >> 5 < *(_DWORD *)(v37 - 4) )
              goto LABEL_83;
LABEL_45:
            if ( v33 != v31 )
            {
              v39 = *(_DWORD *)(v37 + 4LL * v38);
              goto LABEL_49;
            }
          }
          else
          {
            while ( (v31 & 0x1F) != 0 )
            {
              if ( v33 == ++v31 )
              {
                v38 = v33 >> 5;
                goto LABEL_75;
              }
            }
            v38 = v31 >> 5;
LABEL_75:
            if ( v31 != v33 )
            {
              v39 = *(_DWORD *)(4LL * v38);
              goto LABEL_49;
            }
          }
          goto LABEL_57;
        }
        if ( !v37 )
          break;
        v38 = v31 >> 5;
        if ( v31 >> 5 < *(_DWORD *)(v37 - 4) )
        {
LABEL_83:
          v39 = *(_DWORD *)(v37 + 4LL * v38);
          if ( (v39 & (1 << v31)) == 0 && v33 != v31 )
          {
LABEL_49:
            while ( !v39 )
            {
              v31 += 32;
              ++v38;
              if ( v33 == v31 )
                goto LABEL_57;
              v39 = *(_DWORD *)(v37 + 4LL * v38);
            }
            if ( v31 != v33 )
            {
              v40 = v31 >> 5;
              if ( v37 )
              {
                if ( (unsigned int)v40 < *(_DWORD *)(v37 - 4) && (*(_DWORD *)(v37 + 4 * v40) & (1 << v31)) != 0
                  || (++v31, v33 != v31) )
                {
                  do
                  {
                    v41 = v31 >> 5;
                    if ( (unsigned int)v41 < *(_DWORD *)(v37 - 4)
                      && (*(_DWORD *)(v37 + 4 * v41) & (1 << (v31 & 0x1F))) != 0 )
                    {
                      break;
                    }
                    if ( (v31 & 0x1F) == 0 )
                      break;
                    ++v31;
                  }
                  while ( v33 != v31 );
                }
              }
              else
              {
                do
                  ++v31;
                while ( v33 != v31 && (v31 & 0x1F) != 0 );
              }
            }
          }
        }
LABEL_57:
        if ( v31 == v34 )
          goto LABEL_58;
      }
      if ( v31 != v34 )
        goto LABEL_38;
LABEL_58:
      v11 = v60;
LABEL_59:
      if ( v58 )
        result = sub_506520(v65, v64);
      else
        result = sub_506520(v65 + 8, v64);
      v10 = *(_QWORD *)(v11 + 128);
    }
    while ( v10 );
  }
  return result;
}

