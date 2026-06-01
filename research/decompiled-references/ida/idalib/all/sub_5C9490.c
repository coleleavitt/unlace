unsigned __int64 __fastcall sub_5C9490(_QWORD *a1, __int64 a2)
{
  char v2; // dl
  unsigned __int64 result; // rax

  v2 = sub_5C7820(a1, a2, 1);
  result = -1;
  if ( v2 )
  {
    result = *(_QWORD *)(a2 + 8);
    if ( *(_DWORD *)(a2 + 128) )
    {
      if ( result < *(_QWORD *)(*(_QWORD *)(a2 + 136) + 16LL * *(int *)(a2 + 128) - 8) )
        return *(_QWORD *)(*(_QWORD *)(a2 + 136) + 16LL * *(int *)(a2 + 128) - 8);
    }
  }
  return result;
}
