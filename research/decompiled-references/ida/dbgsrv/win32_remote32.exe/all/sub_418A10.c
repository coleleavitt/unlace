/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_418A10
// Address: 0x00418A10

//----- (00418A10) --------------------------------------------------------
int __thiscall sub_418A10(void *this, int a2)
{
  int v2; // eax
  int v3; // ecx

  v2 = (*(int (__stdcall **)(void *, int))(*(_DWORD *)this + 320))(this, a2);
  v3 = 4;
  if ( v2 )
    return v2;
  return v3;
}
