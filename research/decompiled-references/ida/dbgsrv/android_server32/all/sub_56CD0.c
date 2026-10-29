/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_56CD0
// Address: 0x00056CD0

//----- (00056CD0) --------------------------------------------------------
int __fastcall sub_56CD0(_DWORD *a1, int *a2)
{
  int v2; // r4
  unsigned __int8 *v3; // r5
  void *v4; // r0
  void *ptr; // [sp+0h] [bp-10h] BYREF
  char v7; // [sp+8h] [bp-8h]

  v2 = *a2;
  sub_56D3C((int)&ptr, a1, a2);
  v3 = (unsigned __int8 *)ptr;
  ptr = nullptr;
  if ( v3 )
  {
    if ( v7 )
    {
      v4 = *((void **)v3 + 5);
      if ( v4 )
      {
        *((_DWORD *)v3 + 6) = 0;
        qfree(v4);
        *((_DWORD *)v3 + 7) = 0;
        *((_DWORD *)v3 + 5) = 0;
      }
      if ( v3[8] << 31 )
        operator delete(*((void **)v3 + 4));
    }
    operator delete(v3);
  }
  return v2;
}
