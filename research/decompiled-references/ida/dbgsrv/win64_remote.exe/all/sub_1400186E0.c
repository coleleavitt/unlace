/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400186E0
// Address: 0x00000001400186E0

//----- (00000001400186E0) ----------------------------------------------------
__int64 __fastcall sub_1400186E0(
        __int64 a1,
        __int64 a2,
        __int64 (__fastcall ***a3)(_QWORD, _BYTE *, struct __crt_locale_pointers *))
{
  _DWORD *v5; // r15
  __int64 result; // rax
  int v7; // r8d
  size_t v8; // rax
  int v9; // r12d
  unsigned int v10; // r14d
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // rax
  __int64 v13; // rbx
  unsigned int v14; // eax
  __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  __int64 v18; // rbx
  unsigned int v19; // eax
  __int64 v20; // rcx
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rcx
  _QWORD *v23; // rax
  unsigned int v24; // esi
  size_t v25; // rax
  int v26; // r15d
  unsigned __int8 (__fastcall ***v27)(_QWORD, __int64, _QWORD); // rdi
  __int64 v28; // rbx
  unsigned __int16 v29; // bx
  size_t v30; // rax
  char *v31; // rdx
  void *v32; // rdi
  _QWORD *v33; // rax
  __int64 i; // rcx
  _DWORD *v35; // rax
  __int64 v36; // rbx
  unsigned int v37; // ebx
  int v38; // r13d
  unsigned int v39; // r12d
  __int64 v40; // rdi
  bool v41; // al
  unsigned int v42; // r15d
  signed int v43; // esi
  _QWORD *v44; // rax
  void *j; // rcx
  const char *v46; // rdi
  struct __crt_locale_pointers *p_Str; // rcx
  __m128i *v48; // rax
  __m128i *v49; // rbx
  char *v50; // rdx
  char *v51; // rdx
  char *v52; // rdx
  unsigned int v53; // eax
  _QWORD *v54; // rbx
  void *v55; // rsi
  _QWORD *v56; // rdi
  void *v57; // rcx
  const char *v58; // [rsp+28h] [rbp-D8h]
  unsigned int v60; // [rsp+38h] [rbp-C8h] BYREF
  void *Block[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v62; // [rsp+50h] [rbp-B0h]
  unsigned __int8 (__fastcall ***v63)(_QWORD, __int64, _QWORD); // [rsp+60h] [rbp-A0h]
  void *v64; // [rsp+68h] [rbp-98h] BYREF
  __int64 v65; // [rsp+70h] [rbp-90h]
  unsigned int v66; // [rsp+78h] [rbp-88h]
  void **v67; // [rsp+80h] [rbp-80h] BYREF
  __int64 v68; // [rsp+88h] [rbp-78h]
  __int64 (__fastcall ***v69)(_QWORD, _BYTE *, struct __crt_locale_pointers *); // [rsp+90h] [rbp-70h]
  _BYTE v70[12]; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v71; // [rsp+A4h] [rbp-5Ch]
  int v72; // [rsp+A8h] [rbp-58h]
  unsigned int v73; // [rsp+ACh] [rbp-54h]
  unsigned int v74; // [rsp+B0h] [rbp-50h]
  int v75; // [rsp+B4h] [rbp-4Ch]
  int v76; // [rsp+B8h] [rbp-48h]
  int v77; // [rsp+BCh] [rbp-44h]
  __m128i Str; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int8 v79[1024]; // [rsp+4C0h] [rbp+3C0h] BYREF
  char v80[1024]; // [rsp+8C0h] [rbp+7C0h] BYREF

  v69 = a3;
  v5 = (_DWORD *)a1;
  v63 = (unsigned __int8 (__fastcall ***)(_QWORD, __int64, _QWORD))a1;
  if ( !*(_DWORD *)(a1 + 192) )
    return 0;
  if ( !*(_QWORD *)(a1 + 16) )
  {
    v67 = (void **)off_140092F00;
    if ( *(_DWORD *)(a1 + 72) == 23126 )
      v7 = *(_DWORD *)(a1 + 592) + 40;
    else
      v7 = *(unsigned __int16 *)(a1 + 92) + 24 + *(_DWORD *)(a1 + 592);
    sub_1400190C0(a1, a2, v7, *(unsigned __int16 *)(a1 + 78), (__int64)&v67);
  }
  if ( !(**(unsigned __int8 (__fastcall ***)(_DWORD *, __int64, _QWORD))v5)(v5, a2, (unsigned int)v5[48]) )
    return 4294967294LL;
  if ( sub_140063BD0(a2, v70, 40) != 40 )
    return 0xFFFFFFFFLL;
  (**(void (__fastcall ***)(_DWORD *, __int64, _QWORD))v5)(v5, a2, v71);
  Str.m128i_i8[0] = 0;
  v8 = sub_140063BD0(a2, &Str, 1023);
  v9 = 0;
  if ( v8 >= 0x400 )
  {
    v10 = -1;
  }
  else
  {
    Str.m128i_i8[v8] = 0;
    v10 = 0;
  }
  Block[0] = nullptr;
  Block[1] = nullptr;
  v62 = 0;
  if ( sub_140003050() )
    sub_1400621E0(&Str, (char *)Str1, 1024);
  result = (**a3)(a3, v70, (struct __crt_locale_pointers *)&Str);
  if ( (_DWORD)result )
    return result;
  v11 = sub_140063C70(a2) + 4096;
  v12 = (unsigned int)v5[49];
  if ( v11 > v12 && (_DWORD)v12 )
    v11 = (unsigned int)v5[49];
  v13 = (unsigned int)v5[48];
  v14 = v74;
  v15 = v13 + v11;
  if ( v13 + v11 == -1 )
  {
    v15 = sub_140063C70(0);
    v14 = v74;
  }
  v16 = v15 - v13;
  if ( (v16 & 0x8000000000000000uLL) != 0LL )
  {
    LODWORD(v17) = 0;
  }
  else
  {
    if ( (!v14 || 0xFFFFFFFFFFFFFFFFuLL / v14 >= 6) && v16 >= 6 * (unsigned __int64)v14 )
      goto LABEL_31;
    v17 = v16 / 6;
  }
  v74 = v17;
  v58 = ". Do you want to continue with the new value?";
  if ( (unsigned int)sub_1400049D0(1) != 1 )
    goto LABEL_137;
LABEL_31:
  v18 = (unsigned int)v5[48];
  v19 = v73;
  v20 = v18 + v11;
  if ( v18 + v11 == -1 )
  {
    v20 = sub_140063C70(0);
    v19 = v73;
  }
  v21 = v20 - v18;
  if ( (v21 & 0x8000000000000000uLL) != 0LL )
  {
    LODWORD(v22) = 0;
  }
  else
  {
    if ( (!v19 || 0xFFFFFFFFFFFFFFFFuLL / v19 >= 4) && v21 >= 4 * (unsigned __int64)v19 )
      goto LABEL_40;
    v22 = v21 >> 2;
  }
  v73 = v22;
  v58 = ". Do you want to continue with the new value?";
  if ( (unsigned int)sub_1400049D0(1) != 1 )
LABEL_137:
    sub_140018160(0);
LABEL_40:
  v65 = 0;
  v23 = operator new(0x40u);
  *v23 = v23;
  v23[1] = v23;
  v23[2] = v23;
  *((_WORD *)v23 + 12) = 257;
  v64 = v23;
  v24 = 0;
  if ( !v74 )
    goto LABEL_69;
  LOWORD(v25) = 0;
  v26 = 0;
  v27 = v63;
  v28 = a2;
  do
  {
    LOWORD(v60) = v25;
    if ( (**v27)(v27, v28, (unsigned int)(v26 + v77)) && sub_140063BD0(v28, &v60, 2) == 2 )
    {
      v29 = v60 + v72;
      v60 = 0;
      if ( !(**v27)(v27, a2, (unsigned int)(v9 + v76)) || sub_140063BD0(a2, &v60, 4) != 4 )
      {
        if ( !v10 )
          v10 = -1;
LABEL_65:
        LOWORD(v25) = 0;
        goto LABEL_66;
      }
      (**v27)(v27, a2, v60);
      Str.m128i_i8[0] = 0;
      v30 = sub_140063BD0(a2, &Str, 1023);
      if ( v30 < 0x400 )
      {
        Str.m128i_i8[v30] = 0;
        if ( !sub_140061730((unsigned __int8 *)&Str) )
        {
          Block[0] = nullptr;
          Block[1] = nullptr;
          v62 = 0;
          if ( sub_140003050() )
          {
            v31 = (char *)Str1;
            if ( Block[1] )
              v31 = (char *)Block[0];
            sub_1400621E0(&Str, v31, 1024);
          }
          if ( Block[0] )
          {
            Block[1] = nullptr;
            j_free(Block[0]);
          }
        }
        v32 = v64;
        v33 = *((_QWORD **)v64 + 1);
        Block[0] = v33;
        LODWORD(Block[1]) = 0;
        for ( i = (__int64)v64; !*((_BYTE *)v33 + 25); v33 = (_QWORD *)*v33 )
        {
          Block[0] = v33;
          if ( *((_DWORD *)v33 + 8) >= (int)v29 )
          {
            LODWORD(Block[1]) = 1;
            i = (__int64)v33;
          }
          else
          {
            LODWORD(Block[1]) = 0;
            v33 += 2;
          }
        }
        if ( *(_BYTE *)(i + 25) || v29 < *(int *)(i + 32) )
        {
          if ( v65 == 0x3FFFFFFFFFFFFFFLL )
            unknown_libname_1(i, 0);
          v67 = &v64;
          v68 = 0;
          v35 = operator new(0x40u);
          v35[8] = v29;
          *((_QWORD *)v35 + 5) = 0;
          *((_QWORD *)v35 + 6) = 0;
          *((_QWORD *)v35 + 7) = 0;
          *(_QWORD *)v35 = v32;
          *((_QWORD *)v35 + 1) = v32;
          *((_QWORD *)v35 + 2) = v32;
          *((_WORD *)v35 + 12) = 0;
          v68 = 0;
          i = sub_140003FC0(&v64, (__int64)Block, (__int64)v35);
        }
        v36 = i + 40;
        v25 = strlen(Str.m128i_i8);
        if ( v25 )
        {
          sub_140001810(v36, &Str, v25);
          v27 = v63;
          goto LABEL_65;
        }
        *(_QWORD *)(v36 + 8) = 0;
        v27 = v63;
LABEL_66:
        v28 = a2;
        goto LABEL_67;
      }
      v28 = a2;
      LOWORD(v25) = 0;
      if ( !v10 )
        v10 = -1;
    }
    else
    {
      if ( !v10 )
        v10 = -1;
      LOWORD(v25) = 0;
    }
LABEL_67:
    ++v24;
    v26 += 2;
    v9 += 4;
  }
  while ( v24 < v74 );
  v5 = v63;
LABEL_69:
  v37 = v5[48];
  LODWORD(v67) = v37;
  v66 = v37 + v11;
  v38 = 0;
  v39 = 0;
  if ( v73 )
  {
    v40 = a2;
    do
    {
      v60 = 0;
      v41 = (**(unsigned __int8 (__fastcall ***)(_DWORD *, __int64, _QWORD))v5)(v5, v40, (unsigned int)(v38 + v75))
         && sub_140063BD0(v40, &v60, 4) == 4;
      v42 = v60;
      if ( v60 )
      {
        if ( !v41 )
          goto LABEL_129;
        v43 = v39 + v72;
        v44 = *((_QWORD **)v64 + 1);
        for ( j = v64; !*((_BYTE *)v44 + 25); v44 = (_QWORD *)*v44 )
        {
          if ( *((_DWORD *)v44 + 8) >= v43 )
            j = v44;
          else
            v44 += 2;
        }
        if ( *((_BYTE *)j + 25) || v43 < *((_DWORD *)j + 8) )
          j = v64;
        if ( j == v64 )
        {
          v46 = pNodeName;
        }
        else if ( *((_QWORD *)j + 6) )
        {
          v46 = *((const char **)j + 5);
        }
        else
        {
          v46 = Str1;
        }
        p_Str = nullptr;
        if ( v60 < v37 || v60 >= v66 )
          goto LABEL_125;
        (**v63)(v63, a2, v60);
        Str.m128i_i8[0] = 0;
        sub_140063A90(a2, -1, (unsigned __int8 *)&Str, 1024);
        if ( Str.m128i_i8[0] )
        {
          v48 = sub_14006CA94(&Str, 0x2Eu);
          v49 = v48;
          if ( v48 )
          {
            v48->m128i_i8[0] = 0;
            sub_1400621E0(v80, Str.m128i_i8, 1024);
            sub_1400621E0(v79, &v49->m128i_i8[1], 1024);
            Block[0] = nullptr;
            Block[1] = nullptr;
            v62 = 0;
            if ( sub_140003050() )
            {
              v50 = (char *)Str1;
              if ( Block[1] )
                v50 = (char *)Block[0];
              sub_1400621E0(v80, v50, 1024);
            }
            if ( Block[0] )
            {
              Block[1] = nullptr;
              j_free(Block[0]);
            }
            if ( !sub_140061730(v79) )
            {
              Block[0] = nullptr;
              Block[1] = nullptr;
              v62 = 0;
              if ( sub_140003050() )
              {
                v51 = (char *)Str1;
                if ( Block[1] )
                  v51 = (char *)Block[0];
                sub_1400621E0(v79, v51, 1024);
              }
              if ( Block[0] )
              {
                Block[1] = nullptr;
                j_free(Block[0]);
              }
            }
            sub_14005B0A0((struct __crt_locale_pointers *)&Str, 1024, "%s.%s", v80, (const char *)v79);
          }
          else
          {
            Block[0] = nullptr;
            Block[1] = nullptr;
            v62 = 0;
            if ( sub_140003050() )
            {
              v52 = (char *)Str1;
              if ( Block[1] )
                v52 = (char *)Block[0];
              sub_1400621E0(&Str, v52, 1024);
            }
            if ( Block[0] )
            {
              Block[1] = nullptr;
              j_free(Block[0]);
            }
          }
          p_Str = (struct __crt_locale_pointers *)&Str;
LABEL_125:
          v53 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _BYTE *, struct __crt_locale_pointers *), _QWORD, _QWORD, const char *, struct __crt_locale_pointers *, const char *))(*v69)[1])(
                  v69,
                  v42,
                  (unsigned int)v43,
                  v46,
                  p_Str,
                  v58);
          v40 = a2;
          if ( v53 && !v10 )
            v10 = v53;
          goto LABEL_130;
        }
        v40 = a2;
        if ( !v10 )
          v10 = -1;
      }
      else if ( !v41 )
      {
LABEL_129:
        v10 = -1;
      }
LABEL_130:
      ++v39;
      v38 += 4;
      v5 = v63;
      v37 = (unsigned int)v67;
    }
    while ( v39 < v73 );
  }
  v54 = *((_QWORD **)v64 + 1);
  while ( !*((_BYTE *)v54 + 25) )
  {
    sub_1400095A0((__int64)&v64, (__int64)&v64, v54[2]);
    v55 = v54;
    v56 = v54;
    v54 = (_QWORD *)*v54;
    v57 = (void *)v56[5];
    if ( v57 )
    {
      v56[6] = 0;
      j_free(v57);
      v56[5] = 0;
      v56[7] = 0;
    }
    j_j_free(v55);
  }
  j_j_free(v64);
  return v10;
}
// 14001886B: conditional instruction was optimized away because %Block@8.8==0
// 140018889: conditional instruction was optimized away because %Block.8==0
// 140018FFC: variable 'v58' is possibly undefined
// 140004240: using guessed type void __fastcall __noreturn unknown_libname_1(_QWORD, _QWORD);
// 140092F00: using guessed type __int64 (__fastcall *off_140092F00[4])();
