/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_409920
// Address: 0x0000000000409920

//----- (0000000000409920) ----------------------------------------------------
__int64 __fastcall sub_409920(__int64 a1)
{
  unsigned int v2; // w21
  unsigned int v3; // w22
  unsigned int v5; // w22
  __int64 v6; // x1
  __int64 v7; // [xsp+38h] [xbp-18h] BYREF
  __int64 v8; // [xsp+40h] [xbp-10h]

  v2 = (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, void *, _QWORD))(*(_QWORD *)a1 + 16LL))(
         a1,
         *(_QWORD *)(*(_QWORD *)a1 + 16LL),
         &_stack_chk_guard,
         0);
  if ( !v2 )
    return 0;
  if ( !*(_BYTE *)(a1 + 912) )
    goto LABEL_3;
  v5 = *(_DWORD *)(a1 + 100);
  v7 = a1 + 104;
  v8 = 272;
  if ( !sub_408438(v5) )
    return 0;
  if ( ptrace(PTRACE_GETREGSET, v5, 1, &v7) )
  {
    return 0;
  }
  else
  {
LABEL_3:
    v3 = *(unsigned __int8 *)(a1 + 913);
    if ( *(_BYTE *)(a1 + 913) )
    {
      v6 = *(unsigned int *)(a1 + 100);
      v7 = a1 + 384;
      v8 = 528;
      if ( ptrace(PTRACE_GETREGSET, v6, 2, &v7) )
        return 0;
      else
        return v3;
    }
  }
  return v2;
}
// 409920: could not find valid save-restore pair for x22
