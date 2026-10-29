/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100045D60
// Address: 0x0000000100045D60

//----- (0000000100045D60) ----------------------------------------------------
__int64 **__fastcall sub_100045D60(__int64 a1, const char *a2)
{
  _QWORD *v2; // rbx
  size_t v3; // rax
  size_t v4; // r15
  char *v5; // r12
  size_t v6; // r13
  __int64 **v7; // rbx
  __int64 **result; // rax
  _QWORD __dst[2]; // [rsp+8h] [rbp-48h] BYREF
  void *__p; // [rsp+18h] [rbp-38h]

  v2 = *(_QWORD **)(a1 + 520);
  v3 = strlen(a2);
  if ( v3 >= 0xFFFFFFFFFFFFFFF8LL )
    sub_10004CF00();
  v4 = v3;
  if ( v3 >= 0x17 )
  {
    v6 = 26;
    if ( (v3 | 7) != 0x17 )
      v6 = (v3 | 7) + 1;
    v5 = (char *)operator new(v6);
    __p = v5;
    __dst[0] = v6 + 1;
    __dst[1] = v4;
    goto LABEL_8;
  }
  LOBYTE(__dst[0]) = 2 * v3;
  v5 = (char *)__dst + 1;
  if ( v3 )
LABEL_8:
    memcpy(v5, a2, v4);
  v5[v4] = 0;
  v7 = sub_10004DC80(v2, (unsigned __int8 *)__dst);
  if ( (__dst[0] & 1) != 0 )
    operator delete(__p);
  result = v7 + 5;
  if ( !v7 )
    return nullptr;
  return result;
}
