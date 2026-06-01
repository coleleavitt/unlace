__int64 __fastcall sub_E73210(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( (unsigned int)sub_B73370(a2) )
  {
    result = (unsigned int)(*(_DWORD *)(a1 + 48) + 1);
    *(_DWORD *)(a1 + 48) = result;
  }
  else
  {
    result = (unsigned int)(*(_DWORD *)(a1 + 44) + 1);
    *(_DWORD *)(a1 + 44) = result;
  }
  return result;
}
