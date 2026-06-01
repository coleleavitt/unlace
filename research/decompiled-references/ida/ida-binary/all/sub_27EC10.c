__int64 __fastcall sub_27EC10(__int64 a1, __int64 a2, double a3, __int64 a4, __int64 a5)
{
  __int64 (__fastcall *v5)(__int64, __int64, __int64, __int64, double); // rax
  __int64 v6; // rsi
  __int64 v7; // rdx
  unsigned __int64 v8; // rbx
  __int64 eah; // rdx
  int v10; // r9d
  unsigned __int64 v11; // rax
  unsigned int v12; // r12d
  __int64 v13; // rbp
  __int64 flags; // r8
  __int64 v15; // r13
  __int64 v17; // rax
  __int64 v18; // rax

  v5 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, double))(*(_QWORD *)a1 + 720LL);
  if ( v5 == sub_27DFE0 )
  {
    v6 = *(_QWORD *)(sub_1EA680(a1 + 384, a2, (__int64)sub_27DFE0, a5, a3) + 40);
    v8 = sub_27DC40(a1, v6);
  }
  else
  {
    v6 = 0;
    v8 = ((__int64 (__fastcall *)(__int64, _QWORD))v5)(a1, 0);
  }
  eah = get_eah(a1, v6, v7);
  v11 = 0x100000000LL;
  if ( *(_DWORD *)(eah + 24) == 8 )
    v11 = -1;
  if ( v8 < v11 )
  {
    v17 = getseg(v8);
    if ( v17 )
    {
      v13 = *(_QWORD *)(v17 + 48);
      v12 = 1;
      v18 = sel2para(v13);
    }
    else
    {
      v12 = 0;
      v13 = -1;
      v18 = v8 >> 4;
    }
    v15 = v8 - 16 * v18;
    flags = get_flags_ex(v8, 0);
  }
  else
  {
    v12 = 0;
    v13 = -1;
    flags = 0;
    v15 = -1;
    v8 = -1;
  }
  sub_27EB60(&qword_8CC800, v8, v15, v13, flags, v10);
  return v12;
}
