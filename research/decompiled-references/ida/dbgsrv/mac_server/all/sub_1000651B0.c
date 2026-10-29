/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000651B0
// Address: 0x00000001000651B0

//----- (00000001000651B0) ----------------------------------------------------
__int64 __fastcall sub_1000651B0(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  const char *v4; // rsi
  int v5; // eax
  unsigned int v6; // r12d
  __int64 result; // rax
  unsigned int v8; // eax
  _Unwind_Exception *v9; // rax
  int v10; // edx
  int v11; // [rsp+0h] [rbp-50h] BYREF
  void *v12; // [rsp+8h] [rbp-48h]
  __int128 v13; // [rsp+10h] [rbp-40h]

  v3 = sub_100064B70();
  if ( *(_QWORD *)(a1 + 48) )
    v4 = *(const char **)(a1 + 40);
  else
    v4 = _s1;
  v5 = (*(__int64 (__fastcall **)(__int64, const char *, _QWORD))(*(_QWORD *)v3 + 488LL))(v3, v4, 0);
  if ( v5 < 0 )
  {
    if ( under_debugger == 1 )
      BUG();
    interr(0x7567u);
    if ( v10 )
      sub_100001690(v9);
    _Unwind_Resume(v9);
  }
  v6 = v5;
  result = idcv_int64((unsigned __int8 *)a1);
  if ( !(_DWORD)result )
  {
    v11 = -2;
    v13 = 0;
    v12 = *(void **)(a1 + 8);
    v8 = sub_100064B80();
    *(_QWORD *)(a2 + 8) = (*(int (__fastcall **)(__int64, _QWORD, _QWORD, int *, _QWORD))(*(_QWORD *)v3 + 232LL))(
                            v3,
                            v8,
                            v6,
                            &v11,
                            0);
    result = 0;
    if ( v11 >= -1 )
    {
      if ( v12 )
      {
        *(_QWORD *)&v13 = 0;
        qfree(v12);
        return 0;
      }
    }
  }
  return result;
}
// 1000652B6: variable 'v10' is possibly undefined
// 1000652BB: variable 'v9' is possibly undefined
// 1000AE23D: using guessed type char under_debugger;
