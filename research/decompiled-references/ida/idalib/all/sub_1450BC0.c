void __fastcall sub_1450BC0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // [rsp+0h] [rbp-58h] BYREF
  unsigned int v7[14]; // [rsp+20h] [rbp-38h] BYREF

  v3 = *(_QWORD *)(a1 + 1192);
  if ( v3 )
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v3 + 112LL))(v3, a2 >> 32, (unsigned int)a2);
  if ( (*(_BYTE *)(a1 + 545) & 1) != 0 )
  {
    if ( (v4 = *(_QWORD *)(a1 + 696),
          ++*(_DWORD *)(a1 + 2308),
          (*(void (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v4 + 16LL))(v4, a1, a2, &v6),
          *(_QWORD *)(a1 + 1144))
      && (unsigned __int8)sub_1466830()
      || (v5 = *(_QWORD *)(a1 + 1120)) != 0 && *(_BYTE *)(v5 + 24) )
    {
      sub_141A820(a1, v7);
    }
  }
}
