/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005B130
// Address: 0x000000014005B130

//----- (000000014005B130) ----------------------------------------------------
__int64 __fastcall sub_14005B130(__int64 a1, char *a2, __int64 a3)
{
  size_t v7; // rax
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rax
  void *v10; // rsp
  unsigned __int8 *v11; // rbx
  __int64 *v12; // rax
  unsigned __int8 v13[16]; // [rsp+30h] [rbp+0h] BYREF

  if ( a1 )
  {
    v7 = strlen(a2);
    v8 = v7 + 100;
    v9 = v7 + 115;
    if ( v9 <= v8 )
      v9 = 0xFFFFFFFFFFFFFF0LL;
    v10 = alloca(v9 & 0xFFFFFFFFFFFFFFF0uLL);
    v11 = sub_14005ACB0((unsigned __int8 *)a2, v13, v8);
    v12 = sub_1400207F0();
    return sub_140073788(*v12, a1, (__int64)v11, 0, a3);
  }
  else
  {
    sub_1400640B0(1u);
    *errno() = 9;
    sub_1400640B0(1u);
    return 0xFFFFFFFFLL;
  }
}
