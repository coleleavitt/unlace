/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_467830
// Address: 0x00467830

//----- (00467830) --------------------------------------------------------
int __cdecl sub_467830(int *a1, int a2)
{
  int *v2; // ebx
  int v3; // ebp
  void *v4; // esi
  void (__stdcall *v5)(int *); // eax
  EXCEPTION_RECORD ExceptionRecord; // [esp+0h] [ebp-50h] BYREF

  v2 = a1;
  ExceptionRecord.ExceptionCode = -2147483610;
  memset(&ExceptionRecord.ExceptionFlags, 0, 16);
  v3 = *a1;
  v4 = (void *)a1[6];
  if ( v4 != (void *)__readfsdword(0) )
  {
    RtlUnwind(v4, &loc_467882, &ExceptionRecord, nullptr);
    v2 = a1;
  }
  if ( v4 )
  {
    if ( sub_467CF7((int)(v2 + 8)) && v2[8] == 1447244336 )
    {
      v5 = (void (__stdcall *)(int *))v2[9];
      if ( v5 )
        v5(v2);
    }
    else
    {
      sub_467950(v3, (int)v4, v2[7]);
    }
  }
  sub_467A00(v2[5], v3, 0);
  return ((int (*)(void))v2[5])();
}
