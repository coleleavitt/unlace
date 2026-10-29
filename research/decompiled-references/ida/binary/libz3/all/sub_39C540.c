__m128i *__fastcall sub_39C540(__m128 *a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // ebx
  _OWORD *v5; // rax
  _DWORD *v6; // rax
  unsigned int *v7; // r15
  unsigned int *v8; // rbx
  unsigned int v9; // r12d
  __int64 v10; // r14
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // r14
  int v14; // eax
  unsigned int v15; // eax
  __int64 v16; // rdx
  int v17; // eax
  __int64 *v18; // rdx
  unsigned int v19; // ecx
  unsigned int *v20; // rdx
  unsigned int v21; // eax
  int v22; // r8d
  __int64 v23; // rcx
  __int64 v24; // rsi
  unsigned int *v25; // rcx
  int v26; // r9d
  int v27; // r9d
  __int64 v28; // r13
  __int64 v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rdx
  unsigned int *v32; // r14
  unsigned __int64 v33; // r12
  __int64 v34; // rax
  unsigned int v36; // ecx
  size_t v37; // rsi
  unsigned int v38; // r14d
  unsigned int *v39; // rax
  __int64 v40; // rdx
  _QWORD *v41; // rax
  int v42; // r9d
  char **exception; // r13
  int v45; // [rsp+0h] [rbp-330h]
  int v46; // [rsp+0h] [rbp-330h]
  __int64 v47; // [rsp+8h] [rbp-328h]
  __int64 v48; // [rsp+8h] [rbp-328h]
  __int64 v49; // [rsp+8h] [rbp-328h]
  int v51; // [rsp+10h] [rbp-320h]
  int v52; // [rsp+10h] [rbp-320h]
  __m128i *v53; // [rsp+18h] [rbp-318h]
  int v54; // [rsp+18h] [rbp-318h]
  int v55; // [rsp+18h] [rbp-318h]
  int v56; // [rsp+20h] [rbp-310h]
  _QWORD *v57; // [rsp+20h] [rbp-310h]
  int v58; // [rsp+20h] [rbp-310h]
  int v60; // [rsp+28h] [rbp-308h]
  __int64 v61; // [rsp+28h] [rbp-308h]
  int v62; // [rsp+28h] [rbp-308h]
  __int64 v63; // [rsp+30h] [rbp-300h]
  __int64 v64; // [rsp+30h] [rbp-300h]
  _DWORD *v65; // [rsp+38h] [rbp-2F8h]
  void *v66; // [rsp+38h] [rbp-2F8h]
  void *v67; // [rsp+38h] [rbp-2F8h]
  unsigned int *v68; // [rsp+40h] [rbp-2F0h] BYREF
  __int64 v69; // [rsp+48h] [rbp-2E8h] BYREF
  __int64 v70; // [rsp+50h] [rbp-2E0h] BYREF
  __int64 v71; // [rsp+58h] [rbp-2D8h] BYREF
  __int64 v72; // [rsp+60h] [rbp-2D0h] BYREF
  int v73[2]; // [rsp+68h] [rbp-2C8h] BYREF
  __int64 v74; // [rsp+70h] [rbp-2C0h] BYREF
  unsigned int *v75; // [rsp+78h] [rbp-2B8h] BYREF
  __int64 v76; // [rsp+80h] [rbp-2B0h] BYREF
  unsigned int *v77; // [rsp+88h] [rbp-2A8h] BYREF
  int v78[2]; // [rsp+90h] [rbp-2A0h] BYREF
  void *ptr[2]; // [rsp+A0h] [rbp-290h] BYREF
  int v80; // [rsp+B0h] [rbp-280h]
  __int128 v81; // [rsp+B8h] [rbp-278h]
  __int64 v82[67]; // [rsp+D0h] [rbp-260h] BYREF
  _BYTE v83[72]; // [rsp+2E8h] [rbp-48h] BYREF

  v4 = a3;
  v53 = (__m128i *)a1;
  v47 = *(_QWORD *)(a2 + 8);
  v74 = v47;
  v76 = v47;
  v5 = (_OWORD *)sub_186B270(0x40u);
  ptr[0] = v5;
  *v5 = 0;
  v5[1] = 0;
  v5[2] = 0;
  v5[3] = 0;
  ptr[1] = &byte_8;
  v80 = 0;
  v81 = 0;
  sub_157E9E0((int)ptr, v4);
  v6 = (_DWORD *)v81;
  v7 = nullptr;
  if ( !(_QWORD)v81 )
    goto LABEL_50;
  v8 = nullptr;
  v9 = 0;
  v65 = nullptr;
  do
  {
    if ( v9 >= *(v6 - 1) )
      break;
    v10 = *(_QWORD *)&v6[2 * v9];
    v63 = 8LL * v9;
    if ( v10 )
    {
      if ( v8 )
        v11 = *(v8 - 1);
      else
        v11 = 0;
      v12 = sub_15DB5C0(*(_QWORD *)(a2 + 8), v11, v10);
      v71 = v12;
      if ( v12 )
        ++*(_DWORD *)(v12 + 8);
      v75 = v7;
      sub_399930(&v75, &v71);
      v7 = v75;
      v13 = *(_QWORD *)(v81 + 8LL * v9);
      if ( !v8 || (v14 = *(v8 - 1), v14 == *(v8 - 2)) )
      {
        v68 = v8;
        sub_39BE00(&v68);
        v8 = v68;
        v14 = *(v68 - 1);
      }
      *(_QWORD *)&v8[2 * v14] = v13;
      *(v8 - 1) = v14 + 1;
      if ( v65 )
      {
        v15 = *(v65 - 1);
        if ( v15 == *(v65 - 2) )
        {
          v36 = (3 * v15 + 1) >> 1;
          v37 = 8 * v36 + 8;
          v38 = v36;
          if ( 8 * v15 + 8 >= (unsigned int)v37 || v15 >= v36 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_399470(v82, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v82);
            sub_233E40((__int64)v82);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v39 = (unsigned int *)sub_186B300(v65 - 2, v37);
          v40 = v39[1];
          *v39 = v38;
          v65 = v39 + 2;
          LODWORD(v39) = v40;
          v18 = (__int64 *)&v65[2 * v40];
          v17 = (_DWORD)v39 + 1;
        }
        else
        {
          v16 = v15;
          v17 = v15 + 1;
          v18 = (__int64 *)&v65[2 * v16];
        }
      }
      else
      {
        v41 = (_QWORD *)sub_186B270(0x18u);
        *v41 = 2;
        v65 = v41 + 1;
        v18 = v41 + 1;
        v17 = 1;
      }
      *v18 = v63 | 1;
      *(v65 - 1) = v17;
    }
    else
    {
      v72 = 0;
      v75 = v7;
      sub_399930(&v75, &v72);
      v7 = v75;
    }
    v6 = (_DWORD *)v81;
    ++v9;
  }
  while ( (_QWORD)v81 );
  if ( !v8 )
  {
    v6 = v65;
LABEL_50:
    v65 = v6;
    v8 = nullptr;
    goto LABEL_44;
  }
  v19 = *(v8 - 1);
  v20 = v8;
  v21 = v19 - 1;
  v22 = v19 - 1 - (v19 >> 1);
  if ( v19 >> 1 )
  {
    do
    {
      v23 = v21;
      v24 = *(_QWORD *)v20;
      --v21;
      v20 += 2;
      v25 = &v8[2 * v23];
      *((_QWORD *)v20 - 1) = *(_QWORD *)v25;
      *(_QWORD *)v25 = v24;
    }
    while ( v21 != v22 );
LABEL_19:
    sub_399270((__int64)v82, *(_QWORD *)(a2 + 8), (__int64)v83);
    v83[8] = 0;
    v82[0] = (__int64)&off_1C4CA80;
    if ( v7 )
    {
      sub_157BE40((int)v78, (int)v82, a3, *(v7 - 1), (int)v7, v26, a4, v47, a3, (int)a1, (int)v82, a2, v63, v65);
      sub_157BE40((int)v78, v56, v45, *(v7 - 1), (int)v7, v27, v45, v48, v51, v54, v56, v60, *(__int64 *)v78, v66);
    }
    else
    {
      sub_157BE40((int)v78, (int)v82, a3, 0, 0, v26, a4, v47, a3, (int)a1, (int)v82, a2, v63, v65);
      sub_157BE40((int)v78, v58, v46, 0, 0, v42, v46, v49, v52, v55, v58, v62, *(__int64 *)v78, v67);
    }
    v28 = *(_QWORD *)v78;
    v29 = *(_QWORD *)(v61 + 8);
    *(_QWORD *)v73 = *(_QWORD *)v78;
    v30 = sub_15E1EC0(v29, 1, (int)v73);
    *(_QWORD *)v78 = v30;
    if ( v30 )
      ++*(_DWORD *)(v30 + 8);
    v77 = nullptr;
    sub_399930(&v77, v78);
    v31 = *(v8 - 1);
    v32 = v77;
    v69 = 0;
    v33 = *(_QWORD *)(v61 + 8);
    v70 = 0;
    v34 = sub_15DB6A0(v33, 0, v31, v8, v65, v64, 1, &v69, &v70, 1, v77, 0, 0);
    *v53 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v34, (__m128i)v33);
    if ( v34 )
      ++*(_DWORD *)(v34 + 8);
    v82[0] = (__int64)&off_1C4CA80;
    sub_267D20(v57);
    goto LABEL_26;
  }
  if ( v19 )
    goto LABEL_19;
LABEL_44:
  *a1 = _mm_loadh_ps((const double *)(a2 + 8));
  if ( a3 )
    ++*(_DWORD *)(a3 + 8);
  v64 = 0;
  v28 = 0;
  v32 = nullptr;
LABEL_26:
  if ( *((_QWORD *)&v81 + 1) )
    sub_186B220((void *)(*((_QWORD *)&v81 + 1) - 8LL));
  if ( (_QWORD)v81 )
    sub_186B220((void *)(v81 - 8));
  if ( ptr[0] )
    sub_186B220(ptr[0]);
  sub_399450(v28, v47);
  sub_399450(v64, v47);
  v77 = v32;
  sub_2334C0(&v76);
  v75 = v7;
  sub_2334C0(&v74);
  if ( v65 )
    sub_186B220(v65 - 2);
  if ( v8 )
    sub_186B220(v8 - 2);
  return v53;
}

