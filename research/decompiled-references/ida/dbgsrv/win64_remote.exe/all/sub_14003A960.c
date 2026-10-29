/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14003A960
// Address: 0x000000014003A960

//----- (000000014003A960) ----------------------------------------------------
__int64 __fastcall sub_14003A960(__int64 a1, __int64 a2)
{
  char *v4; // rdx
  char v5; // cl
  unsigned __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // r12
  __int16 v9; // ax
  unsigned __int64 v10; // r15
  void *v11; // rdi
  __int64 v12; // r13
  unsigned int v13; // esi
  bool v14; // zf
  const void *v15; // r9
  unsigned __int64 v16; // r8
  unsigned __int16 v17; // ax
  void *v18; // rcx
  char *v19; // rsi
  __int64 v20; // rax
  __int64 v21; // r12
  unsigned __int64 v22; // r15
  _QWORD *v23; // rdi
  __int16 *v24; // rsi
  __int16 *v25; // rax
  int v26; // ecx
  _QWORD *v27; // rax
  int v28; // eax
  __int64 v29; // r15
  __int64 v30; // r12
  __int64 v31; // r13
  const char *v32; // rax
  void *Src[2]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v35; // [rsp+50h] [rbp-30h]
  unsigned __int16 v36; // [rsp+58h] [rbp-28h]
  __int64 v37; // [rsp+60h] [rbp-20h]
  char v38; // [rsp+68h] [rbp-18h]
  __int128 v39; // [rsp+70h] [rbp-10h]
  char i; // [rsp+C0h] [rbp+40h]

  *(_OWORD *)Src = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  for ( i = 0; ; i = 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v4 = *(char **)(a1 + 8);
        v5 = *v4;
        if ( *v4 != 32 && (unsigned __int8)(v5 - 9) > 1u )
          break;
        *(_QWORD *)(a1 + 8) = v4 + 1;
      }
      if ( v5 )
        break;
      v6 = *(_QWORD *)(a1 + 64);
      if ( v6 <= 1 )
        goto LABEL_55;
      v7 = *(_QWORD *)(a1 + 56) + 56 * v6;
      *(_QWORD *)a1 = *(_QWORD *)(v7 - 32);
      *(_QWORD *)(a1 + 8) = *(_QWORD *)(v7 - 24);
      *(_DWORD *)(a1 + 80) = *(_DWORD *)(v7 - 8);
      *(_QWORD *)(a1 + 64) = v6 - 1;
      if ( *(_QWORD *)(v7 - 56) )
      {
        sub_14001A6C0((_QWORD *)(v7 - 56), 0);
        j_free(*(void **)(v7 - 56));
        *(_QWORD *)(v7 - 56) = 0;
        *(_QWORD *)(v7 - 40) = 0;
      }
    }
    if ( v5 != 35 || v4[1] != 35 )
      goto LABEL_55;
    v8 = 0;
    v9 = *(_WORD *)(a2 + 24);
    if ( v9 == 3 || (unsigned __int16)(v9 - 7) <= 1u )
    {
      v11 = *(void **)(a1 + 32);
      v10 = *(_QWORD *)(a1 + 40);
      v8 = *(_QWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 32) = 0;
      *(_QWORD *)(a1 + 40) = 0;
      *(_QWORD *)(a1 + 48) = 0;
    }
    else
    {
      v10 = 0;
      v11 = nullptr;
    }
    v12 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = v4 + 2;
    v13 = sub_14003C3B0(a1, (__int64)Src, *(_DWORD *)(a1 + 64), nullptr);
    if ( v13 )
      goto LABEL_49;
    switch ( v36 )
    {
      case 1u:
        goto LABEL_53;
      case 0x2Fu:
        if ( *(_WORD *)(a2 + 24) != 47 )
          goto LABEL_24;
        v14 = (*(_BYTE *)(a1 + 724) & 4) == 0;
        break;
      case 0x3Bu:
        v14 = (*(_BYTE *)(a1 + 724) & 8) == 0;
        break;
      default:
        goto LABEL_24;
    }
    if ( !v14 )
    {
      sub_14003D910(a1);
      *(_WORD *)(a2 + 24) = 1;
      v13 = 0;
      goto LABEL_49;
    }
LABEL_24:
    v15 = *(const void **)(a1 + 24);
    if ( v36 == 2 )
      goto LABEL_33;
    if ( v36 == 3 || v36 == 6 || (unsigned int)v36 - 7 < 2 )
      break;
    if ( v36 < 0x80u )
      goto LABEL_29;
LABEL_33:
    v17 = *(_WORD *)(a2 + 24);
    if ( v17 != 2 && v17 < 0x80u )
    {
      if ( v10 > 1 )
      {
        v18 = *(void **)a2;
        *(_QWORD *)a2 = v11;
        *(_QWORD *)(a2 + 8) = v10;
        *(_QWORD *)(a2 + 16) = v8;
        v11 = v18;
        goto LABEL_37;
      }
      v13 = sub_1400640B0(0x1Du);
LABEL_49:
      if ( v11 )
        j_free(v11);
      goto LABEL_72;
    }
LABEL_37:
    v19 = (char *)Src[1] - 1;
    if ( !Src[1] )
      v19 = nullptr;
    if ( v19 )
    {
      v20 = *(_QWORD *)(a2 + 8);
      v21 = v20 - 1;
      if ( !v20 )
        v21 = 0;
      v22 = (unsigned __int64)&v19[v21 + 1];
      if ( v22 > *(_QWORD *)(a2 + 16) )
        *(_QWORD *)a2 = sub_14005ABE0(a2, *(void **)a2, (unsigned __int64)&v19[v21 + 1], 1u);
      *(_QWORD *)(a2 + 8) = v22;
      v19[v21 + *(_QWORD *)a2] = 0;
      memcpy((void *)(v21 + *(_QWORD *)a2), Src[0], (size_t)v19);
    }
    *(_QWORD *)(a1 + 16) = v12;
    if ( v11 )
      j_free(v11);
  }
  if ( v15 )
  {
    v16 = *(_QWORD *)(a1 + 8);
    if ( v16 > (unsigned __int64)v15 )
    {
      Src[1] = nullptr;
      sub_1400048F0((__int64)Src, v15, v16 - (_QWORD)v15);
      goto LABEL_33;
    }
  }
LABEL_29:
  *(_QWORD *)(a1 + 16) = v12;
  *(_QWORD *)(a1 + 8) = v15;
LABEL_53:
  if ( v11 )
    j_free(v11);
LABEL_55:
  if ( !i )
    goto LABEL_71;
  v23 = (_QWORD *)(a2 + 8);
  v24 = word_1400CAE32;
  v25 = word_1400CAE32;
  if ( *(_QWORD *)(a2 + 8) )
    v25 = *(__int16 **)a2;
  v26 = *(unsigned __int8 *)v25;
  v27 = (_QWORD *)(a2 + 8);
  if ( (v26 & 0x80u) != 0 )
  {
LABEL_61:
    if ( *v23 )
      v24 = *(__int16 **)a2;
    v23 = v27;
    if ( *(_BYTE *)v24 == 46 )
      goto LABEL_68;
    v28 = sub_14003D450((_QWORD *)a1, 1, a2);
    if ( v28 == -1 )
    {
      v13 = sub_140063DE0();
      goto LABEL_72;
    }
    if ( v28 == 1 )
    {
      v13 = sub_140037FE0(a1, a2, nullptr);
      goto LABEL_72;
    }
LABEL_71:
    v13 = 0;
    goto LABEL_72;
  }
  if ( !isdigit(v26) )
  {
    v27 = (_QWORD *)(a2 + 8);
    goto LABEL_61;
  }
LABEL_68:
  v29 = *(_QWORD *)a1;
  v30 = *(_QWORD *)(a1 + 8);
  v31 = *(_QWORD *)(a1 + 16);
  v32 = Str1;
  if ( *v23 )
    v32 = *(const char **)a2;
  *(_QWORD *)(a1 + 8) = v32;
  *(_QWORD *)a1 = v32;
  v13 = sub_14003C3B0(a1, a2, 0, nullptr);
  *(_QWORD *)a1 = v29;
  *(_QWORD *)(a1 + 8) = v30;
  *(_QWORD *)(a1 + 16) = v31;
  if ( !v13 )
    goto LABEL_71;
LABEL_72:
  if ( Src[0] )
  {
    Src[1] = nullptr;
    j_free(Src[0]);
  }
  return v13;
}
// 1400CAE32: using guessed type __int16 word_1400CAE32[3];
