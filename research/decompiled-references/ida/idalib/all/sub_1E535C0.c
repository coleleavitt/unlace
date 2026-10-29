__int64 __fastcall sub_1E535C0(__int64 a1, unsigned int a2, __int64 *a3, unsigned int a4)
{
  __int64 v4; // r9
  __int64 result; // rax
  unsigned __int64 v6; // r8
  _BYTE *v8; // rcx
  __int64 v9; // rax
  unsigned __int8 v10; // [rsp+1h] [rbp-79h]
  __int64 (__fastcall **v11)(); // [rsp+2h] [rbp-78h] BYREF
  int v12; // [rsp+Ah] [rbp-70h]
  void **p_ptr; // [rsp+12h] [rbp-68h]
  char v14; // [rsp+1Ah] [rbp-60h]
  int v15; // [rsp+1Eh] [rbp-5Ch]
  void *ptr; // [rsp+22h] [rbp-58h] BYREF
  __int64 v17; // [rsp+2Ah] [rbp-50h]
  _BYTE v18[72]; // [rsp+32h] [rbp-48h] BYREF

  v4 = *a3;
  result = 0;
  v6 = *a3 & 0xFFFFFFFFFFFFFFF0LL;
  if ( (*(_BYTE *)(*(_QWORD *)v6 + 17LL) & 1) != 0 )
  {
    v17 = 0x200000000LL;
    v8 = v18;
    v11 = off_2C6ECE0;
    ptr = v18;
    p_ptr = &ptr;
    v14 = 0;
    v15 = -1;
    v12 = 16842752;
    if ( v6 )
    {
      v9 = *(_QWORD *)v6;
      v6 = 0;
      if ( (*(_BYTE *)(v9 + 17) & 1) != 0 )
      {
        sub_BC8430((__int64)&v11, v4);
        v8 = ptr;
        v6 = (unsigned int)v17;
      }
    }
    result = sub_1E50B50(a1, a2, a4, (__int64)v8, v6, v4);
    if ( ptr != v18 )
    {
      v10 = result;
      free(ptr);
      return v10;
    }
  }
  return result;
}
