__int64 __fastcall sub_2258270(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  void *v4; // [rsp+0h] [rbp-78h] BYREF
  _DWORD v5[18]; // [rsp+10h] [rbp-68h] BYREF
  char v6; // [rsp+58h] [rbp-20h]

  v2 = 0;
  (*(void (__fastcall **)(void **, __int64, __int64))(*(_QWORD *)a1 + 40LL))(&v4, a1, a2);
  if ( (v6 & 1) == 0 )
  {
    LOBYTE(v2) = v5[14] > 1u;
    if ( v4 != v5 )
      operator delete(v4);
  }
  return v2;
}
