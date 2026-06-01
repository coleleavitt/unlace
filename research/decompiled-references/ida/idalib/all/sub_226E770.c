__int64 __fastcall sub_226E770(__int64 a1, char *a2)
{
  char v2; // cl
  __int64 result; // rax
  size_t v4; // rax
  __int64 v5[3]; // [rsp+0h] [rbp-18h] BYREF

  if ( *(char **)(a1 + 48) == a2 )
    return 0;
  v2 = *a2;
  if ( (unsigned __int8)*a2 > 0x20u || (result = ((0x100002600uLL >> v2) & 1) == 0, ((0x100002600uLL >> v2) & 1) == 0) )
  {
    if ( *(_DWORD *)(a1 + 68) )
    {
      v5[0] = (__int64)a2;
      v5[1] = 1;
      v4 = j__strlen(",[]{}");
      return sub_2246EC0(v5, ",[]{}", v4, 0) == -1;
    }
    else
    {
      return 1;
    }
  }
  return result;
}
