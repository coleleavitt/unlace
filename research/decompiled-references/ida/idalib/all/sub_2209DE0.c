__int64 __fastcall sub_2209DE0(__int64 a1, __int64 *a2)
{
  __int64 v3; // [rsp+0h] [rbp-18h] BYREF
  int v4; // [rsp+8h] [rbp-10h]

  sub_2209CE0((__int64)&v3, a1, a2);
  if ( *(_DWORD *)(a1 + 8) > 0x40u && *(_QWORD *)a1 )
    operator delete[](*(void **)a1);
  *(_QWORD *)a1 = v3;
  *(_DWORD *)(a1 + 8) = v4;
  return a1;
}
