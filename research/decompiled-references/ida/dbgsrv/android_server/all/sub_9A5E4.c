/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9A5E4
// Address: 0x000000000009A5E4

//----- (000000000009A5E4) ----------------------------------------------------
bool __fastcall sub_9A5E4(__int64 *a1, char a2)
{
  __int64 v2; // x8

  v2 = *a1;
  *((_BYTE *)a1 + 184) = a2 & 1;
  return (*(unsigned int (__fastcall **)(__int64 *, __int64 *))(v2 + 168))(a1, a1 + 21) == 1;
}
