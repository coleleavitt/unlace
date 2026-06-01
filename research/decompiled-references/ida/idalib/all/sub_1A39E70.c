void __fastcall sub_1A39E70(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rdx

  if ( a2 )
  {
    v2 = *(unsigned int *)(a1 + 24);
    if ( (_DWORD)v2 )
    {
      if ( **(_QWORD **)(a1 + 16) )
      {
        v3 = v2 + 1;
      }
      else
      {
        *(_DWORD *)(a1 + 24) = 0;
        v3 = 1;
        v2 = 0;
      }
    }
    else
    {
      v3 = 1;
      v2 = 0;
    }
    if ( *(unsigned int *)(a1 + 28) < v3 )
    {
      sub_2237220(a1 + 16, a1 + 32, v3, 8);
      v2 = *(unsigned int *)(a1 + 24);
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * v2) = a2;
    ++*(_DWORD *)(a1 + 24);
    if ( !*(_QWORD *)a1 )
      *(_QWORD *)a1 = *(_QWORD *)(a2 + 40);
  }
}
