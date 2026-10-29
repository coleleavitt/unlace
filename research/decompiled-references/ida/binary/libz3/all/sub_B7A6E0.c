void __fastcall sub_B7A6E0(__int64 a1, double a2, double a3, __m128 a4)
{
  __int64 v5; // r14
  __int64 (__fastcall *v6)(__int64, __m128i *); // r13
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // rdi
  unsigned int *v11; // rax
  __m128i *v12; // rax
  __int64 v13; // r14
  __int64 (__fastcall *v14)(__int64, __m128i *); // r13
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  __int64 v18; // rdi
  unsigned int *v19; // rax
  __m128i *v20; // rax
  __int64 v21; // [rsp+0h] [rbp-60h]
  __int64 v22; // [rsp+8h] [rbp-58h] BYREF
  __int64 v23; // [rsp+10h] [rbp-50h]
  __int64 v24; // [rsp+18h] [rbp-48h] BYREF
  __int64 v25; // [rsp+20h] [rbp-40h]

  if ( *(_DWORD *)(a1 + 948) == -1 )
  {
    v5 = *(_QWORD *)(a1 + 16);
    v6 = **(__int64 (__fastcall ***)(__int64, __m128i *))a1;
    v21 = a1 + 864;
    v22 = 0;
    v23 = 0;
    v24 = 1;
    v25 = 0;
    sub_182CBA0(qword_1C7F2C0, &v24);
    v10 = *(_QWORD *)(a1 + 872);
    BYTE4(v24) &= ~1u;
    LODWORD(v24) = 1;
    if ( !v10 )
    {
      sub_16669E0(v21);
      v10 = *(_QWORD *)(a1 + 872);
    }
    v11 = (unsigned int *)sub_166A700(v10, (unsigned int)&v22, 1, v7, v8, v9);
    v12 = sub_B68280(v5, v11, 0, 0, 1u, a2, a3, a4);
    *(_DWORD *)(a1 + 948) = v6(a1, v12);
    sub_25A130((char *)&v22);
    v13 = *(_QWORD *)(a1 + 16);
    v14 = **(__int64 (__fastcall ***)(__int64, __m128i *))a1;
    v22 = 0;
    v23 = 0;
    v24 = 1;
    v25 = 0;
    sub_182CBA0(qword_1C7F2C0, &v24);
    v18 = *(_QWORD *)(a1 + 872);
    BYTE4(v24) &= ~1u;
    LODWORD(v24) = 1;
    if ( !v18 )
    {
      sub_16669E0(v21);
      v18 = *(_QWORD *)(a1 + 872);
    }
    v19 = (unsigned int *)sub_166A700(v18, (unsigned int)&v22, 0, v15, v16, v17);
    v20 = sub_B68280(v13, v19, 0, 0, 1u, a2, a3, a4);
    *(_DWORD *)(a1 + 952) = v14(a1, v20);
    sub_25A130((char *)&v22);
  }
}

