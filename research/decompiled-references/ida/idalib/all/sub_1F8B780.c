void __fastcall sub_1F8B780(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // [rsp+8h] [rbp-10h] BYREF

  v6 = *(_QWORD *)(a2 + 96);
  if ( v6 )
  {
    v8 = a2;
    v7 = sub_1F8B440(a1 + 1288, &v8, a3, a4, a5, a6);
    if ( !*(_DWORD *)(v7 + 8) )
      sub_1F705B0(v7, 1, v6);
  }
}
