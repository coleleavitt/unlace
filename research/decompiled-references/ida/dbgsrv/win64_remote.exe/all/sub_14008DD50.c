/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14008DD50
// Address: 0x000000014008DD50

//----- (000000014008DD50) ----------------------------------------------------
void __fastcall __noreturn sub_14008DD50(__int64 a1, __int64 a2)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rcx

  v2 = *(void (__fastcall ****)(_QWORD, __int64))(a2 + 96);
  if ( v2 )
    (**v2)(v2, 1);
  sub_140005EF0((signed __int64)&qword_1400920C0);
}
// 1400920C0: using guessed type __int64 qword_1400920C0;
