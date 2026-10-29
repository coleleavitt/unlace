__int64 __fastcall sub_1C73FF0(__int64 a1, int a2, unsigned int a3, int a4, __int64 a5)
{
  __int64 v7; // rax
  _QWORD *v9; // r15
  __int64 v10; // rax
  __int64 v11; // rbx
  _QWORD *v12; // rax
  _QWORD *v13; // [rsp+8h] [rbp-40h] BYREF

  v13 = nullptr;
  v7 = sub_1E5F010(a5, &v13);
  if ( (v7 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 1;
  v9 = v13;
  if ( !v13 )
  {
    v11 = v7;
    v12 = (_QWORD *)sub_168B6C0(a1);
    v9 = sub_A81910(v12, v11, a3);
    v13 = v9;
  }
  v10 = sub_168B6C0(a1);
  return sub_BF8060(v10, a2, a3, a4, (__int64)v9);
}
