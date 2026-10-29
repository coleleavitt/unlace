/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7F8B8
// Address: 0x0007F8B8

//----- (0007F8B8) --------------------------------------------------------
void *__fastcall sub_7F8B8(int *a1, int *a2, int a3, int a4)
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
    if ( sub_7F344(&fd) )
    {
      if ( !under_debugger )
        sub_78C64(3181);
      goto LABEL_4;
    }
    *a2 = HIDWORD(fd);
  }
  if ( a1 )
  {
    if ( sub_7F344(&v16) )
    {
      if ( !under_debugger )
        sub_78C64(3182);
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
  v9 = sub_7A940(a3, (char **)&ptr);
  if ( (_DWORD)fd != -1 )
    j_j_close(fd);
  if ( HIDWORD(v16) != -1 )
    j_j_close(SHIDWORD(v16));
  if ( !v9 )
  {
    if ( v13 )
      v11 = (const char *)ptr;
    else
      v11 = (const char *)&dword_8DB98;
    sub_188E0(a4, "%s: %s", *(const char **)(a3 + 8), v11);
    if ( a1 )
      j_j_close(*a1);
    if ( a2 )
      j_j_close(*a2);
  }
  if ( ptr )
  {
    v13 = 0;
    sub_77F70(ptr);
  }
  return v9;
}
// 8DB98: using guessed type int dword_8DB98;
// D6C20: using guessed type char under_debugger;
