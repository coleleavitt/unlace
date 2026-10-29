__int64 __fastcall sub_781770(__int64 a1)
{
  __int64 result; // rax
  unsigned __int64 *v2; // rax
  __int64 v3; // rax
  unsigned __int64 v4; // [rsp+0h] [rbp-10h]

  result = 0;
  if ( (~*(_BYTE *)(a1 + 68) & 0xC) != 0 && (*(_BYTE *)(a1 + 68) & 0xC) != 0 )
  {
    v2 = *(unsigned __int64 **)(a1 + 72);
    if ( (*(_BYTE *)(a1 + 68) & 1) != 0 )
    {
      v4 = *v2;
      if ( (*v2 & 1) != 0 )
        goto LABEL_5;
    }
    else
    {
      v4 = *(_QWORD *)(a1 + 72);
      if ( ((unsigned __int8)v2 & 1) != 0 )
      {
LABEL_5:
        v3 = sub_798D40(a1);
        return (*(__int64 (__fastcall **)(_QWORD, unsigned __int64))(**(_QWORD **)(v3 + 18200) + 40LL))(
                 *(_QWORD *)(v3 + 18200),
                 v4 >> 1);
      }
    }
    return v4;
  }
  return result;
}

