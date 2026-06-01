/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400540A0
// Address: 0x00000001400540A0

//----- (00000001400540A0) ----------------------------------------------------
int __fastcall sub_1400540A0(__int64 a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx

  v2 = operator new(0x10u);
  v3 = v2;
  if ( v2 )
  {
    sub_140054BB0(v2);
    *v3 = &off_140099588;
    v3[1] = a1;
  }
  return sub_140054DF0();
}
// 140099588: using guessed type __int64 (__fastcall *off_140099588)();
