/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80BCDD0
// Address: 0x080BCDD0

//----- (080BCDD0) --------------------------------------------------------
unsigned int sub_80BCDD0(char *a1, ...)
{
  int *v1; // eax
  unsigned int result; // eax
  void *ptr; // [esp+0h] [ebp-28h] BYREF
  int v4; // [esp+4h] [ebp-24h]
  int v5; // [esp+8h] [ebp-20h]
  unsigned int v6; // [esp+Ch] [ebp-1Ch]
  va_list va; // [esp+34h] [ebp+Ch] BYREF

  va_start(va, a1);
  v6 = __readgsdword(0x14u);
  ptr = nullptr;
  v4 = 0;
  v5 = 0;
  sub_805EC70(&ptr, a1, (int)va);
  v1 = &dword_80DDFD8;
  if ( v4 )
    v1 = (int *)ptr;
  sub_80BF890("%s\n", (int)v1);
  sub_8069790();
  if ( ptr )
  {
    v4 = 0;
    sub_80CF780(ptr);
  }
  result = v6 - __readgsdword(0x14u);
  if ( result )
    sub_80D7AB0();
  return result;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
