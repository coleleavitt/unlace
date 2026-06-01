/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: create_zip_linput
// Address: 0x00000000000B92A0

//----- (00000000000B92A0) ----------------------------------------------------
_QWORD *__fastcall create_zip_linput(struct __pthread_internal_list *a1, __int64 a2, int a3)
{
  pthread_mutex_t *v6; // x19
  __int64 v7; // x0
  _QWORD *v9; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x5
  __int64 v15; // x6
  __int64 v16; // x7
  char v17; // [xsp+0h] [xbp-30h]

  v6 = (pthread_mutex_t *)operator new(0x80A8u);
  v6->__spins = a3;
  v6->__list.__prev = a1;
  v6->__list.__next = nullptr;
  v6[1].__align = a2;
  v6->__align = (__int64)off_1601B0;
  *((_WORD *)&v6[823].__align + 4) = 1;
  *(&v6->__align + 1) = 0;
  v6->__kind = 0;
  v6[3].__list.__prev = nullptr;
  v6[3].__list.__next = nullptr;
  *(&v6[3].__align + 1) = 0;
  *(&v6[3].__align + 2) = 0;
  v6[2].__list.__next = nullptr;
  v6[3].__align = 0;
  *(&v6[2].__align + 2) = 0;
  v6[2].__list.__prev = nullptr;
  v6[2].__align = 0;
  *(&v6[2].__align + 1) = 0;
  v6[1].__list.__prev = nullptr;
  v6[1].__list.__next = nullptr;
  v6[4].__size[0] = 0;
  *(&v6[1].__align + 1) = (__int64)(v6 + 4);
  *(&v6[1].__align + 2) = 0;
  v7 = sub_CCDB0(&v6[1].__align + 1, "1.3.1", 112);
  if ( (_DWORD)v7 )
  {
    if ( !under_debugger )
      v7 = (__int64)interr(192);
    __break(1u);
    v9 = (_QWORD *)v7;
    sub_BA53C(v6);
    operator delete(v6);
    Unwind_Resume(v9, v10, v11, v12, v13, v14, v15, v16, v17);
  }
  return create_generic_linput((__int64)v6);
}
// B9370: variable 'v10' is possibly undefined
// B9370: variable 'v11' is possibly undefined
// B9370: variable 'v12' is possibly undefined
// B9370: variable 'v13' is possibly undefined
// B9370: variable 'v14' is possibly undefined
// B9370: variable 'v15' is possibly undefined
// B9370: variable 'v16' is possibly undefined
// B9370: variable 'v17' is possibly undefined
// 1601B0: using guessed type __int64 (__fastcall *off_1601B0[3])();
// 168DF0: using guessed type char under_debugger;
