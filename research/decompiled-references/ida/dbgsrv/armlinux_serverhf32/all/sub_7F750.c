/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7F750
// Address: 0x0007F750

//----- (0007F750) --------------------------------------------------------
void *__fastcall sub_7F750(int *a1, int *a2, int a3, int a4)
{
  int v8; // r2
  void *v9; // r10
  const char *v11; // r3
  void *ptr; // [sp+0h] [bp-20h] BYREF
  int v13; // [sp+4h] [bp-1Ch]
  int v14; // [sp+8h] [bp-18h]
  __int64 fd; // [sp+Ch] [bp-14h] BYREF
  __int64 v16; // [sp+14h] [bp-Ch] BYREF

  fd = -1;
  v16 = -1;
  if ( a2 )
  {
    if ( sub_7F1DC(&fd) )
    {
      if ( !under_debugger )
        sub_78AFC(3181);
      goto LABEL_4;
    }
    *a2 = HIDWORD(fd);
  }
  if ( a1 )
  {
    if ( sub_7F1DC(&v16) )
    {
      if ( !under_debugger )
        sub_78AFC(3182);
LABEL_4:
      __und(0xFFu);
    }
    *a1 = v16;
  }
  v8 = HIDWORD(v16);
  ptr = nullptr;
  v13 = 0;
  v14 = 0;
  *(_DWORD *)(a3 + 16) = fd;
  *(_DWORD *)(a3 + 20) = v8;
  v9 = sub_7A7D8(a3, (char **)&ptr);
  if ( (_DWORD)fd != -1 )
    j_j_close(fd);
  if ( HIDWORD(v16) != -1 )
    j_j_close(SHIDWORD(v16));
  if ( !v9 )
  {
    if ( v13 )
      v11 = (const char *)ptr;
    else
      v11 = (const char *)&dword_8DA5C;
    sub_1873C(a4, "%s: %s", *(const char **)(a3 + 8), v11);
    if ( a1 )
      j_j_close(*a1);
    if ( a2 )
      j_j_close(*a2);
  }
  if ( ptr )
  {
    v13 = 0;
    sub_77E08(ptr);
  }
  return v9;
}
// 8DA5C: using guessed type int dword_8DA5C;
// D5C00: using guessed type char under_debugger;
