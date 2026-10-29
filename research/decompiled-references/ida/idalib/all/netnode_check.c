__int64 __fastcall netnode_check(unsigned __int64 *a1, const char *a2, size_t a3, unsigned __int8 a4)
{
  __int8 *v5; // r11
  __int64 v6; // rdx

  v5 = (__int8 *)qword_2CCB598;
  v6 = *(_QWORD *)(qword_2CCB598 + 1736);
  *a1 = -1;
  if ( *(_QWORD *)v6 )
    return sub_7B2560(*(_QWORD *)v6, v5, a1, a2, a3, a4, *(void (__fastcall **)(__int8 *, __int64))(v6 + 2128));
  else
    return 0;
}
