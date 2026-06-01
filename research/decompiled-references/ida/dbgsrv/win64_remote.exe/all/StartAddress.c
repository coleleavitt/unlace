/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: StartAddress
// Address: 0x0000000140005EA0

//----- (0000000140005EA0) ----------------------------------------------------
void __fastcall __noreturn StartAddress(LPVOID lpThreadParameter)
{
  __int64 v1; // rbx
  bool v2; // al
  void *v3; // rcx

  while ( 1 )
  {
    sub_14005D730((void *)qword_1400CAE08);
    sub_14005D750((void *)qword_1400CAE10, 0xFFFFFFFF);
    v1 = qword_1400CAE18;
    v2 = sub_140007AD0(qword_1400CAE18);
    v3 = *(void **)(v1 + 288);
    *(_BYTE *)(v1 + 112) = v2;
    sub_14005D730(v3);
  }
}
// 1400CAE08: using guessed type __int64 qword_1400CAE08;
// 1400CAE10: using guessed type __int64 qword_1400CAE10;
// 1400CAE18: using guessed type __int64 qword_1400CAE18;
