/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44B4D0
// Address: 0x0044B4D0

//----- (0044B4D0) --------------------------------------------------------
bool __userpurge sub_44B4D0@<al>(DWORD *a1@<ecx>, __m128i a2@<xmm0>, HANDLE hThread)
{
  BOOL v5; // edi
  bool v6; // zf
  CONTEXT Context; // [esp+8h] [ebp-2D0h] BYREF

  Context.ContextFlags = 65553;
  if ( GetThreadContext(hThread, &Context) )
  {
    Context.Dr0 = a1[94];
    Context.Dr1 = a1[95];
    Context.Dr2 = a1[96];
    Context.Dr3 = a1[97];
    Context.Dr7 = a1[103];
    Context.Dr6 = 0;
    v5 = SetThreadContext(hThread, &Context);
    v6 = !v5;
    if ( !v5 )
    {
      sub_43C950(a2, (int)a1, (int)"SetThreadContext");
      v6 = 1;
    }
    return !v6;
  }
  else
  {
    sub_43C950(a2, (int)a1, (int)"GetThreadContext");
    return 0;
  }
}
