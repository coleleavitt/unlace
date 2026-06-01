unsigned __int64 __fastcall sub_7A9010(__int64 a1, char a2)
{
  __int64 v3; // rsi
  __m128i si128; // xmm0
  char *v5; // r14
  char *v6; // r15
  const char *v7; // rsi
  char v8; // r12
  char v9; // al
  unsigned __int64 v10; // rcx
  _BYTE *v11; // rdi
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // rdx
  _BYTE *v14; // rax
  __int64 *v15; // rbp
  unsigned __int64 v16; // r13
  unsigned __int64 v17; // rax
  _BYTE *v18; // rsi
  unsigned __int64 v19; // rcx
  _BYTE *v20; // rdi
  unsigned __int64 v21; // r12
  unsigned __int64 v22; // rdx
  _BYTE *v23; // rax
  __int64 *v24; // rbp
  unsigned __int64 v25; // r13
  unsigned __int64 v26; // rax
  _BYTE *v27; // rsi
  int v29; // ebp
  bool v30; // zf
  unsigned __int64 v31; // r14
  int v32; // ebp
  __int64 v33; // rbx
  __int64 v34; // rax
  void *v35; // rdi
  void *v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // r12
  __int64 v40; // rax
  __int64 v41; // rax
  char *v42; // [rsp+0h] [rbp-78h] BYREF
  int v43[4]; // [rsp+8h] [rbp-70h]
  char *s1; // [rsp+20h] [rbp-58h]
  void *v45[2]; // [rsp+28h] [rbp-50h]
  int v46[2]; // [rsp+38h] [rbp-40h]

  *(_QWORD *)v46 = __readfsqword(0x28u);
  *(_BYTE *)(a1 + 172) = a2;
  v42 = nullptr;
  s1 = nullptr;
  *(_OWORD *)v43 = 0;
  *(_OWORD *)v45 = 0;
  if ( a2 )
  {
    v3 = *(_QWORD *)(a1 + 8);
    if ( *(_QWORD *)(a1 + 24) <= 0x13u )
    {
      v34 = qvector_reserve(a1 + 8, v3, 20, 1);
      *(_QWORD *)(a1 + 8) = v34;
      v3 = v34;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_2383D30);
    *(_QWORD *)(a1 + 16) = 20;
    *(__m128i *)v3 = si128;
    *(_DWORD *)(v3 + 15) = 1836016430;
    *(_BYTE *)(*(_QWORD *)(a1 + 8) + 19LL) = 0;
  }
  if ( (unsigned __int8)qgetenv("LUMINA_TLS") )
  {
    v29 = *(_DWORD *)(a1 + 168);
    if ( v45[0] && !strcmp(s1, "YES") )
    {
      v30 = *(_BYTE *)(a1 + 172) == 0;
      *(_DWORD *)(a1 + 168) = v29 & 0xFFFFFFFE;
      if ( v30 )
        goto LABEL_7;
      goto LABEL_57;
    }
    *(_DWORD *)(a1 + 168) = v29 | 1;
  }
  if ( !*(_BYTE *)(a1 + 172) )
    goto LABEL_7;
LABEL_57:
  reg_str_get(&v42, "LuminaHost", 0);
  v31 = *(_QWORD *)v43;
  if ( *(_QWORD *)v43 && !strcmp(v42, "lumina.hex-rays.com:443") )
  {
    if ( v31 <= 1 )
      goto LABEL_59;
  }
  else
  {
    reg_str_get(a1 + 40, "LuminaUser", 0);
    if ( *(_QWORD *)v43 <= 1u )
      goto LABEL_59;
  }
  reg_str_set();
  reg_delete("LuminaHost", 0);
  reg_delete("LuminaUser", 0);
LABEL_59:
  if ( *(_BYTE *)(a1 + 172) )
  {
    v5 = "LUMINA_PRIMARY_TLS";
    v6 = "LUMINA_PRIMARY";
    v7 = "Primary";
    goto LABEL_8;
  }
LABEL_7:
  v5 = "LUMINA_SECONDARY_TLS";
  v6 = "LUMINA_SECONDARY";
  v7 = "Secondary";
LABEL_8:
  v8 = reg_str_get(&v42, v7, "Lumina");
  v9 = qgetenv(v6);
  if ( *(_QWORD *)v43 > 1u || !v9 && !v8 )
  {
    sub_7A8A20(a1 + 8, &v42, 1);
    goto LABEL_12;
  }
  v35 = *(void **)(a1 + 8);
  if ( v35 )
  {
    *(_QWORD *)(a1 + 16) = 0;
    qfree(v35);
    *(_QWORD *)(a1 + 8) = 0;
    *(_QWORD *)(a1 + 24) = 0;
  }
  v36 = *(void **)(a1 + 40);
  *(_WORD *)(a1 + 32) = 0;
  if ( v36 )
  {
    *(_QWORD *)(a1 + 48) = 0;
    qfree(v36);
    *(_QWORD *)(a1 + 40) = 0;
    *(_QWORD *)(a1 + 56) = 0;
LABEL_12:
    if ( *(_WORD *)(a1 + 32) )
      goto LABEL_13;
  }
  if ( *(_QWORD *)(a1 + 16) > 1u )
    *(_WORD *)(a1 + 32) = 443;
LABEL_13:
  if ( (unsigned __int8)qgetenv(v5) )
  {
    v32 = *(_DWORD *)(a1 + 168);
    if ( v45[0] && !strcmp(s1, "YES") )
      *(_DWORD *)(a1 + 168) = v32 & 0xFFFFFFFE;
    else
      *(_DWORD *)(a1 + 168) = v32 | 1;
  }
  v10 = *(_QWORD *)(a1 + 16);
  if ( v10 <= 1 )
    goto LABEL_30;
  v11 = *(_BYTE **)(a1 + 8);
  v12 = v10 - 1;
  v13 = (unsigned __int64)&v11[v10 - 1];
  v14 = (_BYTE *)v13;
  if ( (unsigned __int64)v11 >= v13 )
  {
    v15 = (__int64 *)(a1 + 8);
LABEL_20:
    v16 = v12 + 1;
    if ( v10 < v12 + 1 )
    {
      if ( *(_QWORD *)(a1 + 24) < v16 )
      {
        v40 = qvector_reserve(v15, *(_QWORD *)(a1 + 8), v12 + 1, 1);
        *(_QWORD *)(a1 + 8) = v40;
        v10 = *(_QWORD *)(a1 + 16);
        v11 = (_BYTE *)v40;
      }
      memset(&v11[v10], 0, v16 - v10);
      v38 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(a1 + 16) = v16;
      v14 = (_BYTE *)(v12 + v38);
    }
    else if ( v10 != v12 + 1 )
    {
      *(_QWORD *)(a1 + 16) = v16;
    }
    *v14 = 0;
LABEL_24:
    v17 = *(_QWORD *)(a1 + 16);
    if ( v17 <= 1 )
      goto LABEL_30;
    v11 = *(_BYTE **)(a1 + 8);
    v13 = (unsigned __int64)&v11[v17 - 1];
    if ( (unsigned __int64)v11 >= v13 )
      goto LABEL_30;
    goto LABEL_26;
  }
  while ( *(v14 - 1) == 32 )
  {
    if ( v11 == --v14 )
    {
      v15 = (__int64 *)(a1 + 8);
      goto LABEL_71;
    }
  }
  v15 = (__int64 *)(a1 + 8);
  v12 = v14 - v11;
  if ( v14 != v11 )
    goto LABEL_20;
LABEL_71:
  if ( v11 )
  {
    *(_QWORD *)(a1 + 16) = 0;
    qfree(v11);
    *(_QWORD *)(a1 + 8) = 0;
    *(_QWORD *)(a1 + 24) = 0;
    goto LABEL_24;
  }
LABEL_26:
  v18 = v11;
  while ( *v18 == 32 )
  {
    if ( ++v18 == (_BYTE *)v13 )
      goto LABEL_85;
  }
  if ( v11 >= v18 )
    goto LABEL_30;
LABEL_85:
  v39 = v13 - (_QWORD)v18;
  memmove(v11, v18, v13 - (_QWORD)v18 + 1);
  sub_35CD10(v15, v39);
LABEL_30:
  v19 = *(_QWORD *)(a1 + 48);
  if ( v19 <= 1 )
    goto LABEL_47;
  v20 = *(_BYTE **)(a1 + 40);
  v21 = v19 - 1;
  v22 = (unsigned __int64)&v20[v19 - 1];
  v23 = (_BYTE *)v22;
  if ( (unsigned __int64)v20 >= v22 )
  {
    v24 = (__int64 *)(a1 + 40);
LABEL_36:
    v25 = v21 + 1;
    if ( v19 < v21 + 1 )
    {
      if ( *(_QWORD *)(a1 + 56) < v25 )
      {
        v41 = qvector_reserve(v24, *(_QWORD *)(a1 + 40), v21 + 1, 1);
        *(_QWORD *)(a1 + 40) = v41;
        v19 = *(_QWORD *)(a1 + 48);
        v20 = (_BYTE *)v41;
      }
      memset(&v20[v19], 0, v25 - v19);
      v37 = *(_QWORD *)(a1 + 40);
      *(_QWORD *)(a1 + 48) = v25;
      v23 = (_BYTE *)(v21 + v37);
    }
    else if ( v19 != v21 + 1 )
    {
      *(_QWORD *)(a1 + 48) = v25;
    }
    *v23 = 0;
LABEL_40:
    v26 = *(_QWORD *)(a1 + 48);
    if ( v26 <= 1 )
      goto LABEL_47;
    v20 = *(_BYTE **)(a1 + 40);
    v22 = (unsigned __int64)&v20[v26 - 1];
    if ( (unsigned __int64)v20 >= v22 )
      goto LABEL_47;
    goto LABEL_42;
  }
  while ( *(v23 - 1) == 32 )
  {
    if ( v20 == --v23 )
    {
      v24 = (__int64 *)(a1 + 40);
      goto LABEL_68;
    }
  }
  v24 = (__int64 *)(a1 + 40);
  v21 = v23 - v20;
  if ( v23 != v20 )
    goto LABEL_36;
LABEL_68:
  if ( v20 )
  {
    *(_QWORD *)(a1 + 48) = 0;
    qfree(v20);
    *(_QWORD *)(a1 + 40) = 0;
    *(_QWORD *)(a1 + 56) = 0;
    goto LABEL_40;
  }
LABEL_42:
  v27 = v20;
  do
  {
    if ( *v27 != 32 )
      break;
    ++v27;
  }
  while ( v27 != (_BYTE *)v22 );
  if ( v20 < v27 )
  {
    v33 = v22 - (_QWORD)v27;
    memmove(v20, v27, v22 - (_QWORD)v27 + 1);
    sub_35CD10(v24, v33);
  }
LABEL_47:
  if ( s1 )
  {
    v45[0] = nullptr;
    qfree(s1);
  }
  if ( v42 )
  {
    *(_QWORD *)v43 = 0;
    qfree(v42);
  }
  return *(_QWORD *)v46 - __readfsqword(0x28u);
}

