__int64 __fastcall sub_156070(__int64 a1, _BYTE *a2, bool *a3, int a4, __int64 a5)
{
  bool v6; // zf
  __int64 v7; // rax
  __int64 v8; // rax
  _DWORD v10[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  v6 = *(_QWORD *)(a1 + 192) == 0;
  v10[0] = a4;
  if ( v6 )
  {
    *a3 = (int)sub_924A0(
                 1u,
                 (__int64)"HIDECANCEL\n"
                          "No enum contains a constant with value 0x%llX. Do you want to search for standard enums?",
                 a5) > 0;
  }
  else
  {
    v7 = sub_198260(a1, v10);
    if ( v7 > 0 && v7 < (unsigned __int64)(*(_QWORD *)(a1 + 192) + 1LL) )
    {
      v8 = v7 - 1;
      *a2 = *(_BYTE *)(*(_QWORD *)(a1 + 184) + 8 * v8 + 4);
      return *(unsigned int *)(*(_QWORD *)(a1 + 184) + 8 * v8);
    }
    *a3 = v7 == 0;
  }
  return 0;
}

