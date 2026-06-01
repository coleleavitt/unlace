/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_391C0
// Address: 0x000391C0

//----- (000391C0) --------------------------------------------------------
void __fastcall sub_391C0(int a1, char *s, int a3)
{
  _DWORD *v4; // r5
  int v7; // r10
  size_t v8; // r9
  void *ptr; // [sp+8h] [bp-14h] BYREF
  size_t v10; // [sp+Ch] [bp-10h]
  int v11; // [sp+10h] [bp-Ch]

  v4 = *(_DWORD **)(a1 + 108);
  if ( v4 )
  {
    v7 = *(_DWORD *)(a1 + 116);
    ptr = nullptr;
    v10 = 0;
    v11 = 0;
    if ( s )
    {
      v8 = strlen(s);
      ptr = sub_78018((int)&ptr, nullptr, v8 + 1, 1u);
      v10 = v8 + 1;
      memmove(ptr, s, v8);
      *((_BYTE *)ptr + v8) = 0;
    }
    sub_3EAC0(v4, v7, (int)&ptr);
    if ( ptr )
    {
      v10 = 0;
      sub_77F70(ptr);
    }
    sub_3ED0C(*(_DWORD **)(a1 + 108), *(_DWORD *)(a1 + 116), a3);
  }
}
