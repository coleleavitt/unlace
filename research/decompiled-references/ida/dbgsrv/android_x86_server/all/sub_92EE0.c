/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_92EE0
// Address: 0x00092EE0

//----- (00092EE0) --------------------------------------------------------
int __cdecl sub_92EE0(int a1, char *a2, int a3)
{
  __suseconds_t v3; // eax
  time_t v4; // edx
  char *v5; // ecx
  int v6; // esi
  char *v8; // [esp+0h] [ebp-38h] BYREF
  int v9; // [esp+4h] [ebp-34h]
  int v10; // [esp+8h] [ebp-30h]
  _BYTE v11[25]; // [esp+13h] [ebp-25h] BYREF
  unsigned int v12; // [esp+2Ch] [ebp-Ch]

  v12 = __readgsdword(0x14u);
  v8 = nullptr;
  v9 = 0;
  v10 = 0;
  sub_2EA00((int)&v8, a2, a3);
  v3 = qtime64();
  format_timestamp(v11, 25, v3, v4, 0);
  if ( v9 )
    v5 = v8;
  else
    v5 = byte_EF875;
  v6 = sub_98F70("%s [%u] %s", v11, *(_DWORD *)(a1 + 84), v5);
  if ( v8 )
  {
    v9 = 0;
    qfree(v8);
    v8 = nullptr;
    v10 = 0;
  }
  return v6;
}
// 92F44: variable 'v4' is possibly undefined
