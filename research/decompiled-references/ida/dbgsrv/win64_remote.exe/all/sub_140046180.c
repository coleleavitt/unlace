/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140046180
// Address: 0x0000000140046180

//----- (0000000140046180) ----------------------------------------------------
__int64 __fastcall sub_140046180(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rax
  unsigned __int8 v6; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v4 = sub_140040170();
  if ( (*(__int64 (__fastcall **)(__int64, __int64, unsigned __int8 *, __int64, _QWORD))(*(_QWORD *)v4 + 280LL))(
         v4,
         v2,
         &v6,
         1,
         0) != 1 )
    return sub_140020490(a2, "read error");
  *(_QWORD *)(a2 + 8) = v6;
  return 0;
}
