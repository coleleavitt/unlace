unsigned __int64 __fastcall sub_6B31C0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 result; // rax
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rdx

  v2 = *(_QWORD *)(a1 + 128);
  result = 0;
  if ( v2 > 7 )
  {
    if ( (v2 & 4) != 0 )
    {
      v4 = *(_QWORD *)(v2 & 0xFFFFFFFFFFFFFFF8LL);
      v5 = *(_QWORD *)(v4 & 0xFFFFFFFFFFFFFFF0LL);
      v6 = *(_QWORD *)(v5 + 8);
      if ( (v6 & 7) != 0 || (v6 & 8) != 0 )
        return sub_B0CF30(v4, a2) & 0xFFFFFFFFFFFFFFF0LL;
      else
        return v5 & 0xFFFFFFFFFFFFFFF0LL;
    }
    else
    {
      return v2 & 0xFFFFFFFFFFFFFFF0LL;
    }
  }
  return result;
}

