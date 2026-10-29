__int64 __fastcall sub_1E63D90(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbp
  unsigned int v6; // eax
  __int64 v7; // r9
  __int64 (__fastcall **v9)(); // [rsp+0h] [rbp-28h] BYREF
  int v10; // [rsp+8h] [rbp-20h]

  v5 = *(_QWORD *)(a2 + 8);
  v10 = a3;
  v9 = off_2BC6500;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 5 )
  {
    sub_1E5F3D0(a1, a2);
    v5 = *(_QWORD *)(a2 + 8);
  }
  v6 = sub_C00A40(a2, a2, a3, a4, a5);
  return sub_1E63C20(a1, v6, v5, (__int64 *)((char *)&dword_0 + 1), (__int64)&v9, v7);
}
