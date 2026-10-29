void __fastcall sub_20978E0(__int64 a1, int a2, double a3)
{
  __int64 v3; // rax
  unsigned int v4; // r12d
  __int64 v5; // rax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rbp
  double v9; // xmm0_8

  v3 = sub_221A480(a3);
  v4 = a2 + 1;
  v5 = sub_227D090(v3, (unsigned int)(2 * a2));
  sub_995540(v5, "FunctionPass Manager\n");
  if ( *(_DWORD *)(a1 + 56) )
  {
    v6 = 0;
    do
    {
      v7 = v6++;
      v8 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 8 * v7);
      v9 = (*(double (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 120LL))(v8, v4);
      sub_2097790(a1 + 32, v8, v4, v9);
    }
    while ( *(_DWORD *)(a1 + 56) > v6 );
  }
}
