/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400357C0
// Address: 0x00000001400357C0

//----- (00000001400357C0) ----------------------------------------------------
__int64 __fastcall sub_1400357C0(__int64 (__fastcall *a1)(__int64, _QWORD), __int64 a2, __int64 a3, __int64 a4)
{
  double v4; // xmm3_8
  int v6; // r8d
  __int64 k; // rsi
  __int64 (__fastcall *v8)(__int64, _QWORD); // r13
  __int64 result; // rax
  __int64 v10; // rax
  __int64 v11; // rbp
  int v12; // r12d
  const char *v13; // rax
  const char *v14; // rbx
  unsigned __int8 v15; // al
  unsigned int v16; // edx
  int i; // esi
  char v18; // cl
  int v19; // r15d
  int v20; // edi
  __int64 v21; // rcx
  __int64 v22; // r13
  char v23; // al
  unsigned int v24; // r10d
  int v25; // edi
  int v26; // r12d
  int v27; // ecx
  __int64 v28; // r9
  const char *v29; // rdx
  const char *v30; // r14
  const char *j; // rdi
  __int64 v32; // rbp
  unsigned int v33; // ecx
  unsigned __int64 v34; // rbp
  __int16 *v35; // rax
  char v36; // r8
  char v37; // cl
  char *v38; // rcx
  __int64 v39; // rax
  __m128i *v40; // r8
  int v41; // eax
  size_t v42; // rax
  __int16 *v43; // rax
  signed __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rbp
  unsigned __int8 v47; // al
  unsigned __int8 v48; // si
  unsigned __int8 v49; // al
  __int64 m; // r15
  __int64 v51; // rdx
  __int64 n; // rbp
  unsigned int v53; // [rsp+20h] [rbp-498h]
  int v54; // [rsp+24h] [rbp-494h]
  int v55; // [rsp+28h] [rbp-490h]
  __int64 v56; // [rsp+30h] [rbp-488h]
  __int64 v57; // [rsp+38h] [rbp-480h]
  int v58; // [rsp+40h] [rbp-478h]
  struct __crt_locale_pointers Str[64]; // [rsp+60h] [rbp-458h] BYREF
  _QWORD v63[3]; // [rsp+460h] [rbp-58h] BYREF

  v6 = *(_DWORD *)(a4 + 8);
  k = a2;
  v8 = a1;
  v54 = v6;
  if ( v6 <= 0 )
  {
    *(_QWORD *)(a4 + 8) = 0;
    return 0;
  }
  v10 = a3;
  v11 = a3 + 32;
  v12 = 0;
  v55 = 0;
  v56 = v11;
  if ( *(_QWORD *)(v10 + 16) )
    v13 = *(const char **)(v10 + 8);
  else
    v13 = Str1;
  v14 = v13 + 1;
  v15 = *v13;
  v16 = 0;
  v53 = 0;
  if ( !v15 )
  {
LABEL_180:
    *(_QWORD *)(a4 + 8) = v12;
    return 0;
  }
  while ( 2 )
  {
    if ( v15 != 37 )
    {
      result = v8(k, v15);
      if ( (_DWORD)result )
        return result;
      v55 = ++v12;
      goto LABEL_176;
    }
    for ( i = 0; ; i |= 1u )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v18 = *v14;
            if ( *v14 != 32 )
              break;
            i |= 4u;
            ++v14;
          }
          if ( v18 != 35 )
            break;
          i |= 8u;
          ++v14;
        }
        if ( v18 != 43 )
          break;
        i |= 2u;
        ++v14;
      }
      if ( v18 != 45 )
        break;
      ++v14;
    }
    v19 = -1;
    v58 = -1;
    if ( v18 == 42 )
    {
      v54 = v6 - 1;
      if ( v6 - 1 <= 0 || (v53 = sub_14002A090(v11), (v16 = v53) != 0) )
      {
        v53 = v16;
        LODWORD(v21) = 0;
        v56 = v11;
        if ( v16 )
          return v16;
      }
      else
      {
        v21 = *(_QWORD *)(v11 + 8);
        v11 += 32;
        v56 = v11;
      }
      if ( (int)v21 < 0 )
        LOBYTE(i) = i | 1;
      ++v14;
      v19 = -(int)v21;
      if ( (int)v21 > 0 )
        v19 = v21;
      v58 = v19;
    }
    else
    {
      if ( v18 == 48 )
      {
        if ( (i & 1) == 0 )
          LOBYTE(i) = i | 0x10;
        goto LABEL_23;
      }
      while ( 1 )
      {
        v20 = *v14;
        if ( (v20 & 0xFFFFFF80) != 0 || !isdigit(*(unsigned __int8 *)v14) )
          break;
        if ( v19 == -1 )
          v19 = 0;
        v19 = v20 + 2 * (5 * v19 - 24);
        v58 = v19;
LABEL_23:
        ++v14;
      }
    }
    v22 = -1;
    if ( *v14 != 46 )
      goto LABEL_49;
    v23 = *++v14;
    v22 = 0;
    if ( v23 != 42 )
    {
      while ( 1 )
      {
        v25 = v23;
        if ( (v23 & 0xFFFFFF80) != 0 || !isdigit((unsigned __int8)v23) )
          break;
        ++v14;
        v22 = v25 - 48 + 10 * v22;
        v23 = *v14;
      }
LABEL_49:
      v24 = v53;
      goto LABEL_50;
    }
    if ( --v54 <= 0 )
    {
      v24 = v53;
    }
    else
    {
      v53 = sub_14002A090(v11);
      v24 = v53;
      if ( !v53 )
      {
        v22 = *(_QWORD *)(v11 + 8);
        v11 += 32;
        v56 = v11;
        ++v14;
        goto LABEL_50;
      }
    }
    if ( v24 )
      return v24;
    ++v14;
LABEL_50:
    v26 = *(unsigned __int8 *)v14;
    if ( (_BYTE)v26 == 70
      || (unsigned __int8)(v26 - 76) <= 0x1Cu && (v27 = 268435461, _bittest(&v27, v26 - 76))
      || (_BYTE)v26 == 108 )
    {
      LOBYTE(v26) = *++v14;
    }
    v28 = 0;
    v29 = v14;
    v57 = 0;
    ++v14;
    v30 = pNodeName;
    j = nullptr;
    switch ( (char)v26 )
    {
      case '%':
        LOBYTE(Str[0].locinfo) = v26;
        j = (const char *)Str;
        v57 = 1;
        goto LABEL_158;
      case 'E':
      case 'G':
      case 'e':
      case 'f':
      case 'g':
        if ( --v54 <= 0 )
          goto LABEL_109;
        v53 = sub_140029E90(v11);
        v24 = v53;
        if ( v53 )
        {
          LODWORD(v28) = 0;
LABEL_109:
          v40 = nullptr;
          if ( v24 == 1531 )
            goto LABEL_142;
          if ( v24 )
            return v24;
        }
        else
        {
          v40 = (__m128i *)(v11 + 8);
          v56 = v11 + 32;
          LODWORD(v28) = 0;
        }
        v41 = 0;
        if ( v19 == -1 )
          v19 = 0;
        if ( v22 > 0 )
          v41 = v22;
        if ( v19 )
          LODWORD(v28) = v41;
        sub_1400675A0(Str, 1024, v40, ((v19 | ((_DWORD)v28 << 8)) << 8) | 0xF);
        for ( j = (const char *)Str; *j == 32; ++j )
          ;
        if ( *j == 45 )
        {
          ++j;
          v30 = "-";
          v42 = strlen(j);
        }
        else if ( (i & 2) != 0 )
        {
          v30 = "+";
          v42 = strlen(j);
        }
        else
        {
          v43 = &word_1400929C4;
          if ( (i & 4) == 0 )
            v43 = (__int16 *)pNodeName;
          v30 = (const char *)v43;
          v42 = strlen(j);
        }
LABEL_157:
        v57 = v42;
        goto LABEL_158;
      case 'X':
      case 'x':
        v34 = 16;
        if ( (i & 8) != 0 )
        {
          v30 = "0X";
          if ( (char)v26 == 120 )
            v30 = "0x";
        }
        goto LABEL_80;
      case 'a':
        if ( --v54 <= 0 )
          goto LABEL_148;
        v53 = sub_14002A090(v11);
        v24 = v53;
        if ( v53 )
        {
          v28 = 0;
LABEL_148:
          if ( v24 )
            return v24;
        }
        else
        {
          v28 = *(_QWORD *)(v11 + 8);
          v56 = v11 + 32;
        }
        if ( qword_1400C6098 )
          ((void (__fastcall *)(struct __crt_locale_pointers *, __int64, __int64))qword_1400C6098)(Str, 1024, v28);
        else
          sub_14005B0A0(Str, 1024, "%a", v4);
        j = (const char *)Str;
LABEL_153:
        v44 = strlen(j);
        v57 = v44;
        if ( v22 >= 0 && v44 > v22 )
          v57 = v22;
LABEL_158:
        v12 = v55;
        v8 = a1;
        v46 = v19 - strlen(v30) - v57;
        if ( (i & 0x10) == 0 || (v47 = *v30) == 0 )
        {
LABEL_162:
          if ( (i & 1) == 0 )
          {
            v48 = i & 0x10 | 0x20;
            if ( --v46 >= 0 )
            {
              do
              {
                result = a1(a2, v48);
                if ( (_DWORD)result )
                  return result;
                ++v12;
                --v46;
                v55 = v12;
              }
              while ( v46 >= 0 );
            }
          }
          v49 = *v30;
          for ( k = a2; *v30; v55 = ++v12 )
          {
            ++v30;
            result = a1(a2, v49);
            if ( (_DWORD)result )
              return result;
            v49 = *v30;
          }
          for ( m = v57 - 1; m >= 0; v55 = v12 )
          {
            v51 = *(unsigned __int8 *)j++;
            result = a1(a2, v51);
            if ( (_DWORD)result )
              return result;
            ++v12;
            --m;
          }
          for ( n = v46 - 1; n >= 0; v55 = v12 )
          {
            LOBYTE(v45) = 32;
            result = a1(a2, v45);
            if ( (_DWORD)result )
              return result;
            ++v12;
            --n;
          }
          v11 = v56;
LABEL_176:
          v15 = *v14++;
          if ( !v15 )
            goto LABEL_180;
          v16 = v53;
          v6 = v54;
          continue;
        }
        while ( 1 )
        {
          ++v30;
          result = a1(a2, v47);
          if ( (_DWORD)result )
            return result;
          v47 = *v30;
          v55 = ++v12;
          if ( !*v30 )
            goto LABEL_162;
        }
      case 'b':
        v30 = "0b";
        v34 = 2;
        if ( (i & 8) == 0 )
          v30 = pNodeName;
        goto LABEL_80;
      case 'c':
        if ( --v54 > 0 )
        {
          v53 = sub_14002A090(v11);
          v24 = v53;
          if ( !v53 )
          {
            j = (const char *)Str;
            LOBYTE(Str[0].locinfo) = *(_QWORD *)(v11 + 8);
            v56 = v11 + 32;
            v57 = 1;
            goto LABEL_158;
          }
        }
        LOBYTE(Str[0].locinfo) = 0;
        if ( v24 == 1531 )
          goto LABEL_142;
        if ( v24 )
          return v24;
        j = (const char *)Str;
        v57 = 1;
        goto LABEL_158;
      case 'd':
      case 'i':
        if ( --v54 <= 0 )
          goto LABEL_63;
        if ( *(_BYTE *)v11 == 2 )
        {
          v53 = 0;
LABEL_60:
          v28 = *(_QWORD *)(v11 + 8);
          v32 = v11 + 32;
          v33 = 64;
          v56 = v32;
          if ( v28 < 0 )
          {
            v56 = v32;
            v30 = "-";
            v34 = 10;
            v28 = -v28;
            goto LABEL_88;
          }
LABEL_65:
          if ( (i & 2) != 0 )
          {
            v30 = "+";
            v34 = 10;
          }
          else
          {
            v35 = &word_1400929C4;
            v34 = 10;
            if ( (i & 4) == 0 )
              v35 = (__int16 *)pNodeName;
            v30 = (const char *)v35;
          }
          goto LABEL_88;
        }
        v53 = sub_140029F90(v11);
        v24 = v53;
        if ( !v53 )
          goto LABEL_60;
        v28 = 0;
LABEL_63:
        v33 = 0;
        if ( v24 != 1531 )
        {
          if ( v24 )
            return v24;
          goto LABEL_65;
        }
LABEL_142:
        v57 = 5;
        v56 = v11 + 32;
        j = "<obj>";
        goto LABEL_158;
      case 'o':
        v34 = 8;
        v30 = "0";
        if ( (i & 8) == 0 )
          v30 = pNodeName;
        goto LABEL_80;
      case 's':
        v53 = 0;
        if ( --v54 <= 0 )
          goto LABEL_138;
        result = sub_14002A220(v11);
        v53 = result;
        if ( !(_DWORD)result )
        {
          v56 = v11 + 32;
          if ( *(_QWORD *)(v11 + 16) )
            j = *(const char **)(v11 + 8);
          else
            j = Str1;
          if ( !j )
LABEL_138:
            j = "(null)";
          goto LABEL_153;
        }
        v53 = result;
        if ( (_DWORD)result != 1531 )
          return result;
        goto LABEL_142;
      case 'u':
        v34 = 10;
LABEL_80:
        if ( --v54 <= 0 )
          goto LABEL_86;
        if ( *(_BYTE *)v56 == 2 )
        {
          v53 = 0;
          v33 = 64;
          v28 = *(_QWORD *)(v56 + 8);
          v56 += 32;
        }
        else
        {
          v53 = sub_140029F90(v56);
          v24 = v53;
          if ( v53 )
          {
            v28 = 0;
LABEL_86:
            v33 = 0;
            if ( v24 == 1531 )
            {
              v11 = v56;
              goto LABEL_142;
            }
            if ( v24 )
              return v24;
          }
          else
          {
            v33 = 64;
            v28 = *(_QWORD *)(v56 + 8);
            v56 += 32;
          }
        }
LABEL_88:
        if ( v28 || v22 )
        {
          if ( v33 < 0x40 )
            v28 &= (1LL << v33) - 1;
          j = (const char *)v63;
          do
          {
            v36 = v28 % v34 + 48;
            if ( v36 > 57 )
            {
              v37 = 39;
              if ( (_BYTE)v26 == 88 )
                v37 = 7;
              v36 += v37;
            }
            *--j = v36;
            v28 /= v34;
          }
          while ( v28 );
          v19 = v58;
          v38 = (char *)((char *)v63 - j);
          v57 = (char *)v63 - j;
          if ( v22 > 1024 )
            v22 = 1024;
          if ( (__int64)v38 < v22 )
          {
            v57 = v22;
            v39 = v22 - (_QWORD)v38;
            do
            {
              *--j = 48;
              --v39;
            }
            while ( v39 );
          }
        }
        else
        {
          v30 = pNodeName;
        }
        goto LABEL_158;
      default:
        j = v29;
        v42 = strlen(v29);
        v14 = pNodeName;
        goto LABEL_157;
    }
  }
}
// 140035F57: variable 'v4' is possibly undefined
// 14003609A: variable 'v45' is possibly undefined
// 1400929C4: using guessed type __int16 word_1400929C4;
// 1400C6098: using guessed type __int64 qword_1400C6098;
