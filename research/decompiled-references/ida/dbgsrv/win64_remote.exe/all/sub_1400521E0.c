/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400521E0
// Address: 0x00000001400521E0

//----- (00000001400521E0) ----------------------------------------------------
__int64 __fastcall sub_1400521E0(_QWORD *a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  void *v6; // r14
  _QWORD *v7; // rdx
  int v8; // ebx
  DWORD64 Dr1; // rax
  struct _CONTEXT Context; // [rsp+20h] [rbp-508h] BYREF

  v3 = *a1;
  Context.ContextFlags = 1048593;
  v6 = (void *)(*(__int64 (__fastcall **)(_QWORD *))(v3 + 624))(a1);
  if ( !GetThreadContext(v6, &Context) )
    return -1;
  v7 = a1 + 87;
  v8 = 0;
  while ( 1 )
  {
    if ( ((1 << (2 * v8)) & Context.Dr7) != 0 && ((1 << v8) & Context.Dr6) != 0 )
    {
      if ( v8 )
      {
        switch ( v8 )
        {
          case 1:
            Dr1 = Context.Dr1;
            break;
          case 2:
            Dr1 = Context.Dr2;
            break;
          case 3:
            Dr1 = Context.Dr3;
            break;
          default:
            return -1;
        }
      }
      else
      {
        Dr1 = Context.Dr0;
      }
      if ( *v7 == Dr1 )
        break;
    }
    ++v8;
    ++v7;
    if ( v8 >= 4 )
      return -1;
  }
  (*(void (__fastcall **)(_QWORD *, void *, _QWORD, DWORD64))(*a1 + 616LL))(
    a1,
    v6,
    *(_QWORD *)(*a1 + 616LL),
    Context.Dr2);
  if ( a3 && *((_DWORD *)a1 + v8 + 182) == 8 )
    return -1;
  else
    return a1[v8 + 87];
}
