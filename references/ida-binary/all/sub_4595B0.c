unsigned __int64 __fastcall sub_4595B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  unsigned __int64 result; // rax

  if ( !(_DWORD)a2 )
  {
    if ( (_DWORD)a3 )
    {
      if ( (_DWORD)a3 == 1 )
        return sub_3DA680(a1, **(QT::QWidget ****)(a4 + 8), a5);
    }
    else
    {
      return sub_3D9EF0(a1, a5, a2, a3, a4);
    }
  }
  return result;
}
