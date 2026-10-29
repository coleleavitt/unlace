__int64 __fastcall sub_1F4780(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  unsigned int v5; // ebx
  int v6; // eax
  __int64 v8; // rax
  unsigned int v9; // ebx

  v5 = *(unsigned __int8 *)(a1 + 968);
  if ( !(_BYTE)v5 )
    return v5;
  if ( *(_QWORD *)(a1 + 424) )
  {
    v6 = *(_DWORD *)(a1 + 416);
    switch ( v6 )
    {
      case 2:
        v8 = *(_QWORD *)(a1 + 896);
        break;
      case 3:
        v8 = *(_QWORD *)(a1 + 904);
        break;
      case 1:
        v8 = *(_QWORD *)(a1 + 888);
        break;
      default:
        return 0;
    }
    if ( !v8 )
      return 0;
    v9 = *(unsigned __int8 *)(v8 + 29);
    if ( (_BYTE)v9 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 736LL))(a1);
      return v9;
    }
    if ( under_debugger )
      BUG();
    a1 = 40718;
    interr(40718, a2, a3, a4, a5);
  }
  sub_1E69C0(a5, a1, a2, a3, a4);
  return sub_1F4820();
}
