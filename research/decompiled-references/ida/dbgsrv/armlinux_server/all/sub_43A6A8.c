/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43A6A8
// Address: 0x000000000043A6A8

//----- (000000000043A6A8) ----------------------------------------------------
__int64 __fastcall sub_43A6A8(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // x20
  pthread_mutex_t *v6; // x22
  __int64 *v7; // x0
  unsigned __int8 v8; // w24
  __int64 v9; // x21
  _QWORD *v10; // x1
  unsigned int v11; // w20
  _QWORD v13[2]; // [xsp+48h] [xbp-18h] BYREF

  v3 = a3;
  v6 = (pthread_mutex_t *)qword_522288;
  sub_494720((pthread_mutex_t *)qword_522288);
  v7 = off_520228();
  sub_4524C8(v7, nullptr, 0);
  v8 = v3 & 1;
  v9 = sub_43CF60();
  if ( (unsigned int)sub_455000(*(_QWORD *)(v9 + 32), a1) )
  {
    sub_43A0C8(*(_QWORD *)(v9 + 32), 0, a2);
    sub_455210(*(_QWORD *)(v9 + 32), v8);
    v11 = 0;
  }
  else
  {
    v10 = v13;
    if ( (v3 & 2) == 0 )
      v10 = nullptr;
    v13[0] = &off_51A540;
    v13[1] = -1;
    v11 = (unsigned __int8)sub_43A350(v9, (__int64)v10, a2, ((v3 ^ 4) & 4) != 0);
    sub_455210(*(_QWORD *)(v9 + 32), v8);
  }
  sub_494760(v6);
  return v11;
}
// 455000: using guessed type __int64 __fastcall sub_455000(_QWORD, _QWORD);
// 51A540: using guessed type __int64 (__fastcall *off_51A540)();
// 520228: using guessed type __int64 *(*off_520228)();
// 522288: using guessed type __int64 qword_522288;
