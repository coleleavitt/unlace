/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140040EE0
// Address: 0x0000000140040EE0

//----- (0000000140040EE0) ----------------------------------------------------
char __fastcall sub_140040EE0(__int64 a1, int a2)
{
  _QWORD *v3; // rax
  struct _exception *v4; // rcx
  void *v5; // rdi
  int v6; // ebx

  if ( a2 )
  {
    if ( *(_QWORD *)(a1 + 456) )
      v4 = *(struct _exception **)(a1 + 448);
    else
      v4 = (struct _exception *)Str1;
    v3 = sub_1400639D0(v4, 0);
    v5 = v3;
    if ( v3 )
    {
      v6 = sub_1400692E0((__int64)v3);
      sub_140063970(v5);
      LOBYTE(v3) = v6 == a2;
    }
  }
  else
  {
    LOBYTE(v3) = 1;
  }
  return (char)v3;
}
