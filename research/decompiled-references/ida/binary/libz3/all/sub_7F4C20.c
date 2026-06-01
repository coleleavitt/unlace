__int64 __fastcall sub_7F4C20(__int64 *a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbp
  _QWORD *v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rdx
  _QWORD *exception; // rbp
  _QWORD *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v14; // rax
  __int64 v15; // r14
  __int64 v16; // rbx
  int *v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rdi
  bool v20; // zf
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // eax
  _DWORD *v24; // rdx
  int v25; // eax
  int v26; // ecx
  __int64 v27; // rax
  unsigned int v28; // r8d
  size_t v29; // rsi
  unsigned int *v30; // rax
  _DWORD *v31; // rdi
  int v32; // ebx
  __int64 v33; // rax
  _DWORD *v34; // rax
  __int64 v35; // rax
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdi
  __int64 v39; // rsi
  __int64 result; // rax
  __int64 v41; // rsi
  __int64 v42; // rdi
  unsigned int v43; // r14d
  size_t v44; // rsi
  unsigned int *v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  int v49; // [rsp+8h] [rbp-80h]
  int v50; // [rsp+8h] [rbp-80h]
  unsigned int v51; // [rsp+Ch] [rbp-7Ch]
  _DWORD *v52; // [rsp+18h] [rbp-70h] BYREF
  __m128i v53; // [rsp+20h] [rbp-68h] BYREF
  _QWORD *v54; // [rsp+30h] [rbp-58h] BYREF
  __int64 v55; // [rsp+38h] [rbp-50h]
  _QWORD v56[9]; // [rsp+40h] [rbp-48h] BYREF

  v14 = *(unsigned int *)(a2 + 24);
  v52 = nullptr;
  if ( (_DWORD)v14 )
  {
    v15 = 8 * v14 + 32;
    v16 = 32;
    do
    {
      v21 = *(_QWORD *)(a2 + v16);
      v22 = *(_QWORD *)(a3 + v16);
      if ( v21 != v22 )
      {
        sub_79AD00(&v53, *a1, v21, v22);
        v23 = sub_79C480(*a1, v53.m128i_i64[0]);
        v24 = v52;
        v25 = v23 ^ 1;
        v26 = v25;
        if ( v52 )
        {
          v27 = (unsigned int)*(v52 - 1);
          if ( (_DWORD)v27 == *(v52 - 2) )
          {
            v28 = (unsigned int)(3 * v27 + 1) >> 1;
            v29 = 4 * v28 + 8;
            if ( 4 * (int)v27 + 8 >= (unsigned int)v29 || (unsigned int)v27 >= v28 )
            {
              exception = __cxa_allocate_exception(0x28u);
              sub_24ABB0((__int64 *)&v54, "Overflow encountered when expanding vector");
              v8 = v54;
              exception[1] = exception + 3;
              v9 = v55;
              *exception = off_1C63128;
              if ( v8 == v56 )
              {
                qmemcpy(exception + 3, v56, (unsigned int)(v9 + 1));
              }
              else
              {
                v10 = v56[0];
                exception[1] = v8;
                exception[3] = v10;
              }
              exception[2] = v9;
              v55 = 0;
              v54 = v56;
              LOBYTE(v56[0]) = 0;
              sub_233E40((__int64)&v54);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v51 = (unsigned int)(3 * v27 + 1) >> 1;
            v49 = v26;
            v30 = (unsigned int *)sub_186B300(v52 - 2, v29);
            v24 = v30 + 2;
            v26 = v49;
            v52 = v30 + 2;
            *v30 = v51;
            v17 = (int *)&v30[v30[1] + 2];
          }
          else
          {
            v17 = &v52[v27];
          }
        }
        else
        {
          v50 = v25;
          v47 = sub_186B270(0x10u);
          v24 = (_DWORD *)(v47 + 8);
          *(_QWORD *)v47 = 2;
          v26 = v50;
          v52 = (_DWORD *)(v47 + 8);
          v17 = (int *)(v47 + 8);
        }
        v18 = v53.m128i_i64[0];
        *v17 = v26;
        ++*(v24 - 1);
        if ( v18 )
        {
          v19 = v53.m128i_i64[1];
          v20 = (*(_DWORD *)(v18 + 8))-- == 1;
          if ( v20 )
            sub_15D7BC0(v19, v18);
        }
      }
      v16 += 8;
    }
    while ( v15 != v16 );
  }
  sub_79AD00(&v53, *a1, a2, a3);
  v31 = v52;
  v32 = sub_79C480(*a1, v53.m128i_i64[0]);
  if ( v52 )
  {
    v33 = (unsigned int)*(v52 - 1);
    if ( (_DWORD)v33 == *(v52 - 2) )
    {
      v43 = (unsigned int)(3 * v33 + 1) >> 1;
      v44 = 4 * v43 + 8;
      if ( 4 * (int)v33 + 8 >= (unsigned int)v44 || (unsigned int)v33 >= v43 )
      {
        v3 = __cxa_allocate_exception(0x28u);
        sub_24ABB0((__int64 *)&v54, "Overflow encountered when expanding vector");
        v4 = v54;
        v3[1] = v3 + 3;
        v5 = v55;
        *v3 = off_1C63128;
        if ( v4 == v56 )
        {
          qmemcpy(v3 + 3, v56, (unsigned int)(v5 + 1));
        }
        else
        {
          v6 = v56[0];
          v3[1] = v4;
          v3[3] = v6;
        }
        v3[2] = v5;
        v54 = v56;
        v55 = 0;
        LOBYTE(v56[0]) = 0;
        sub_233E40((__int64)&v54);
        __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v45 = (unsigned int *)sub_186B300(v52 - 2, v44);
      v31 = v45 + 2;
      *v45 = v43;
      v46 = v45[1];
      v52 = v31;
      v34 = &v31[v46];
    }
    else
    {
      v34 = &v52[v33];
    }
  }
  else
  {
    v48 = sub_186B270(0x10u);
    v31 = (_DWORD *)(v48 + 8);
    *(_QWORD *)v48 = 2;
    v52 = (_DWORD *)(v48 + 8);
    v34 = (_DWORD *)(v48 + 8);
  }
  *v34 = v32;
  ++*(v31 - 1);
  v35 = sub_7A6850((const __m128i *)*a1, &v52, a2, a3);
  v38 = *(_QWORD *)(*a1 + 24);
  v55 = v35;
  v54 = (_QWORD *)(&dword_0 + 2);
  if ( v52 )
    v39 = (unsigned int)*(v52 - 1);
  else
    v39 = 0;
  result = sub_11C4C20(v38, v39, v52, &v54, v36, v37);
  v41 = v53.m128i_i64[0];
  if ( v53.m128i_i64[0] )
  {
    v42 = v53.m128i_i64[1];
    v20 = (*(_DWORD *)(v53.m128i_i64[0] + 8))-- == 1;
    if ( v20 )
      result = sub_15D7BC0(v42, v41);
  }
  if ( v52 )
    return sub_186B220(v52 - 2);
  return result;
}

