__int64 __fastcall sub_F3E8D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // rdi
  __int64 (__fastcall *v7)(__int64); // rdx
  __int64 (*v8)(void); // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 *v11; // rax
  __int64 v12; // rax

  v6 = *(_QWORD **)(a1 + 40);
  v7 = sub_A32120;
  v8 = *(__int64 (**)(void))(*v6 + 32LL);
  if ( (char *)v8 == (char *)sub_A32120 )
    v9 = v6[12];
  else
    v9 = v8();
  v10 = *(_QWORD *)(v9 + 120);
  if ( !v10 )
  {
    sub_A557A0((__int64 *)(*(_QWORD *)(v9 + 96) + 88LL), *(_QWORD *)(v9 + 96), (__int64)v7, a4, a5, a6);
    v10 = *(_QWORD *)(v9 + 120);
  }
  v11 = (__int64 *)(v10 & 0xFFFFFFFFFFFFFFF8LL);
  if ( v11 )
  {
    v12 = *v11;
    if ( v12 )
      return v12;
  }
  return v9;
}

