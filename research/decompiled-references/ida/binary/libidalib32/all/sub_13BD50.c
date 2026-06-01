__int64 __fastcall sub_13BD50(__int64 a1)
{
  unsigned int v1; // ebp
  __int64 v2; // rax
  const char *v3; // rbx

  v1 = 1;
  v2 = sub_15CFF0(a1 + 440);
  v3 = (const char *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v2 + 40) + 120LL))(*(_QWORD *)(v2 + 40));
  if ( !strcmp(v3, "simpleline_place_t") || !strcmp(v3, "srcdbg_place_t") || !strcmp(v3, "hexrays_place_t") )
    return 1;
  LOBYTE(v1) = strcmp(v3, "mbui_place_t") == 0;
  return v1;
}

