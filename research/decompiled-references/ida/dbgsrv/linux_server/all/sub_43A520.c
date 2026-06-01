/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43A520
// Address: 0x000000000043A520

//----- (000000000043A520) ----------------------------------------------------
__int64 __fastcall sub_43A520(
        const char *a1,
        const char *a2,
        __int64 a3,
        __int64 a4,
        char a5,
        double a6,
        double a7,
        double a8,
        __m128 a9,
        double a10,
        double a11,
        __m128 a12,
        __m128 a13)
{
  size_t v14; // rax
  unsigned __int64 v15; // rbp
  unsigned int v16; // edi
  char v17; // al
  char *v18; // r13
  const char *v19; // rdx
  int v20; // r10d
  int v21; // r8d
  char v22; // cl
  char *v23; // rax
  unsigned int v24; // edi
  char v25; // bp
  const char **v26; // r12
  size_t i; // r14
  char v28; // r14
  double v29; // xmm4_8
  double v30; // xmm5_8
  unsigned int v31; // ebx
  int v33; // eax
  char v34; // cl
  char v35; // al
  _BYTE *v36; // rcx
  char v37; // dl
  char v38; // al
  char v39; // si
  char v40; // al
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v45; // [rsp+28h] [rbp-50h]
  unsigned __int64 v46; // [rsp+38h] [rbp-40h]

  v46 = __readfsqword(0x28u);
  if ( !a2 )
    return 0;
  v45 = 0;
  ptr = nullptr;
  sub_4172B0((__int64)&ptr, "static %s(){", a1);
  v14 = strlen(a2);
  v15 = (unsigned __int64)&a2[v14];
  if ( a2 >= &a2[v14] )
  {
    if ( a2 == &a2[v14] )
      goto LABEL_26;
    v38 = *(_BYTE *)(v15 - 1);
    if ( v38 == 125 )
      goto LABEL_26;
    v18 = (char *)a2;
    if ( v38 != 59 )
      goto LABEL_14;
LABEL_64:
    --v15;
    goto LABEL_7;
  }
  while ( 1 )
  {
    v16 = *(char *)(v15 - 1);
    if ( v16 > 0x7F || !isspace(v16) )
      break;
    if ( a2 == (const char *)--v15 )
      goto LABEL_26;
  }
  if ( a2 == (const char *)v15 )
    goto LABEL_26;
  v17 = *(_BYTE *)(v15 - 1);
  if ( v17 == 125 )
    goto LABEL_26;
  if ( v17 == 59 )
    goto LABEL_64;
LABEL_7:
  v18 = (char *)a2;
  if ( (unsigned __int64)a2 >= v15 )
    goto LABEL_14;
  v19 = a2;
  v20 = 0;
  v21 = 0;
LABEL_9:
  v22 = *v19;
  v23 = (char *)(v19 + 1);
  while ( 2 )
  {
    while ( v22 > 59 )
    {
      if ( v22 == 123 )
      {
        if ( (unsigned __int64)v23 >= v15 )
          goto LABEL_26;
        v22 = *v23;
        v19 = v23;
        v18 = nullptr;
        ++v23;
      }
      else
      {
        if ( v22 != 125 )
          goto LABEL_39;
LABEL_65:
        if ( (unsigned __int64)v23 >= v15 )
        {
          v18 = v23;
          goto LABEL_14;
        }
        v22 = *v23;
        v18 = v23;
        v19 = v23;
        v20 = 0;
        ++v23;
        v21 = 0;
      }
    }
    if ( v22 <= 33 )
      goto LABEL_39;
    switch ( v22 )
    {
      case '"':
      case '\'':
        if ( (unsigned __int64)v23 >= v15 )
          goto LABEL_51;
        v39 = *v23;
        v19 = v23 + 1;
LABEL_69:
        if ( v39 == v22 )
          goto LABEL_74;
        while ( 2 )
        {
          if ( v39 == 92 )
          {
            if ( v23[1] && (unsigned __int64)(v23 + 2) < v15 )
            {
              v39 = v23[2];
              v19 = v23 + 3;
              v23 += 2;
              if ( v39 == v22 )
                goto LABEL_74;
              continue;
            }
          }
          else if ( (unsigned __int64)v19 < v15 )
          {
            v39 = *v19;
            v23 = (char *)v19++;
            goto LABEL_69;
          }
          goto LABEL_51;
        }
      case '(':
        ++v21;
        if ( (unsigned __int64)v23 >= v15 )
          goto LABEL_51;
        goto LABEL_40;
      case ')':
        v20 |= (unsigned int)--v21 >> 31;
        if ( (unsigned __int64)v23 >= v15 )
          goto LABEL_51;
        goto LABEL_40;
      case '/':
        v34 = v19[1];
        if ( v34 != 47 )
        {
          if ( v34 != 42 )
            goto LABEL_39;
          v35 = v19[2];
          v36 = v19 + 2;
          if ( v35 )
          {
            while ( 1 )
            {
              v37 = v35;
              v35 = v36[1];
              if ( v37 == 42 && v35 == 47 )
                break;
              ++v36;
              if ( !v35 )
              {
                v19 = v36;
                goto LABEL_74;
              }
            }
            v19 = v36 + 2;
            if ( (unsigned __int64)(v36 + 2) >= v15 )
              goto LABEL_51;
            v23 = v36 + 3;
            v22 = v36[2];
          }
          else
          {
            if ( (unsigned __int64)v36 >= v15 )
              goto LABEL_51;
            v23 = (char *)(v19 + 3);
LABEL_39:
            if ( (unsigned __int64)v23 >= v15 )
              goto LABEL_51;
LABEL_40:
            v22 = *v23;
            v19 = v23++;
          }
          continue;
        }
        v22 = v19[2];
        if ( v22 == 10 || !v22 )
        {
          if ( (unsigned __int64)(v19 + 2) >= v15 )
            goto LABEL_51;
          v23 = (char *)(v19 + 3);
          v19 += 2;
          continue;
        }
        v19 += 2;
        do
          v40 = *++v19;
        while ( v40 && v40 != 10 );
LABEL_74:
        if ( (unsigned __int64)v19 < v15 )
          goto LABEL_9;
LABEL_51:
        if ( (_BYTE)v20 != 1 && v18 )
        {
          while ( 1 )
          {
LABEL_14:
            v24 = *v18;
            v25 = *v18;
            if ( v24 > 0x7F )
              goto LABEL_23;
            if ( !isspace(v24) )
              break;
            ++v18;
          }
          if ( v25 != 47 || v18[1] != 47 )
          {
LABEL_23:
            v26 = (const char **)&off_4C2C80;
            for ( i = 2; ; i = strlen(*v26) )
            {
              if ( !strncmp(v18, *v26, i) )
              {
                v28 = v18[i];
                if ( (unsigned int)v28 > 0x7F )
                  break;
                v33 = isalnum(v28);
                if ( v28 != 95 && !v33 )
                  break;
              }
              if ( algn_4C2CD8 == (_BYTE *)++v26 )
              {
                if ( !v18 )
                  goto LABEL_26;
                sub_42A760(&ptr, "%*.*sreturn %s\n;}", (_DWORD)v18 - (_DWORD)a2, (_DWORD)v18 - (_DWORD)a2, a2, v18);
                goto LABEL_27;
              }
            }
            goto LABEL_26;
          }
          while ( *v18 )
          {
            if ( *v18 == 10 )
              goto LABEL_14;
            ++v18;
          }
        }
LABEL_26:
        sub_42A760(&ptr, "%s\n;}", a2);
LABEL_27:
        v31 = sub_4358E0((unsigned __int64)ptr, a3, a4, a5, 0.0, a7, a8, a9, v29, v30, a12, a13);
        if ( ptr )
        {
          *(_QWORD *)&v45 = 0;
          j__free(ptr);
        }
        return v31;
      case ';':
        goto LABEL_65;
      default:
        goto LABEL_39;
    }
  }
}
// 43A6BB: variable 'v29' is possibly undefined
// 43A6BB: variable 'v30' is possibly undefined
// 4C2C80: using guessed type _UNKNOWN *off_4C2C80;
// 4C2CD8: using guessed type _BYTE[8];
