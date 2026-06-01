__int64 __fastcall sub_1D640C0(__int64 a1, __m128 a2, __m128 a3)
{
  __int64 v3; // rdx
  unsigned __int64 *v4; // rbp
  char v5; // al
  __int64 *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rdx
  unsigned int v10; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  const __m128i *v14; // rcx
  unsigned __int64 v15; // r12
  __int64 v17; // [rsp+0h] [rbp-98h]
  const __m128i *v18; // [rsp+8h] [rbp-90h]
  __int64 v19; // [rsp+10h] [rbp-88h] BYREF
  __int64 v20; // [rsp+18h] [rbp-80h]
  __int64 v21; // [rsp+20h] [rbp-78h]
  unsigned int v22; // [rsp+28h] [rbp-70h]
  __int64 v23; // [rsp+30h] [rbp-68h]
  char v24; // [rsp+38h] [rbp-60h]
  char v25; // [rsp+39h] [rbp-5Fh]
  void *v26[3]; // [rsp+40h] [rbp-58h] BYREF
  _DWORD v27[9]; // [rsp+58h] [rbp-40h] BYREF
  char v28; // [rsp+7Ch] [rbp-1Ch]

  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(unsigned __int64 **)(a1 + 8);
  v5 = **(_BYTE **)(a1 + 24);
  v25 = 1;
  v20 = 0;
  v24 = v5;
  v6 = *(__int64 **)(a1 + 32);
  v23 = 0;
  v7 = v6[1];
  v8 = *v6;
  v19 = v3;
  v9 = *v6;
  v21 = 0;
  v18 = (const __m128i *)v7;
  v17 = v9;
  v22 = 0;
  v26[0] = v27;
  v26[1] = &qword_20;
  v26[2] = &qword_20;
  v27[8] = 0;
  v28 = 0;
  v10 = sub_F6C560(v8);
  v13 = v17;
  v14 = v18;
  if ( v10 > 0x20uLL )
  {
    sub_1EA60C0(v26);
    v13 = v17;
    v14 = v18;
  }
  v15 = sub_1D4F8E0(&v19, (__int64)v26, v13, v14, v11, v12, a2, a3);
  if ( v26[0] != v27 && v26[0] )
    operator delete[](v26[0]);
  *v4 = v15;
  operator delete(v20, 16LL * v22, 8);
  return 0;
}
