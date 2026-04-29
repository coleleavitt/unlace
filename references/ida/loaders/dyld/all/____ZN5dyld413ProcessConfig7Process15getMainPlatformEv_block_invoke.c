__int64 __fastcall ___ZN5dyld413ProcessConfig7Process15getMainPlatformEv_block_invoke(
        __int64 result,
        int a2,
        int a3,
        int a4)
{
  __int64 v4; // x8

  v4 = *(_QWORD *)(result + 40);
  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(result + 32) + 8LL) + 24LL) = a2;
  *(_DWORD *)(v4 + 40) = a4;
  *(_DWORD *)(v4 + 48) = a3;
  return result;
}
