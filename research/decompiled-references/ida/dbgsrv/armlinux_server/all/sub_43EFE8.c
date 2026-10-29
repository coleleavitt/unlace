/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43EFE8
// Address: 0x000000000043EFE8

//----- (000000000043EFE8) ----------------------------------------------------
__int64 sub_43EFE8()
{
  pthread_mutex_t *v0; // x0
  bool v1; // zf
  _QWORD *v2; // x21
  void *v3; // x0
  __int64 v4; // x2
  __int64 *v5; // x0
  char *v6; // x0
  __int64 v8; // x0
  void *v9; // x1
  void *ptr; // [xsp+20h] [xbp-1020h] BYREF
  __int64 v11; // [xsp+28h] [xbp-1018h]
  __int64 v12; // [xsp+30h] [xbp-1010h]
  char v13[4096]; // [xsp+38h] [xbp-1008h] BYREF
  __int64 v14; // [xsp+1038h] [xbp-8h]

  sub_492398((__int64)sub_440348);
  qword_522288 = (__int64)sub_494418();
  v0 = sub_494418();
  if ( qword_522288 )
    v1 = v0 == nullptr;
  else
    v1 = 1;
  qword_522180 = (__int64)v0;
  if ( v1 )
  {
    if ( !under_debugger )
      goto LABEL_8;
    goto LABEL_7;
  }
  v2 = (_QWORD *)sub_43CF60();
  v3 = sub_454DF0(nullptr, 0, 0, 0);
  v2[4] = v3;
  sub_452460((__int64)v3, (__int64)sub_4350E0);
  v4 = qword_520148;
  v2[5] = off_520150;
  v2[6] = v4;
  sub_43E7F0("object", 0);
  sub_43E7F0("typeinfo", 0);
  sub_43E7F0("exception", 0);
  if ( off_520168 )
    ((void (*)(void))off_520168)();
  if ( !byte_522469 || (v5 = off_520228(), (v6 = sub_452070(v5, v13, 4096, (__int64)"idc.idc", nullptr, 0)) == nullptr) )
  {
LABEL_19:
    if ( !(unsigned int)sub_43B878((__int64)qword_5201A8) )
      return v14 ^ _stack_chk_guard;
    if ( !under_debugger )
      sub_492270(1447);
LABEL_7:
    __break(0x3E8u);
LABEL_8:
    sub_492270(486);
  }
  ptr = nullptr;
  v11 = 0;
  v12 = 0;
  if ( (unsigned __int8)sub_43A6A8((__int64)v6, (__int64)&ptr, 0) )
  {
    v8 = sub_454EF0(v2[4]);
    v9 = ptr;
    v2[3] = v8;
    if ( v9 )
    {
      v11 = 0;
      j__free(v9);
    }
    goto LABEL_19;
  }
  sub_41A920("%s");
  if ( ptr )
  {
    v11 = 0;
    j__free(ptr);
  }
  return v14 ^ _stack_chk_guard;
}
// 520148: using guessed type __int64 qword_520148;
// 520150: using guessed type _UNKNOWN **off_520150;
// 520168: using guessed type _UNKNOWN *off_520168;
// 5201A8: using guessed type __int64 qword_5201A8[2];
// 520228: using guessed type __int64 *(*off_520228)();
// 522180: using guessed type __int64 qword_522180;
// 522288: using guessed type __int64 qword_522288;
// 522469: using guessed type char byte_522469;
// 52451C: using guessed type char under_debugger;
