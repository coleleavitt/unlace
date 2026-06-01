__int64 __fastcall sub_7F7FF0(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rax
  _QWORD v5[3]; // [rsp+0h] [rbp-18h] BYREF

  v3 = *a2;
  v5[1] = a3;
  v5[0] = v3;
  return sub_7FEA60(a1 + 16, v5);
}

