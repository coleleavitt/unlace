__int64 __fastcall sub_1BCD210(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  void *v6; // rdi
  __int64 v7; // [rsp+10h] [rbp-18h]
  __int64 v8; // [rsp+18h] [rbp-10h]

  if ( (*(_DWORD *)a1 & 0x7FFFFFFF) == 3 )
  {
    v6 = *(void **)(a1 + 32);
    if ( v6 != (void *)(a1 + 48) )
    {
      v8 = a4;
      v7 = a3;
      free(v6);
      a4 = v8;
      a3 = v7;
    }
  }
  *(_DWORD *)a1 = *(_DWORD *)a1 & 0x80000000 | 5;
  result = *(_QWORD *)(a3 + 8);
  *(_DWORD *)(a1 + 24) = a2;
  *(_QWORD *)(a1 + 32) = result;
  *(_QWORD *)(a1 + 40) = a4;
  *(_QWORD *)(a1 + 16) = a3;
  return result;
}
