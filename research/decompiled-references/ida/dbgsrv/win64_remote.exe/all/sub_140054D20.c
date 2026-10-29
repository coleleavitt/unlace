/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140054D20
// Address: 0x0000000140054D20

//----- (0000000140054D20) ----------------------------------------------------
void __fastcall sub_140054D20(unsigned int a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int128 v3; // kr00_16
  _QWORD *v4; // rbx
  _QWORD *v5; // rdi

  v2 = (struct _RTL_CRITICAL_SECTION *)qword_1400CB150;
  sub_14005D6B0((struct _RTL_CRITICAL_SECTION *)qword_1400CB150);
  v3 = *(_OWORD *)&xmmword_1400CB158;
  *(_OWORD *)&xmmword_1400CB158 = 0;
  qword_1400CB168 = 0;
  sub_14005D6D0(v2);
  v4 = (_QWORD *)v3;
  v5 = (_QWORD *)(v3 + 8LL * *((_QWORD *)&v3 + 1));
  if ( (_QWORD *)v3 != v5 )
  {
    do
    {
      (**(void (__fastcall ***)(_QWORD, _QWORD))*v4)(*v4, a1);
      ++v4;
    }
    while ( v4 != v5 );
  }
  if ( (_QWORD)v3 )
    j_free((void *)v3);
}
// 1400CB150: using guessed type __int64 qword_1400CB150;
// 1400CB168: using guessed type __int64 qword_1400CB168;
