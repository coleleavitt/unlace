__int64 __fastcall sub_54A2E0(_QWORD *a1, __int64 a2, double a3)
{
  __int64 v3; // rax
  __int64 v4; // r12
  __int64 v5; // r13
  __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // r8d
  int v9; // r9d

  v3 = *(_QWORD *)(a2 + 24);
  if ( !v3 || !*(_DWORD *)(v3 - 4) || !(unsigned __int8)sub_64B260(a1[4]) )
    return 0;
  v4 = sub_186B270(0xF8u);
  sub_63D370(v4, a1[4]);
  v5 = a1[4];
  sub_654200(v5, 0);
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v5 + 2968) + 192LL))(*(_QWORD *)(v5 + 2968));
  sub_549920((__int64)a1, v6, a2, v4);
  sub_549410(a1, a2, v4, a3, v7, v8, v9);
  return v4;
}

