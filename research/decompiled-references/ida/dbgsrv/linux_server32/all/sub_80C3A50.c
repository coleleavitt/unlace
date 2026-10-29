/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C3A50
// Address: 0x080C3A50

//----- (080C3A50) --------------------------------------------------------
unsigned int __cdecl sub_80C3A50(unsigned int a1, const char *a2, int a3)
{
  unsigned int v3; // esi
  char *v5; // eax
  int v6; // [esp-Ch] [ebp-34h]
  int v7; // [esp-8h] [ebp-30h]
  int v8; // [esp-4h] [ebp-2Ch]
  void *ptr; // [esp+0h] [ebp-28h] BYREF
  int v10; // [esp+4h] [ebp-24h]
  int v11; // [esp+8h] [ebp-20h]
  unsigned int v12; // [esp+Ch] [ebp-1Ch]

  v3 = a1;
  v12 = __readgsdword(0x14u);
  if ( a3 < 0 )
  {
    if ( !byte_811F8A1 )
    {
      if ( v12 == __readgsdword(0x14u) )
        sub_80CFF40(1225, v6, v7, v8);
      sub_80D7AB0();
    }
    JUMPOUT(0x8051E83);
  }
  if ( a3 )
  {
    ptr = nullptr;
    v10 = 0;
    v11 = 0;
    sub_80C36F0((int)&ptr, a2, -1, a3);
    v5 = (char *)&dword_80DDFD8;
    if ( v10 )
      v5 = (char *)ptr;
    v3 = sub_80D0740(a1, v5, a3);
    if ( ptr )
    {
      v10 = 0;
      sub_80CF780(ptr);
    }
  }
  if ( v12 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v3;
}
// 80C3B13: control flows out of bounds to 8051E83
// 80C3B2F: variable 'v6' is possibly undefined
// 80C3B2F: variable 'v7' is possibly undefined
// 80C3B2F: variable 'v8' is possibly undefined
// 80DDFD8: using guessed type int dword_80DDFD8;
// 811F8A1: using guessed type char byte_811F8A1;
