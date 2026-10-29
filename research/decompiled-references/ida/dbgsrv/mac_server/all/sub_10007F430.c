/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10007F430
// Address: 0x000000010007F430

//----- (000000010007F430) ----------------------------------------------------
_QWORD *__fastcall sub_10007F430(void *a1)
{
  void *v1; // rax
  unsigned __int8 v3; // dl
  __int64 v4; // rcx
  __int64 v5; // r8
  int v6; // [rsp+Ch] [rbp-14h] BYREF

  v1 = sub_10007E6B0();
  if ( (unsigned int)sub_10007E030((__int64)v1, &v6, (pid_t)a1, 0, 0xFFFFFFFF) + 1 < 2 || (~(_BYTE)v6 & 0x7F) != 0 )
    return nullptr;
  if ( under_debugger == 1 )
    BUG();
  interr(0x47Eu);
  return sub_10007F4B0((char *)0x47E, (char *)&v6, v3, v4, v5);
}
// 10007F4AC: variable 'v3' is possibly undefined
// 10007F4AC: variable 'v4' is possibly undefined
// 10007F4AC: variable 'v5' is possibly undefined
// 1000AE23D: using guessed type char under_debugger;
