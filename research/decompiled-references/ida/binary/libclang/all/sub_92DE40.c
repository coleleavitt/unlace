__int64 __fastcall sub_92DE40(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx

  result = sub_A1A4E0(a1, 56);
  v5 = *a3;
  v6 = *a2;
  *(_DWORD *)(result + 48) = 2;
  *(_QWORD *)result = v5;
  *(_QWORD *)(result + 24) = v6;
  *(_QWORD *)(result + 32) = 0;
  *(_BYTE *)(result + 40) = 1;
  *(_OWORD *)(result + 8) = 0;
  return result;
}

