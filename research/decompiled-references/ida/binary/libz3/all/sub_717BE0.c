void __fastcall sub_717BE0(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // r13
  __int64 v4; // rdx
  int v5; // eax
  __m128 *v6; // rdx
  unsigned __int64 v7; // rbx
  __m128 v8; // xmm0
  __int64 v9; // rbp
  _DWORD *v10; // rbx
  __m128 *v11; // r15
  unsigned int v12; // eax
  unsigned int v13; // r8d
  unsigned int v14; // r12d
  size_t v15; // rdi
  __int64 v16; // rax
  _QWORD *v17; // r14
  _DWORD *v18; // r9
  __int64 v19; // r10
  __int64 v20; // rdx
  _QWORD *v21; // rdi
  _QWORD *i; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 *v26; // rdx
  __int64 *v27; // rbp
  _DWORD *v28; // r14
  __int64 *v29; // rbx
  __int64 v30; // rsi
  __int64 v31; // rdi
  bool v32; // zf
  __int64 v33; // rsi
  __int64 v34; // rdi
  _QWORD *v35; // rbx
  _QWORD *j; // rbp
  int *v37; // rax
  int v38; // eax
  _QWORD *v39; // rax
  char **exception; // r12
  __int64 v41; // rdx
  char **v42; // rbx
  __int64 v43; // rdx
  unsigned __int64 v44; // [rsp+0h] [rbp-88h] BYREF
  __int64 v45; // [rsp+8h] [rbp-80h]
  __int64 v46; // [rsp+10h] [rbp-78h]
  _DWORD *v47; // [rsp+18h] [rbp-70h]
  __int64 v48; // [rsp+20h] [rbp-68h]
  __int64 v49; // [rsp+28h] [rbp-60h]
  __int64 v50[11]; // [rsp+30h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a2 + 8);
  v45 = a1;
  v49 = a2;
  if ( v2 )
  {
    v46 = v2 + 8LL * *(unsigned int *)(v2 - 4);
    if ( v46 != v2 )
    {
      v3 = v2;
      do
      {
        v9 = *(_QWORD *)(v45 + 296);
        v10 = *(_DWORD **)(*(_QWORD *)v3 + 16LL);
        v44 = *(_QWORD *)(v9 + 32);
        if ( v10 )
          ++v10[2];
        v11 = *(__m128 **)(v9 + 72);
        if ( v11 )
        {
          v12 = v11[-1].m128_u32[3];
          if ( v12 == v11[-1].m128_i32[2] )
          {
            v13 = (3 * v12 + 1) >> 1;
            v14 = v13;
            v15 = 40 * v13 + 8;
            if ( 40 * v12 + 8 >= (unsigned int)v15 || v12 >= v13 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_109F38(v50, "Overflow encountered when expanding vector", v41);
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v50);
              sub_233E40((__int64)v50);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v16 = sub_186B270(v15);
            v17 = *(_QWORD **)(v9 + 72);
            v18 = (_DWORD *)v16;
            v11 = (__m128 *)(v16 + 8);
            if ( v17 )
            {
              v19 = *((unsigned int *)v17 - 1);
              v20 = v16 + 8;
              *(_DWORD *)(v16 + 4) = v19;
              v21 = &v17[5 * v19];
              for ( i = v17; v21 != i; *(_DWORD *)(v20 - 8) = *((_DWORD *)i - 2) )
              {
                v23 = i[1];
                i += 5;
                v20 += 40;
                *(_QWORD *)(v20 - 32) = v23;
                v24 = *(i - 5);
                *(i - 5) = 0;
                *(_QWORD *)(v20 - 40) = v24;
                *(_QWORD *)(v20 - 16) = *(i - 2);
                v25 = *(i - 3);
                *(i - 3) = 0;
                *(_QWORD *)(v20 - 24) = v25;
              }
              if ( (_DWORD)v19 )
              {
                v47 = v10;
                v26 = &v17[5 * v19];
                v48 = v9;
                v27 = v17;
                v28 = v18;
                v29 = v26;
                do
                {
                  while ( 1 )
                  {
                    v33 = v27[2];
                    if ( v33 )
                    {
                      v34 = v27[3];
                      v32 = (*(_DWORD *)(v33 + 8))-- == 1;
                      if ( v32 )
                        sub_15D7BC0(v34, v33);
                    }
                    v30 = *v27;
                    if ( *v27 )
                    {
                      v31 = v27[1];
                      v32 = (*(_DWORD *)(v30 + 8))-- == 1;
                      if ( v32 )
                        break;
                    }
                    v27 += 5;
                    if ( v29 == v27 )
                      goto LABEL_24;
                  }
                  sub_15D7BC0(v31, v30);
                  v27 += 5;
                }
                while ( v29 != v27 );
LABEL_24:
                v9 = v48;
                v18 = v28;
                v17 = *(_QWORD **)(v48 + 72);
              }
              v47 = v18;
              sub_186B220(v17 - 1);
              v18 = v47;
              v6 = (__m128 *)((char *)v11 + 40 * (unsigned int)v47[1]);
              v5 = v47[1] + 1;
            }
            else
            {
              *(_DWORD *)(v16 + 4) = 0;
              v6 = (__m128 *)(v16 + 8);
              v5 = 1;
            }
            *(_QWORD *)(v9 + 72) = v11;
            *v18 = v14;
          }
          else
          {
            v4 = v12;
            v5 = v12 + 1;
            v6 = (__m128 *)((char *)v11 + 40 * v4);
          }
        }
        else
        {
          v39 = (_QWORD *)sub_186B270(0x58u);
          v11 = (__m128 *)(v39 + 1);
          *v39 = 2;
          v5 = 1;
          *(_QWORD *)(v9 + 72) = v11;
          v6 = v11;
        }
        v7 = v44;
        v6[1].m128_u64[0] = 0;
        v3 += 8;
        v8 = _mm_loadh_ps((const double *)&v44);
        v6[2].m128_i32[0] = 0;
        v6[1].m128_u64[1] = v7;
        *v6 = v8;
        v11[-1].m128_i32[3] = v5;
      }
      while ( v46 != v3 );
      v35 = *(_QWORD **)(v49 + 8);
      if ( v35 )
      {
        for ( j = &v35[*((unsigned int *)v35 - 1)]; j != v35; ++v35 )
        {
          v37 = *(int **)(sub_15D1F10(*v35) + 24);
          if ( v37 )
          {
            v38 = *v37;
            if ( v38 != -1 && v38 != 4 )
              continue;
          }
          v42 = (char **)__cxa_allocate_exception(0x28u);
          sub_109F38(v50, "qsat does not apply to uninterpreted sorts", v43);
          *v42 = (char *)off_1C63128;
          sub_2333C0(v42 + 1, v50);
          sub_233E40((__int64)v50);
          __cxa_throw(v42, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
      }
    }
  }
}

