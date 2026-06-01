unsigned __int64 __fastcall ___ZN5dyld412RuntimeState9setUpTLVsEPKN5dyld313MachOAnalyzerE_block_invoke(
        unsigned __int64 result,
        _QWORD *a2,
        __int64 *a3)
{
  _QWORD *v5; // x20
  __int64 v6; // x23
  __int64 v7; // x22
  bool v8; // zf
  __int64 v9; // x9
  __int64 v10; // x8
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // t1
  const char *v14; // x1

  v5 = (_QWORD *)result;
  v6 = *(_QWORD *)(result + 40);
  v7 = *a3;
  if ( *(_BYTE *)(result + 64) )
    v8 = (_DWORD)v7 == 0;
  else
    v8 = 1;
  if ( v8 || (result = (***(__int64 (__fastcall ****)(_QWORD))(v6 + 120))(*(_QWORD *)(v6 + 120)), result < 4) )
  {
    v11 = *(_QWORD *)(v5[4] + 8LL);
    v13 = *(_QWORD *)(v11 + 48);
    v12 = v11 + 48;
    v10 = v13;
    if ( !v13 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v6 + 120) + 48LL))(*(_QWORD *)(v6 + 120), v12);
      if ( (_DWORD)result )
        dyld4::halt((dyld4 *)"could not create thread local variables pthread key", v14);
      v10 = *(_QWORD *)(*(_QWORD *)(v5[4] + 8LL) + 48LL);
    }
    goto LABEL_12;
  }
  result = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v6 + 120) + 168LL))(*(_QWORD *)(v6 + 120), v7);
  v9 = *(_QWORD *)(v5[4] + 8LL);
  v10 = *(_QWORD *)(v9 + 48);
  if ( !v10 )
  {
    *(_QWORD *)(v9 + 48) = (int)v7;
    goto LABEL_13;
  }
  if ( v10 != (int)v7 )
LABEL_12:
    *a3 = v10;
LABEL_13:
  if ( v5[6] != *a2 )
    *a2 = v5[7];
  return result;
}
