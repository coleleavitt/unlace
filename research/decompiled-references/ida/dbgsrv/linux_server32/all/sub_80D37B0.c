/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80D37B0
// Address: 0x080D37B0

//----- (080D37B0) --------------------------------------------------------
int __cdecl sub_80D37B0(_BYTE *a1, int a2, char *s, int a4)
{
  size_t v4; // eax
  void *v5; // esp
  const char *v6; // eax
  int result; // eax
  size_t v8; // eax
  void *v9; // esp
  const char *v10; // eax
  int v11; // [esp-18h] [ebp-44h]
  int v12; // [esp-14h] [ebp-40h]
  int v13; // [esp-10h] [ebp-3Ch]
  _BYTE v14[12]; // [esp-Ch] [ebp-38h] BYREF
  int v15; // [esp+0h] [ebp-2Ch]
  unsigned int v16; // [esp+10h] [ebp-1Ch]

  v15 = a4;
  v16 = __readgsdword(0x14u);
  if ( !s )
  {
    if ( !byte_811F8A1 )
    {
      if ( v16 == __readgsdword(0x14u) )
        sub_80CFF40(539, v11, v12, v13);
      sub_80D7AB0();
    }
LABEL_25:
    BUG();
  }
  if ( !a1 )
  {
    if ( !a2 )
    {
      v8 = strlen(s);
      v9 = alloca(v8 + 112);
      v10 = sub_80D35D0(s, v14, v8 + 100);
      result = __vsnprintf_chk(0, 0, 1, -1, v10, v15);
      if ( result >= 0 )
        goto LABEL_9;
    }
    goto LABEL_13;
  }
  if ( a2 < 0 )
  {
    if ( !byte_811F8A1 )
    {
      if ( v16 == __readgsdword(0x14u) )
        sub_80CFF40(1225, v11, v12, v13);
      sub_80D7AB0();
    }
    goto LABEL_25;
  }
  if ( a2 <= 1 )
  {
    if ( a2 )
    {
      *a1 = 0;
      result = 0;
      goto LABEL_9;
    }
LABEL_13:
    result = 0;
    goto LABEL_9;
  }
  *a1 = 0;
  v4 = strlen(s);
  v5 = alloca(v4 + 112);
  v6 = sub_80D35D0(s, v14, v4 + 100);
  result = __vsnprintf_chk(a1, a2, 1, -1, v6, v15);
  if ( result < 0 )
  {
    a1[a2 - 1] = 0;
    result = a2 - 1;
  }
  else if ( a2 - 1 < (unsigned int)result )
  {
    result = a2 - 1;
    a1[a2 - 1] = 0;
  }
LABEL_9:
  if ( v16 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
// 80D3911: variable 'v11' is possibly undefined
// 80D3911: variable 'v12' is possibly undefined
// 80D3911: variable 'v13' is possibly undefined
// 804B5D0: using guessed type int __cdecl __vsnprintf_chk(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 811F8A1: using guessed type char byte_811F8A1;
