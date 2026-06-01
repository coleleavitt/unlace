__int64 __fastcall sub_55B0B0(__int64 a1, __int64 a2, __int64 *a3, int a4)
{
  __int64 result; // rax
  __int64 v7; // rdx

  if ( *(_QWORD *)(a2 + 8) != a1 )
    return 0;
  result = sub_186B270(0x18u);
  v7 = *a3;
  *(_QWORD *)result = off_1C50DF0;
  *(_QWORD *)(result + 8) = v7;
  *(_DWORD *)(result + 16) = a4;
  return result;
}

