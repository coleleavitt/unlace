void __fastcall sub_BD2780(__int64 a1, unsigned int *a2, unsigned int *a3)
{
  __int64 v5; // rdi
  __int64 v6; // r13
  __int64 *v7; // r12
  __int64 *v8; // rax

  if ( a2 != a3 )
  {
    v5 = a1 + 136;
    *(_BYTE *)(v5 + 4033) = 1;
    v6 = *(_QWORD *)(v5 + 4088);
    sub_BB77A0((_QWORD *)v5, a2, (__int64)a3, v6);
    v7 = sub_966570(a1, a2);
    v8 = sub_966570(a1, a3);
    sub_BC4820(a1, v6, v7, v8);
  }
}

