/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80BA3C0
// Address: 0x080BA3C0

//----- (080BA3C0) --------------------------------------------------------
int __cdecl sub_80BA3C0(int a1, char *a2, int a3)
{
  __suseconds_t v3; // eax
  time_t v4; // edx
  int v5; // edi
  void *ptr; // [esp+4h] [ebp-48h] BYREF
  int v8; // [esp+8h] [ebp-44h]
  int v9; // [esp+Ch] [ebp-40h]
  _BYTE v10[25]; // [esp+17h] [ebp-35h] BYREF
  unsigned int v11; // [esp+30h] [ebp-1Ch]

  v11 = __readgsdword(0x14u);
  ptr = nullptr;
  v8 = 0;
  v9 = 0;
  sub_805EC70(&ptr, a2, a3);
  v3 = sub_80D0330();
  sub_80BC270(v10, 25, v3, v4, 0);
  v5 = sub_80BF890("%s [%u] %s", (int)v10);
  if ( ptr )
  {
    v8 = 0;
    sub_80CF780(ptr);
  }
  if ( v11 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v5;
}
// 80BA420: variable 'v4' is possibly undefined
