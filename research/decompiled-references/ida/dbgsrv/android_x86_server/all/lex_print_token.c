/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: lex_print_token
// Address: 0x000752E0

//----- (000752E0) --------------------------------------------------------
char *__cdecl lex_print_token(int a1, int a2)
{
  _DWORD *v2; // esi
  int v3; // eax
  int v4; // eax
  size_t v5; // edi
  _DWORD *v6; // edx
  int v7; // esi
  void *v8; // eax
  unsigned int v9; // eax
  _BOOL4 v10; // edx
  unsigned int v11; // edi
  char v12; // cl
  void **v13; // edx
  char v14; // cl
  unsigned int i; // esi
  unsigned int v16; // eax
  char *v17; // eax
  int v18; // eax
  const char *v19; // ecx
  char *v20; // eax
  int v21; // eax
  int v22; // ecx
  unsigned int v23; // esi
  void *v24; // eax
  unsigned int v25; // esi
  const char *v26; // edx
  _DWORD *v27; // ecx
  void *v28; // eax
  char *v29; // eax
  int v30; // eax
  int v31; // ecx
  unsigned int v32; // esi
  char *v33; // edx
  int v34; // eax
  void *v35; // eax
  int *v37; // ecx
  _DWORD *v38; // edi
  unsigned int *v39; // ecx
  int v40; // eax
  int v41; // [esp-8h] [ebp-434h]
  int v42; // [esp-4h] [ebp-430h]
  const char *v43; // [esp+4h] [ebp-428h]
  const char *v44; // [esp+4h] [ebp-428h]
  char *v45; // [esp+8h] [ebp-424h] BYREF
  int v46; // [esp+Ch] [ebp-420h]
  int v47; // [esp+10h] [ebp-41Ch]
  int src[255]; // [esp+18h] [ebp-414h] BYREF
  char v49; // [esp+417h] [ebp-15h] BYREF
  unsigned int v50; // [esp+418h] [ebp-14h] BYREF

  v42 = 479988;
  v2 = (_DWORD *)a1;
  v50 = __readgsdword(0x14u);
  v3 = *(_DWORD *)(a2 + 12);
  switch ( (__int16)v3 )
  {
    case 1:
      v4 = __strlen_chk("<END>", 6);
      if ( !v4 )
        goto LABEL_64;
      v5 = v4;
      v6 = (_DWORD *)a1;
      v7 = v4 + 1;
      if ( *(_DWORD *)(a1 + 8) >= (unsigned int)(v4 + 1) )
      {
        v8 = *(void **)a1;
      }
      else
      {
        v8 = qvector_reserve(a1, *(void **)a1, v4 + 1, 1u);
        v6 = (_DWORD *)a1;
        *(_DWORD *)a1 = v8;
      }
      v6[1] = v7;
      v2 = v6;
      memmove(v8, "<END>", v5);
      goto LABEL_68;
    case 2:
      goto LABEL_23;
    case 3:
      v17 = "0x%a";
      v41 = *(_DWORD *)(a2 + 16);
      goto LABEL_16;
    case 4:
      v45 = nullptr;
      v46 = 0;
      v47 = 0;
      v18 = *(_DWORD *)(a2 + 4);
      if ( v18 )
      {
        --v18;
        v19 = *(const char **)a2;
      }
      else
      {
        v19 = byte_EF875;
      }
      qstr2user((int)&v45, v19, v18);
      if ( v46 )
        v29 = v45;
      else
        v29 = byte_EF875;
      v33 = "L";
      if ( !*(_BYTE *)(a2 + 20) )
        v33 = &byte_DCEE2;
      sub_1F400(a1, "%s\"%s\"", v33, v29);
      if ( !v45 )
        goto LABEL_47;
      v46 = 0;
      qfree(v45);
      v45 = nullptr;
      v47 = 0;
      if ( !*(_DWORD *)(a1 + 4) )
        return byte_EF875;
      return (char *)*v2;
    case 5:
      v9 = *(_DWORD *)(a2 + 16);
      if ( v9 )
      {
        v10 = (char)v9 != v9;
        v11 = 3 * v10 + 1;
        v12 = 3 * v10;
        v13 = (void **)&v45;
        v14 = 8 * v12;
        for ( i = 1; ; ++i )
        {
          v16 = v9 >> v14;
          if ( (_BYTE)v16 )
          {
            *(_BYTE *)v13 = v16;
            v13 = (void **)((char *)v13 + 1);
          }
          if ( v11 <= i )
            break;
          v9 = *(_DWORD *)(a2 + 16);
          v14 -= 8;
        }
        *(_BYTE *)v13 = 0;
        str2user((unsigned int)src, (const char *)&v45, 1024);
        v2 = (_DWORD *)a1;
        sub_1F400(a1, "'%s'", src, 479988);
        goto LABEL_47;
      }
      v44 = "'\\0'";
      v34 = __strlen_chk("'\\0'", 5);
      if ( !v34 )
        goto LABEL_64;
      v5 = v34;
      v31 = a1;
      v32 = v34 + 1;
      if ( *(_DWORD *)(a1 + 8) < (unsigned int)(v34 + 1) )
        goto LABEL_44;
      goto LABEL_56;
    case 6:
      if ( *(_DWORD *)(a2 + 4) )
        v20 = *(char **)a2;
      else
        v20 = byte_EF875;
      sub_1F400(a1, "@type %s", v20, 479988);
      goto LABEL_47;
    case 7:
      realtoasc(src, (int *)&stru_400, (_WORD *)(a2 + 24), 50);
      v21 = __strlen_chk(src, 1024);
      if ( !v21 )
        goto LABEL_64;
      v5 = v21;
      v22 = a1;
      v23 = v21 + 1;
      if ( *(_DWORD *)(a1 + 8) < (unsigned int)(v21 + 1) )
        goto LABEL_21;
      goto LABEL_66;
    case 8:
      v17 = "0x%llxi64";
      v42 = *(_DWORD *)(a2 + 28);
      v41 = *(_DWORD *)(a2 + 24);
LABEL_16:
      sub_1F400(a1, v17, v41, v42);
      goto LABEL_47;
    default:
      if ( (unsigned __int16)(v3 - 128) >= 0x380u )
      {
        if ( (unsigned __int16)v3 == 11868 )
        {
          v44 = "...";
          v30 = __strlen_chk("...", 4);
          if ( v30 )
          {
            v5 = v30;
            v31 = a1;
            v32 = v30 + 1;
            if ( *(_DWORD *)(a1 + 8) >= (unsigned int)(v30 + 1) )
            {
LABEL_56:
              v35 = *(void **)v31;
            }
            else
            {
LABEL_44:
              v35 = qvector_reserve(v31, *(void **)v31, v32, 1u);
              v31 = a1;
              *(_DWORD *)a1 = v35;
            }
            *(_DWORD *)(v31 + 4) = v32;
            v2 = (_DWORD *)v31;
            memmove(v35, v44, v5);
LABEL_68:
            *(_BYTE *)(*v2 + v5) = 0;
            if ( v2[1] )
              return (char *)*v2;
            return byte_EF875;
          }
        }
        else
        {
          if ( (unsigned __int16)v3 >= 0x100u )
          {
            v37 = (int *)((char *)src + 1);
            LOBYTE(src[0]) = BYTE1(*(_DWORD *)(a2 + 12));
          }
          else
          {
            v37 = src;
          }
          *(_BYTE *)v37 = v3;
          v39 = (unsigned int *)((char *)v37 + 1);
          if ( v39 >= &v50 )
          {
            v39 = (unsigned int *)&v49;
            v49 = 0;
          }
          *(_BYTE *)v39 = 0;
          v40 = __strlen_chk(src, 1024);
          if ( v40 )
          {
            v5 = v40;
            v22 = a1;
            v23 = v40 + 1;
            if ( *(_DWORD *)(a1 + 8) >= (unsigned int)(v40 + 1) )
            {
LABEL_66:
              v24 = *(void **)v22;
            }
            else
            {
LABEL_21:
              v24 = qvector_reserve(v22, *(void **)v22, v23, 1u);
              v22 = a1;
              *(_DWORD *)a1 = v24;
            }
            *(_DWORD *)(v22 + 4) = v23;
            v2 = (_DWORD *)v22;
            memmove(v24, src, v5);
            goto LABEL_68;
          }
        }
LABEL_64:
        *(_DWORD *)(a1 + 4) = 0;
        if ( *(_DWORD *)(a1 + 4) )
          return (char *)*v2;
        return byte_EF875;
      }
LABEL_23:
      if ( a2 == a1 )
      {
LABEL_47:
        if ( v2[1] )
          return (char *)*v2;
      }
      else
      {
        v25 = *(_DWORD *)(a2 + 4);
        if ( v25 >= 2 )
        {
          v26 = *(const char **)a2;
          v27 = (_DWORD *)a1;
          if ( *(_DWORD *)(a1 + 8) >= v25 )
          {
            v28 = *(void **)a1;
          }
          else
          {
            v43 = *(const char **)a2;
            v28 = qvector_reserve(a1, *(void **)a1, v25, 1u);
            v26 = v43;
            v27 = (_DWORD *)a1;
            *(_DWORD *)a1 = v28;
          }
          v27[1] = v25;
          v38 = v27;
          memmove(v28, v26, v25 - 1);
          *(_BYTE *)(*v38 + v25 - 1) = 0;
          v2 = v38;
          if ( !v38[1] )
            return byte_EF875;
          return (char *)*v2;
        }
        v2 = (_DWORD *)a1;
        *(_DWORD *)(a1 + 4) = 0;
        if ( *(_DWORD *)(a1 + 4) )
          return (char *)*v2;
      }
      return byte_EF875;
  }
}
// 400: using guessed type Elf32_Sym stru_400;
// 17B50: using guessed type int __cdecl __strlen_chk(_DWORD, _DWORD);
// DCEE2: using guessed type char byte_DCEE2;
