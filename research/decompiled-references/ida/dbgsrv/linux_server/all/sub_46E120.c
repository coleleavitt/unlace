/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46E120
// Address: 0x000000000046E120

//----- (000000000046E120) ----------------------------------------------------
pthread_mutex_t *__fastcall sub_46E120(__int64 a1, char a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rbp
  pthread_mutex_t *result; // rax
  __int64 v5; // rbp

  *(_QWORD *)a1 = qword_4C4C18;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_OWORD *)(a1 + 16) = 0;
  *(_OWORD *)(a1 + 40) = 0;
  *(_OWORD *)(a1 + 64) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 96) = sub_481E10();
  *(_DWORD *)(a1 + 104) = 0x1FFFF;
  if ( a2 )
  {
    v2 = operator new(0x40u);
    *(_DWORD *)(v2 + 16) = 0;
    v3 = (_QWORD *)v2;
    v2 += 16;
    *(_QWORD *)(v2 + 8) = 0;
    v3[4] = v2;
    v3[5] = v2;
    v3[6] = 0;
    *v3 = &off_4C3CA8;
    result = sub_482C40();
    v3[7] = result;
    if ( !result )
    {
      if ( !byte_4C94E1 )
        sub_481AC0(1540);
      BUG();
    }
    *(_QWORD *)(a1 + 88) = v3;
  }
  else
  {
    v5 = operator new(0x38u);
    *(_QWORD *)v5 = &off_4C3C70;
    *(_DWORD *)(v5 + 16) = 0;
    *(_QWORD *)(v5 + 24) = 0;
    *(_QWORD *)(v5 + 32) = v5 + 16;
    *(_QWORD *)(v5 + 40) = v5 + 16;
    *(_QWORD *)(v5 + 48) = 0;
    *(_QWORD *)(a1 + 88) = v5;
    return (pthread_mutex_t *)(v5 + 16);
  }
  return result;
}
// 4C3C70: using guessed type __int64 (__fastcall *off_4C3C70)();
// 4C3CA8: using guessed type _UNKNOWN *off_4C3CA8;
// 4C4C18: using guessed type __int64 qword_4C4C18[2];
// 4C94E1: using guessed type char byte_4C94E1;
