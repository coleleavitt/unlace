/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140046330
// Address: 0x0000000140046330

//----- (0000000140046330) ----------------------------------------------------
__int64 __fastcall sub_140046330(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rax
  __int64 v6; // rbx
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v4 = sub_140040170();
  if ( (*(__int64 (__fastcall **)(__int64, __int64, __int64 *, __int64, _QWORD))(*(_QWORD *)v4 + 280LL))(
         v4,
         v2,
         &v7,
         8,
         0) != 8 )
    return sub_140020490(a2, "read error");
  v6 = v7;
  sub_140029390(a2);
  *(_QWORD *)(a2 + 8) = v6;
  *(_BYTE *)a2 = 9;
  return 0;
}
