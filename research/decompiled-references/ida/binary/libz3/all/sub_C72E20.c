__int64 __fastcall sub_C72E20(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // r12
  __int64 v7; // rbp
  unsigned int v8; // eax
  __int64 v9; // rdx
  int v10; // eax
  __int64 *v11; // rdx
  __int64 **v12; // r14
  unsigned __int64 v13; // r13
  unsigned int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  _QWORD *v17; // rbp
  __int64 *v18; // rcx
  __int64 *v19; // r14
  __int64 v20; // r15
  __int64 *v21; // r13
  __int64 v22; // rsi
  int v23; // eax
  __int64 *v24; // rsi
  __int64 v25; // rax
  _QWORD *v26; // rdx
  unsigned int v27; // eax
  unsigned int v28; // r8d
  size_t v29; // rsi
  unsigned int *v30; // rax
  __int64 v31; // rsi
  _QWORD *v32; // rax
  size_t v33; // rdi
  __int64 v34; // rax
  __int64 v35; // r8
  _DWORD *v36; // rbp
  unsigned __int64 v37; // r15
  __int64 v38; // rax
  int v39; // edi
  __int64 *v40; // r10
  unsigned __int64 v41; // rcx
  __int64 *v42; // r9
  __int64 v43; // rax
  unsigned __int64 v44; // rcx
  __m128i v45; // xmm0
  unsigned __int64 v46; // rcx
  __int64 *v47; // rax
  __int64 v48; // r9
  unsigned __int64 v49; // r8
  _DWORD *v50; // r12
  _QWORD *v51; // rbp
  _QWORD *v52; // rbx
  void *v53; // rdi
  void *v54; // rdi
  __int64 v55; // rdx
  unsigned int v56; // r14d
  size_t v57; // rsi
  unsigned int *v58; // rax
  __int64 v59; // rdx
  _QWORD *v61; // rax
  _QWORD *v62; // rax
  unsigned __int64 v63; // rax
  __int64 v64; // rdx
  char **exception; // rbp
  __int64 v66; // rdx
  unsigned int v67; // [rsp+Ch] [rbp-8Ch]
  unsigned int v68; // [rsp+Ch] [rbp-8Ch]
  __int64 v69; // [rsp+10h] [rbp-88h]
  __int64 v70; // [rsp+18h] [rbp-80h]
  __int64 v72; // [rsp+28h] [rbp-70h]
  _QWORD *v73; // [rsp+30h] [rbp-68h]
  _QWORD *v74; // [rsp+38h] [rbp-60h]
  __int64 v75[11]; // [rsp+40h] [rbp-58h] BYREF

  v2 = a2;
  v3 = a2[1];
  v70 = sub_186B270(0x38u);
  *(_DWORD *)(v70 + 8) = 0;
  *(_QWORD *)(v70 + 16) = 0;
  *(_BYTE *)(v70 + 24) = 1;
  *(_QWORD *)v70 = &off_1C74668;
  *(_QWORD *)(v70 + 32) = v3;
  *(_QWORD *)(v70 + 40) = 0;
  *(_QWORD *)(v70 + 48) = 0;
  v4 = *(_QWORD *)(a1 + 40);
  if ( v4 )
  {
    v5 = *(unsigned int *)(v4 - 4);
    if ( (_DWORD)v5 )
    {
      v6 = nullptr;
      v69 = 0;
      v72 = 8 * v5;
      while ( 1 )
      {
        v7 = *(_QWORD *)(v4 + v69);
        if ( v2[1] != *v2 )
          v7 = sub_15CFF50(v2, v7);
        if ( v7 )
          ++*(_DWORD *)(v7 + 8);
        if ( v6 )
        {
          v8 = *((_DWORD *)v6 - 1);
          if ( v8 == *((_DWORD *)v6 - 2) )
          {
            v56 = (3 * v8 + 1) >> 1;
            v57 = 8 * v56 + 8;
            if ( 8 * v8 + 8 >= (unsigned int)v57 || v8 >= v56 )
            {
LABEL_62:
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_161886(v75, "Overflow encountered when expanding vector", v66);
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v75);
              sub_233E40((__int64)v75);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v58 = (unsigned int *)sub_186B300(v6 - 1, v57);
            v59 = v58[1];
            v6 = v58 + 2;
            *v58 = v56;
            *(_QWORD *)(v70 + 40) = v58 + 2;
            LODWORD(v58) = v59;
            v11 = &v6[v59];
            v10 = (_DWORD)v58 + 1;
          }
          else
          {
            v9 = v8;
            v10 = v8 + 1;
            v11 = &v6[v9];
          }
        }
        else
        {
          v61 = (_QWORD *)sub_186B270(0x18u);
          v6 = v61 + 1;
          *v61 = 2;
          v11 = v61 + 1;
          *(_QWORD *)(v70 + 40) = v61 + 1;
          v10 = 1;
        }
        *v11 = v7;
        *((_DWORD *)v6 - 1) = v10;
        v12 = (__int64 **)(*(_QWORD *)(a1 + 48) + v69);
        v13 = *(_QWORD *)(v70 + 48);
        if ( v13 )
        {
          v14 = *(_DWORD *)(v13 - 4);
          if ( v14 == *(_DWORD *)(v13 - 8) )
          {
            v68 = (3 * v14 + 1) >> 1;
            v33 = 8 * v68 + 8;
            if ( 8 * v14 + 8 >= (unsigned int)v33 || v14 >= (3 * v14 + 1) >> 1 )
              goto LABEL_62;
            v34 = sub_186B270(v33);
            v35 = *(unsigned int *)(v13 - 4);
            v36 = (_DWORD *)v34;
            v37 = v34 + 8;
            *(_DWORD *)(v34 + 4) = v35;
            v38 = 8 * v35;
            v39 = v35;
            v40 = (__int64 *)(v13 + 8 * v35);
            if ( (__int64 *)v13 != v40 )
            {
              v41 = v38 - 8;
              v42 = (__int64 *)v13;
              if ( (unsigned __int64)(v38 - 8) <= 8 || v13 < (unsigned __int64)(v36 + 6) && v37 < v13 + 16 )
              {
                v63 = v37;
                do
                {
                  v64 = *v42;
                  *v42++ = 0;
                  v63 += 8LL;
                  *(_QWORD *)(v63 - 8) = v64;
                }
                while ( v42 != v40 );
              }
              else
              {
                v43 = 0;
                v44 = (v41 >> 3) + 1;
                do
                {
                  v45 = _mm_loadu_si128((const __m128i *)(v13 + v43 * 4));
                  *(_OWORD *)(v13 + v43 * 4) = 0;
                  *(__m128i *)&v36[v43 + 2] = v45;
                  v43 += 4;
                }
                while ( 4 * (v44 >> 1) != v43 );
                if ( (v44 & 1) != 0 )
                {
                  v46 = v44 & 0xFFFFFFFFFFFFFFFELL;
                  v47 = (__int64 *)(v13 + 8 * v46);
                  v48 = *v47;
                  *v47 = 0;
                  *(_QWORD *)(v37 + 8 * v46) = v48;
                }
              }
            }
            v49 = v13 + 8 * v35;
            if ( v39 )
            {
              v73 = v6;
              v50 = v36;
              v51 = (_QWORD *)v49;
              v74 = v2;
              v52 = (_QWORD *)v13;
              do
              {
                while ( *v52 )
                {
                  v53 = (void *)(*v52++ - 8LL);
                  sub_186B220(v53);
                  if ( v52 == v51 )
                    goto LABEL_49;
                }
                ++v52;
              }
              while ( v52 != v51 );
LABEL_49:
              v36 = v50;
              v2 = v74;
              v6 = v73;
            }
            v54 = (void *)(v13 - 8);
            v13 = v37;
            sub_186B220(v54);
            v55 = (unsigned int)v36[1];
            *(_QWORD *)(v70 + 48) = v37;
            *v36 = v68;
            v17 = (_QWORD *)(v37 + 8 * v55);
            v16 = v55 + 1;
          }
          else
          {
            v15 = v14;
            v16 = v14 + 1;
            v17 = (_QWORD *)(v13 + 8 * v15);
          }
        }
        else
        {
          v62 = (_QWORD *)sub_186B270(0x18u);
          v13 = (unsigned __int64)(v62 + 1);
          *v62 = 2;
          v17 = v62 + 1;
          *(_QWORD *)(v70 + 48) = v62 + 1;
          v16 = 1;
        }
        *v17 = 0;
        v18 = *v12;
        *(_DWORD *)(v13 - 4) = v16;
        if ( v18 )
        {
          v19 = &v18[*((unsigned int *)v18 - 1)];
          if ( v19 != v18 )
          {
            v20 = *v18;
            v21 = v18;
            if ( *v2 == v2[1] )
            {
              if ( v20 )
                ++*(_DWORD *)(v20 + 8);
            }
            else
            {
LABEL_21:
              v25 = sub_15CFF50(v2, v20);
              v26 = (_QWORD *)*v17;
              v20 = v25;
              if ( v25 )
                ++*(_DWORD *)(v25 + 8);
              if ( v26 )
              {
                while ( 1 )
                {
                  v27 = *((_DWORD *)v26 - 1);
                  if ( v27 == *((_DWORD *)v26 - 2) )
                  {
                    v28 = (3 * v27 + 1) >> 1;
                    v29 = 8 * v28 + 8;
                    if ( 8 * v27 + 8 >= (unsigned int)v29 || v27 >= v28 )
                      goto LABEL_62;
                    v67 = (3 * v27 + 1) >> 1;
                    ++v21;
                    v30 = (unsigned int *)sub_186B300(v26 - 1, v29);
                    v31 = v30[1];
                    v26 = v30 + 2;
                    *v17 = v30 + 2;
                    *v30 = v67;
                    *(_QWORD *)&v30[2 * v31 + 2] = v20;
                    v30[1] = v31 + 1;
                    if ( v19 == v21 )
                      goto LABEL_28;
                  }
                  else
                  {
                    v22 = v27;
                    v23 = v27 + 1;
                    v24 = &v26[v22];
LABEL_19:
                    ++v21;
                    *v24 = v20;
                    *((_DWORD *)v26 - 1) = v23;
                    if ( v19 == v21 )
                      goto LABEL_28;
                  }
                  v20 = *v21;
                  if ( v2[1] != *v2 )
                    goto LABEL_21;
                  if ( v20 )
                    ++*(_DWORD *)(v20 + 8);
                }
              }
            }
            v32 = (_QWORD *)sub_186B270(0x18u);
            v26 = v32 + 1;
            *v32 = 2;
            v24 = v26;
            v23 = 1;
            *v17 = v26;
            goto LABEL_19;
          }
        }
LABEL_28:
        v69 += 8;
        if ( v72 == v69 )
          return v70;
        v4 = *(_QWORD *)(a1 + 40);
      }
    }
  }
  return v70;
}

