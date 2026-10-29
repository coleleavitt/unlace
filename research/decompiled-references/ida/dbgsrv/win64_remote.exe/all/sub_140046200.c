/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140046200
// Address: 0x0000000140046200

//----- (0000000140046200) ----------------------------------------------------
__int64 __fastcall sub_140046200(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rax
  unsigned int v6; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v4 = sub_140040170();
  if ( (*(__int64 (__fastcall **)(__int64, __int64, unsigned int *, __int64, _QWORD))(*(_QWORD *)v4 + 280LL))(
         v4,
         v2,
         &v6,
         4,
         0) != 4 )
    return sub_140020490(a2, "read error");
  *(_QWORD *)(a2 + 8) = v6;
  return 0;
}
