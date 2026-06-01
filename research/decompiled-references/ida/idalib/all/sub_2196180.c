__int64 __fastcall sub_2196180(_DWORD *a1, _QWORD *a2)
{
  unsigned __int8 (*v2)(void); // rax
  __int64 result; // rax

  v2 = *(unsigned __int8 (**)(void))(*(_QWORD *)a1 + 64LL);
  if ( (char *)v2 == (char *)sub_2195C40 )
  {
    if ( (unsigned int)(a1[2] - 19) > 1 )
    {
      *a2 += 12LL;
      return 12;
    }
    else
    {
      *a2 += 16LL;
      return 16;
    }
  }
  else if ( v2() )
  {
    *a2 += 16LL;
    return 16;
  }
  else
  {
    result = 12;
    *a2 += 12LL;
  }
  return result;
}
