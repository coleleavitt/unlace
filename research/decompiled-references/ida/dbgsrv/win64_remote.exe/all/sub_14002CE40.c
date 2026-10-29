/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14002CE40
// Address: 0x000000014002CE40

//----- (000000014002CE40) ----------------------------------------------------
unsigned __int64 __fastcall sub_14002CE40(_QWORD *a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rcx
  unsigned __int64 result; // rax

  v1 = a1[1];
  if ( v1 <= 2 )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(278);
  }
  v3 = v1 - *(__int16 *)(v1 + *a1 - 2);
  v4 = v3 - 2;
  a1[3] = v3 - 2;
  if ( v3 == 2 || (result = v1 - 2, v4 > v1 - 2) )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(279);
  }
  return result;
}
// 1400CB61C: using guessed type char byte_1400CB61C;
