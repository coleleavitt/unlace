__int64 __fastcall sub_211B720(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  const char *v4; // rcx
  __int64 v5; // rdi
  int v6; // edx
  __int64 v7; // rdx
  const char *v8; // [rsp+0h] [rbp-38h] BYREF
  __int16 v9; // [rsp+20h] [rbp-18h]

  result = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(result + 152);
  if ( *(_DWORD *)(v3 + 312) != 4 || (v6 = *(_DWORD *)(v3 + 320)) == 0 || v6 == 6 )
  {
    v4 = ".seh_* directives are not supported on this target";
LABEL_3:
    v5 = *(_QWORD *)(a1 + 8);
    v8 = v4;
    v9 = 259;
    return sub_2100A30(v5, a2, (__int64)&v8);
  }
  v7 = *(_QWORD *)(a1 + 104);
  if ( !v7 || *(_QWORD *)(v7 + 8) )
  {
    v4 = ".seh_ directive must appear within an active frame";
    goto LABEL_3;
  }
  if ( *(_QWORD *)(v7 + 96) )
  {
    v4 = "Chained unwind areas can't have handlers!";
    goto LABEL_3;
  }
  return result;
}
