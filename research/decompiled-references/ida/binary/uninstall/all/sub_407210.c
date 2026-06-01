__int64 __fastcall sub_407210(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 (__fastcall *v3)(__int64, __int64, unsigned int, __int64); // rdx

  result = 0;
  if ( a1 )
  {
    v3 = (__int64 (__fastcall *)(__int64, __int64, unsigned int, __int64))a1[4];
    *(_QWORD *)(a2 + 8) = v3;
    *(_DWORD *)a2 = v3 != TclInvokeStringCommand;
    *(_QWORD *)(a2 + 16) = a1[5];
    *(_QWORD *)(a2 + 24) = a1[6];
    *(_QWORD *)(a2 + 32) = a1[7];
    *(_QWORD *)(a2 + 40) = a1[8];
    *(_QWORD *)(a2 + 48) = a1[9];
    *(_QWORD *)(a2 + 56) = a1[1];
    return 1;
  }
  return result;
}

