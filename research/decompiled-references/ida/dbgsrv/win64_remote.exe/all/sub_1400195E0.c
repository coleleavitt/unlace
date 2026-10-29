/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400195E0
// Address: 0x00000001400195E0

//----- (00000001400195E0) ----------------------------------------------------
__int64 __fastcall sub_1400195E0(__int64 a1, int a2, _QWORD *a3)
{
  int v5; // edx
  __int64 result; // rax
  int v7; // [rsp+30h] [rbp-28h] BYREF
  __int64 v8; // [rsp+38h] [rbp-20h]

  v7 = a2;
  v8 = 0;
  if ( qword_1400CAEA0
    && (v5 = ((__int64 (__fastcall *)(__int64, int *, __int64, int *, int, _QWORD))qword_1400CAEA0)(
               16,
               &v7,
               16,
               &v7,
               16,
               0),
        v5 >= 0)
    || (result = sub_140017F10(a1, (__int64)&v7, 0), v5 = result, (int)result >= 0) )
  {
    *a3 = v8;
    return (unsigned int)v5;
  }
  return result;
}
// 1400CAEA0: using guessed type __int64 (__fastcall *qword_1400CAEA0)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _DWORD);
