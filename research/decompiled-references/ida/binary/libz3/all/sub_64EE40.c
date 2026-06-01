__int64 __fastcall sub_64EE40(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  char **v4; // rbp
  __int64 v5; // rdx
  char **exception; // rbp
  __int64 v7; // rdx
  char **v8; // rbp
  __int64 v9; // rdx
  __int64 result; // rax
  unsigned int v15; // r15d
  unsigned __int64 v16; // r10
  __int64 v17; // r9
  int v18; // eax
  _QWORD *v19; // rdx
  unsigned int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  unsigned __int64 *v23; // rcx
  _QWORD *v24; // r9
  _QWORD *v25; // rdx
  unsigned int v26; // eax
  __int64 v27; // rcx
  int v28; // eax
  _QWORD *v29; // rsi
  _QWORD *v30; // rdx
  unsigned int *v31; // r13
  __int64 v32; // rax
  unsigned int *v33; // rsi
  unsigned __int64 v34; // rsi
  unsigned __int64 v35; // rdi
  unsigned int v37; // ecx
  size_t v38; // rsi
  unsigned int *v39; // rax
  unsigned int v40; // ecx
  size_t v41; // rsi
  unsigned int *v42; // rax
  unsigned int v43; // r8d
  size_t v44; // rsi
  unsigned int *v45; // rax
  _QWORD *v46; // rax
  _QWORD *v47; // rax
  _QWORD *v48; // rax
  _QWORD *v49; // [rsp+0h] [rbp-88h]
  unsigned __int64 v50; // [rsp+0h] [rbp-88h]
  unsigned int v51; // [rsp+0h] [rbp-88h]
  unsigned __int64 v52; // [rsp+0h] [rbp-88h]
  _QWORD *v53; // [rsp+0h] [rbp-88h]
  unsigned int v54; // [rsp+8h] [rbp-80h]
  __int64 v55; // [rsp+8h] [rbp-80h]
  __int64 v56; // [rsp+8h] [rbp-80h]
  unsigned int v57; // [rsp+14h] [rbp-74h]
  __m128 v58; // [rsp+20h] [rbp-68h] BYREF
  __int64 v59[11]; // [rsp+30h] [rbp-58h] BYREF

  result = *(_QWORD *)(a1 + 2912);
  if ( result )
  {
    v15 = 0;
    do
    {
      if ( v15 >= *(_DWORD *)(result - 4) )
        return result;
      v16 = *(_QWORD *)(result + 8LL * v15);
      v17 = 8LL * v15;
      if ( *(_BYTE *)(a1 + 2986) )
      {
        sub_667470(&v58, a1 + 2144, *(_QWORD *)(result + 8LL * v15), 1);
        v16 = v58.m128_u64[0];
        v17 = 8LL * v15;
        if ( v58.m128_u64[0] )
        {
          v18 = *(_DWORD *)(v58.m128_u64[0] + 8);
LABEL_7:
          v19 = *(_QWORD **)(a2 + 8);
          *(_DWORD *)(v16 + 8) = v18 + 1;
          if ( v19 )
            goto LABEL_8;
          goto LABEL_32;
        }
      }
      else
      {
        v58 = _mm_loadh_ps((const double *)a1);
        if ( v16 )
        {
          v18 = *(_DWORD *)(v16 + 8) + 1;
          *(_DWORD *)(v16 + 8) = v18;
          goto LABEL_7;
        }
      }
      v19 = *(_QWORD **)(a2 + 8);
      v16 = 0;
      if ( v19 )
      {
LABEL_8:
        v20 = *((_DWORD *)v19 - 1);
        if ( v20 == *((_DWORD *)v19 - 2) )
        {
          v40 = (3 * v20 + 1) >> 1;
          v41 = 8 * v40 + 8;
          if ( 8 * v20 + 8 >= (unsigned int)v41 || v20 >= v40 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_104888(v59, "Overflow encountered when expanding vector", v7);
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v59);
            sub_233E40((__int64)v59);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v57 = (3 * v20 + 1) >> 1;
          v55 = v17;
          v50 = v16;
          v42 = (unsigned int *)sub_186B300(v19 - 1, v41);
          v19 = v42 + 2;
          v16 = v50;
          *(_QWORD *)(a2 + 8) = v42 + 2;
          v17 = v55;
          *v42 = v57;
          LODWORD(v42) = v42[1];
          v23 = &v19[(unsigned int)v42];
          v22 = (_DWORD)v42 + 1;
        }
        else
        {
          v21 = v20;
          v22 = v20 + 1;
          v23 = &v19[v21];
        }
        goto LABEL_10;
      }
LABEL_32:
      v56 = v17;
      v52 = v16;
      v46 = (_QWORD *)sub_186B270(0x18u);
      v19 = v46 + 1;
      *v46 = 2;
      v16 = v52;
      v22 = 1;
      *(_QWORD *)(a2 + 8) = v19;
      v17 = v56;
      v23 = v19;
LABEL_10:
      *v23 = v16;
      v24 = (_QWORD *)(*(_QWORD *)(a1 + 2920) + v17);
      *((_DWORD *)v19 - 1) = v22;
      v25 = (_QWORD *)*a3;
      if ( *a3 )
      {
        v26 = *((_DWORD *)v25 - 1);
        if ( v26 == *((_DWORD *)v25 - 2) )
        {
          v37 = (3 * v26 + 1) >> 1;
          v38 = 8 * v37 + 8;
          if ( 8 * v26 + 8 >= (unsigned int)v38 || v26 >= v37 )
          {
            v8 = (char **)__cxa_allocate_exception(0x28u);
            sub_104888(v59, "Overflow encountered when expanding vector", v9);
            *v8 = (char *)off_1C63128;
            sub_2333C0(v8 + 1, v59);
            sub_233E40((__int64)v59);
            __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v54 = (3 * v26 + 1) >> 1;
          v49 = v24;
          v39 = (unsigned int *)sub_186B300(v25 - 1, v38);
          v25 = v39 + 2;
          v24 = v49;
          *a3 = v39 + 2;
          *v39 = v54;
          LODWORD(v39) = v39[1];
          v29 = &v25[(unsigned int)v39];
          v28 = (_DWORD)v39 + 1;
        }
        else
        {
          v27 = v26;
          v28 = v26 + 1;
          v29 = &v25[v27];
        }
      }
      else
      {
        v53 = v24;
        v48 = (_QWORD *)sub_186B270(0x18u);
        v25 = v48 + 1;
        *v48 = 2;
        v24 = v53;
        v28 = 1;
        *a3 = v25;
        v29 = v25;
      }
      *v29 = *v24;
      *((_DWORD *)v25 - 1) = v28;
      v30 = (_QWORD *)*a4;
      v31 = (unsigned int *)(*(_QWORD *)(a1 + 2928) + 4LL * v15);
      if ( *a4 )
      {
        v32 = *((unsigned int *)v30 - 1);
        v33 = (unsigned int *)v30 + v32;
        if ( (_DWORD)v32 == *((_DWORD *)v30 - 2) )
        {
          v43 = (unsigned int)(3 * v32 + 1) >> 1;
          v44 = 4 * v43 + 8;
          if ( 4 * (int)v32 + 8 >= (unsigned int)v44 || (unsigned int)v32 >= v43 )
          {
            v4 = (char **)__cxa_allocate_exception(0x28u);
            sub_104888(v59, "Overflow encountered when expanding vector", v5);
            *v4 = (char *)off_1C63128;
            sub_2333C0(v4 + 1, v59);
            sub_233E40((__int64)v59);
            __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v51 = (unsigned int)(3 * v32 + 1) >> 1;
          v45 = (unsigned int *)sub_186B300(v30 - 1, v44);
          v30 = v45 + 2;
          *a4 = v45 + 2;
          *v45 = v51;
          v33 = &v45[v45[1] + 2];
        }
      }
      else
      {
        v47 = (_QWORD *)sub_186B270(0x10u);
        v30 = v47 + 1;
        *v47 = 2;
        *a4 = v47 + 1;
        v33 = (unsigned int *)(v47 + 1);
      }
      *v33 = *v31;
      v34 = v58.m128_u64[0];
      ++*((_DWORD *)v30 - 1);
      if ( v34 )
      {
        v35 = v58.m128_u64[1];
        if ( (*(_DWORD *)(v34 + 8))-- == 1 )
          sub_15D7BC0(v35, v34);
      }
      result = *(_QWORD *)(a1 + 2912);
      ++v15;
    }
    while ( result );
  }
  return result;
}

