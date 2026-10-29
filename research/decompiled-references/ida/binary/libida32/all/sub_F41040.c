unsigned __int64 __fastcall sub_F41040(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 result; // rax
  _QWORD *v6; // rdi
  __int64 v7[2]; // [rsp+0h] [rbp-10h] BYREF

  result = *(_QWORD *)(a1 + 24);
  if ( (*(_BYTE *)(a1 + 18) & 8) != 0 )
  {
    v6 = *(_QWORD **)(a1 + 32);
    v7[0] = 0;
    v7[0] = sub_A4E860(v6, result, v7, a4, a5);
    return sub_F40FE0(v7);
  }
  return result;
}

