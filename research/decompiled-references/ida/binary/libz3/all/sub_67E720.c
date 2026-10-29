__int64 __fastcall sub_67E720(const __m128i *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned int v12; // edx
  __int64 v13; // r15
  __int64 *v14; // r14
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD *v18; // rax
  __int64 *v19; // rsi
  __int64 v20; // rdx
  int v21; // eax
  unsigned int v22; // eax
  __int64 v23; // rsi
  __int64 v24; // rdi
  int v25; // eax
  __int64 v26; // rdi
  __int64 v27; // rax
  unsigned int *v28; // r14
  unsigned int v29; // eax
  __int64 v30; // r15
  __int64 v31; // rax
  __int64 v32; // r15
  __int64 v33; // rax
  __int64 v34; // rdi
  __int64 v35; // r15
  __int64 v36; // rax
  unsigned int v37; // r8d
  size_t v38; // rsi
  unsigned int *v39; // rax
  __int64 v40; // rsi
  __int64 v41; // rdx
  char **exception; // r15
  __int64 v43; // rdx
  __int64 v44; // [rsp+0h] [rbp-B0h]
  __int64 v45; // [rsp+8h] [rbp-A8h]
  unsigned int v46; // [rsp+8h] [rbp-A8h]
  unsigned __int64 v47; // [rsp+10h] [rbp-A0h] BYREF
  __int64 v48; // [rsp+18h] [rbp-98h]
  __int64 v49; // [rsp+28h] [rbp-88h] BYREF
  __int64 v50[2]; // [rsp+30h] [rbp-80h] BYREF
  __m128 v51; // [rsp+40h] [rbp-70h] BYREF
  __int64 v52[2]; // [rsp+50h] [rbp-60h] BYREF
  __int64 v53[10]; // [rsp+60h] [rbp-50h] BYREF

  result = *(unsigned __int16 *)(a2 + 4);
  if ( (_WORD)result )
  {
    if ( (_WORD)result != 2 || *(_DWORD *)(a2 + 16) != 2 )
      return result;
  }
  else
  {
    result = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( !result
      || a1[9].m128i_i32[0] != *(_DWORD *)result
      || *(_DWORD *)(result + 4) != 5 && *(_DWORD *)(result + 4) != 2 )
    {
      return result;
    }
  }
  sub_676260((__int64)v50, a1[1].m128i_i64[0], a1[1].m128i_i64[1], a2);
  v5 = sub_15D1F10(a2);
  v6 = sub_678D40(a1, v50[0], v5);
  v7 = *(_QWORD *)(v6 + 16);
  v48 = v7 + 40LL * *(unsigned int *)(v6 + 24);
  if ( v7 != v48 )
  {
    while ( *(_DWORD *)(v7 + 4) != 2 )
    {
      v7 += 40;
      if ( v48 == v7 )
        return sub_675460(v50[0], v50[1]);
    }
    if ( v48 != v7 )
    {
      while ( 1 )
      {
        v8 = sub_15D1F10(a2);
        if ( v8 == sub_15D1F10(*(_QWORD *)(*(_QWORD *)(v7 + 16) + 32LL)) )
        {
          v10 = a1[1].m128i_i64[1];
          v11 = *(_QWORD *)(v10 + 24);
          if ( v11 )
            v12 = *(_DWORD *)(v11 - 4);
          else
            v12 = 0;
          if ( v12 >= *(_DWORD *)(v10 + 32) )
            return sub_675460(v50[0], v50[1]);
          sub_2FCDE0(a1[4].m128i_i64);
          v13 = *(_QWORD *)(v7 + 16);
          v14 = (__int64 *)a1[4].m128i_i64[1];
          v15 = *(unsigned int *)(v13 + 24);
          if ( (_DWORD)v15 )
          {
            v16 = *(_QWORD *)(v13 + 32);
            v17 = v13 + 8 * v15;
            if ( v16 )
              ++*(_DWORD *)(v16 + 8);
            if ( !v14 )
            {
              v45 = v13 + 8 * v15;
              v47 = v16;
              v18 = (_QWORD *)sub_186B270(0x18u);
              v14 = v18 + 1;
              v17 = v45;
              a1[4].m128i_i64[1] = (__int64)(v18 + 1);
              v19 = v18 + 1;
              *v18 = 2;
              v20 = v47;
              v21 = 1;
              goto LABEL_30;
            }
            while ( 1 )
            {
              v22 = *((_DWORD *)v14 - 1);
              if ( v22 == *((_DWORD *)v14 - 2) )
              {
                v37 = (3 * v22 + 1) >> 1;
                v38 = 8 * v37 + 8;
                if ( 8 * v22 + 8 >= (unsigned int)v38 || v22 >= v37 )
                {
                  exception = (char **)__cxa_allocate_exception(0x28u);
                  sub_107EF6(v53, "Overflow encountered when expanding vector", v43);
                  *exception = (char *)off_1C63128;
                  sub_2333C0(exception + 1, v53);
                  sub_233E40((__int64)v53);
                  __cxa_throw(
                    exception,
                    (struct type_info *)&`typeinfo for'default_exception,
                    (void (*)(void *))sub_230E50);
                }
                v44 = v17;
                v46 = (3 * v22 + 1) >> 1;
                v47 = v16;
                v39 = (unsigned int *)sub_186B300(v14 - 1, v38);
                v40 = v39[1];
                v14 = (__int64 *)(v39 + 2);
                a1[4].m128i_i64[1] = (__int64)(v39 + 2);
                v20 = v47;
                *v39 = v46;
                LODWORD(v39) = v40;
                v17 = v44;
                v19 = &v14[v40];
                v21 = (_DWORD)v39 + 1;
LABEL_30:
                v13 += 8;
                *v19 = v20;
                *((_DWORD *)v14 - 1) = v21;
                if ( v13 == v17 )
                  break;
              }
              else
              {
                v13 += 8;
                v14[v22] = v16;
                *((_DWORD *)v14 - 1) = v22 + 1;
                if ( v13 == v17 )
                  break;
              }
              v16 = *(_QWORD *)(v13 + 32);
              if ( v16 )
                ++*(_DWORD *)(v16 + 8);
            }
          }
          v23 = *v14;
          v24 = a1[4].m128i_i64[0];
          ++*(_DWORD *)(a2 + 8);
          if ( v23 && (v25 = *(_DWORD *)(v23 + 8), *(_DWORD *)(v23 + 8) = v25 - 1, v25 == 1) )
          {
            sub_15D7BC0(v24, v23);
            v27 = a1[4].m128i_i64[1];
            v41 = a1->m128i_i64[1];
            *v14 = a2;
            v26 = a1[9].m128i_i64[1];
            v47 = v41;
          }
          else
          {
            v27 = a1->m128i_i64[1];
            *v14 = a2;
            v26 = a1[9].m128i_i64[1];
            v47 = v27;
            LODWORD(v27) = (_DWORD)v14;
          }
          v28 = (unsigned int *)sub_15DCAD0(v26, v27, 0);
          if ( v28 )
          {
            v29 = v28[2];
            v51 = _mm_loadh_ps((const double *)&v47);
            v28[2] = v29 + 2;
          }
          else
          {
            v51.m128_u64[0] = 0;
            v51.m128_u64[1] = v47;
          }
          sub_14B9B80(a1[1].m128i_i64[1] + 40, &v51);
          v30 = *(_QWORD *)(a1[1].m128i_i64[1] + 64);
          v31 = sub_67B850((__int64 *)a1[1].m128i_i64[0], v28);
          sub_1374250(v52, v30, v31);
          v32 = *(_QWORD *)(a1[1].m128i_i64[1] + 64);
          v33 = sub_67B850((__int64 *)a1[1].m128i_i64[0], (unsigned int *)v51.m128_u64[0]);
          sub_1374250(v53, v32, v33);
          v34 = v53[0];
          if ( v52[0] != v53[0] )
          {
            v35 = a1[1].m128i_i64[1];
            v36 = sub_15E1B70(a1->m128i_i64[1]);
            v49 = v36;
            if ( v36 )
              ++*(_DWORD *)(v36 + 8);
            sub_6761A0((unsigned int **)(v35 + 24), &v49);
            v34 = v53[0];
          }
          sub_675460(v34, v53[1]);
          sub_675460(v52[0], v52[1]);
          sub_675460(v51.m128_i64[0], v51.m128_i64[1]);
          sub_675460((__int64)v28, v47);
        }
        v9 = v7 + 40;
        if ( v48 != v7 + 40 )
        {
          while ( 1 )
          {
            v7 = v9;
            if ( *(_DWORD *)(v9 + 4) == 2 )
              break;
            v9 += 40;
            if ( v48 == v9 )
              return sub_675460(v50[0], v50[1]);
          }
          if ( v9 != v48 )
            continue;
        }
        return sub_675460(v50[0], v50[1]);
      }
    }
  }
  return sub_675460(v50[0], v50[1]);
}

