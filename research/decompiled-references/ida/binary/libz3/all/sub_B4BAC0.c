__int64 __fastcall sub_B4BAC0(__int64 a1, __int64 a2)
{
  char **exception; // rbx
  char **v3; // rbp
  __int64 v5; // rax
  int v6; // edx
  unsigned int v7; // edx
  __int64 v8; // rcx
  __int64 v9; // rsi
  unsigned int v10; // ebp
  __int64 v11; // r12
  char v12; // dl
  _QWORD *v13; // rdi
  unsigned int v14; // ebp
  __int64 v15; // rax
  _QWORD *v16; // rax
  unsigned int v17; // r13d
  __int64 *v19; // rsi
  int v20; // edi
  __int64 *v21; // rsi
  int v22; // edi
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // r9
  __int64 v26; // r15
  int v27; // r12d
  __int64 v28; // rbp
  int v29; // eax
  unsigned int v30; // ebx
  __int64 v31; // rax
  __int64 v32; // rbx
  __int64 v33; // r12
  __int64 v34; // r14
  _QWORD *v35; // rdx
  unsigned int v36; // eax
  __int64 v37; // rcx
  int v38; // eax
  __int64 *v39; // rcx
  __int64 v40; // rbx
  __int64 v41; // rbp
  __int64 v42; // rbp
  __int64 v43; // rdi
  unsigned int v44; // r13d
  size_t v45; // rsi
  unsigned int *v46; // rax
  __int64 v47; // rax
  int v48; // ebp
  unsigned int v49; // ebx
  size_t v50; // rsi
  unsigned int *v51; // rax
  __int64 v52; // rcx
  _QWORD *v53; // rax
  _QWORD *v54; // rax
  unsigned int v55; // [rsp+8h] [rbp-B0h]
  __int64 v56; // [rsp+8h] [rbp-B0h]
  __int64 v57[4]; // [rsp+20h] [rbp-98h] BYREF
  __int64 *v58; // [rsp+40h] [rbp-78h] BYREF
  char v59; // [rsp+48h] [rbp-70h]
  int v60; // [rsp+4Ch] [rbp-6Ch]
  __int64 v61; // [rsp+50h] [rbp-68h]
  int v62; // [rsp+58h] [rbp-60h]
  __int64 v63; // [rsp+60h] [rbp-58h]
  int v64; // [rsp+68h] [rbp-50h]
  __int64 v65; // [rsp+70h] [rbp-48h]

  ++*(_DWORD *)(a1 + 360);
  sub_B45E20(a1, a2);
  v5 = *(_QWORD *)(a1 + 432);
  while ( v5 )
  {
    v6 = *(_DWORD *)(v5 - 4);
    if ( !v6 )
      return 0;
    v7 = v6 - 1;
    v8 = v5 + 16LL * v7;
    v9 = *(_QWORD *)(v8 + 8);
    v10 = *(_DWORD *)v8;
    *(_DWORD *)(v5 - 4) = v7;
    v11 = *(_QWORD *)(v9 + 8);
    v12 = *(_BYTE *)(v11 + 44);
    if ( (v12 & 2) != 0 )
      continue;
    if ( v10 )
    {
      if ( v10 != 1 )
        continue;
      *(_BYTE *)(v11 + 44) = v12 | 2;
      v13 = *(_QWORD **)(a1 + 392);
      if ( v13 )
      {
        v14 = *((_DWORD *)v13 - 1);
        if ( v14 == *((_DWORD *)v13 - 2) )
        {
          v44 = (3 * v14 + 1) >> 1;
          v45 = 8 * v44 + 8;
          if ( 8 * v14 + 8 >= (unsigned int)v45 || v14 >= v44 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)&v58, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, &v58);
            sub_233E40((__int64)&v58);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v46 = (unsigned int *)sub_186B300(v13 - 1, v45);
          v13 = v46 + 2;
          *v46 = v44;
          v47 = v46[1];
          *(_QWORD *)(a1 + 392) = v13;
          v48 = v47;
          v16 = &v13[v47];
          v10 = v48 + 1;
        }
        else
        {
          v15 = v14;
          v10 = v14 + 1;
          v16 = &v13[v15];
        }
      }
      else
      {
        v53 = (_QWORD *)sub_186B270(0x18u);
        v13 = v53 + 1;
        *v53 = 2;
        *(_QWORD *)(a1 + 392) = v53 + 1;
        v16 = v53 + 1;
      }
      *v16 = v11;
      *((_DWORD *)v13 - 1) = v10;
    }
    else
    {
      v17 = sub_B477A0(a1, v9);
      if ( (_BYTE)v17 )
      {
        v19 = *(__int64 **)(a1 + 384);
        if ( v19 )
          v20 = *((_DWORD *)v19 - 1);
        else
          v20 = 0;
        sub_B397E0(v20, v19);
        v21 = *(__int64 **)(a1 + 392);
        if ( v21 )
          v22 = *((_DWORD *)v21 - 1);
        else
          v22 = 0;
        sub_B39810(v22, v21);
        v23 = *(_QWORD *)(a1 + 384);
        if ( v23 )
          *(_DWORD *)(v23 - 4) = 0;
        v24 = *(_QWORD *)(a1 + 392);
        if ( v24 )
          *(_DWORD *)(v24 - 4) = 0;
        v25 = *(_QWORD *)(a1 + 400);
        v26 = *(_QWORD *)(a1 + 16);
        if ( v25 )
          v10 = *(_DWORD *)(v25 - 4);
        v27 = *(_DWORD *)(a1 + 8);
        sub_B72D60(&v58, v26, 0, 0, v10, v25);
        v64 = v27;
        v65 = 0;
        v58 = (__int64 *)&off_1C57990;
        sub_B73430(&v58, v26);
        v28 = sub_180C100(v26 + 8400, 56);
        *(_BYTE *)(v28 + 8) = v59 & 3 | *(_BYTE *)(v28 + 8) & 0xFC;
        *(_DWORD *)(v28 + 12) = v60;
        *(_QWORD *)(v28 + 16) = v61;
        *(_DWORD *)(v28 + 24) = v62;
        *(_QWORD *)(v28 + 32) = v63;
        *(_QWORD *)v28 = qword_1C6E7C8;
        v29 = v64;
        *(_QWORD *)(v28 + 48) = 0;
        *(_DWORD *)(v28 + 40) = v29;
        if ( v65 )
        {
          v30 = *(_DWORD *)(v65 - 4);
          v55 = *(_DWORD *)(v65 - 8);
          v31 = sub_186B270(16LL * v55 + 8) + 8;
          *(_QWORD *)(v31 - 8) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v55), _mm_cvtsi32_si128(v30)).m128i_u64[0];
          *(_QWORD *)(v28 + 48) = v31;
          v32 = v65;
          v56 = v31;
          if ( !v65 || (v33 = v31, v34 = v65 + 16LL * *(unsigned int *)(v65 - 4), v65 == v34) )
          {
            *(_QWORD *)v28 = &off_1C57990;
LABEL_30:
            if ( *(_DWORD *)(v56 - 4) )
            {
              v35 = *(_QWORD **)(v26 + 8600);
              if ( v35 )
              {
                v36 = *((_DWORD *)v35 - 1);
                if ( v36 == *((_DWORD *)v35 - 2) )
                {
                  v49 = (3 * v36 + 1) >> 1;
                  v50 = 8 * v49 + 8;
                  if ( 8 * v36 + 8 >= (unsigned int)v50 || v36 >= v49 )
                  {
                    v3 = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0(v57, "Overflow encountered when expanding vector");
                    *v3 = (char *)off_1C63128;
                    sub_2333C0(v3 + 1, v57);
                    sub_233E40((__int64)v57);
                    __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                  }
                  v51 = (unsigned int *)sub_186B300(v35 - 1, v50);
                  v52 = v51[1];
                  v35 = v51 + 2;
                  *(_QWORD *)(v26 + 8600) = v51 + 2;
                  *v51 = v49;
                  LODWORD(v51) = v52;
                  v39 = &v35[v52];
                  v38 = (_DWORD)v51 + 1;
                }
                else
                {
                  v37 = v36;
                  v38 = v36 + 1;
                  v39 = &v35[v37];
                }
              }
              else
              {
                v54 = (_QWORD *)sub_186B270(0x18u);
                v35 = v54 + 1;
                *v54 = 2;
                v38 = 1;
                *(_QWORD *)(v26 + 8600) = v35;
                v39 = v35;
              }
              *v39 = v28;
              *((_DWORD *)v35 - 1) = v38;
            }
          }
          else
          {
            do
            {
              sub_15D0E50(v33, v32);
              v32 += 16;
              v33 += 16;
            }
            while ( v32 != v34 );
            v56 = *(_QWORD *)(v28 + 48);
            *(_QWORD *)v28 = &off_1C57990;
            if ( v56 )
              goto LABEL_30;
          }
        }
        else
        {
          *(_QWORD *)v28 = &off_1C57990;
        }
        v57[0] = v28 | 3;
        sub_8E8670(v26, v57, -2);
        v40 = v65;
        v58 = qword_1C6E7C8;
        if ( v65 )
        {
          v41 = *(unsigned int *)(v65 - 4);
          if ( (_DWORD)v41 )
          {
            v42 = v65 + 16 * v41;
            do
            {
              v43 = v40;
              v40 += 16;
              sub_15D0DF0(v43);
            }
            while ( v42 != v40 );
            v40 = v65;
          }
          sub_186B220((void *)(v40 - 8));
        }
        return v17;
      }
    }
    v5 = *(_QWORD *)(a1 + 432);
  }
  return 0;
}

