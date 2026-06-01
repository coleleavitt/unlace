/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400573D0
// Address: 0x00000001400573D0

//----- (00000001400573D0) ----------------------------------------------------
__int64 __fastcall sub_1400573D0(char *Source, int a2, int a3, __int16 a4, int a5, _QWORD *a6)
{
  const char *v6; // rbx
  unsigned int v7; // esi
  int v8; // ebp
  char *v9; // r13
  char *v10; // r14
  _QWORD *v11; // rdi
  struct hostent *v12; // rax
  const char **p_h_name; // r15
  int **h_addr_list; // rbx
  int *i; // rax
  char *v16; // rax
  char *v17; // rax
  size_t v18; // rdi
  char *v19; // rax
  char *v20; // rbx
  int Error; // eax
  char Str1[1040]; // [rsp+40h] [rbp-858h] BYREF
  char Str[1040]; // [rsp+450h] [rbp-448h] BYREF

  v6 = Source;
  v7 = 0;
  memset(Str1, 0, 1025);
  v8 = 0;
  memset(Str, 0, 1025);
  v9 = Str1;
  v10 = Str;
  strncpy_s(Str1, 0x401u, Source, 0x400u);
  while ( 1 )
  {
    *a6 = 0;
    v11 = a6;
    *v10 = 0;
    v12 = gethostbyname(v6);
    p_h_name = (const char **)&v12->h_name;
    if ( !v12 )
      break;
    if ( v12->h_addrtype == 2 && v12->h_length == 4 )
    {
      h_addr_list = (int **)v12->h_addr_list;
      for ( i = *h_addr_list; *h_addr_list; i = *h_addr_list )
      {
        v16 = (char *)sub_140057610(a2, a3, a4, *i);
        *v11 = v16;
        if ( !v16 )
          return 8;
        ++h_addr_list;
        v11 = v16 + 40;
      }
      v6 = Source;
    }
    strncpy_s(v10, 0x401u, *p_h_name, 0x400u);
    if ( *a6 )
    {
      if ( a5 )
      {
        v18 = strlen(v10) + 1;
        v19 = (char *)j__calloc_base(1u, v18);
        v20 = v19;
        if ( v19 )
          strcpy_s(v19, v18, v10);
        else
          v20 = nullptr;
        *(_QWORD *)(*a6 + 24LL) = v20;
        if ( !*(_QWORD *)(*a6 + 24LL) )
          return 8;
      }
      return v7;
    }
    if ( !strlen(v10) )
      return 11003;
    if ( !strcmp(v9, v10) )
      return 11003;
    if ( ++v8 == 16 )
      return 11003;
    v17 = v9;
    v9 = v10;
    v10 = v17;
  }
  Error = WSAGetLastError();
  if ( Error != 11001 )
  {
    if ( Error == 11002 )
      return 11002;
    if ( Error == 11003 )
      return 11003;
  }
  return 11001;
}
