__int64 __fastcall sub_88CE90(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v5; // rdi
  __m128 *v6; // rcx
  void *v8; // r15
  void *v9; // [rsp+8h] [rbp-60h]
  __int64 v10; // [rsp+10h] [rbp-58h] BYREF
  __int64 v11; // [rsp+18h] [rbp-50h]
  __int64 v12; // [rsp+20h] [rbp-48h] BYREF
  __int64 v13; // [rsp+28h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 80);
  v6 = *(__m128 **)(v5 + 24);
  if ( v6 )
  {
    if ( v6[22].m128_i8[0] )
    {
      sub_7A4170(v5);
      sub_87F730((_DWORD *)(a1 + 960), *(_QWORD *)(a1 + 80), 0);
      v10 = 1;
      v11 = 0;
      v12 = 1;
      v13 = 0;
      sub_182CBA0(qword_1C7F2C0, &v12);
      BYTE4(v12) &= ~1u;
      LODWORD(v12) = 1;
      sub_83BB30((int **)(a1 + 960), (int *)&v10, a2 ^ 1);
      v9 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v10);
      sub_182CBA0(v9, &v12);
      v10 = 1;
      v11 = 0;
      v12 = 1;
      v13 = 0;
      sub_182CBA0(qword_1C7F2C0, &v12);
      BYTE4(v12) &= ~1u;
      LODWORD(v12) = 1;
      sub_83BB30((int **)(a1 + 960), (int *)&v10, a3 ^ 1);
      v8 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v10);
      sub_182CBA0(v8, &v12);
      v6 = (__m128 *)sub_87EAC0(a1 + 960, *(_QWORD *)(a1 + 80));
    }
    else
    {
      v6 = nullptr;
    }
  }
  return sub_7E5400(a1, a2, a3, v6);
}

