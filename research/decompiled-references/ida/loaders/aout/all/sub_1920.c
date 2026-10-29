__int64 __fastcall sub_1920(__int64 a1, unsigned __int16 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  __int64 v11; // rax

  set_selector(a2, 0);
  if ( !(unsigned __int8)add_segm(a2, a3, a4, a5, a6, 32) )
    sub_1870(0);
  result = *(unsigned int *)(a1 + 4);
  if ( !(_DWORD)result )
  {
    v11 = getseg(a3);
    return set_segm_addressing(v11, 1);
  }
  return result;
}

