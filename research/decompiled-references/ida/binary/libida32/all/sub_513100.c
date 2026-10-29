__int64 __fastcall sub_513100(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int name_ea; // ebx

  name_ea = get_name_ea(0xFFFFFFFFLL, a3);
  if ( !sub_4CA060(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 1480LL), name_ea) )
    return (unsigned int)-1;
  return name_ea;
}

