unsigned int *__fastcall sub_519020(__int64 a1, const void *a2)
{
  _BYTE *v3; // rax
  _BYTE *v4; // rbx
  unsigned int *result; // rax
  unsigned int v6; // r15d
  unsigned int v7; // r14d
  unsigned int v8; // r12d
  __int64 (__fastcall *v9)(__int64); // rax
  char v10; // al
  __int64 v11; // rcx
  unsigned int v12; // eax
  unsigned int v13; // edx
  unsigned int v14; // eax
  unsigned int v15; // esi
  __int64 *v16; // r8
  unsigned int v17; // edx
  __m128i *(__fastcall *v18)(__m128i *, __int64, const __m128i *, const __m128i *, char *); // rax
  __int64 v19; // rsi
  unsigned int v20; // edi
  __int64 v21; // rdx
  __int64 v22; // rdi
  unsigned int v23; // esi
  const __m128i *v24; // rdi
  __int64 v25; // r8
  unsigned int v26; // r9d
  const __m128i *v27; // rdx
  __int64 v28; // rsi
  __int64 (__fastcall *v29)(__int64, __int64, __int64); // rcx
  int v30; // edx
  void *v32; // r13
  void *v33; // r13
  _QWORD *v34; // r9
  unsigned int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rsi
  unsigned int v38; // ecx
  __int64 v39; // rdi
  unsigned int v40; // r8d
  __int64 v41; // rcx
  _QWORD *v42; // r8
  __int64 v43; // rax
  __int64 v44; // rdx
  int *v45; // rax
  int *v46; // rdx
  int v47; // ecx
  __int64 v48; // rax
  __int64 v49; // rcx
  _QWORD *v50; // rdx
  unsigned int v51; // eax
  __int64 v52; // rsi
  int v53; // eax
  __int64 *v54; // rsi
  __int64 v55; // rax
  unsigned int v56; // ecx
  unsigned int v57; // r11d
  size_t v58; // rsi
  unsigned int *v59; // rax
  __int64 v60; // rsi
  _QWORD *v61; // rax
  char **exception; // rbp
  _QWORD *v63; // [rsp+18h] [rbp-F0h]
  __int64 v64; // [rsp+20h] [rbp-E8h]
  __int64 v65; // [rsp+20h] [rbp-E8h]
  __int64 v66; // [rsp+20h] [rbp-E8h]
  unsigned int v67; // [rsp+2Ch] [rbp-DCh]
  char v68; // [rsp+3Eh] [rbp-CAh] BYREF
  __int64 v69[4]; // [rsp+40h] [rbp-C8h] BYREF
  __m128i v70; // [rsp+60h] [rbp-A8h] BYREF
  char v71[16]; // [rsp+70h] [rbp-98h] BYREF
  char v72[16]; // [rsp+80h] [rbp-88h] BYREF
  char v73[8]; // [rsp+90h] [rbp-78h] BYREF
  char v74[16]; // [rsp+98h] [rbp-70h] BYREF
  char v75[96]; // [rsp+A8h] [rbp-60h] BYREF

  v3 = __dynamic_cast(
         a2,
         (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
         (const struct __class_type_info *)&`typeinfo for'datalog::interval_relation,
         0);
  if ( !v3 )
    __cxa_bad_cast();
  v4 = v3;
  result = *(unsigned int **)(a1 + 8);
  if ( result )
  {
    v6 = 1;
    do
    {
      if ( v6 >= *(result - 1) )
        break;
      v7 = *result;
      v8 = result[v6];
      v9 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL);
      if ( v9 == sub_5155C0 )
        v10 = v4[152];
      else
        v10 = v9((__int64)v4);
      if ( !v10 )
      {
        v11 = *(_QWORD *)(*((_QWORD *)v4 + 27) + 16LL);
        v12 = v7;
        do
        {
          v13 = v12;
          v12 = *(_DWORD *)(v11 + 4LL * v12);
        }
        while ( v13 != v12 );
        v14 = v8;
        do
        {
          v15 = v14;
          v14 = *(_DWORD *)(v11 + 4LL * v14);
        }
        while ( v15 != v14 );
        if ( v13 != v14 )
        {
          v16 = *((__int64 **)v4 + 18);
          v17 = v8;
          v18 = *(__m128i *(__fastcall **)(__m128i *, __int64, const __m128i *, const __m128i *, char *))(*(_QWORD *)v4 + 168LL);
          do
          {
            v19 = v17;
            v20 = v17;
            v17 = *(_DWORD *)(v11 + 4LL * v17);
          }
          while ( v20 != v17 );
          v21 = *v16;
          v22 = 7 * v19;
          v23 = v7;
          v24 = (const __m128i *)(*v16 + 16 * v22);
          do
          {
            v25 = v23;
            v26 = v23;
            v23 = *(_DWORD *)(v11 + 4LL * v23);
          }
          while ( v26 != v23 );
          v27 = (const __m128i *)(112 * v25 + v21);
          if ( v18 == sub_516210 )
            sub_50CC90(&v70, *((_QWORD *)v4 + 1), v27, v24, &v68);
          else
            v18(&v70, (__int64)v4, v27, v24, &v68);
          if ( v68 )
            goto LABEL_25;
          LODWORD(v28) = v7;
          v29 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v4 + 208LL);
          do
          {
            v30 = v28;
            v28 = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v4 + 27) + 16LL) + 4LL * (unsigned int)v28);
          }
          while ( v30 != (_DWORD)v28 );
          if ( v29 == sub_5156D0
             ? sub_B286B0(v73, &v70.m128i_u64[1])
             : (unsigned __int8)v29((__int64)v4, v28, (__int64)&v70) )
          {
LABEL_25:
            v4[152] = 1;
          }
          else
          {
            v34 = *((_QWORD **)v4 + 27);
            v35 = v7;
            v36 = v34[2];
            do
            {
              v37 = v35;
              v38 = v35;
              v35 = *(_DWORD *)(v36 + 4LL * v35);
            }
            while ( v38 != v35 );
            do
            {
              v39 = v8;
              v40 = v8;
              v8 = *(_DWORD *)(v36 + 4LL * v8);
            }
            while ( v40 != v8 );
            if ( v38 != v8 )
            {
              v41 = v34[3];
              if ( *(_DWORD *)(v41 + 4 * v39) >= *(_DWORD *)(v41 + 4 * v37) )
              {
                v8 = v35;
                v35 = v40;
              }
              v42 = (_QWORD *)v34[1];
              v64 = *((_QWORD *)v4 + 27);
              *(_DWORD *)(v36 + 4LL * v8) = v35;
              v43 = 4LL * v35;
              v63 = v42;
              *(_DWORD *)(v41 + v43) += *(_DWORD *)(v41 + 4LL * v8);
              v44 = v34[4];
              v45 = (int *)(v44 + v43);
              v46 = (int *)(v44 + 4LL * v8);
              v47 = *v46;
              *v46 = *v45;
              *v45 = v47;
              v48 = sub_180C100(v42 + 2, 24);
              v49 = v48;
              *(_QWORD *)v48 = off_1C4F500;
              v50 = (_QWORD *)*v63;
              *(_QWORD *)(v48 + 8) = v64;
              *(_DWORD *)(v48 + 16) = v8;
              if ( v50 )
              {
                v51 = *((_DWORD *)v50 - 1);
                if ( v51 == *((_DWORD *)v50 - 2) )
                {
                  v57 = (3 * v51 + 1) >> 1;
                  v58 = 8 * v57 + 8;
                  if ( 8 * v51 + 8 >= (unsigned int)v58 || v51 >= v57 )
                  {
                    exception = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0(v69, "Overflow encountered when expanding vector");
                    *exception = (char *)off_1C63128;
                    sub_2333C0(exception + 1, v69);
                    sub_233E40((__int64)v69);
                    __cxa_throw(
                      exception,
                      (struct type_info *)&`typeinfo for'default_exception,
                      (void (*)(void *))sub_230E50);
                  }
                  v67 = (3 * v51 + 1) >> 1;
                  v65 = v49;
                  v59 = (unsigned int *)sub_186B300(v50 - 1, v58);
                  v60 = v59[1];
                  v50 = v59 + 2;
                  v49 = v65;
                  *v63 = v59 + 2;
                  *v59 = v67;
                  LODWORD(v59) = v60;
                  v54 = &v50[v60];
                  v53 = (_DWORD)v59 + 1;
                }
                else
                {
                  v52 = v51;
                  v53 = v51 + 1;
                  v54 = &v50[v52];
                }
              }
              else
              {
                v66 = v48;
                v61 = (_QWORD *)sub_186B270(0x18u);
                v49 = v66;
                *v61 = 2;
                v50 = v61 + 1;
                v53 = 1;
                *v63 = v50;
                v54 = v50;
              }
              *v54 = v49;
              *((_DWORD *)v50 - 1) = v53;
              v36 = *(_QWORD *)(*((_QWORD *)v4 + 27) + 16LL);
            }
            do
            {
              v55 = v7;
              v56 = v7;
              v7 = *(_DWORD *)(v36 + 4LL * v7);
            }
            while ( v56 != v7 );
            sub_B290A0(**((_QWORD **)v4 + 18) + 112 * v55, &v70);
          }
          v32 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v74);
          sub_182CBA0(v32, v75);
          v33 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v71);
          sub_182CBA0(v33, v72);
        }
      }
      result = *(unsigned int **)(a1 + 8);
      ++v6;
    }
    while ( result );
  }
  return result;
}

