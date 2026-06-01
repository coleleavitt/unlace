/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_805ED40
// Address: 0x0805ED40

//----- (0805ED40) --------------------------------------------------------
int __cdecl sub_805ED40(int a1, char **a2, int a3)
{
  int *v3; // eax
  FILE *v4; // eax
  int v5; // edi
  int *v7; // eax
  void *v8; // eax
  int *v9; // edx
  FILE *stream; // [esp+34h] [ebp-30h]
  void *ptr; // [esp+3Ch] [ebp-28h] BYREF
  int v12; // [esp+40h] [ebp-24h]
  int v13; // [esp+44h] [ebp-20h]
  unsigned int v14; // [esp+48h] [ebp-1Ch]

  v14 = __readgsdword(0x14u);
  ptr = nullptr;
  v12 = 0;
  v13 = 0;
  sub_805ED10(&ptr, "/proc/%d/task/%d/comm", *(_DWORD *)(a1 + 724), a3);
  v3 = &dword_80DDFD8;
  if ( v12 )
    v3 = (int *)ptr;
  v4 = sub_80CDB00((int)v3);
  if ( v4 )
  {
    stream = v4;
    sub_80CF4E0(a2, v4);
    sub_80CF060(stream);
    v5 = 1;
  }
  else
  {
    v7 = __errno_location();
    v8 = sub_80D0500(*v7);
    v9 = &dword_80DDFD8;
    if ( v12 )
      v9 = (int *)ptr;
    sub_8058E20(a1, "%s: %s\n", v9, v8);
    v5 = 0;
  }
  if ( ptr )
  {
    v12 = 0;
    sub_80CF780(ptr);
  }
  if ( v14 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v5;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
