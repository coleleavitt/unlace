_BOOL8 __fastcall sub_4A3B30(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  unsigned __int32 v5; // edx
  unsigned int v6; // r8d

  if ( a3 >= *(_QWORD *)(a1 + 48)
    || (v3 = 184 * a3 + *(_QWORD *)(a1 + 40), !*(_BYTE *)(v3 + 176))
    || (v4 = *(_QWORD *)(a2 + 40) + 184 * a3, !*(_BYTE *)(v4 + 176)) )
  {
    if ( !under_debugger )
      interr(1936);
LABEL_11:
    BUG();
  }
  v5 = *(_DWORD *)(a1 + 12);
  if ( v5 != *(_DWORD *)(v3 + 168) || (v6 = *(_DWORD *)(a2 + 12), v6 != *(_DWORD *)(v4 + 168)) )
  {
    if ( !under_debugger )
      interr(2164);
    goto LABEL_11;
  }
  return !sub_4A3980(*(_QWORD *)(a1 + 32), v3, v5, v4, v6);
}
