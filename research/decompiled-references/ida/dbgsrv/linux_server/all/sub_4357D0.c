/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4357D0
// Address: 0x00000000004357D0

//----- (00000000004357D0) ----------------------------------------------------
__int64 __fastcall sub_4357D0(
        __int64 a1,
        __int64 a2,
        char a3,
        double a4,
        double a5,
        double a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  pthread_mutex_t *v13; // r12
  __int64 *v14; // rax
  __int64 v15; // r14
  double v16; // xmm4_8
  double v17; // xmm5_8
  _QWORD *v18; // rsi
  unsigned int v19; // eax
  unsigned __int8 v20; // si
  unsigned int v21; // ebx
  _QWORD v23[11]; // [rsp+0h] [rbp-58h] BYREF

  v23[3] = __readfsqword(0x28u);
  v13 = (pthread_mutex_t *)qword_4C8210;
  sub_482EC0((pthread_mutex_t *)qword_4C8210);
  v14 = off_4C61C0();
  sub_44A740(v14, nullptr, 0);
  v15 = sub_438630();
  if ( (unsigned int)sub_451640(*(_QWORD *)(v15 + 32), a1) )
  {
    sub_4352C0(*(_QWORD *)(v15 + 32), 0, a2);
    sub_451940(*(_QWORD *)(v15 + 32), a3 & 1);
    v21 = 0;
  }
  else
  {
    v18 = v23;
    v23[1] = -1;
    v23[0] = &off_4C2C28;
    if ( (a3 & 2) == 0 )
      v18 = nullptr;
    v19 = sub_435540(v15, (__int64)v18, a2, (a3 & 4) == 0, a4, a5, a6, a7, v16, v17, a10, a11);
    v20 = a3 & 1;
    v21 = v19;
    sub_451940(*(_QWORD *)(v15 + 32), v20);
  }
  sub_482F10(v13);
  return v21;
}
// 43586F: variable 'v16' is possibly undefined
// 43586F: variable 'v17' is possibly undefined
// 451640: using guessed type __int64 __fastcall sub_451640(_QWORD, _QWORD);
// 4C2C28: using guessed type __int64 (__fastcall *off_4C2C28)();
// 4C61C0: using guessed type __int64 *(*off_4C61C0)();
