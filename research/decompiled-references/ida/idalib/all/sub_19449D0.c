_QWORD *__fastcall sub_19449D0(__int64 a1, __int64 a2, __m128 a3, __m128 a4)
{
  _QWORD *result; // rax
  unsigned int v5; // edx
  _QWORD *v6; // [rsp+0h] [rbp-30h]
  __int64 v7; // [rsp+8h] [rbp-28h] BYREF
  __int64 v8; // [rsp+10h] [rbp-20h]
  __int64 v9; // [rsp+18h] [rbp-18h]
  unsigned int v10; // [rsp+20h] [rbp-10h]

  result = (_QWORD *)a2;
  *(_DWORD *)(*(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624) - 640) = *(_DWORD *)(*(_QWORD *)(a1 + 4616)
                                                                                               + ((5LL
                                                                                                 * *(unsigned int *)(a1 + 4624)
                                                                                                 - 10) << 7));
  v5 = *(_DWORD *)(*(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624) - 640);
  if ( v5 != 3 && v5 > 1 )
  {
    v7 = a1;
    v8 = 0;
    v9 = 0;
    v10 = 0;
    v6 = sub_19425F0(&v7, a2, a3, a4);
    operator delete(v8, 16LL * v10, 8);
    return v6;
  }
  return result;
}
