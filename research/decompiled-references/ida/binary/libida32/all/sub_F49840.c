_DWORD *__fastcall sub_F49840(_DWORD **a1, _QWORD *a2, unsigned int a3)
{
  unsigned int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _DWORD *result; // rax
  __int64 v11; // [rsp+8h] [rbp-50h]
  void *ptr[2]; // [rsp+10h] [rbp-48h] BYREF
  __int64 v13; // [rsp+20h] [rbp-38h]

  v4 = 0;
  if ( (unsigned __int8)(*((_WORD *)*a1 + 9) >> 3) != 6 )
    v4 = a3;
  *a1[1] = v4;
  v5 = *((_QWORD *)*a1 + 4);
  if ( v5 )
  {
    *(_OWORD *)ptr = 0;
    v13 = 0;
    sub_E6CB50((__int64)ptr, a2, v5, ((unsigned __int64)a3 << 32) | a3);
    sub_E6D460((__int64 *)ptr, a2, v6, v7, v8, v9);
    if ( HIDWORD(v13) )
    {
      v11 = v5;
      free(ptr[1]);
      v5 = v11;
    }
  }
  *((_QWORD *)a1[1] + 1) = v5;
  result = a1[1];
  result[4] = a3;
  return result;
}

