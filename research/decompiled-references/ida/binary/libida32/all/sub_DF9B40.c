__int64 __fastcall sub_DF9B40(_QWORD *a1, __int64 *a2, __int64 a3, __int64 *a4)
{
  __int64 v7; // rdi
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 result; // rax
  __int64 v14; // r13
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18[6]; // [rsp+8h] [rbp-30h] BYREF

  if ( (unsigned __int8)sub_E00610(a3, a1[50] + 40LL) && (v7 = a1[50], *(_DWORD *)(*(_QWORD *)(v7 + 32) + 8LL) == 2) )
  {
    v18[0] = sub_DFB160(v7, a2);
    sub_E0FE60(a1, v18, 2406, 0);
    return 0;
  }
  else if ( (*(_BYTE *)(*a4 + 28) & 0x7Fu) - 59 <= 2 && (v8 = sub_B735C0(*a4)) != 0 && *(char *)(v8 + 82) >= 0 )
  {
    v14 = sub_CC5910(a1[23], v8, v9, v10, v11, v12);
    result = 0;
    if ( v14 )
    {
      v15 = sub_DFD980(a1[22], 48);
      sub_DFF4A0(v15, a3);
      return sub_DF8F60((__int64)a1, a2, v14, 0, v16, v17);
    }
  }
  else
  {
    return 1;
  }
  return result;
}

