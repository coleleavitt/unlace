__int64 __fastcall sub_1945370(__int64 *a1, __int64 a2, __int64 a3, _DWORD *a4, __m128 a5, __m128 a6)
{
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v12; // rax
  __int64 v13; // rax
  _DWORD *v14; // rdx

  v8 = *a1;
  sub_18C79E0(*a1, 0, 0);
  v9 = sub_1944E10(a1, *(unsigned __int16 **)(a3 + 24), a5, a6);
  if ( v9 == 1
    || (v12 = sub_19A4070(*a1, v9 & 0xFFFFFFFFFFFFFFFELL), v12 == 1)
    || (v13 = sub_1E5FBF0(*a1, v12 & 0xFFFFFFFFFFFFFFFELL, 1), v10 = v13, (v13 & 0xFFFFFFFFFFFFFFF0LL) == 0) )
  {
    v10 = 0;
  }
  else
  {
    sub_1EA6140(a2, v13, 8, 4);
    *v14 = *a4;
    v14[1] = a4[1];
  }
  sub_190D5E0(v8, a5);
  return v10;
}
