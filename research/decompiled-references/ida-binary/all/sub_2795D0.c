__int64 __fastcall sub_2795D0(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  __int64 v3; // rax

  v2 = 7;
  if ( *(_QWORD *)(a2 + 24) )
  {
    if ( !strcmp(*(const char **)(a2 + 16), "Progress") && *(_QWORD *)(a2 + 56) == 1 )
    {
      v3 = *(_QWORD *)(a2 + 40);
      if ( v3 )
      {
        if ( *(__int64 *)(*(_QWORD *)(**(_QWORD **)(v3 + 216) + 8LL * **(_QWORD **)(a2 + 48)) + 128LL) < 0 )
          return 3;
      }
    }
  }
  return v2;
}
