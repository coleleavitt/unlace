void __fastcall sub_2261830(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  void *v3[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v4; // [rsp+10h] [rbp-38h] BYREF
  char v5; // [rsp+20h] [rbp-28h]

  *(_DWORD *)(a1 + 8) = 0;
  *(_OWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)a1 = &off_2C760D0;
  *(_QWORD *)(a1 + 40) = a1 + 56;
  v2 = *a2;
  *(_QWORD *)(a1 + 48) = 0;
  *(_BYTE *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 72) = v2;
  *a2 = 0;
  *(_QWORD *)(a1 + 80) = a1 + 96;
  *(_QWORD *)(a1 + 88) = 0;
  *(_BYTE *)(a1 + 96) = 0;
  *(_DWORD *)(a1 + 112) = 65537;
  *(_BYTE *)(a1 + 116) = 0;
  *(_QWORD *)(a1 + 120) = 0;
  if ( v2 )
  {
    (*(void (__fastcall **)(void **, __int64))(*(_QWORD *)v2 + 80LL))(v3, v2);
    if ( (v5 & 1) == 0 )
    {
      sub_9EE8A0(a1 + 40, (__int64)v3);
      if ( (v5 & 1) == 0 && v3[0] != &v4 )
        operator delete(v3[0]);
    }
  }
}
