__int64 __fastcall sub_FACBB0(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  if ( a4 )
  {
    return (unsigned int)sub_FACAD0(a1, 0, a2, a3, 5u);
  }
  else
  {
    sub_FB0530(*(_QWORD *)(a1 + 32), a2, a3, 4);
    return (unsigned int)sub_FB03A0(*(_QWORD *)(a1 + 32), 0, a2, a3);
  }
}

