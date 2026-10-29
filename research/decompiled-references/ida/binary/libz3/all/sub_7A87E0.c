__int64 __fastcall sub_7A87E0(__int64 a1, __int64 a2)
{
  char **exception; // rbp
  bool v4; // zf
  __int64 v5; // rbp
  __int64 result; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rbp
  unsigned int v14; // r13d
  _QWORD *v15; // rax
  __m128i v16; // xmm0
  __int64 v17; // rsi
  __int64 i; // rdx
  _QWORD *v19; // r14
  __int64 v20; // rdx
  unsigned int v21; // esi
  unsigned int v22; // eax
  unsigned int v23; // esi
  unsigned int v24; // eax
  __int64 v25; // rax
  _QWORD *v26; // r12
  __int64 v27; // rcx
  __int64 v28; // rax
  _QWORD *v29; // rdx
  __int64 v30; // rdi
  _QWORD *v31; // rax
  _QWORD *v32; // rdi
  __int64 v33; // rsi
  __int64 v34; // rsi
  __int64 v35; // rsi
  __int64 v36; // rsi
  __int64 v37; // rax
  _QWORD *v38; // r13
  __int64 v39; // rdi
  __int64 v40; // rdi
  __int64 v41; // rsi
  __int64 v42; // rdi
  void *v43; // rdi
  _QWORD *v44; // rax
  __int64 v45; // [rsp+0h] [rbp-C8h]
  unsigned int v46; // [rsp+8h] [rbp-C0h]
  _QWORD *v47; // [rsp+8h] [rbp-C0h]
  _DWORD *v48; // [rsp+10h] [rbp-B8h]
  unsigned int v49; // [rsp+1Ch] [rbp-ACh]
  __int64 v50; // [rsp+28h] [rbp-A0h] BYREF
  __int64 v51; // [rsp+30h] [rbp-98h] BYREF
  __int64 v52; // [rsp+38h] [rbp-90h]
  __int64 v53[9]; // [rsp+40h] [rbp-88h] BYREF
  int v54; // [rsp+88h] [rbp-40h]

  if ( *(_DWORD *)(a1 + 104) )
  {
    do
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 512LL))(a1);
      v4 = (*(_DWORD *)(a1 + 104))-- == 1;
    }
    while ( !v4 );
  }
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 80) + 480LL))(*(_QWORD *)(a1 + 80), a2);
  v5 = sub_7E4F00(a1);
  result = sub_7E5030(a1, v5);
  if ( !(_BYTE)result )
  {
    v7 = (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 528LL))(a1, v5);
    sub_13D7950(*(_QWORD *)(a1 + 80) + 1592LL, v5, v7, *(unsigned int *)(a1 + 12));
    v8 = *(_QWORD *)(a1 + 72);
    v9 = *(_QWORD *)(a1 + 80);
    v51 = 0;
    v52 = v8;
    v50 = 0;
    result = sub_7D2030(v9, v5, &v51, &v50);
    v10 = v50;
    if ( (_BYTE)result )
    {
      v13 = v51;
      v53[4] = 0;
      v53[5] = v51;
      v45 = v52;
      v53[6] = v52;
      if ( v51 )
        ++*(_DWORD *)(v51 + 8);
      v53[7] = 0;
      if ( v10 )
      {
        v14 = *(_DWORD *)(v10 - 4);
        v46 = *(_DWORD *)(v10 - 8);
        v15 = (_QWORD *)sub_186B270(4LL * v46 + 8);
        v16 = _mm_cvtsi32_si128(v46);
        v10 = v50;
        v47 = v15 + 1;
        *v15 = _mm_unpacklo_epi32(v16, _mm_cvtsi32_si128(v14)).m128i_u64[0];
        if ( v10 )
        {
          v17 = 4LL * *(unsigned int *)(v10 - 4);
          if ( v17 )
          {
            for ( i = 0; i != v17; i += 4 )
              *(_DWORD *)((char *)v15 + i + 8) = *(_DWORD *)(v10 + i);
          }
        }
      }
      else
      {
        v47 = nullptr;
      }
      v19 = *(_QWORD **)(a1 + 432);
      v54 = v7;
      if ( v19 )
      {
        v20 = *((unsigned int *)v19 - 1);
        if ( (_DWORD)v20 == *((_DWORD *)v19 - 2) )
        {
          v21 = 3 * v20 + 1;
          v22 = v21 & 0xFFFFFFFE;
          v23 = v21 >> 1;
          v49 = v23;
          v24 = 16 * (v23 + v22) + 8;
          if ( 48 * (int)v20 + 8 >= v24 || (unsigned int)v20 >= v23 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v53, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v53);
            sub_233E40((__int64)v53);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v25 = sub_186B270(v24);
          v26 = *(_QWORD **)(a1 + 432);
          v48 = (_DWORD *)v25;
          v27 = v25;
          v19 = (_QWORD *)(v25 + 8);
          if ( v26 )
          {
            v28 = *((unsigned int *)v26 - 1);
            v29 = v19;
            v30 = 3 * v28;
            *(_DWORD *)(v27 + 4) = v28;
            v31 = v26;
            v32 = &v26[2 * v30];
            if ( v26 != v32 )
            {
              do
              {
                v33 = *v31;
                *v31 = 0;
                v31 += 6;
                v29 += 6;
                *(v29 - 6) = v33;
                *(v29 - 4) = *(v31 - 4);
                v34 = *(v31 - 5);
                *(v31 - 5) = 0;
                *(v29 - 5) = v34;
                v35 = *(v31 - 3);
                *(v31 - 3) = 0;
                *(v29 - 3) = v35;
                v36 = *(v31 - 2);
                *(v31 - 2) = 0;
                *(v29 - 2) = v36;
                *((_DWORD *)v29 - 2) = *((_DWORD *)v31 - 2);
              }
              while ( v32 != v31 );
            }
            v37 = *((unsigned int *)v26 - 1);
            if ( (_DWORD)v37 )
            {
              v38 = &v26[6 * v37];
              do
              {
                while ( 1 )
                {
                  v39 = v26[4];
                  if ( v39 )
                    sub_186B220((void *)(v39 - 8));
                  v40 = v26[3];
                  if ( v40 )
                    sub_186B220((void *)(v40 - 8));
                  v41 = v26[1];
                  if ( v41 )
                  {
                    v42 = v26[2];
                    v4 = (*(_DWORD *)(v41 + 8))-- == 1;
                    if ( v4 )
                      sub_15D7BC0(v42, v41);
                  }
                  if ( !*v26 )
                    break;
                  v43 = (void *)(*v26 - 8LL);
                  v26 += 6;
                  sub_186B220(v43);
                  if ( v26 == v38 )
                    goto LABEL_40;
                }
                v26 += 6;
              }
              while ( v26 != v38 );
LABEL_40:
              v26 = *(_QWORD **)(a1 + 432);
            }
            sub_186B220(v26 - 1);
            result = (__int64)&v19[6 * (unsigned int)v48[1]];
          }
          else
          {
            *(_DWORD *)(v25 + 4) = 0;
            result = v25 + 8;
          }
          *(_QWORD *)(a1 + 432) = v19;
          v10 = v50;
          *v48 = v49;
        }
        else
        {
          result = (__int64)&v19[6 * v20];
        }
      }
      else
      {
        v44 = (_QWORD *)sub_186B270(0x68u);
        v19 = v44 + 1;
        *v44 = 2;
        v10 = v50;
        *(_QWORD *)(a1 + 432) = v44 + 1;
        result = (__int64)(v44 + 1);
      }
      *(_QWORD *)result = 0;
      *(_QWORD *)(result + 8) = v13;
      *(_QWORD *)(result + 16) = v45;
      *(_QWORD *)(result + 24) = 0;
      *(_QWORD *)(result + 32) = v47;
      *(_DWORD *)(result + 40) = v7;
      ++*((_DWORD *)v19 - 1);
      if ( !v10 )
        goto LABEL_7;
    }
    else if ( !v50 )
    {
      goto LABEL_7;
    }
    result = sub_186B220((void *)(v10 - 8));
LABEL_7:
    v11 = v51;
    if ( v51 )
    {
      v12 = v52;
      v4 = (*(_DWORD *)(v51 + 8))-- == 1;
      if ( v4 )
        return sub_15D7BC0(v12, v11);
    }
  }
  return result;
}

