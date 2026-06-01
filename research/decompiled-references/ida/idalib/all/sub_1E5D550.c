unsigned __int64 __fastcall sub_1E5D550(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // r12
  _QWORD *v7; // rcx
  unsigned __int64 v8; // [rsp+8h] [rbp-20h]

  result = sub_A71A30(*(_QWORD *)(*(_QWORD *)a1 + 248LL), a2, a3, a4);
  v5 = *(unsigned int *)(a1 + 96);
  v6 = *(_QWORD *)(result & 0xFFFFFFFFFFFFFFF0LL);
  if ( v5 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 100) )
  {
    v8 = result;
    sub_2237220(a1 + 88, a1 + 104, v5 + 1, 16);
    v5 = *(unsigned int *)(a1 + 96);
    result = v8;
  }
  v7 = (_QWORD *)(*(_QWORD *)(a1 + 88) + 16 * v5);
  *v7 = v6;
  v7[1] = a2;
  *(_BYTE *)(a1 + 232) = 0;
  ++*(_DWORD *)(a1 + 96);
  return result;
}
