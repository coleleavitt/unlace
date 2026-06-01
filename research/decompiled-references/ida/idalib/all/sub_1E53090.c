__int64 __fastcall sub_1E53090(__int64 a1, unsigned int *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  unsigned int v7; // r12d
  __int64 result; // rax
  __int64 v10; // rsi
  __int64 v11; // r9
  unsigned __int8 v12; // [rsp+1h] [rbp-79h]
  __int64 (__fastcall **v13)(); // [rsp+2h] [rbp-78h] BYREF
  int v14; // [rsp+Ah] [rbp-70h]
  void **p_ptr; // [rsp+12h] [rbp-68h]
  char v16; // [rsp+1Ah] [rbp-60h]
  int v17; // [rsp+1Eh] [rbp-5Ch]
  void *ptr; // [rsp+22h] [rbp-58h] BYREF
  __int64 v19; // [rsp+2Ah] [rbp-50h]
  _BYTE v20[72]; // [rsp+32h] [rbp-48h] BYREF

  v6 = *((_QWORD *)a2 + 1);
  if ( !v6 )
    return 0;
  v7 = a3;
  if ( !(unsigned __int8)sub_E91760(v6, (__int64)a2, a3, a4, a5, a6) )
    return 0;
  v10 = *((_QWORD *)a2 + 1);
  v19 = 0x200000000LL;
  v13 = off_2C6ECE0;
  ptr = v20;
  p_ptr = &ptr;
  v16 = 0;
  v17 = -1;
  v14 = 16842752;
  sub_BC8510((__int64)&v13, v10);
  result = sub_1E50B50(a1, *a2, v7, (__int64)ptr, (unsigned int)v19, v11);
  if ( ptr != v20 )
  {
    v12 = result;
    free(ptr);
    return v12;
  }
  return result;
}
