/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A9510
// Address: 0x00000000000A9510

//----- (00000000000A9510) ----------------------------------------------------
char *__fastcall sub_A9510(__int64 a1, char a2, __int16 a3, char *a4)
{
  _QWORD *v7; // x0
  pthread_mutex_t *v8; // x0
  char *result; // x0
  size_t v10; // x21
  void *v11; // x8
  char *v12; // x22
  char src[4096]; // [xsp+8h] [xbp-1048h] BYREF
  __int64 v14; // [xsp+1008h] [xbp-48h] BYREF

  v14 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  ((void (__fastcall *)(__int64, _QWORD))loc_A3840)(a1, a2 & 1);
  *(_QWORD *)a1 = off_15F3E8;
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 184) = 0;
  *(_QWORD *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 200) = 0;
  *(_QWORD *)(a1 + 160) = 0;
  *(_QWORD *)(a1 + 168) = 0;
  *(_QWORD *)(a1 + 144) = 0;
  *(_QWORD *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 136) = 0;
  *(_QWORD *)(a1 + 120) = 0;
  *(_WORD *)(a1 + 176) = 0;
  v7 = operator new(0x10u);
  *v7 = &off_15F588;
  v7[1] = a1;
  *(_QWORD *)(a1 + 168) = v7;
  *(_WORD *)(a1 + 104) = a3;
  sub_B7020(src, 0x1000u);
  v8 = (pthread_mutex_t *)qbasename(src);
  qstrncpy(v8, a4, (char *)&v14 - (char *)v8);
  result = (char *)__strlen_chk(src, 4096);
  v10 = (size_t)result;
  if ( result )
  {
    v11 = *(void **)(a1 + 112);
    v12 = result + 1;
    if ( *(_QWORD *)(a1 + 128) < (unsigned __int64)(result + 1) )
    {
      v11 = qvector_reserve((pthread_mutex_t *)(a1 + 112), *(void **)(a1 + 112), (unsigned __int64)(result + 1), 1u);
      *(_QWORD *)(a1 + 112) = v11;
    }
    *(_QWORD *)(a1 + 120) = v12;
    result = (char *)memmove(v11, src, v10);
    *(_BYTE *)(*(_QWORD *)(a1 + 112) + v10) = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 120) = 0;
  }
  return result;
}
// 37590: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);
// 15F3E8: using guessed type __int64 (__fastcall *off_15F3E8[3])();
// 15F588: using guessed type __int64 (__fastcall *off_15F588)();
