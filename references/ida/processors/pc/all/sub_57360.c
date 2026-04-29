__int64 __fastcall sub_57360(__int64 a1, __int64 a2, char a3, unsigned __int8 a4, double a5)
{
  unsigned int v5; // r12d
  __int64 v9; // rax
  char v10; // al
  __int64 v12; // rdx
  struct _Unwind_Exception *v13; // rdi

  v5 = *(unsigned __int8 *)(a1 + 5506);
  if ( (_BYTE)v5 )
    return v5;
  if ( *(_BYTE *)(a1 + 5505) )
  {
    v9 = getseg();
    if ( !v9 )
      return v5;
    if ( !*(_BYTE *)(v9 + 43) )
      return v5;
    v10 = *(_BYTE *)(v9 + 184);
    if ( v10 )
    {
      if ( (unsigned __int8)(v10 - 2) > 1u )
        return v5;
    }
    if ( *(_QWORD *)(a1 + 5496) == -1 )
      netnode_check();
    *(_BYTE *)(a1 + 5488) = 0;
    *(_BYTE *)(a1 + 5506) = 1;
    if ( a3 )
      v5 = sub_535A0(a1, a2, a4, 1, a5);
    else
      v5 = sub_55F90(a1, a2, a4, 1);
  }
  else
  {
    if ( under_debugger )
      BUG();
    v13 = (struct _Unwind_Exception *)interr();
    if ( v12 != 1 )
      _Unwind_Resume(v13);
    __cxa_begin_catch(v13);
    __cxa_end_catch();
  }
  *(_BYTE *)(a1 + 5506) = 0;
  return v5;
}
