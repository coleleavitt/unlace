/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006AB40
// Address: 0x000000010006AB40

//----- (000000010006AB40) ----------------------------------------------------
__int64 __fastcall sub_10006AB40(_QWORD *a1)
{
  __int64 v1; // r14
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
