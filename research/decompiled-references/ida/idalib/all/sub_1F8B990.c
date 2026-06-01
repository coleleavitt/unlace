_QWORD *__fastcall sub_1F8B990(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // r12d
  __int64 v8; // rax
  __int64 v9[4]; // [rsp+0h] [rbp-20h] BYREF

  result = *(_QWORD **)(a1 + 48);
  if ( (!result || !*((_BYTE *)result + 9267)) && *(char *)(a2 + 29) < 0 )
  {
    if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 40 > 6 )
      v7 = sub_B77EF0(a2);
    else
      v7 = sub_B73F60(a2);
    v9[0] = a2;
    v8 = sub_1F8B440(a1 + 1288, v9, v3, v4, v5, v6);
    return sub_1F705B0(v8, 4, v7);
  }
  return result;
}
