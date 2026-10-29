/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006AED0
// Address: 0x000000010006AED0

//----- (000000010006AED0) ----------------------------------------------------
__int64 __fastcall sub_10006AED0(_BYTE *a1, int a2, char *a3, __va_list_tag *a4)
{
  unsigned __int8 v6; // cl
  unsigned int v7; // r12d
  void *v8; // rax
  __int128 v9; // kr00_16
  __int64 result; // rax
  _Unwind_Exception *v11; // rax
  int v12; // edx
  __int128 v13; // [rsp+0h] [rbp-60h] BYREF
  __int64 v14; // [rsp+10h] [rbp-50h]
  void *v15[3]; // [rsp+18h] [rbp-48h] BYREF

  if ( a1[68] == 1 )
  {
    if ( under_debugger == 1 )
      BUG();
    interr(0x655u);
    if ( v12 )
      sub_100001690(v11);
    _Unwind_Resume(v11);
  }
  v6 = 53;
  if ( a2 )
    v6 = (2 * (a2 > 0)) | 0x34;
  v7 = v6;
  sub_10006B790((__int64)v15, v6);
  v13 = 0;
  v14 = 0;
  sub_10000C630((__int64)&v13, a3, a4);
  sub_100055750((__int64)v15, (__int64)&v13);
  v8 = (void *)(*(__int64 (__fastcall **)(_BYTE *, _QWORD, void **))(*(_QWORD *)a1 + 16LL))(a1, v7, v15);
  qfree(v8);
  if ( a2 < 0 )
    exit(1);
  v9 = v13;
  if ( (_QWORD)v13 )
  {
    *((_QWORD *)&v13 + 1) = 0;
    qfree((void *)v9);
  }
  if ( v15[0] )
  {
    v15[1] = nullptr;
    qfree(v15[0]);
  }
  result = 0;
  if ( *((_QWORD *)&v9 + 1) )
    return *((_QWORD *)&v9 + 1) - 1LL;
  return result;
}
// 10006AFFA: variable 'v12' is possibly undefined
// 10006AFFF: variable 'v11' is possibly undefined
// 1000AE23D: using guessed type char under_debugger;
