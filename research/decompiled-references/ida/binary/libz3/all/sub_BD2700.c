void __fastcall sub_BD2700(__int64 a1, unsigned int *a2, unsigned int *a3)
{
  __int64 v3; // r12
  __int64 v4; // rdi
  __int64 v6; // r13
  __int64 *v7; // rbp
  __int64 *v8; // rax

  if ( a2 != a3 )
  {
    v3 = a1 - 56;
    v4 = a1 + 80;
    *(_BYTE *)(v4 + 4033) = 1;
    v6 = *(_QWORD *)(v4 + 4088);
    sub_BB77A0((_QWORD *)v4, a2, (__int64)a3, v6);
    v7 = sub_966570(v3, a2);
    v8 = sub_966570(v3, a3);
    sub_BC4820(v3, v6, v7, v8);
  }
}

