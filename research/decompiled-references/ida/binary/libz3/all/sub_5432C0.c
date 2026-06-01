_QWORD *__fastcall sub_5432C0(__int64 a1, const void *a2)
{
  _QWORD *result; // rax
  __int64 v3; // rbx
  _QWORD *v4; // rax
  unsigned int v5; // edi
  unsigned int i; // eax
  unsigned int v7; // r14d
  size_t v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdi
  int v14; // ecx
  char v15; // si
  __int64 v16; // rcx
  char v17; // si
  __int64 v18; // rcx
  __int64 v19; // rbp
  __int64 v20; // r15
  __int64 v21; // rbp
  void *v22; // r13
  __int64 v23; // rsi
  __int64 v24; // rax
  char v25; // si
  void *v26; // rbp
  __int64 v27; // rax
  int v28; // edx
  __int64 v29; // rdx
  char v30; // cl
  char v31; // di
  char v32; // cl
  char v33; // di
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rax
  void *v37; // r15
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rcx
  _QWORD *v41; // rdx
  unsigned int v42; // eax
  __int64 v43; // rcx
  int v44; // eax
  _BYTE *v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rbp
  __int64 v48; // r14
  void *v49; // r13
  __int64 v50; // rsi
  _QWORD *v51; // rbx
  unsigned int v52; // r13d
  unsigned int *v53; // rax
  __int64 v54; // rcx
  _QWORD *v55; // rax
  char **v56; // r13
  char **exception; // r13
  _DWORD *v58; // [rsp+0h] [rbp-98h]
  __int64 v59; // [rsp+8h] [rbp-90h]
  _QWORD *v60; // [rsp+18h] [rbp-80h]
  unsigned int v61; // [rsp+24h] [rbp-74h]
  __int64 v63; // [rsp+38h] [rbp-60h] BYREF
  __int64 v64; // [rsp+40h] [rbp-58h] BYREF
  __int64 v65; // [rsp+48h] [rbp-50h]
  __int64 v66; // [rsp+50h] [rbp-48h] BYREF
  __int64 v67; // [rsp+58h] [rbp-40h]

  result = __dynamic_cast(
             a2,
             (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
             (const struct __class_type_info *)&`typeinfo for'datalog::karr_relation,
             0);
  v60 = result;
  if ( !result )
    __cxa_bad_cast();
  if ( *(_BYTE *)(a1 + 48) )
  {
    if ( *((_BYTE *)result + 112) )
    {
      v3 = result[2];
      if ( v3 )
        goto LABEL_5;
    }
    else
    {
      v51 = result;
      sub_538A20((_DWORD *)result[4], result + 11, result + 15);
      *((_BYTE *)v51 + 112) = 1;
      v3 = v60[2];
      if ( v3 )
      {
LABEL_5:
        v61 = *(_DWORD *)(v3 - 4);
        if ( v61 )
        {
          v4 = (_QWORD *)sub_186B270(0x48u);
          *v4 = 2;
          v3 = (__int64)(v4 + 1);
          v5 = v61;
          for ( i = *(_DWORD *)v4; i < v61; i = *(_DWORD *)(v59 - 8) )
          {
            v7 = (3 * i + 1) >> 1;
            v8 = 32 * v7 + 8;
            if ( 32 * i + 8 >= (unsigned int)v8 || i >= v7 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(&v64, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, &v64);
              sub_233E40((__int64)&v64);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v9 = sub_186B270(v8);
            v10 = *(unsigned int *)(v3 - 4);
            v11 = v9 + 8;
            v58 = (_DWORD *)v9;
            v59 = v9 + 8;
            *(_DWORD *)(v9 + 4) = v10;
            v12 = v3;
            v13 = v3 + 32 * v10;
            if ( v13 != v3 )
            {
              do
              {
                v14 = *(_DWORD *)v12;
                v15 = *(_BYTE *)(v12 + 4);
                v12 += 32;
                v11 += 32;
                *(_DWORD *)(v11 - 32) = v14;
                *(_BYTE *)(v11 - 28) = v15 & 3 | *(_BYTE *)(v11 - 28) & 0xFC;
                v16 = *(_QWORD *)(v12 - 24);
                *(_QWORD *)(v12 - 24) = 0;
                *(_QWORD *)(v11 - 24) = v16;
                v17 = *(_BYTE *)(v12 - 12);
                *(_DWORD *)(v11 - 16) = *(_DWORD *)(v12 - 16);
                *(_BYTE *)(v11 - 12) = v17 & 3 | *(_BYTE *)(v11 - 12) & 0xFC;
                v18 = *(_QWORD *)(v12 - 8);
                *(_QWORD *)(v12 - 8) = 0;
                *(_QWORD *)(v11 - 8) = v18;
              }
              while ( v13 != v12 );
            }
            v19 = *(unsigned int *)(v3 - 4);
            if ( (_DWORD)v19 )
            {
              v20 = v3;
              v21 = v3 + 32 * v19;
              do
              {
                v22 = qword_1C7F2C0;
                sub_182CBA0(qword_1C7F2C0, v20);
                v23 = v20 + 16;
                v20 += 32;
                sub_182CBA0(v22, v23);
              }
              while ( v21 != v20 );
            }
            sub_186B220((void *)(v3 - 8));
            v3 = v59;
            v5 = v61;
            *v58 = v7;
          }
          v24 = v3;
          *(_DWORD *)(v3 - 4) = v5;
          do
          {
            *(_OWORD *)(v24 + 16) = 0;
            v24 += 32;
            *(_OWORD *)(v24 - 32) = 0;
            *(_DWORD *)(v24 - 16) = 1;
            *(_BYTE *)(v24 - 28) = 0;
            *(_BYTE *)(v24 - 12) = 0;
          }
          while ( v3 + 32LL * v5 != v24 );
        }
        else
        {
          v3 = 0;
        }
      }
    }
    v64 = 1;
    v65 = 0;
    v66 = 1;
    v67 = 0;
    sub_182CBA0(qword_1C7F2C0, &v66);
    v25 = BYTE4(v64);
    v26 = qword_1C7F2C0;
    v27 = v3 + 32LL * *(unsigned int *)(a1 + 8);
    v28 = *(_DWORD *)v27;
    *(_DWORD *)v27 = v64;
    LODWORD(v64) = v28;
    v29 = *(_QWORD *)(v27 + 8);
    *(_QWORD *)(v27 + 8) = v65;
    v30 = v25;
    v25 &= ~2u;
    v65 = v29;
    v31 = *(_BYTE *)(v27 + 4);
    LOBYTE(v29) = v31 & 2;
    v31 &= ~2u;
    LOBYTE(v29) = v31 & 1 | (v25 | v29) & 0xFE;
    v32 = v31 & 0xFE | v30 & 2;
    v33 = *(_BYTE *)(v27 + 20);
    BYTE4(v64) = v29;
    LODWORD(v29) = *(_DWORD *)(v27 + 16);
    *(_BYTE *)(v27 + 4) = v25 & 1 | v32;
    LODWORD(v66) = v29;
    v34 = *(_QWORD *)(v27 + 24);
    *(_QWORD *)(v27 + 24) = v67;
    v67 = v34;
    LOBYTE(v34) = BYTE4(v66);
    *(_DWORD *)(v27 + 16) = 1;
    *(_BYTE *)(v27 + 20) = v33 & 0xFC | v34 & 2;
    BYTE4(v66) = v33 & 1 | v33 & 2 | v34 & 0xFC;
    sub_182CBA0(v26, &v64);
    sub_182CBA0(v26, &v66);
    v63 = v3;
    sub_536E30(v60 + 11, &v63);
    v65 = 0;
    v64 = 0xFFFFFFFFLL;
    v66 = 1;
    v67 = 0;
    sub_182CBA0(qword_1C7F2C0, &v66);
    v35 = v60[12];
    BYTE4(v66) &= ~1u;
    LODWORD(v66) = 1;
    if ( !v35 || (v36 = *(unsigned int *)(v35 - 4), (_DWORD)v36 == *(_DWORD *)(v35 - 8)) )
    {
      sub_53D790(v60 + 12);
      v35 = v60[12];
      v36 = *(unsigned int *)(v35 - 4);
    }
    v37 = qword_1C7F2C0;
    v38 = v35 + 32 * v36;
    *(_DWORD *)v38 = v64;
    *(_BYTE *)(v38 + 4) = BYTE4(v64) & 3 | *(_BYTE *)(v38 + 4) & 0xFC;
    v39 = v65;
    v65 = 0;
    *(_QWORD *)(v38 + 8) = v39;
    *(_DWORD *)(v38 + 16) = v66;
    *(_BYTE *)(v38 + 20) = BYTE4(v66) & 3 | *(_BYTE *)(v38 + 20) & 0xFC;
    v40 = v67;
    v67 = 0;
    *(_QWORD *)(v38 + 24) = v40;
    ++*(_DWORD *)(v35 - 4);
    sub_182CBA0(v37, &v64);
    sub_182CBA0(v37, &v66);
    v41 = (_QWORD *)v60[13];
    if ( v41 )
    {
      v42 = *((_DWORD *)v41 - 1);
      if ( v42 == *((_DWORD *)v41 - 2) )
      {
        v52 = (3 * v42 + 1) >> 1;
        if ( v42 + 8 >= v52 + 8 || v42 >= v52 )
        {
          v56 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v64, "Overflow encountered when expanding vector");
          *v56 = (char *)off_1C63128;
          sub_2333C0(v56 + 1, &v64);
          sub_233E40((__int64)&v64);
          __cxa_throw(v56, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v53 = (unsigned int *)sub_186B300(v41 - 1, v52 + 8);
        v54 = v53[1];
        v41 = v53 + 2;
        v60[13] = v53 + 2;
        *v53 = v52;
        LODWORD(v53) = v54;
        v45 = (char *)v41 + v54;
        v44 = (_DWORD)v53 + 1;
      }
      else
      {
        v43 = v42;
        v44 = v42 + 1;
        v45 = (char *)v41 + v43;
      }
    }
    else
    {
      v55 = (_QWORD *)sub_186B270(0xAu);
      *v55 = 2;
      v41 = v55 + 1;
      v60[13] = v55 + 1;
      v45 = v55 + 1;
      v44 = 1;
    }
    *v45 = 1;
    *((_DWORD *)v41 - 1) = v44;
    result = v60;
    *((_BYTE *)v60 + 144) = 0;
    if ( v3 )
    {
      v46 = *(unsigned int *)(v3 - 4);
      if ( (_DWORD)v46 )
      {
        v47 = v3;
        v48 = v3 + 32 * v46;
        do
        {
          v49 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v47);
          v50 = v47 + 16;
          v47 += 32;
          sub_182CBA0(v49, v50);
        }
        while ( v47 != v48 );
      }
      return (_QWORD *)sub_186B220((void *)(v3 - 8));
    }
  }
  return result;
}

