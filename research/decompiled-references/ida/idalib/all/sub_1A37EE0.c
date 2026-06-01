unsigned __int64 __fastcall sub_1A37EE0(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 v8; // [rsp+8h] [rbp-30h]
  unsigned __int64 v9[4]; // [rsp+18h] [rbp-20h] BYREF

  if ( (*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    sub_1A37EE0();
    result = sub_E90000(a1);
    if ( (_DWORD)result != 1 )
    {
LABEL_3:
      if ( (_DWORD)result )
      {
        if ( (_DWORD)result == 2 )
        {
          result = *(_QWORD *)(sub_E90090(a1) + 40);
          if ( (result & 7) != 0 )
            return result;
          result &= 0xFFFFFFFFFFFFFFF8LL;
        }
        else
        {
          if ( (_DWORD)result != 3 )
            return result;
          v6 = 0;
          if ( ((*(__int64 *)(a1 + 8) >> 1) & 3) == 2 )
            v6 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF0LL;
          v9[0] = v6;
          result = sub_F685C0(v9, a2, v6, v3, v4, v5);
        }
      }
      else
      {
        if ( (*(_BYTE *)(a1 + 8) & 6) != 0 )
          return result;
        result = *(_QWORD *)(a1 + 16);
      }
      goto LABEL_9;
    }
  }
  else
  {
    *(_DWORD *)(a2 + 8) = 0;
    result = sub_E90000(a1);
    if ( (_DWORD)result != 1 )
      goto LABEL_3;
  }
  result = *(_QWORD *)(sub_E90060(a1) + 40);
  if ( (result & 7) != 0 )
    return result;
  if ( (result & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    return result;
  result = *(_QWORD *)(sub_E90060(a1) + 40);
  if ( (result & 7) != 0 )
    return result;
  result &= 0xFFFFFFFFFFFFFFF8LL;
LABEL_9:
  if ( result )
  {
    v7 = *(unsigned int *)(a2 + 8);
    if ( v7 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
    {
      v8 = result;
      sub_2237220(a2, a2 + 16, v7 + 1, 8);
      v7 = *(unsigned int *)(a2 + 8);
      result = v8;
    }
    *(_QWORD *)(*(_QWORD *)a2 + 8 * v7) = result;
    ++*(_DWORD *)(a2 + 8);
  }
  return result;
}
