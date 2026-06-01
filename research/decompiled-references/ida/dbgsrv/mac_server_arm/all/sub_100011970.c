/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100011970
// Address: 0x0000000100011970

//----- (0000000100011970) ----------------------------------------------------
_QWORD *__fastcall sub_100011970(__int64 a1, __int64 a2, int a3)
{
  void *v6; // x0
  __int64 v7; // x22
  void *v8; // x0
  _QWORD *result; // x0
  _QWORD v10[3]; // [xsp+0h] [xbp-50h] BYREF
  _QWORD v11[2]; // [xsp+18h] [xbp-38h] BYREF

  v6 = *(void **)a2;
  if ( *(_QWORD *)a2 )
  {
    *(_QWORD *)(a2 + 8) = 0;
    qfree(v6);
    *(_QWORD *)a2 = 0;
    *(_QWORD *)(a2 + 16) = 0;
  }
  v7 = *(_QWORD *)(a2 + 24);
  if ( v7 )
  {
    v8 = *(void **)(v7 + 8);
    if ( v8 )
    {
      *(_QWORD *)(v7 + 16) = 0;
      qfree(v8);
      *(_QWORD *)(v7 + 8) = 0;
      *(_QWORD *)(v7 + 24) = 0;
    }
    if ( *(_BYTE *)(v7 + 48) == 1 )
    {
      close_linput(*(void **)(v7 + 32));
      *(_QWORD *)(v7 + 32) = 0;
    }
  }
  memset(v10, 0, sizeof(v10));
  v11[0] = off_1000993C8;
  v11[1] = v10;
  result = (_QWORD *)sub_10000F5AC(a1, (__int64)v11);
  if ( (_DWORD)result )
  {
    sub_100010C14(a1, (__int64)v10, (__int64 *)a2);
    result = sub_1000116BC(a1, (__int64)v10, a3);
    if ( result )
    {
      *(_QWORD *)(a2 + 24) = result;
      *(_BYTE *)(a2 + 32) = 1;
    }
  }
  return result;
}
// 1000993C8: using guessed type __int64 (__fastcall *off_1000993C8[37])();
