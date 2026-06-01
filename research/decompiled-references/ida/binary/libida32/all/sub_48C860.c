unsigned __int64 __fastcall sub_48C860(__int64 a1, int a2, int a3, unsigned int a4, unsigned int a5, char a6)
{
  unsigned __int64 result; // rax

  result = sub_48BA20(*(_QWORD *)(a1 + 8), a2, a3, a4, a5, a6);
  if ( a2 != 2 && a3 != 2 )
    return sub_48C340(a1, a3, a5, a2, a4, a6);
  return result;
}

