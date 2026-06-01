unsigned __int64 __fastcall sub_70D820(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // r12
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r13
  __int64 v9; // rsi
  int v10; // eax
  unsigned __int8 *v11; // rdi
  __int64 (__fastcall *v12)(__int64); // rax
  unsigned int v13; // r13d
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rax

  v3 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v6 = sub_6F6DE0((__int64)a1, *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL));
  v7 = 1;
  v8 = v6;
  if ( a3 )
  {
    v9 = sub_798D40(a3);
    v10 = sub_7884D0(a3, v9);
    v7 = 0;
    if ( v10 )
      v7 = (unsigned __int8)sub_783680(a3, v9, 0) ^ 1u;
  }
  v11 = (unsigned __int8 *)a1[2161];
  v12 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 160LL);
  if ( v12 == sub_6A67C0 )
    v13 = v11[61];
  else
    v13 = ((__int64 (__fastcall *)(unsigned __int8 *, __int64, __int64))v12)(v11, v8, v7);
  v14 = (unsigned int)sub_70BB40(a1, *v3);
  v15 = sub_6F6DE0((__int64)a1, *(_QWORD *)(a1[2311] & 0xFFFFFFFFFFFFFFF0LL));
  v16 = v13;
  if ( (unsigned int)v14 >= v13 )
    v16 = v14;
  return v16 / v15;
}

