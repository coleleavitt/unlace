__int64 __fastcall sub_4D1B20(_QWORD *a1, __int64 a2, __int64 *a3)
{
  char **exception; // r12
  __int64 v4; // rdx
  char **v5; // r12
  __int64 v6; // rdx
  __int64 (*v9)(void); // rax
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, __int64); // rdx
  __int64 (__fastcall *v12)(__int64); // rax
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 result; // rax
  __int64 v16; // rdx
  _DWORD *v17; // rbx
  unsigned int v18; // r15d
  __int64 v19; // r14
  unsigned int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  _QWORD *v23; // rcx
  __m128 *v24; // r13
  unsigned int v25; // eax
  __int64 v26; // rdx
  __m128 *v27; // rdx
  unsigned int v28; // edx
  size_t v29; // rsi
  unsigned int *v30; // rax
  char *v31; // rdi
  int v32; // ecx
  char *v33; // rdx
  unsigned int v34; // esi
  char *v35; // rax
  unsigned int v36; // r15d
  __int64 v37; // rax
  __int64 v38; // rdx
  void *v39; // rcx
  unsigned int v40; // esi
  size_t v41; // rdi
  __int64 v42; // rax
  __int64 *v43; // r15
  __int64 v44; // r8
  __int64 v45; // rdx
  __int64 *v46; // rdi
  __int64 *i; // rax
  __int64 v48; // rsi
  __int64 v49; // rsi
  __int64 *v50; // r14
  __int64 *v51; // r12
  __int64 v52; // rsi
  __int64 v53; // rdi
  unsigned int *v55; // rcx
  unsigned int v56; // edi
  _QWORD *v57; // rax
  _QWORD *v58; // rax
  unsigned int v59; // esi
  __int64 v60; // rax
  unsigned int v62; // [rsp+10h] [rbp-98h]
  __int64 *v63; // [rsp+10h] [rbp-98h]
  __int64 v64; // [rsp+18h] [rbp-90h] BYREF
  unsigned int *v65; // [rsp+20h] [rbp-88h]
  unsigned int v66; // [rsp+2Ch] [rbp-7Ch]
  __int64 v67; // [rsp+30h] [rbp-78h]
  __int64 v68[11]; // [rsp+50h] [rbp-58h] BYREF

  v9 = *(__int64 (**)(void))(*a1 + 192LL);
  if ( (char *)v9 == (char *)sub_4D0080 )
    v10 = (__int64)(a1 + 8);
  else
    v10 = v9();
  if ( *(_DWORD *)(v10 + 156) )
  {
    v31 = *(char **)(v10 + 144);
    v32 = 0;
    v33 = &v31[8 * *(unsigned int *)(v10 + 152)];
    v34 = *(_DWORD *)(v10 + 152);
    v35 = v31;
    if ( v31 == v33 )
      goto LABEL_37;
    do
    {
      while ( *(_QWORD *)v35 )
      {
        *(_QWORD *)v35 = 0;
        v35 += 8;
        if ( v33 == v35 )
          goto LABEL_31;
      }
      v35 += 8;
      ++v32;
    }
    while ( v33 != v35 );
LABEL_31:
    if ( v34 <= 0x10 || 3 * v34 >= 4 * v32 )
      goto LABEL_37;
    if ( v31 )
    {
      sub_186B220(v31);
      v36 = *(_DWORD *)(v10 + 152);
      *(_QWORD *)(v10 + 144) = 0;
      v36 >>= 1;
      *(_DWORD *)(v10 + 152) = v36;
      v37 = sub_186B270(8LL * v36);
      v38 = v36;
      v39 = (void *)v37;
      if ( !v36 )
      {
LABEL_36:
        *(_QWORD *)(v10 + 144) = v39;
LABEL_37:
        *(_QWORD *)(v10 + 156) = 0;
        goto LABEL_4;
      }
    }
    else
    {
      *(_QWORD *)(v10 + 144) = 0;
      v59 = v34 >> 1;
      *(_DWORD *)(v10 + 152) = v59;
      v60 = sub_186B270(8LL * v59);
      v38 = v59;
      v39 = (void *)v60;
    }
    v39 = memset(v39, 0, 8 * v38);
    goto LABEL_36;
  }
LABEL_4:
  v11 = *(__int64 (__fastcall **)(__int64, __int64))(*a1 + 208LL);
  if ( v11 == sub_4D0440 )
  {
    v12 = *(__int64 (__fastcall **)(__int64))(*a1 + 192LL);
    if ( v12 == sub_4D0080 )
      v13 = (__int64)(a1 + 8);
    else
      v13 = v12((__int64)a1);
    v14 = sub_4C7190(v13, a2);
  }
  else
  {
    v14 = v11((__int64)a1, a2);
  }
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14 + 40LL))(v14, a3);
  result = sub_64B030(a1[6]);
  if ( result )
  {
    v16 = a3[1];
    v17 = nullptr;
    v67 = a2;
    v64 = *a3;
    if ( v16 )
    {
      v18 = 0;
      do
      {
        if ( v18 >= *(_DWORD *)(v16 - 4) )
          break;
        v19 = *(_QWORD *)(v16 + 8LL * v18);
        if ( v19 )
          ++*(_DWORD *)(v19 + 8);
        if ( v17 )
        {
          v20 = *(v17 - 1);
          if ( v20 == *(v17 - 2) )
          {
            v28 = (3 * v20 + 1) >> 1;
            v29 = 8 * v28 + 8;
            if ( 8 * v20 + 8 >= (unsigned int)v29 || v20 >= v28 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_E08B0(v68, "Overflow encountered when expanding vector", v4);
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v68);
              sub_233E40((__int64)v68);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v62 = (3 * v20 + 1) >> 1;
            v30 = (unsigned int *)sub_186B300(v17 - 2, v29);
            v17 = v30 + 2;
            *v30 = v62;
            LODWORD(v30) = v30[1];
            v23 = &v17[2 * (unsigned int)v30];
            v16 = a3[1];
            v22 = (_DWORD)v30 + 1;
          }
          else
          {
            v21 = v20;
            v22 = v20 + 1;
            v23 = &v17[2 * v21];
          }
        }
        else
        {
          v57 = (_QWORD *)sub_186B270(0x18u);
          v23 = v57 + 1;
          *v57 = 2;
          v16 = a3[1];
          v22 = 1;
          v17 = v23;
        }
        *v23 = v19;
        ++v18;
        *(v17 - 1) = v22;
      }
      while ( v16 );
    }
    v24 = (__m128 *)a1[36];
    if ( v24 )
    {
      v25 = v24[-1].m128_u32[3];
      if ( v25 == v24[-1].m128_i32[2] )
      {
        v40 = (3 * v25 + 1) >> 1;
        v66 = v40;
        v41 = 8 * (v40 + ((3 * v25 + 1) & 0xFFFFFFFE)) + 8;
        if ( 24 * v25 + 8 >= (unsigned int)v41 || v25 >= v40 )
        {
          v5 = (char **)__cxa_allocate_exception(0x28u);
          sub_E08B0(v68, "Overflow encountered when expanding vector", v6);
          *v5 = (char *)off_1C63128;
          sub_2333C0(v5 + 1, v68);
          sub_233E40((__int64)v68);
          __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v42 = sub_186B270(v41);
        v43 = (__int64 *)a1[36];
        v65 = (unsigned int *)v42;
        v24 = (__m128 *)(v42 + 8);
        if ( v43 )
        {
          v44 = *((unsigned int *)v43 - 1);
          v45 = v42 + 8;
          *(_DWORD *)(v42 + 4) = v44;
          v46 = &v43[3 * v44];
          for ( i = v43; v46 != i; *(_QWORD *)(v45 - 8) = v49 )
          {
            v48 = *i;
            i += 3;
            v45 += 24;
            *(_QWORD *)(v45 - 24) = v48;
            *(_QWORD *)(v45 - 16) = *(i - 2);
            v49 = *(i - 1);
            *(i - 1) = 0;
          }
          if ( (_DWORD)v44 )
          {
            v63 = &v43[3 * v44];
            do
            {
              v50 = (__int64 *)v43[2];
              if ( v50 )
              {
                v51 = &v50[*((unsigned int *)v50 - 1)];
                if ( v50 >= v51 )
                  goto LABEL_53;
                do
                {
                  while ( 1 )
                  {
                    v52 = *v50;
                    if ( *v50 )
                    {
                      v53 = v43[1];
                      if ( (*(_DWORD *)(v52 + 8))-- == 1 )
                        break;
                    }
                    if ( ++v50 >= v51 )
                      goto LABEL_52;
                  }
                  sub_15D7BC0(v53, v52);
                  ++v50;
                }
                while ( v50 < v51 );
LABEL_52:
                v50 = (__int64 *)v43[2];
                if ( v50 )
LABEL_53:
                  sub_186B220(v50 - 1);
              }
              v43 += 3;
            }
            while ( v63 != v43 );
            v43 = (__int64 *)a1[36];
          }
          sub_186B220(v43 - 1);
          v27 = (__m128 *)((char *)v24 + 24 * v65[1]);
          result = v65[1] + 1;
        }
        else
        {
          *(_DWORD *)(v42 + 4) = 0;
          v27 = (__m128 *)(v42 + 8);
          result = 1;
        }
        v55 = v65;
        v56 = v66;
        a1[36] = v24;
        *v55 = v56;
      }
      else
      {
        v26 = v25;
        result = v25 + 1;
        v27 = (__m128 *)((char *)v24 + 24 * v26);
      }
    }
    else
    {
      v58 = (_QWORD *)sub_186B270(0x38u);
      v24 = (__m128 *)(v58 + 1);
      *v58 = 2;
      result = 1;
      a1[36] = v24;
      v27 = v24;
    }
    v27[1].m128_u64[0] = (unsigned __int64)v17;
    *v27 = _mm_loadh_ps((const double *)&v64);
    v24[-1].m128_i32[3] = result;
  }
  return result;
}

