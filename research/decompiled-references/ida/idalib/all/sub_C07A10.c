__int64 __fastcall sub_C07A10(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int *a6,
        int *a7)
{
  unsigned __int8 v7; // al
  unsigned int v9; // r14d
  int v10; // r12d
  unsigned int v11; // r8d
  int v12; // r15d
  int v13; // r13d
  _DWORD *v14; // rax
  unsigned int v15; // ebx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r9
  int v20; // r8d
  __int64 v21; // rax
  int v22; // esi
  __int64 (__fastcall ***v23)(); // r15
  __m128 v24; // xmm0
  _BYTE *v25; // rdx
  int v26; // eax
  int v27; // eax
  __int8 v28; // dl
  __int8 v29; // dl
  unsigned __int64 v30; // rcx
  __int64 v31; // rax
  _QWORD *v32; // rbx
  unsigned __int64 v33; // r13
  __int64 v34; // rax
  _QWORD *v35; // rbx
  unsigned int v36; // eax
  unsigned int v37; // r13d
  __int64 v39; // rdi
  _DWORD *v40; // rax
  _DWORD *v41; // rdx
  __int64 v42; // rdi
  _DWORD *v43; // rax
  char v44; // cl
  _DWORD *v45; // rdx
  int v46; // [rsp+0h] [rbp-448h]
  int v47; // [rsp+0h] [rbp-448h]
  int v48; // [rsp+0h] [rbp-448h]
  unsigned int v49; // [rsp+Ch] [rbp-43Ch]
  __int64 v50; // [rsp+10h] [rbp-438h] BYREF
  unsigned __int64 v51; // [rsp+18h] [rbp-430h]
  __int64 v52; // [rsp+20h] [rbp-428h]
  __int64 (__fastcall ***v53)(); // [rsp+28h] [rbp-420h]
  __int64 v54; // [rsp+30h] [rbp-418h]
  __int64 v55; // [rsp+38h] [rbp-410h]
  char *v56; // [rsp+40h] [rbp-408h]
  char *v57; // [rsp+48h] [rbp-400h]
  __int64 v58; // [rsp+50h] [rbp-3F8h]
  unsigned int *v59; // [rsp+58h] [rbp-3F0h]
  __int64 v60; // [rsp+60h] [rbp-3E8h]
  int v61; // [rsp+68h] [rbp-3E0h]
  unsigned int v62; // [rsp+6Ch] [rbp-3DCh]
  char v63; // [rsp+7Fh] [rbp-3C9h] BYREF
  _BYTE v64[32]; // [rsp+80h] [rbp-3C8h] BYREF
  __int64 (__fastcall **v65)(); // [rsp+A0h] [rbp-3A8h] BYREF
  void *v66; // [rsp+E0h] [rbp-368h]
  char v67; // [rsp+F0h] [rbp-358h] BYREF
  __m128 v68; // [rsp+170h] [rbp-2D8h] BYREF
  __int64 v69; // [rsp+180h] [rbp-2C8h]
  __int64 v70; // [rsp+188h] [rbp-2C0h]
  __int64 v71; // [rsp+190h] [rbp-2B8h]
  int v72; // [rsp+198h] [rbp-2B0h]
  __int16 v73; // [rsp+19Ch] [rbp-2ACh]
  void *v74; // [rsp+1A0h] [rbp-2A8h]
  __m128i si128; // [rsp+1A8h] [rbp-2A0h]
  _BYTE v76[512]; // [rsp+1B8h] [rbp-290h] BYREF
  _BYTE *v77; // [rsp+3B8h] [rbp-90h]
  void *ptr; // [rsp+3C0h] [rbp-88h]
  __m128i v79; // [rsp+3C8h] [rbp-80h]
  _DWORD v80[11]; // [rsp+3D8h] [rbp-70h] BYREF
  __int16 v81; // [rsp+404h] [rbp-44h]

  v7 = *(_BYTE *)(a1 + 2);
  v58 = a1;
  v49 = a2;
  v50 = a4;
  v54 = a5;
  v59 = a6;
  if ( ((v7 >> 3) & 7) == 6 )
    return *(unsigned int *)(a1 + 20);
  v9 = 0;
  if ( a6 )
    v9 = *a6;
  v61 = 0;
  if ( a7 )
  {
    v49 = a2 - *a7;
    v61 = *a7;
  }
  v55 = v58 + 20;
  v56 = &v63;
  v53 = &v65;
  v57 = &v67;
  while ( 1 )
  {
    v10 = *(_DWORD *)(v55 + 4LL * v9);
    v46 = v10;
    if ( v10 < 0 )
      v46 = sub_1021B90(a3, (unsigned int)v10);
    v11 = v46 & 0x7FFFFFFF;
    if ( (v46 & 0x7FFFFFFFu) < *(_DWORD *)(a3 + 476) || v11 >= *(_DWORD *)(a3 + 480) )
    {
      LODWORD(v52) = v46 & 0x7FFFFFFF;
      v27 = sub_101D590(a3);
      v11 = v52;
      v12 = v27;
    }
    else
    {
      v12 = *(_DWORD *)(a3 + 472);
    }
    v13 = v12 + 1;
    v68.m128_i8[0] = 0;
    LODWORD(v52) = v12;
    if ( (unsigned int)(v12 + 1) <= 1 )
      goto LABEL_39;
    if ( v12 >= 0 )
    {
      v14 = (_DWORD *)(*(_QWORD *)(a3 + 184) + 24LL * (unsigned int)v12);
      goto LABEL_15;
    }
    v30 = (unsigned int)(-2 - v12);
    v31 = *(_QWORD *)(*(_QWORD *)(a3 + 320) + 8LL * ((unsigned int)(-2 - v12) >> 6));
    if ( !_bittest64(&v31, v30) )
    {
      LODWORD(v60) = v11;
      v14 = (_DWORD *)sub_101F930(a3, (unsigned int)v30, &v68);
      v29 = v68.m128_i8[0];
      v11 = v60;
      goto LABEL_38;
    }
    v32 = (_QWORD *)(*(_QWORD *)(a3 + 272) + 8 * ((unsigned __int64)(int)v30 >> 5));
    if ( !*v32 )
    {
      v42 = *(_QWORD *)(a3 + 288);
      v62 = v11;
      LODWORD(v60) = -2 - v12;
      v43 = (_DWORD *)sub_C079D0((__int64 *)(v42 & 0xFFFFFFFFFFFFFFF8LL), 768, 3u);
      v44 = v60;
      v11 = v62;
      *v32 = v43;
      v45 = v43 + 192;
      do
      {
        *v43 = 0;
        v43 += 6;
        *((_OWORD *)v43 - 1) = 0;
        *((_QWORD *)v43 - 1) = 0;
      }
      while ( v45 != v43 );
      v29 = v68.m128_i8[0];
      v14 = (_DWORD *)(*v32 + 24LL * (v44 & 0x1F));
LABEL_38:
      if ( v29 )
        goto LABEL_39;
      goto LABEL_15;
    }
    v14 = (_DWORD *)(*v32 + 24LL * ((-2 - (_BYTE)v12) & 0x1F));
LABEL_15:
    if ( v14 )
    {
      v15 = v11 - (*v14 & 0x7FFFFFFF);
      goto LABEL_17;
    }
LABEL_39:
    v13 = 1;
    LODWORD(v52) = 0;
    v15 = 0;
    v12 = 0;
LABEL_17:
    v63 = 0;
    v51 = (unsigned int)v12 | v51 & 0xFFFFFFFF00000000LL;
    v16 = sub_10202B0(a3, (unsigned int)v51, v56);
    v18 = v16;
    if ( v63 )
      break;
    v19 = v16 + v17;
    v68.m128_i8[0] = 0;
    v20 = v16 + v15;
    if ( v13 == 1 )
      goto LABEL_36;
    if ( v12 < 0 )
    {
      v33 = (unsigned int)(-2 - v12);
      v34 = *(_QWORD *)(*(_QWORD *)(a3 + 320) + 8LL * ((unsigned int)(-2 - v12) >> 6));
      if ( _bittest64(&v34, v33) )
      {
        v35 = (_QWORD *)(*(_QWORD *)(a3 + 272) + 8 * ((unsigned __int64)(int)v33 >> 5));
        if ( *v35 )
        {
          v21 = *v35 + 24LL * ((-2 - (_BYTE)v12) & 0x1F);
          goto LABEL_21;
        }
        v39 = *(_QWORD *)(a3 + 288);
        v60 = v18;
        v52 = v19;
        v48 = v20;
        v40 = (_DWORD *)sub_C079D0((__int64 *)(v39 & 0xFFFFFFFFFFFFFFF8LL), 768, 3u);
        v20 = v48;
        LODWORD(v19) = v52;
        *v35 = v40;
        LODWORD(v18) = v60;
        v41 = v40 + 192;
        do
        {
          *v40 = 0;
          v40 += 6;
          *((_OWORD *)v40 - 1) = 0;
          *((_QWORD *)v40 - 1) = 0;
        }
        while ( v41 != v40 );
        v28 = v68.m128_i8[0];
        v21 = *v35 + 24LL * ((-2 - (_BYTE)v12) & 0x1F);
      }
      else
      {
        v60 = v18;
        v52 = v19;
        v47 = v20;
        v21 = sub_101F930(a3, (unsigned int)v33, &v68);
        v20 = v47;
        LODWORD(v19) = v52;
        v28 = v68.m128_i8[0];
        LODWORD(v18) = v60;
      }
      if ( v28 )
        goto LABEL_36;
    }
    else
    {
      v21 = *(_QWORD *)(a3 + 184) + 24LL * (unsigned int)v52;
    }
LABEL_21:
    if ( !v21 || *(char *)(v21 + 3) < 0 )
    {
LABEL_36:
      v22 = 0;
      goto LABEL_24;
    }
    v22 = *(_DWORD *)v21 & 0x7FFFFFFF;
LABEL_24:
    v23 = v53;
    sub_13D1080((_DWORD)v53, v22, v50, v18, v20, v19, 1);
    sub_13DB5F0(v23, v64);
    v69 = v54;
    v73 = 0;
    v24 = _mm_loadh_ps((const double *)&v50);
    v74 = v76;
    v77 = v76;
    v81 = 0;
    ptr = v80;
    v68 = v24;
    v70 = 0;
    v71 = 0;
    v72 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8EA0);
    v79 = _mm_load_si128((const __m128i *)&xmmword_23A8D20);
    v80[10] = 0;
    sub_13EAF80(&v68, v64, 1);
    v25 = v74;
    v26 = (_DWORD)v77 - (_DWORD)v74;
    if ( v49 < (int)v77 - (int)v74 || v49 == (_DWORD)v77 - (_DWORD)v74 && *(_DWORD *)(v58 + 4) - 1 == v9 )
    {
      v36 = sub_13E58F0(&v68, v64, v49);
      if ( a7 )
        *a7 = v61;
      if ( v59 )
        *v59 = v9;
      v37 = v10 + sub_13D1C70((unsigned int)v10, v36, a3, v50);
      if ( ptr != v80 )
        free(ptr);
      if ( v74 != v76 )
        free(v74);
      v65 = &off_2C449F0;
      if ( v66 != v53 + 10 )
        free(v66);
      return v37;
    }
    v61 += v26;
    ++v9;
    v49 -= v26;
    if ( ptr != v80 )
    {
      free(ptr);
      v25 = v74;
    }
    if ( v25 != v76 )
      free(v25);
    v65 = &off_2C449F0;
    if ( v66 != v57 )
      free(v66);
  }
  v37 = v46;
  if ( a7 )
    *a7 = v61;
  if ( v59 )
    *v59 = v9;
  return v37;
}
