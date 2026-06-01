__int64 __fastcall sub_72CCF0(__int64 a1, int a2)
{
  __int64 v2; // rdx
  __int64 result; // rax
  __int64 v4; // rdx

  v2 = a1 + 744;
  *(_DWORD *)(a1 + 716) = a2;
  if ( a2 != 1 )
    v2 = 0;
  *(_QWORD *)(a1 + 640) = sub_72AF20(*(_QWORD *)(a1 + 640), a1, v2);
  result = sub_72C560(a1);
  if ( !(_BYTE)result )
    return 0;
  if ( *(_DWORD *)(a1 + 616) > 0x38Eu )
  {
    sub_35A790((char **)a1);
    return 0;
  }
  v4 = *(_QWORD *)(a1 + 704) + 8LL * *(unsigned int *)(a1 + 712);
  if ( v4 < *(_QWORD *)(a1 + 696) + 128LL )
    v4 = *(_QWORD *)(a1 + 696) + 128LL;
  if ( *(_QWORD *)(a1 + 56) < v4 )
  {
    sub_35A790((char **)a1);
    return 0;
  }
  return result;
}
