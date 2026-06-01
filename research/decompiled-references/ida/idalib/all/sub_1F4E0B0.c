__int64 *__fastcall sub_1F4E0B0(__int64 *a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 *result; // rax
  __int64 v7; // r8
  __int64 *v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rbp
  __int64 (__fastcall *v11)(__int64); // rdx
  __int64 (__fastcall *v12)(__int64); // rax
  __int64 v13; // r13
  __int64 v14[13]; // [rsp+0h] [rbp-68h] BYREF

  sub_1F4B4A0((__int64)a1, a2);
  sub_1F0A560((__int64)v14, a1[2]);
  sub_A4FD20(a2 + 64, (__int64)v14);
  if ( LODWORD(v14[0]) > 1 )
    sub_A4F8E0((int *)v14);
  v4 = a2 + 56;
  v5 = *(_QWORD *)(*a1 + 144) + 1280LL;
  if ( !a2 )
    v4 = 0;
  result = (__int64 *)sub_2223460(v5, v4, off_2B40DA0);
  if ( result && result != (__int64 *)&word_38 )
  {
    v9 = *a1;
    v10 = (__int64)(result - 7);
    v11 = sub_A4F000;
    v12 = *(__int64 (__fastcall **)(__int64))(*(result - 7) + 32);
    v13 = *(_QWORD *)(v9 + 144);
    if ( v12 != sub_A4F000 )
      v10 = v12(v10);
    v14[0] = a2;
    result = sub_1742A40(v13 + 1728, v14, (__int64)v11, v9, v7, v8);
    *result = v10;
  }
  return result;
}
