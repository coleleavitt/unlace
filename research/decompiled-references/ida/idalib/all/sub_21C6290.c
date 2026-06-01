void __fastcall sub_21C6290(__int64 a1, __int64 a2)
{
  _QWORD *(__fastcall *v2)(void **, __int64); // rax
  void *v3[2]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v4; // [rsp+10h] [rbp-28h] BYREF

  v2 = *(_QWORD *(__fastcall **)(void **, __int64))(*(_QWORD *)a1 + 24LL);
  if ( (char *)v2 == (char *)sub_21C6270 )
    sub_21C5E70(v3, *(_DWORD *)(a1 + 8), (_QWORD *)(a1 + 16));
  else
    v2(v3, a1);
  sub_227BF10(a2, v3[0], v3[1]);
  if ( v3[0] != &v4 )
    operator delete(v3[0]);
}
