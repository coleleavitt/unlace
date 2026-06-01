unsigned __int64 __fastcall sub_3DDCF0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r12
  unsigned __int64 result; // rax

  v4 = a3;
  sub_3DD870(a1, a2, a3, a4);
  result = sub_3DDB30((_QWORD *)a1, a2, v4);
  *(_DWORD *)(a1 + 2120) = a2;
  return result;
}

