__int64 __fastcall sub_C7A070(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 result; // rax
  __int64 v4; // rdx
  _BYTE *v5; // rdx
  _BYTE *v6; // rax

  v2 = a2;
  result = *(unsigned int *)(a1 + 12);
  if ( (_DWORD)result != 1 )
  {
    if ( (_DWORD)result != 2 )
      return result;
    v4 = *(_QWORD *)(a2 + 24);
    result = *(_QWORD *)(a2 + 32);
    if ( *(_BYTE *)(a1 + 21) )
    {
      if ( v4 == result )
      {
        sub_22581D0(a2, ".", 1);
        result = *(_QWORD *)(a2 + 32);
      }
      else
      {
        *(_BYTE *)result = 46;
        result = *(_QWORD *)(a2 + 32) + 1LL;
        *(_QWORD *)(a2 + 32) = result;
      }
      v4 = *(_QWORD *)(a2 + 24);
      if ( (*(_BYTE *)(a1 + 20) & 1) != 0 )
        goto LABEL_5;
    }
    else if ( (*(_BYTE *)(a1 + 20) & 1) != 0 )
    {
LABEL_5:
      if ( v4 == result )
      {
        v2 = sub_22581D0(a2, "*", 1);
      }
      else
      {
        *(_BYTE *)result = 42;
        ++*(_QWORD *)(a2 + 32);
      }
      result = sub_2257BD0(v2, (unsigned int)(*(_DWORD *)(a1 + 16) + 1));
      v5 = *(_BYTE **)(result + 32);
      if ( v5 == *(_BYTE **)(result + 24) )
        return sub_22581D0(result, "$", 1);
      *v5 = 36;
      ++*(_QWORD *)(result + 32);
      return result;
    }
    if ( v4 == result )
      return sub_22581D0(a2, "*", 1);
    *(_BYTE *)result = 42;
    ++*(_QWORD *)(a2 + 32);
    return result;
  }
  if ( *(_BYTE *)(a1 + 21) )
  {
    v6 = *(_BYTE **)(a2 + 32);
    if ( *(_BYTE **)(a2 + 24) == v6 )
    {
      sub_22581D0(a2, ".", 1);
    }
    else
    {
      *v6 = 46;
      ++*(_QWORD *)(a2 + 32);
    }
  }
  return sub_2257BD0(a2, *(unsigned int *)(a1 + 16));
}

