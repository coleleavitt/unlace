/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_87DB0
// Address: 0x0000000000087DB0

//----- (0000000000087DB0) ----------------------------------------------------
__int64 __fastcall sub_87DB0(__int64 a1)
{
  unsigned __int64 v1; // r14
  _BYTE *v2; // rax
  char *v3; // rbp
  unsigned __int64 v4; // r12
  unsigned __int8 v5; // r13
  __int64 v6; // r15
  __int64 v7; // r14
  char *v8; // rbx
  size_t v9; // rax
  unsigned int v10; // ebp
  char *v11; // rax
  char v12; // al
  char *v13; // rcx
  _BYTE *v15; // rax
  char v16; // [rsp+Fh] [rbp-459h]
  unsigned __int8 v17; // [rsp+10h] [rbp-458h]
  int v18; // [rsp+18h] [rbp-450h]
  void *dest; // [rsp+20h] [rbp-448h]
  char *v20; // [rsp+28h] [rbp-440h]
  char *s1[135]; // [rsp+30h] [rbp-438h]

  s1[128] = (char *)__readfsqword(0x28u);
  LODWORD(v1) = 0;
  if ( *(_BYTE *)(a1 + 452) == 40 )
  {
    v2 = *(_BYTE **)(a1 + 8);
    if ( *v2 != 41 )
    {
      v1 = 0;
      while ( 1 )
      {
        v10 = -1;
        if ( v1 > 0x7E )
          return v10;
        v11 = sub_87CD0(a1);
        s1[v1] = v11;
        if ( !*v11 )
          break;
        v12 = *(_BYTE *)(a1 + 452);
        if ( (unsigned __int8)(v12 - 9) < 5u || v12 == 32 )
        {
          v13 = *(char **)(a1 + 8);
          v12 = *v13;
          *(_BYTE *)(a1 + 452) = *v13;
          if ( *v13 )
          {
            *v13 = 0;
            ++*(_QWORD *)(a1 + 8);
            v12 = *(_BYTE *)(a1 + 452);
          }
        }
        ++v1;
        if ( v12 != 44 )
        {
          if ( v12 == 41 )
            goto LABEL_4;
          if ( v12 != 46 )
            return v10;
          goto LABEL_56;
        }
      }
      if ( *(_BYTE *)(a1 + 452) != 46 )
        return (unsigned int)-1;
LABEL_56:
      v15 = *(_BYTE **)(a1 + 8);
      if ( *v15 == 46 )
      {
        v10 = -2;
        if ( v15[1] == 46 )
          return v10;
      }
      return (unsigned int)-1;
    }
    *(_QWORD *)(a1 + 8) = v2 + 1;
  }
LABEL_4:
  v3 = *(char **)(a1 + 8);
  v4 = (unsigned int)v1;
  v17 = 0;
  v18 = v1;
  while ( 1 )
  {
LABEL_40:
    v8 = v3;
LABEL_8:
    v5 = *v8;
    if ( !*v8 )
    {
      v10 = -1;
      if ( !v17 )
        return (unsigned int)v1;
      return v10;
    }
    v20 = v8;
    v16 = *v8;
    while ( 1 )
    {
      v3 = v8 + 1;
      if ( v17 )
        break;
      if ( v5 == 34 || v5 == 39 )
      {
        v17 = v5;
        goto LABEL_40;
      }
      if ( !(_DWORD)v1 || ((v5 & 0x80u) != 0 || !isalpha(v5)) && v5 != 95 && v5 != 36 )
        goto LABEL_5;
      v6 = 0;
      dest = v8 + 1;
      while ( 1 )
      {
        v5 = *v3;
        if ( (*v3 < 0 || !isalnum(v5)) && v5 != 95 && v5 != 36 )
          break;
        ++v3;
        --v6;
      }
      *v3 = 0;
      if ( (int)v1 <= 0 )
      {
        v8 = v3;
      }
      else
      {
        v7 = 0;
        while ( strcmp(s1[v7], v8) )
        {
          if ( ++v7 >= v4 )
          {
            v8 = v3;
LABEL_32:
            LODWORD(v1) = v18;
            goto LABEL_33;
          }
        }
        *v8 = v7 + 0x80;
        if ( v6 )
        {
          v9 = strlen(v3 + 1);
          ++v8;
          memmove(dest, v3, v9 + 2);
          goto LABEL_32;
        }
        LODWORD(v1) = v18;
        ++v8;
      }
LABEL_33:
      *v8 = v5;
      if ( !v5 )
        return (unsigned int)v1;
    }
    if ( v16 == 92 )
      break;
    if ( v16 == v17 )
    {
LABEL_5:
      v17 = 0;
      continue;
    }
  }
  v8 = v20 + 2;
  if ( *v3 )
    goto LABEL_8;
  return (unsigned int)-1;
}
