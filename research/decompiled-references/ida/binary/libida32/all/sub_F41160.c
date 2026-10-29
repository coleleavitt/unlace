__int64 __fastcall sub_F41160(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdx
  __int64 result; // rax
  _QWORD *v7; // rdi
  __int64 v8[2]; // [rsp+0h] [rbp-10h] BYREF

  v5 = *(_QWORD *)(a1 + 24);
  result = a1 & 0xFFFFFFFFFFFFFFF0LL;
  if ( (*(_DWORD *)v5 & 0x10000) == 0 )
  {
    result = *(_QWORD *)(v5 + 8);
    if ( (*(_BYTE *)(a1 + 18) & 8) != 0 )
    {
      v7 = *(_QWORD **)(a1 + 32);
      v8[0] = 0;
      v8[0] = sub_A4E860(v7, result, v8, a4, a5);
      return sub_F40FE0(v8);
    }
  }
  return result;
}

