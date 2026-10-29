_BOOL8 __fastcall sub_77C620(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rdx
  _BOOL8 result; // rax
  _BYTE *v4; // rdx

  if ( sub_76AB10(a1, a2)
    || (*(_BYTE *)(*(_QWORD *)(sub_798D40(a1) + 2160) + 1LL) & 8) != 0
    || (result = 1, (*(_BYTE *)(a1 + 28) & 0x7F) != 0x29) && *(char *)(a1 + 97) < 0 )
  {
    v2 = *(_QWORD *)(a1 + 88);
    result = 0;
    if ( v2 )
    {
      result = (v2 >> 2) & 1;
      if ( ((v2 >> 2) & 1) != 0 )
      {
        result = 0;
        v4 = (_BYTE *)(v2 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v4 )
          return (*v4 & 4) != 0;
      }
    }
  }
  return result;
}

