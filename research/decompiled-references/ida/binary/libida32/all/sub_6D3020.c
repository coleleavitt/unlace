unsigned __int64 __fastcall sub_6D3020(__int64 a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 result; // rax
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rdx

  v1 = *(_QWORD *)(a1 + 128);
  result = 0;
  if ( v1 > 7 )
  {
    if ( (v1 & 4) != 0 )
    {
      v3 = *(_QWORD *)(v1 & 0xFFFFFFFFFFFFFFF8LL);
      v4 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFF0LL);
      v5 = *(_QWORD *)(v4 + 8);
      if ( (v5 & 7) != 0 || (v5 & 8) != 0 )
        return sub_F411C0(v3) & 0xFFFFFFFFFFFFFFF0LL;
      else
        return v4 & 0xFFFFFFFFFFFFFFF0LL;
    }
    else
    {
      return v1 & 0xFFFFFFFFFFFFFFF0LL;
    }
  }
  return result;
}

