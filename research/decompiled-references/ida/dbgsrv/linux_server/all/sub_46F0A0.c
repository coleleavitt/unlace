/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46F0A0
// Address: 0x000000000046F0A0

//----- (000000000046F0A0) ----------------------------------------------------
__int64 __fastcall sub_46F0A0(_QWORD *a1)
{
  __int64 v1; // rbp
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v1 + 72LL))(*a1);
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
  }
  *a1 = 0;
  return result;
}
