/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3DDC0
// Address: 0x000000000003DDC0

//----- (000000000003DDC0) ----------------------------------------------------
__int64 __fastcall sub_3DDC0(__int64 a1, __int64 a2)
{
  const char *i; // rbx
  const char *v3; // rbx
  char *v4; // rax
  unsigned __int64 v5; // rax
  char *v6; // r14
  size_t v7; // rax
  int v8; // edi
  size_t v9; // rax
  char **v10; // r13
  size_t v11; // r12
  char *v12; // rdi
  int v14; // [rsp+Ch] [rbp-4Ch] BYREF
  char *s[2]; // [rsp+10h] [rbp-48h] BYREF
  __int64 v16; // [rsp+20h] [rbp-38h]
  unsigned __int64 v17; // [rsp+28h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  *(_OWORD *)s = 0;
  v16 = 0;
  if ( qgetline(s, *(FILE **)(a1 + 1216)) <= 0 )
  {
    LODWORD(i) = 0;
    goto LABEL_29;
  }
  *(_QWORD *)a2 = -1;
  *(_BYTE *)(a2 + 48) = 0;
  v14 = 0;
  *(_BYTE *)(a2 + 39) = 0;
  *(_BYTE *)(a2 + 47) = 0;
  LODWORD(i) = a2 + 24;
  if ( qsscanf(s[0], "%a-%a %7s %a %7s %llx%n", a2, a2 + 8, a2 + 32, a2 + 16, a2 + 40, a2 + 24, &v14) == 6 )
  {
    *(_BYTE *)(a2 + 48) = 1;
    if ( s[1] )
      v3 = s[0];
    else
      v3 = s1;
    v4 = strchr(v3, 45);
    if ( v4 )
    {
      v5 = v4 - v3;
      if ( v5 != -1 && v5 >= 9 )
      {
        *(_BYTE *)(a2 + 48) = 2;
        if ( *(_BYTE *)(a1 + 36) )
        {
          *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 16);
          *(_DWORD *)(a1 + 32) = 8;
        }
        *(_DWORD *)(a1 + 244) = 8;
      }
    }
    v6 = skip_spaces(&s[0][v14]);
    v7 = strlen(v6);
    for ( i = &v6[v7]; i > v6; *--i = 0 )
    {
      v8 = *((unsigned __int8 *)i - 1);
      if ( (v8 & 0x80u) != 0 )
        break;
      if ( !isspace(v8) )
        break;
    }
    if ( i - v6 >= 11 && (i -= 10, !strncmp(i, " (deleted)", 0xAu)) )
    {
      *i = 0;
      if ( v6 )
      {
LABEL_21:
        v9 = strlen(v6);
        if ( v9 )
        {
          i = (const char *)v9;
          v10 = (char **)(a2 + 56);
          v11 = v9 + 1;
          if ( *(_QWORD *)(a2 + 72) >= v9 + 1 )
          {
            v12 = *v10;
          }
          else
          {
            v12 = (char *)qvector_reserve(a2 + 56, *v10, v9 + 1, 1u);
            *v10 = v12;
          }
          *(_QWORD *)(a2 + 64) = v11;
          memmove(v12, v6, (size_t)i);
          i[*(_QWORD *)(a2 + 56)] = 0;
          goto LABEL_28;
        }
      }
    }
    else if ( v6 )
    {
      goto LABEL_21;
    }
    *(_QWORD *)(a2 + 64) = 0;
  }
LABEL_28:
  LOBYTE(i) = *(_QWORD *)a2 != -1;
LABEL_29:
  if ( s[0] )
  {
    s[1] = nullptr;
    qfree(s[0]);
    s[0] = nullptr;
    v16 = 0;
  }
  return (unsigned int)i;
}
