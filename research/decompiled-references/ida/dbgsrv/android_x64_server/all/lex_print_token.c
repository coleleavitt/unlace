/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: lex_print_token
// Address: 0x000000000008B980

//----- (000000000008B980) ----------------------------------------------------
const char *__fastcall lex_print_token(__int64 a1, __int64 a2, double a3, __m128 a4)
{
  int v6; // kr00_4
  __int64 v7; // rax
  size_t v8; // r15
  __int64 v9; // rbx
  char *v10; // rdi
  unsigned __int64 v11; // rsi
  char v12; // bl
  unsigned __int64 v13; // rax
  void **v14; // rdx
  int i; // edi
  unsigned __int64 v16; // rsi
  __int64 v17; // rdx
  int v18; // edx
  const char *v19; // rsi
  const char *v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rbx
  unsigned __int64 v23; // r15
  const char *v24; // rbx
  void *v25; // rdi
  const char *v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rbx
  const char *v29; // rdx
  const char *v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rbx
  char *v34; // rcx
  char *v35; // rcx
  void *ptr[2]; // [rsp+0h] [rbp-458h] BYREF
  __int64 v37; // [rsp+10h] [rbp-448h]
  char v38; // [rsp+20h] [rbp-438h] BYREF
  char v39; // [rsp+21h] [rbp-437h] BYREF
  char v40; // [rsp+41Fh] [rbp-39h] BYREF
  char v41; // [rsp+420h] [rbp-38h] BYREF
  unsigned __int64 v42; // [rsp+428h] [rbp-30h]

  v42 = __readfsqword(0x28u);
  v6 = *(_DWORD *)(a2 + 24);
  switch ( *(_WORD *)(a2 + 24) )
  {
    case 1:
      v7 = __strlen_chk("<END>", 6);
      if ( !v7 )
        goto LABEL_48;
      v8 = v7;
      v9 = v7 + 1;
      if ( *(_QWORD *)(a1 + 16) >= (unsigned __int64)(v7 + 1) )
      {
        v10 = *(char **)a1;
      }
      else
      {
        v10 = (char *)qvector_reserve(a1, *(char **)a1, v7 + 1, 1u);
        *(_QWORD *)a1 = v10;
      }
      *(_QWORD *)(a1 + 8) = v9;
      v30 = "<END>";
      goto LABEL_69;
    case 2:
      goto LABEL_26;
    case 3:
      sub_3BBA0(a1, "0x%a", *(_QWORD *)(a2 + 32));
      goto LABEL_52;
    case 4:
      *(_OWORD *)ptr = 0;
      v37 = 0;
      v17 = *(_QWORD *)(a2 + 8);
      if ( v17 )
      {
        v18 = v17 - 1;
        v19 = *(const char **)a2;
      }
      else
      {
        v18 = 0;
        v19 = s1;
      }
      qstr2user((__int64)ptr, v19, v18);
      if ( ptr[1] )
        v26 = (const char *)ptr[0];
      else
        v26 = s1;
      v29 = "L";
      if ( !*(_BYTE *)(a2 + 40) )
        v29 = &byte_EB522;
      sub_3BBA0(a1, "%s\"%s\"", v29, v26);
      if ( !ptr[0] )
        goto LABEL_52;
      ptr[1] = nullptr;
      qfree(ptr[0]);
      ptr[0] = nullptr;
      v37 = 0;
      if ( !*(_QWORD *)(a1 + 8) )
        return s1;
      return *(const char **)a1;
    case 5:
      v11 = *(_QWORD *)(a2 + 32);
      if ( !v11 )
      {
        v31 = __strlen_chk("'\\0'", 5);
        if ( !v31 )
          goto LABEL_48;
        v8 = v31;
        v32 = v31 + 1;
        if ( *(_QWORD *)(a1 + 16) >= (unsigned __int64)(v31 + 1) )
        {
          v10 = *(char **)a1;
        }
        else
        {
          v10 = (char *)qvector_reserve(a1, *(char **)a1, v31 + 1, 1u);
          *(_QWORD *)a1 = v10;
        }
        *(_QWORD *)(a1 + 8) = v32;
        v30 = "'\\0'";
        goto LABEL_69;
      }
      v12 = 1;
      v13 = 8;
      if ( (char)v11 == v11 )
        v13 = 1;
      v14 = ptr;
      for ( i = 2; ; ++i )
      {
        v16 = v11 >> (8 * ((unsigned __int8)v13 - v12));
        if ( (_BYTE)v16 )
        {
          *(_BYTE *)v14 = v16;
          v14 = (void **)((char *)v14 + 1);
        }
        v12 = i;
        if ( v13 < i )
          break;
        v11 = *(_QWORD *)(a2 + 32);
      }
      *(_BYTE *)v14 = 0;
      str2user(&v38, (const char *)ptr, 1024);
      sub_3BBA0(a1, "'%s'", &v38);
      if ( *(_QWORD *)(a1 + 8) )
        return *(const char **)a1;
      return s1;
    case 6:
      if ( *(_QWORD *)(a2 + 8) )
        v20 = *(const char **)a2;
      else
        v20 = s1;
      sub_3BBA0(a1, "@type %s", v20);
      goto LABEL_52;
    case 7:
      realtoasc(&v38, 1024, (__m128i *)(a2 + 48), 50, a3, a4);
      goto LABEL_22;
    case 8:
      sub_3BBA0(a1, "0x%llxi64", *(_QWORD *)(a2 + 48));
      goto LABEL_52;
    default:
      if ( (unsigned __int16)(v6 - 128) >= 0x380u )
      {
        if ( (unsigned __int16)v6 == 11868 )
        {
          v27 = __strlen_chk("...", 4);
          if ( !v27 )
            goto LABEL_48;
          v8 = v27;
          v28 = v27 + 1;
          if ( *(_QWORD *)(a1 + 16) >= (unsigned __int64)(v27 + 1) )
          {
            v10 = *(char **)a1;
          }
          else
          {
            v10 = (char *)qvector_reserve(a1, *(char **)a1, v27 + 1, 1u);
            *(_QWORD *)a1 = v10;
          }
          *(_QWORD *)(a1 + 8) = v28;
          v30 = "...";
        }
        else
        {
          if ( (unsigned __int16)v6 >= 0x100u )
          {
            v34 = &v39;
            v38 = BYTE1(*(_DWORD *)(a2 + 24));
          }
          else
          {
            v34 = &v38;
          }
          *v34 = v6;
          v35 = v34 + 1;
          if ( v35 >= &v41 )
          {
            v35 = &v40;
            v40 = 0;
          }
          *v35 = 0;
LABEL_22:
          v21 = __strlen_chk(&v38, 1024);
          if ( !v21 )
            goto LABEL_48;
          v8 = v21;
          v22 = v21 + 1;
          if ( *(_QWORD *)(a1 + 16) >= (unsigned __int64)(v21 + 1) )
          {
            v10 = *(char **)a1;
          }
          else
          {
            v10 = (char *)qvector_reserve(a1, *(char **)a1, v21 + 1, 1u);
            *(_QWORD *)a1 = v10;
          }
          *(_QWORD *)(a1 + 8) = v22;
          v30 = &v38;
        }
LABEL_69:
        memmove(v10, v30, v8);
        *(_BYTE *)(*(_QWORD *)a1 + v8) = 0;
        if ( *(_QWORD *)(a1 + 8) )
          return *(const char **)a1;
        return s1;
      }
LABEL_26:
      if ( a2 == a1 )
      {
LABEL_52:
        if ( *(_QWORD *)(a1 + 8) )
          return *(const char **)a1;
        return s1;
      }
      v23 = *(_QWORD *)(a2 + 8);
      if ( v23 >= 2 )
      {
        v24 = *(const char **)a2;
        if ( *(_QWORD *)(a1 + 16) >= v23 )
        {
          v25 = *(void **)a1;
        }
        else
        {
          v25 = qvector_reserve(a1, *(char **)a1, *(_QWORD *)(a2 + 8), 1u);
          *(_QWORD *)a1 = v25;
        }
        *(_QWORD *)(a1 + 8) = v23;
        memmove(v25, v24, v23 - 1);
        *(_BYTE *)(*(_QWORD *)a1 + v23 - 1) = 0;
        if ( !*(_QWORD *)(a1 + 8) )
          return s1;
        return *(const char **)a1;
      }
LABEL_48:
      *(_QWORD *)(a1 + 8) = 0;
      if ( *(_QWORD *)(a1 + 8) )
        return *(const char **)a1;
      return s1;
  }
}
// 33AE0: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);
