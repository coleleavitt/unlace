__int64 __fastcall sub_97CDE0(__int64 a1, unsigned int *a2, char a3, __int64 a4, __int64 a5, __int64 a6)
{
  char **v6; // rbp
  char **exception; // rbp
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rax
  unsigned int v15; // ebx
  __int64 (__fastcall *v17)(__int64, __int64); // rax
  _QWORD *v18; // rdx
  __int64 v19; // rbp
  unsigned __int32 v20; // r14d
  __int64 *v21; // rcx
  int v22; // eax
  __int64 v23; // r15
  __m128i *v24; // r13
  unsigned int v25; // r10d
  __int64 v26; // r8
  __m128i *v27; // r15
  __int64 v28; // r10
  __m128i *v29; // rsi
  __m128i *v30; // rax
  unsigned int *v31; // rcx
  __int32 v32; // edx
  unsigned int v33; // eax
  __int32 v34; // eax
  unsigned int v35; // r15d
  size_t v36; // rsi
  unsigned int *v37; // rax
  __int64 v38; // rcx
  _QWORD *v39; // rdi
  unsigned int v40; // eax
  unsigned int v41; // r13d
  size_t v42; // rsi
  unsigned int *v43; // rax
  __int64 v44; // rax
  _QWORD *v45; // rax
  _DWORD *v46; // rdx
  __m128i *v47; // rax
  int v48; // r9d
  __m128i *v49; // rdx
  const __m128i *v50; // rcx
  __m128i *v51; // r11
  __int64 v52; // rax
  __m128i *v53; // rdx
  __m128i *v54; // rax
  _QWORD *v55; // rax
  size_t v56; // [rsp+0h] [rbp-88h]
  unsigned int v57; // [rsp+0h] [rbp-88h]
  size_t v58; // [rsp+8h] [rbp-80h]
  int v59; // [rsp+18h] [rbp-70h]
  __int64 v60[11]; // [rsp+30h] [rbp-58h] BYREF

  v10 = sub_B68280(*(_QWORD *)(a1 + 16), a2, 0, 1, 1, a6);
  v11 = *(_QWORD *)(a1 + 16);
  v12 = v10;
  v13 = *(_QWORD *)(v11 + 8832);
  if ( !v13
    || (v14 = *a2, (unsigned int)v14 >= *(_DWORD *)(v13 - 4))
    || (v15 = *(_DWORD *)(v13 + 4 * v14), v15 == 0x7FFFFFFF) )
  {
    v33 = sub_B67520(v11, a2);
    v11 = *(_QWORD *)(a1 + 16);
    v15 = v33;
  }
  sub_B66DE0(v11, v15, 1);
  if ( !a3 )
    return v15;
  sub_8F1CE0(*(_QWORD *)(a1 + 16), v15, *(_DWORD *)(a1 + 8));
  v17 = **(__int64 (__fastcall ***)(__int64, __int64))a1;
  if ( v17 == sub_902EE0 )
  {
    v18 = *(_QWORD **)(a1 + 32);
    if ( v18 )
    {
      v19 = *((unsigned int *)v18 - 1);
      v20 = v19;
      if ( (_DWORD)v19 == *((_DWORD *)v18 - 2) )
      {
        v35 = (unsigned int)(3 * v19 + 1) >> 1;
        v36 = 8 * v35 + 8;
        if ( 8 * (int)v19 + 8 >= (unsigned int)v36 || (unsigned int)v19 >= v35 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v60, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v60);
          sub_233E40((__int64)v60);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v37 = (unsigned int *)sub_186B300(v18 - 1, v36);
        v38 = v37[1];
        v18 = v37 + 2;
        *v37 = v35;
        *(_QWORD *)(a1 + 32) = v37 + 2;
        LODWORD(v37) = v38;
        v21 = &v18[v38];
        v22 = (_DWORD)v37 + 1;
      }
      else
      {
        v21 = &v18[(unsigned int)v19];
        v22 = v19 + 1;
      }
    }
    else
    {
      v19 = 0;
      v20 = 0;
      v55 = (_QWORD *)sub_186B270(0x18u);
      v18 = v55 + 1;
      *v55 = 2;
      v22 = 1;
      *(_QWORD *)(a1 + 32) = v18;
      v21 = v18;
    }
    *v21 = v12;
    *((_DWORD *)v18 - 1) = v22;
  }
  else
  {
    v20 = v17(a1, v12);
    v19 = v20;
  }
  sub_B66EF0(*(_QWORD *)(a1 + 16), v12, a1, v20);
  v23 = *(unsigned int *)(a1 + 864);
  if ( 3 * (int)v23 < (unsigned int)(4 * (*(_DWORD *)(a1 + 868) + *(_DWORD *)(a1 + 872))) )
  {
    v56 = 16LL * (unsigned int)(2 * v23);
    v47 = (__m128i *)sub_186B270(v56);
    v48 = 2 * v23;
    v26 = v56;
    v24 = v47;
    if ( 2 * (_DWORD)v23 )
    {
      v49 = &v47[2 * (v23 & 0x7FFFFFFF)];
      do
      {
        v47->m128i_i64[0] = 0;
        v47 += 2;
        v47[-1].m128i_i64[0] = 0;
      }
      while ( v49 != v47 );
    }
    v25 = v48 - 1;
    v27 = &v24[v56 / 0x10];
    v50 = *(const __m128i **)(a1 + 856);
    v51 = (__m128i *)&v50[*(unsigned int *)(a1 + 864)];
    if ( v50 != v51 )
    {
      do
      {
        if ( v50->m128i_i32[1] == 2 )
        {
          v52 = 16LL * (v50->m128i_i32[0] & v25);
          v53 = &v24[(unsigned __int64)v52 / 0x10];
          if ( v56 == v52 )
          {
LABEL_63:
            if ( v24 == v53 )
            {
LABEL_72:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v54 = v24;
            while ( v54->m128i_i32[1] )
            {
              if ( v53 == ++v54 )
                goto LABEL_72;
            }
          }
          else
          {
            v54 = &v24[(unsigned __int64)v52 / 0x10];
            while ( v54->m128i_i32[1] )
            {
              if ( v27 == ++v54 )
                goto LABEL_63;
            }
          }
          *v54 = _mm_loadu_si128(v50);
        }
        ++v50;
      }
      while ( v51 != v50 );
      v51 = *(__m128i **)(a1 + 856);
    }
    if ( v51 )
    {
      v59 = v48;
      v58 = v56;
      v57 = v48 - 1;
      sub_186B220(v51);
      v48 = v59;
      v26 = v58;
      v25 = v57;
    }
    *(_QWORD *)(a1 + 856) = v24;
    *(_DWORD *)(a1 + 864) = v48;
    *(_DWORD *)(a1 + 872) = 0;
  }
  else
  {
    v24 = *(__m128i **)(a1 + 856);
    v25 = v23 - 1;
    v26 = 16 * v23;
    v27 = &v24[v23];
  }
  v28 = 16LL * (v15 & v25);
  v29 = &v24[(unsigned __int64)v28 / 0x10];
  if ( v28 != v26 )
  {
    v30 = &v24[(unsigned __int64)v28 / 0x10];
    v31 = nullptr;
    while ( 1 )
    {
      v32 = v30->m128i_i32[1];
      if ( v32 == 2 )
      {
        if ( v15 == v30->m128i_i32[0] && v15 == v30->m128i_i32[2] )
        {
          v30->m128i_i32[2] = v15;
          v30->m128i_i32[3] = v20;
          v30->m128i_i32[1] = 2;
          goto LABEL_37;
        }
      }
      else
      {
        if ( !v32 )
        {
          if ( v31 )
            goto LABEL_35;
          v31 = (unsigned int *)v30;
          goto LABEL_36;
        }
        v31 = (unsigned int *)v30;
      }
      if ( ++v30 == v27 )
        goto LABEL_26;
    }
  }
  v31 = nullptr;
  while ( 1 )
  {
LABEL_26:
    if ( v29 == v24 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v34 = v24->m128i_i32[1];
    if ( v34 != 2 )
      break;
    if ( v15 == v24->m128i_i32[0] && v15 == v24->m128i_i32[2] )
    {
      v24->m128i_i32[2] = v15;
      v24->m128i_i32[3] = v20;
      v24->m128i_i32[1] = 2;
      goto LABEL_37;
    }
LABEL_25:
    ++v24;
  }
  if ( v34 )
  {
    v31 = (unsigned int *)v24;
    goto LABEL_25;
  }
  if ( v31 )
LABEL_35:
    --*(_DWORD *)(a1 + 872);
  else
    v31 = (unsigned int *)v24;
LABEL_36:
  v31[2] = v15;
  v31[3] = v20;
  v31[1] = 2;
  *v31 = v15;
  ++*(_DWORD *)(a1 + 868);
LABEL_37:
  v39 = *(_QWORD **)(a1 + 880);
  if ( v39 )
    goto LABEL_40;
  v45 = (_QWORD *)sub_186B270(0x10u);
  v39 = v45 + 1;
  *v45 = 2;
  *(_QWORD *)(a1 + 880) = v45 + 1;
  v46 = v45 + 1;
  while ( 1 )
  {
    *v46 = 0x7FFFFFFF;
    ++*((_DWORD *)v39 - 1);
LABEL_40:
    v40 = *((_DWORD *)v39 - 1);
    if ( (unsigned int)v19 < v40 )
      break;
    v46 = (_DWORD *)v39 + v40;
    if ( v40 == *((_DWORD *)v39 - 2) )
    {
      v41 = (3 * v40 + 1) >> 1;
      v42 = 4 * v41 + 8;
      if ( 4 * v40 + 8 >= (unsigned int)v42 || v40 >= v41 )
      {
        v6 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v60, "Overflow encountered when expanding vector");
        *v6 = (char *)off_1C63128;
        sub_2333C0(v6 + 1, v60);
        sub_233E40((__int64)v60);
        __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v43 = (unsigned int *)sub_186B300(v39 - 1, v42);
      v39 = v43 + 2;
      *v43 = v41;
      v44 = v43[1];
      *(_QWORD *)(a1 + 880) = v39;
      v46 = (_DWORD *)v39 + v44;
    }
  }
  *((_DWORD *)v39 + v19) = v15;
  return v15;
}

