__int64 __fastcall sub_707CF0(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 (*v4)(); // rax
  __int64 v6; // r12
  char v7; // dl
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // [rsp+10h] [rbp-38h] BYREF
  unsigned int v12; // [rsp+18h] [rbp-30h]

  v3 = a1[2161];
  v4 = *(__int64 (**)())(*(_QWORD *)v3 + 280LL);
  if ( v4 == sub_6A67E0 )
    return 0;
  v6 = ((unsigned int (__fastcall *)(__int64, _QWORD, _QWORD))v4)(v3, a1[270], 0);
  if ( !v7 )
    return 0;
  sub_6CE900((__int64)&v11, a1, a2);
  v8 = v11;
  v9 = sub_6F6DE0((__int64)a1, *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL));
  v10 = 1;
  if ( v8 != a1[2310] )
    v10 = v9;
  return v10 * v6 * v12;
}

