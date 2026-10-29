__int64 __fastcall sub_8DE720(__int64 a1, unsigned int *a2, double a3)
{
  _DWORD *v5; // rax
  unsigned int v6; // r13d
  int v8; // eax
  __int64 v9; // rbx
  __int64 v10; // rsi
  bool v11; // zf
  _DWORD *v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 *v15; // rax
  __int64 (__fastcall *v16)(__int64, __int64); // rdx
  unsigned int v17; // r12d
  unsigned int v18; // eax
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rax
  unsigned int v22; // r15d
  unsigned int *v23; // rax
  unsigned int *v24; // rcx
  int v25; // r14d
  char v26; // r9
  char v27; // r11
  char v28; // r8
  _DWORD *v29; // rdx
  unsigned int v30; // edi
  int v31; // edx
  int v32; // ecx
  int v33; // ebx
  __int64 v34; // rax
  __int64 v35; // r12
  _QWORD *v36; // rdx
  unsigned int v37; // eax
  unsigned int v38; // r14d
  __int64 v39; // rbx
  __int64 v40; // r8
  __int64 v41; // r14
  __int64 v42; // rdi
  __int64 v43; // rax
  __int64 v44; // rcx
  int v45; // edx
  char *v46; // rcx
  char v47; // r15
  __int64 v48; // r12
  unsigned int v49; // eax
  int v50; // eax
  unsigned int v51; // ebx
  unsigned int v52; // ecx
  unsigned int *v53; // rax
  _QWORD *v54; // rax
  _QWORD *v55; // rdx
  void *v56; // rdi
  int v57; // ecx
  _QWORD *v58; // rdx
  char **exception; // r12
  __int64 v60; // rdx
  bool v61; // [rsp+10h] [rbp-B8h]
  unsigned int v62; // [rsp+10h] [rbp-B8h]
  size_t v63; // [rsp+10h] [rbp-B8h]
  unsigned int v64; // [rsp+18h] [rbp-B0h]
  int v65; // [rsp+20h] [rbp-A8h]
  unsigned int v66; // [rsp+20h] [rbp-A8h]
  int v67; // [rsp+20h] [rbp-A8h]
  int v68; // [rsp+30h] [rbp-98h]
  int v69; // [rsp+34h] [rbp-94h]
  int v70; // [rsp+38h] [rbp-90h]
  char v71; // [rsp+38h] [rbp-90h]
  unsigned int v72; // [rsp+3Ch] [rbp-8Ch]
  char v73; // [rsp+4Fh] [rbp-79h] BYREF
  _QWORD v74[4]; // [rsp+50h] [rbp-78h] BYREF
  __int64 v75[11]; // [rsp+70h] [rbp-58h] BYREF

  if ( !*(_BYTE *)(a1 + 552) )
    return 0;
  if ( *((_WORD *)a2 + 2)
    || (v5 = *(_DWORD **)(*((_QWORD *)a2 + 2) + 24LL)) == nullptr
    || *v5 != 5
    || (v8 = v5[1], v8 != 2) && v8 != 3 )
  {
    sub_8AC840(a1, (__int64)a2, a3);
    return 0;
  }
  v9 = *((_QWORD *)a2 + 5);
  v10 = *((_QWORD *)a2 + 4);
  v74[0] = 0;
  v74[2] = 1;
  v74[1] = 0;
  v11 = *(_WORD *)(v9 + 4) == 0;
  v74[3] = 0;
  if ( v11 && (v12 = *(_DWORD **)(*(_QWORD *)(v9 + 16) + 24LL)) != nullptr && *v12 == 5 && !v12[1] )
  {
    v11 = v8 == 3;
    v13 = v9;
    v9 = v10;
    v61 = v11;
    v10 = v13;
  }
  else
  {
    v61 = v8 != 3;
  }
  if ( !(unsigned __int8)sub_1666AE0(a1 + 80, v10, v74, &v73) )
    goto LABEL_32;
  v65 = sub_182D050(qword_1C7F2C0, v74);
  v68 = v65;
  sub_41D160((__int64 *)(a1 + 608));
  v14 = *(_QWORD *)(a1 + 624);
  if ( v14 )
    *(_DWORD *)(v14 - 4) = 0;
  v75[0] = v9;
  if ( v9 )
    ++*(_DWORD *)(v9 + 8);
  sub_892DF0((_QWORD *)(a1 + 616), v75);
  LOBYTE(v75[0]) = 1;
  sub_893820((_QWORD *)(a1 + 624), v75);
  v6 = sub_8B87C0(a1, a1 + 608, (unsigned int **)(a1 + 624));
  if ( !(_BYTE)v6 )
  {
LABEL_32:
    sub_8AC840(a1, (__int64)a2, a3);
    v6 = 0;
    goto LABEL_31;
  }
  v15 = *(__int64 **)(a1 + 616);
  v16 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 392LL);
  if ( v15 && *((_DWORD *)v15 - 1) == 2 && (v46 = *(char **)(a1 + 624), v47 = *v46, *v46 != v46[1]) )
  {
    v48 = v15[1];
    v64 = v16(a1, *v15);
    v17 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 392LL))(a1, v48);
    if ( v47 )
    {
      v49 = v64;
      v64 = v17;
      v17 = v49;
    }
  }
  else
  {
    v17 = v16(a1, v9);
    if ( (unsigned __int8)sub_892DC0(v9) )
      v64 = *(_DWORD *)(a1 + 556);
    else
      v64 = *(_DWORD *)(a1 + 560);
  }
  if ( v61 )
  {
    v68 = -v65;
    v18 = v64;
    v64 = v17;
    v17 = v18;
  }
  v19 = *(_QWORD *)(a1 + 16);
  v20 = *(_QWORD *)(v19 + 8832);
  if ( !v20 || (v21 = *a2, (unsigned int)v21 >= *(_DWORD *)(v20 - 4)) || *(_DWORD *)(v20 + 4 * v21) == 0x7FFFFFFF )
  {
    v22 = sub_B67520(v19, a2);
    sub_8F1CE0(*(_QWORD *)(a1 + 16), v22, *(unsigned int *)(a1 + 8));
    v62 = 2 * v22;
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 72) + 356LL) )
    {
      v23 = *(unsigned int **)(*(_QWORD *)(a1 + 232) + 8LL * v64);
      if ( v23 )
      {
        v24 = &v23[*(v23 - 1)];
        if ( v23 != v24 )
        {
          v25 = 0;
          v26 = 0;
          v72 = -2;
          v27 = 0;
          v28 = 0;
          v66 = -2;
          v69 = -2;
          v70 = 0;
          do
          {
            v29 = (_DWORD *)(*(_QWORD *)(a1 + 224) + 24LL * *v23);
            if ( v17 == v29[1] )
            {
              v30 = v29[4];
              if ( v30 != -2 )
              {
                v31 = v29[2];
                if ( v31 >= v68 )
                {
                  if ( v31 > v68 )
                  {
                    if ( v27 )
                    {
                      if ( v31 < v25 )
                      {
                        v66 = v30;
                        v25 = v31;
                      }
                    }
                    else
                    {
                      v66 = v30;
                      v25 = v31;
                      v27 = 1;
                    }
                  }
                  else
                  {
                    v72 = v30;
                    v26 = 1;
                  }
                }
                else if ( !v28 || v31 > v70 )
                {
                  v70 = v31;
                  v28 = 1;
                  v69 = v30;
                }
              }
            }
            ++v23;
          }
          while ( v23 != v24 );
          if ( v26 )
          {
            sub_B6A470(*(_QWORD *)(a1 + 16), *(unsigned int *)(a1 + 8), v72 ^ 1, v62, 0, 0);
            sub_B6A470(*(_QWORD *)(a1 + 16), *(unsigned int *)(a1 + 8), v62 ^ 1, v72, 0, 0);
          }
          else
          {
            if ( v28 )
            {
              v71 = v27;
              sub_B6A470(*(_QWORD *)(a1 + 16), *(unsigned int *)(a1 + 8), v69 ^ 1u, v62, 0, 0);
              v27 = v71;
            }
            if ( v27 )
              sub_B6A470(*(_QWORD *)(a1 + 16), *(unsigned int *)(a1 + 8), v62 ^ 1, v66, 0, 0);
          }
        }
      }
    }
    v67 = sub_893C10(a1 + 184, v64, v17, v68, v62);
    if ( (unsigned __int8)sub_892DC0(v9) )
      v32 = ~v68;
    else
      v32 = -v68 - *(_DWORD *)(a1 + 64);
    v33 = sub_893C10(a1 + 184, v17, v64, v32, v62 ^ 1);
    v34 = sub_186B270(0x10u);
    *(_DWORD *)v34 = v22;
    v35 = v34;
    v36 = *(_QWORD **)(a1 + 632);
    *(_BYTE *)(v34 + 4) = 0;
    *(_DWORD *)(v34 + 12) = v33;
    *(_DWORD *)(v34 + 8) = v67;
    if ( v36 )
    {
      v37 = *((_DWORD *)v36 - 1);
      if ( v37 == *((_DWORD *)v36 - 2) )
      {
        v51 = (3 * v37 + 1) >> 1;
        v52 = 8 * v51 + 8;
        if ( 8 * v37 + 8 >= v52 || v37 >= v51 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_12D192(v75, "Overflow encountered when expanding vector", v60);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v75);
          sub_233E40((__int64)v75);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v53 = (unsigned int *)sub_186B300(v36 - 1, v52);
        v36 = v53 + 2;
        *v53 = v51;
        v37 = v53[1];
        *(_QWORD *)(a1 + 632) = v36;
      }
    }
    else
    {
      v58 = (_QWORD *)sub_186B270(0x18u);
      *v58 = 2;
      v37 = 0;
      v36 = v58 + 1;
      *(_QWORD *)(a1 + 632) = v36;
    }
    v36[v37] = v35;
    *((_DWORD *)v36 - 1) = v37 + 1;
    v38 = *(_DWORD *)(a1 + 664);
    if ( 3 * v38 < 4 * (*(_DWORD *)(a1 + 668) + *(_DWORD *)(a1 + 672)) )
    {
      v63 = 48LL * v38;
      v54 = (_QWORD *)sub_186B270(v63);
      v39 = (__int64)v54;
      if ( 2 * v38 )
      {
        v55 = &v54[6 * (v38 & 0x7FFFFFFF)];
        do
        {
          *v54 = 0;
          v54 += 6;
          *(v54 - 3) = 0;
        }
        while ( v55 != v54 );
      }
      sub_8DE610(*(const __m128i **)(a1 + 656), *(_DWORD *)(a1 + 664), v39, 2 * v38);
      v56 = *(void **)(a1 + 656);
      v57 = 2 * v38;
      v40 = v63;
      if ( v56 )
      {
        sub_186B220(v56);
        v57 = 2 * v38;
        v40 = v63;
      }
      *(_QWORD *)(a1 + 656) = v39;
      v38 = v57;
      *(_DWORD *)(a1 + 664) = v57;
      *(_DWORD *)(a1 + 672) = 0;
    }
    else
    {
      v39 = *(_QWORD *)(a1 + 656);
      v40 = 24LL * v38;
    }
    v41 = v22 & (v38 - 1);
    v42 = v39 + 24 * v41;
    if ( v40 == 24 * v41 )
    {
      v44 = 0;
LABEL_65:
      if ( v39 == v42 )
      {
LABEL_92:
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      while ( 1 )
      {
        v50 = *(_DWORD *)(v39 + 4);
        if ( v50 == 2 )
        {
          if ( v22 == *(_DWORD *)v39 && v22 == *(_DWORD *)(v39 + 8) )
          {
            *(_DWORD *)(v39 + 8) = v22;
            *(_QWORD *)(v39 + 16) = v35;
            *(_DWORD *)(v39 + 4) = 2;
            goto LABEL_31;
          }
        }
        else
        {
          if ( !v50 )
          {
            if ( !v44 )
            {
              v44 = v39;
              goto LABEL_85;
            }
LABEL_84:
            --*(_DWORD *)(a1 + 672);
            goto LABEL_85;
          }
          v44 = v39;
        }
        v39 += 24;
        if ( v42 == v39 )
          goto LABEL_92;
      }
    }
    v43 = v39 + 24 * v41;
    v44 = 0;
    while ( 1 )
    {
      v45 = *(_DWORD *)(v43 + 4);
      if ( v45 == 2 )
      {
        if ( v22 == *(_DWORD *)v43 && v22 == *(_DWORD *)(v43 + 8) )
        {
          *(_DWORD *)(v43 + 8) = v22;
          *(_QWORD *)(v43 + 16) = v35;
          *(_DWORD *)(v43 + 4) = 2;
          break;
        }
      }
      else
      {
        if ( !v45 )
        {
          if ( v44 )
            goto LABEL_84;
          v44 = v43;
LABEL_85:
          *(_DWORD *)(v44 + 8) = v22;
          *(_QWORD *)(v44 + 16) = v35;
          *(_DWORD *)(v44 + 4) = 2;
          *(_DWORD *)v44 = v22;
          ++*(_DWORD *)(a1 + 668);
          break;
        }
        v44 = v43;
      }
      v43 += 24;
      if ( v39 + v40 == v43 )
        goto LABEL_65;
    }
  }
LABEL_31:
  sub_25A130((char *)v74);
  return v6;
}

