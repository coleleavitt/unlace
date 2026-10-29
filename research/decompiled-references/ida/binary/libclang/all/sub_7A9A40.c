__int64 __fastcall sub_7A9A40(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v4; // rax
  __int64 (*v5)(void); // rax
  __int64 v6; // rbx
  _QWORD *v7; // rsi
  char *v8; // rax
  char *v9; // rdx
  unsigned int v10; // ebx
  _QWORD *v12; // rax
  _QWORD *v13; // rdx
  __int64 v14; // rax
  char v15; // bl
  __int64 v16; // r12
  unsigned __int64 v17; // r13
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 (*v22)(); // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  unsigned __int64 v26; // rdx
  _DWORD *v27; // rax
  _QWORD *v28; // rsi
  _QWORD *v29; // rax
  char *v30; // rdx
  unsigned __int64 v31; // rax
  char v32; // dl
  __int64 v33; // rax
  _QWORD *v34; // r8
  unsigned __int64 v35; // rdx
  _QWORD *v36; // rax
  _QWORD *v37; // rdx
  _QWORD *v38; // rax
  __int64 v39; // r9
  __int64 v40; // rsi
  __int64 *v41; // rdi
  int v42; // edx
  __int64 v43; // rax
  char v44; // dl
  _QWORD *v45; // rbx
  __int64 v46; // rax
  void **v48; // [rsp+18h] [rbp-1A0h] BYREF
  __m128 v49; // [rsp+20h] [rbp-198h] BYREF
  _BYTE *v50; // [rsp+30h] [rbp-188h]
  __int64 v51; // [rsp+38h] [rbp-180h]
  __int64 v52; // [rsp+40h] [rbp-178h]
  __int64 v53; // [rsp+48h] [rbp-170h]
  _QWORD *v54; // [rsp+58h] [rbp-160h]
  __m128 si128; // [rsp+60h] [rbp-158h] BYREF
  void *ptr; // [rsp+70h] [rbp-148h] BYREF
  __int64 v57; // [rsp+78h] [rbp-140h]
  _BYTE v58[64]; // [rsp+80h] [rbp-138h] BYREF
  void *v59; // [rsp+C0h] [rbp-F8h] BYREF
  __int64 v60; // [rsp+C8h] [rbp-F0h]
  int v61; // [rsp+D0h] [rbp-E8h]
  char v62; // [rsp+D4h] [rbp-E4h]
  char v63; // [rsp+D8h] [rbp-E0h] BYREF
  void *v64; // [rsp+120h] [rbp-98h] BYREF
  __int64 v65; // [rsp+128h] [rbp-90h]
  int v66; // [rsp+130h] [rbp-88h]
  char v67; // [rsp+134h] [rbp-84h]
  char v68; // [rsp+138h] [rbp-80h] BYREF

  v48 = &v59;
  v59 = &v63;
  v54 = a3;
  v60 = 8;
  v65 = 8;
  v50 = v58;
  ptr = v58;
  v61 = 0;
  v57 = 0x800000000LL;
  v4 = *a3;
  v62 = 1;
  v5 = *(__int64 (**)(void))(v4 + 32);
  v64 = &v68;
  v66 = 0;
  v67 = 1;
  if ( v5 == sub_6A41B0 )
    v6 = sub_777E10((__int64)a3);
  else
    v6 = v5();
  v54 = (_QWORD *)v6;
  sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v6 + 104) + 96LL), *(_QWORD *)(v6 + 104));
  if ( (*(_BYTE *)(*(_QWORD *)(v6 + 128) + 1LL) & 0x40) == 0 )
  {
    if ( HIDWORD(v60) != v61 )
    {
      v7 = v54;
      if ( v62 )
      {
        v8 = (char *)v59;
        v9 = (char *)v59 + 8 * HIDWORD(v60);
        if ( v59 != v9 )
        {
          do
          {
            if ( v54 == *(_QWORD **)v8 )
              goto LABEL_10;
            v8 += 8;
          }
          while ( v9 != v8 );
        }
      }
      else
      {
        v7 = v54;
        if ( sub_25D5370(v48, v54) )
          goto LABEL_10;
      }
      goto LABEL_20;
    }
    si128 = _mm_loadh_ps((const double *)&v48);
    if ( !(unsigned __int8)sub_76F460(a1, (__int64)sub_7A23E0, (__int64)&si128) )
      goto LABEL_10;
  }
  v7 = v54;
LABEL_20:
  if ( !v67 )
    goto LABEL_83;
  v12 = v64;
  v13 = (char *)v64 + 8 * HIDWORD(v65);
  if ( v64 != v13 )
  {
    while ( (_QWORD *)*v12 != v7 )
    {
      if ( v13 == ++v12 )
        goto LABEL_82;
    }
    LODWORD(v14) = v57;
    goto LABEL_26;
  }
LABEL_82:
  if ( HIDWORD(v65) < (unsigned int)v65 )
  {
    ++HIDWORD(v65);
    *v13 = v7;
    v14 = (unsigned int)v57;
  }
  else
  {
LABEL_83:
    sub_25D5540(&v64, v7);
    v14 = (unsigned int)v57;
    if ( !v44 )
      goto LABEL_26;
  }
  v45 = v54;
  if ( HIDWORD(v57) < (unsigned __int64)(v14 + 1) )
  {
    sub_25D6060(&ptr, v50, v14 + 1, 8);
    v14 = (unsigned int)v57;
  }
  *((_QWORD *)ptr + v14) = v45;
  LODWORD(v14) = v57 + 1;
  LODWORD(v57) = v57 + 1;
LABEL_26:
  v49 = _mm_loadh_ps((const double *)&v48);
  if ( !(_DWORD)v14 )
  {
LABEL_51:
    v10 = 0;
    goto LABEL_11;
  }
  while ( 1 )
  {
    v15 = 1;
    v16 = *((_QWORD *)ptr + (unsigned int)v14 - 1);
    LODWORD(v57) = v14 - 1;
    v17 = sub_7868A0(v16);
    if ( v17 )
      break;
LABEL_50:
    LODWORD(v14) = v57;
    if ( !(_DWORD)v57 )
      goto LABEL_51;
  }
LABEL_28:
  if ( (*(_BYTE *)(v17 + 68) & 1) != 0 && (v18 = *(_QWORD *)(v17 + 40), v18 <= 7) && !(_DWORD)v18
    || !v15 && !(unsigned __int8)sub_78B7C0(v17, (__int64)a2)
    || *(char *)(v17 + 28) < 0 )
  {
LABEL_49:
    while ( 1 )
    {
      v31 = *(_QWORD *)(v17 + 8);
      v17 = v31 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v31 <= 7 )
        goto LABEL_50;
      if ( (*(_BYTE *)(v17 + 28) & 0x7Fu) - 47 <= 2 )
        goto LABEL_28;
    }
  }
  v19 = sub_6CB5B0(a2, *(_QWORD *)(v17 + 48));
  v20 = sub_B0E910(*(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFF0LL));
  v21 = v20;
  if ( !v20 )
    goto LABEL_56;
  v54 = (_QWORD *)v20;
  v22 = *(__int64 (**)())(*(_QWORD *)v20 + 32LL);
  if ( v22 == sub_6A41B0 )
    v23 = sub_777E10(v21);
  else
    v23 = ((__int64 (__fastcall *)(__int64))v22)(v21);
  v54 = (_QWORD *)v23;
  v24 = *(_QWORD *)(v23 + 104);
  v25 = *(_QWORD *)(v24 + 96);
  v26 = v25 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v25 & 1) != 0 )
  {
    if ( v26 )
    {
LABEL_38:
      if ( (v26 & 4) != 0 )
      {
        v27 = (_DWORD *)(v25 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v27 )
        {
          v41 = *(__int64 **)v27;
          v42 = *(_DWORD *)(*(_QWORD *)v27 + 12LL);
          if ( v27[2] != v42 )
          {
            v27[2] = v42;
            v43 = *v41;
            v51 = v23;
            (*(void (__fastcall **)(__int64 *, __int64))(v43 + 144))(v41, v24);
            v23 = v51;
          }
        }
      }
    }
  }
  else if ( v26 > 3 && (v25 & 2) != 0 )
  {
    v38 = (_QWORD *)(v25 & 0xFFFFFFFFFFFFFFFCLL);
    v39 = v38[2275];
    if ( v39 )
    {
      v40 = v38[274];
      v38[284] += 24LL;
      v26 = (v40 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v38[275] >= v26 + 24 && v40 )
      {
        v38[274] = v26 + 24;
      }
      else
      {
        v53 = v39;
        v52 = v24;
        v51 = v23;
        v46 = sub_7A1DE0((__int64)(v38 + 274), 24, 3);
        v39 = v53;
        v24 = v52;
        v23 = v51;
        v26 = v46;
      }
      *(_QWORD *)v26 = v39;
      *(_DWORD *)(v26 + 8) = 0;
      v25 = v26 | 5;
      *(_QWORD *)(v26 + 16) = v24;
      *(_QWORD *)(v24 + 96) = v26 | 5;
      LOBYTE(v26) = v26 & 0xFA | 4;
      goto LABEL_38;
    }
    *(_QWORD *)(v24 + 96) = v24 & 0xFFFFFFFFFFFFFFFALL | 1;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(v23 + 128) + 1LL) & 0x40) != 0 )
    goto LABEL_60;
  if ( HIDWORD(v60) == v61 )
  {
    si128 = (__m128)_mm_load_si128((const __m128i *)&v49);
    if ( !(unsigned __int8)sub_76F460(a1, (__int64)sub_7A23E0, (__int64)&si128) )
      goto LABEL_10;
LABEL_60:
    v28 = v54;
    goto LABEL_61;
  }
  v28 = v54;
  if ( v62 )
  {
    v29 = v59;
    v30 = (char *)v59 + 8 * HIDWORD(v60);
    if ( v59 == v30 )
    {
LABEL_61:
      if ( !v67 )
        goto LABEL_52;
      v36 = v64;
      v37 = (char *)v64 + 8 * HIDWORD(v65);
      if ( v64 != v37 )
      {
        while ( (_QWORD *)*v36 != v28 )
        {
          if ( v37 == ++v36 )
            goto LABEL_74;
        }
        goto LABEL_56;
      }
LABEL_74:
      if ( HIDWORD(v65) < (unsigned int)v65 )
      {
        ++HIDWORD(v65);
        *v37 = v28;
LABEL_53:
        v33 = (unsigned int)v57;
        v34 = v54;
        v35 = (unsigned int)v57 + 1LL;
        if ( HIDWORD(v57) < v35 )
        {
          v51 = (__int64)v54;
          sub_25D6060(&ptr, v50, v35, 8);
          v33 = (unsigned int)v57;
          v34 = (_QWORD *)v51;
        }
        *((_QWORD *)ptr + v33) = v34;
        LODWORD(v57) = v57 + 1;
      }
      else
      {
LABEL_52:
        sub_25D5540(&v64, v28);
        if ( v32 )
          goto LABEL_53;
      }
LABEL_56:
      v15 &= *(_BYTE *)(v16 + 73) >> 5 == 2;
      goto LABEL_49;
    }
    while ( v54 != (_QWORD *)*v29 )
    {
      if ( v30 == (char *)++v29 )
        goto LABEL_61;
    }
  }
  else if ( !sub_25D5370(v48, v54) )
  {
    v28 = v54;
    goto LABEL_61;
  }
LABEL_10:
  v10 = 1;
LABEL_11:
  if ( ptr != v50 )
    free(ptr);
  if ( !v67 )
    free(v64);
  if ( !v62 )
    free(v59);
  return v10;
}

