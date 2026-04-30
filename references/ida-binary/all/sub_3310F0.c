__int64 __fastcall sub_3310F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  unsigned int v5; // ebp
  __int64 v6; // rax
  const char *v7; // rbx

  v5 = 1;
  v6 = sub_1EA680(a1 + 384, a2, a3, a4, a5);
  v7 = (const char *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v6 + 40) + 120LL))(*(_QWORD *)(v6 + 40));
  if ( !strcmp(v7, "simpleline_place_t") || !strcmp(v7, "srcdbg_place_t") || !strcmp(v7, "hexrays_place_t") )
    return 1;
  LOBYTE(v5) = strcmp(v7, "mbui_place_t") == 0;
  return v5;
}
