__int64 __fastcall sub_7CD920(__int64 a1, __int64 a2, __int64 a3)
{
  char **v3; // rbx
  __int64 v4; // rdx
  char **exception; // r14
  __int64 v6; // rdx
  __int64 v7; // r14
  __m128 *v9; // r13
  unsigned int v10; // eax
  __int64 v11; // rdx
  int v12; // eax
  __m128 *v13; // rdx
  _QWORD *v14; // rax
  _QWORD *v15; // rdi
  _QWORD *v16; // rbx
  unsigned int v17; // eax
  __int64 v18; // rdx
  __int64 result; // rax
  _QWORD *v20; // rdx
  unsigned int v21; // r13d
  size_t v22; // rdi
  __int64 v23; // rax
  _QWORD *v24; // r15
  _DWORD *v25; // r9
  __int64 v26; // r10
  __int64 v27; // rdx
  int v28; // r11d
  _QWORD *v29; // rax
  _QWORD *v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // rsi
  __int64 v33; // rsi
  _QWORD *v34; // r10
  __int64 v35; // rsi
  __int64 v36; // rdi
  bool v37; // zf
  __int64 v38; // rsi
  __int64 v39; // rdi
  unsigned int v40; // ebp
  size_t v41; // rsi
  unsigned int *v42; // rax
  __int64 v43; // rdx
  unsigned int v44; // ecx
  _QWORD *v45; // rax
  _QWORD *v46; // rax
  double v47; // [rsp+0h] [rbp-78h] BYREF
  unsigned int v48; // [rsp+Ch] [rbp-6Ch]
  _DWORD *v49; // [rsp+10h] [rbp-68h]
  _QWORD *v50; // [rsp+18h] [rbp-60h]
  __int64 v51[11]; // [rsp+20h] [rbp-58h] BYREF

  v7 = a1 + 8344;
  v47 = *(double *)(a1 + 144);
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  if ( a3 )
    ++*(_DWORD *)(a3 + 8);
  v9 = *(__m128 **)(a1 + 8344);
  if ( v9 )
  {
    v10 = v9[-1].m128_u32[3];
    if ( v10 == v9[-1].m128_i32[2] )
    {
      v21 = (3 * v10 + 1) >> 1;
      v48 = v21;
      v22 = 32 * v21 + 8;
      if ( 32 * v10 + 8 >= (unsigned int)v22 || v10 >= v21 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_116834(v51, "Overflow encountered when expanding vector", v6);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v51);
        sub_233E40((__int64)v51);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v23 = sub_186B270(v22);
      v24 = *(_QWORD **)(a1 + 8344);
      v25 = (_DWORD *)v23;
      v9 = (__m128 *)(v23 + 8);
      if ( v24 )
      {
        v26 = *((unsigned int *)v24 - 1);
        v27 = v23 + 8;
        *(_DWORD *)(v23 + 4) = v26;
        v28 = v26;
        v29 = v24;
        v30 = &v24[4 * v26];
        if ( v30 != v24 )
        {
          do
          {
            v31 = v29[1];
            v29 += 4;
            v27 += 32;
            *(_QWORD *)(v27 - 24) = v31;
            v32 = *(v29 - 4);
            *(v29 - 4) = 0;
            *(_QWORD *)(v27 - 32) = v32;
            *(_QWORD *)(v27 - 8) = *(v29 - 1);
            v33 = *(v29 - 2);
            *(v29 - 2) = 0;
            *(_QWORD *)(v27 - 16) = v33;
          }
          while ( v29 != v30 );
        }
        v34 = &v24[4 * v26];
        if ( v28 )
        {
          do
          {
            while ( 1 )
            {
              v38 = v24[2];
              if ( v38 )
              {
                v39 = v24[3];
                v37 = (*(_DWORD *)(v38 + 8))-- == 1;
                if ( v37 )
                {
                  v50 = v34;
                  v49 = v25;
                  sub_15D7BC0(v39, v38);
                  v34 = v50;
                  v25 = v49;
                }
              }
              v35 = *v24;
              if ( *v24 )
              {
                v36 = v24[1];
                v37 = (*(_DWORD *)(v35 + 8))-- == 1;
                if ( v37 )
                  break;
              }
              v24 += 4;
              if ( v24 == v34 )
                goto LABEL_29;
            }
            v50 = v34;
            v24 += 4;
            v49 = v25;
            sub_15D7BC0(v36, v35);
            v34 = v50;
            v25 = v49;
          }
          while ( v24 != v50 );
LABEL_29:
          v24 = *(_QWORD **)(a1 + 8344);
        }
        v49 = v25;
        sub_186B220(v24 - 1);
        v25 = v49;
        v13 = &v9[2 * (unsigned int)v49[1]];
        v12 = v49[1] + 1;
      }
      else
      {
        *(_DWORD *)(v23 + 4) = 0;
        v13 = (__m128 *)(v23 + 8);
        v12 = 1;
      }
      v44 = v48;
      *(_QWORD *)(a1 + 8344) = v9;
      *v25 = v44;
    }
    else
    {
      v11 = v10;
      v12 = v10 + 1;
      v13 = &v9[2 * v11];
    }
  }
  else
  {
    v46 = (_QWORD *)sub_186B270(0x48u);
    v9 = (__m128 *)(v46 + 1);
    *v46 = 2;
    v12 = 1;
    *(_QWORD *)(a1 + 8344) = v9;
    v13 = v9;
  }
  *v13 = _mm_loadh_ps(&v47);
  v13[1] = _mm_loadh_ps(&v47);
  v9[-1].m128_i32[3] = v12;
  v14 = (_QWORD *)sub_180C100(a1 + 2144, 16);
  v15 = *(_QWORD **)(a1 + 2128);
  v16 = v14;
  *v14 = off_1C548F8;
  v14[1] = v7;
  if ( v15 )
  {
    v17 = *((_DWORD *)v15 - 1);
    if ( v17 == *((_DWORD *)v15 - 2) )
    {
      v40 = (3 * v17 + 1) >> 1;
      v41 = 8 * v40 + 8;
      if ( 8 * v17 + 8 >= (unsigned int)v41 || v17 >= v40 )
      {
        v3 = (char **)__cxa_allocate_exception(0x28u);
        sub_116834(v51, "Overflow encountered when expanding vector", v4);
        *v3 = (char *)off_1C63128;
        sub_2333C0(v3 + 1, v51);
        sub_233E40((__int64)v51);
        __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v42 = (unsigned int *)sub_186B300(v15 - 1, v41);
      v43 = v42[1];
      v15 = v42 + 2;
      *v42 = v40;
      *(_QWORD *)(a1 + 2128) = v42 + 2;
      LODWORD(v42) = v43;
      v20 = &v15[v43];
      result = (unsigned int)((_DWORD)v42 + 1);
    }
    else
    {
      v18 = v17;
      result = v17 + 1;
      v20 = &v15[v18];
    }
  }
  else
  {
    v45 = (_QWORD *)sub_186B270(0x18u);
    v15 = v45 + 1;
    *v45 = 2;
    result = 1;
    *(_QWORD *)(a1 + 2128) = v15;
    v20 = v15;
  }
  *v20 = v16;
  *((_DWORD *)v15 - 1) = result;
  return result;
}

