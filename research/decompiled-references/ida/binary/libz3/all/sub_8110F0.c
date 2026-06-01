__int64 __fastcall sub_8110F0(__int64 a1, int a2, int a3)
{
  __int64 v4; // rax
  __int64 result; // rax

  v4 = sub_7E4EC0(a1);
  result = sub_180C100(v4, 56);
  *(_QWORD *)result = a1;
  *(_QWORD *)(result + 8) = 0xFFFFFFFF00000002LL;
  *(_DWORD *)(result + 16) = a2;
  *(_DWORD *)(result + 20) = a3;
  *(_QWORD *)(result + 24) = 0xFFFFFFFEFFFFFFFELL;
  return result;
}

