__int64 __fastcall sub_11A210(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 v3; // rax

  result = 0;
  if ( *(_QWORD *)(a1 + 56) )
  {
    v2 = *(_QWORD *)(a1 + 40);
    if ( v2 )
    {
      v3 = *(_QWORD *)(v2 + 184) + 24LL * **(_QWORD **)(a1 + 48);
      if ( *(_QWORD *)(v3 + 8) )
        sub_1189D0(*(const char **)v3);
      else
        sub_1189D0(s1);
      return 1;
    }
  }
  return result;
}

