__int64 __fastcall sub_811250(__int64 a1, int a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v10; // rax
  __int64 result; // rax

  v10 = sub_7E4EC0(a1);
  result = sub_180C100(v10, 56);
  *(_QWORD *)result = a1;
  *(_QWORD *)(result + 8) = 0xFFFFFFFF00000004LL;
  *(_DWORD *)(result + 16) = a2;
  *(_DWORD *)(result + 20) = a3;
  *(_QWORD *)(result + 24) = 0xFFFFFFFEFFFFFFFELL;
  *(_QWORD *)(result + 32) = a4;
  *(_QWORD *)(result + 40) = a5;
  *(_QWORD *)(result + 48) = a6;
  return result;
}

