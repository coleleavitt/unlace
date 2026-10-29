/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400545F0
// Address: 0x00000001400545F0

//----- (00000001400545F0) ----------------------------------------------------
__int64 __fastcall sub_1400545F0(_QWORD *a1)
{
  __int64 v1; // rdi
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v1 + 64LL))(*a1);
    result = (**(__int64 (__fastcall ***)(__int64, __int64))v1)(v1, 1);
    *a1 = 0;
  }
  else
  {
    *a1 = 0;
  }
  return result;
}
