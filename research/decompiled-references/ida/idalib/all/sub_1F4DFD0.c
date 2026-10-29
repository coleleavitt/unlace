__int64 *__fastcall sub_1F4DFD0(__int64 *a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 *result; // rax
  __int64 v7; // r8
  __int64 *v8; // r9
  __int64 v9; // r13
  __int64 (__fastcall *v10)(__int64); // rcx
  __int64 v11; // rbp
  __int64 (__fastcall *v12)(__int64); // rdx
  __int64 v13[13]; // [rsp+0h] [rbp-68h] BYREF

  sub_1F4B4A0((__int64)a1, a2);
  sub_1F0A560((__int64)v13, a1[2]);
  sub_A4FD20(a2 + 64, (__int64)v13);
  if ( LODWORD(v13[0]) > 1 )
    sub_A4F8E0((int *)v13);
  v4 = a2 + 56;
  v5 = *(_QWORD *)(*a1 + 144) + 1296LL;
  if ( !a2 )
    v4 = 0;
  result = (__int64 *)sub_2223460(v5, v4, &off_2B40D80);
  if ( result )
  {
    v9 = (__int64)(result - 7);
    if ( result != (__int64 *)&word_38 )
    {
      v10 = sub_BBC1A0;
      v11 = *(_QWORD *)(*a1 + 144);
      v12 = *(__int64 (__fastcall **)(__int64))(*(result - 7) + 32);
      if ( v12 == sub_BBC1A0 )
      {
        if ( *((char *)result - 27) < 0 )
          v9 = sub_B72720((__int64)(result - 7));
      }
      else
      {
        v9 = v12((__int64)(result - 7));
      }
      v13[0] = a2;
      result = sub_1742A40(v11 + 1728, v13, (__int64)v12, (__int64)v10, v7, v8);
      *result = v9;
    }
  }
  return result;
}
