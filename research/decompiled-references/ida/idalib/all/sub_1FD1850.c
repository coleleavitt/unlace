__int64 __fastcall sub_1FD1850(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  __int64 v3; // rcx
  int v4; // edx

  v1 = *(_QWORD *)(a1 + 8) + 24LL;
  result = operator new(0x38u);
  v3 = *(_QWORD *)(v1 + 8);
  *(_QWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 40) = 0;
  v4 = *(_DWORD *)(v1 - 20);
  *(_QWORD *)result = &off_2BE4A60;
  *(_QWORD *)(result + 8) = v3;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = v4;
  *(_QWORD *)(result + 24) = v1;
  *(_QWORD *)(result + 32) = 0;
  *(_QWORD *)(result + 48) = 0;
  return result;
}
