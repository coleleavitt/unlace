__int64 __fastcall sub_8E9110(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax

  v1 = *(_DWORD *)(a1 + 48);
  if ( v1 == 1 )
  {
    v4 = *(_QWORD *)(a1 + 24);
    if ( v4 )
      return *(unsigned int *)(v4 + 8);
    return 1;
  }
  else
  {
    v2 = *(unsigned int *)(a1 + 32);
    if ( (_DWORD)v2 != -1 )
    {
      if ( v1 )
      {
        if ( (unsigned int)(v1 - 2) <= 1 )
          BUG();
        v4 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 32LL);
      }
      else
      {
        v3 = *(_QWORD *)(a1 + 24);
        v4 = *(_QWORD *)(v3 + 32);
        if ( (_DWORD)v2 != *(_DWORD *)(v4 + 16) && (_DWORD)v2 )
          return *(unsigned int *)(*(_QWORD *)(v3 + v2 + 32) + 8LL);
      }
      return *(unsigned int *)(v4 + 8);
    }
    if ( (unsigned int)(v1 - 2) <= 1 )
      BUG();
    return *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 32LL) + 12LL);
  }
}

