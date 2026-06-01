/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44B3A0
// Address: 0x0044B3A0

//----- (0044B3A0) --------------------------------------------------------
int __thiscall sub_44B3A0(_DWORD *this, int a2, char a3)
{
  void *v4; // ebp
  int v5; // esi
  DWORD Dr0; // eax
  CONTEXT Context; // [esp+10h] [ebp-2D0h] BYREF

  Context.ContextFlags = 65553;
  v4 = (void *)(*(int (__thiscall **)(_DWORD *, int))(*this + 312))(this, a2);
  if ( !GetThreadContext(v4, &Context) )
    return -1;
  v5 = 0;
  while ( 1 )
  {
    if ( ((1 << (2 * v5)) & Context.Dr7) != 0 && ((1 << v5) & Context.Dr6) != 0 )
    {
      switch ( v5 )
      {
        case 0:
          Dr0 = Context.Dr0;
          break;
        case 1:
          Dr0 = Context.Dr1;
          break;
        case 2:
          Dr0 = Context.Dr2;
          break;
        case 3:
          Dr0 = Context.Dr3;
          break;
        default:
          return -1;
      }
      if ( *(this + v5 + 94) == Dr0 )
        break;
    }
    if ( ++v5 >= 4 )
      return -1;
  }
  (*(void (__thiscall **)(_DWORD *, void *))(*this + 308))(this, v4);
  if ( a3 && *(this + v5 + 98) == 8 )
    return -1;
  else
    return *(this + v5 + 94);
}
