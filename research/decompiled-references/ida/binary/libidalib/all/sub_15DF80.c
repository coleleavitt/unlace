__int64 __fastcall sub_15DF80(__int64 *a1)
{
  __int64 v1; // rax
  __int64 result; // rax

  if ( a1[1] )
  {
    qfree();
    *((_DWORD *)a1 + 4) = 0;
    a1[1] = 0;
    qfree();
    v1 = *a1;
    a1[4] = 0;
    *((_DWORD *)a1 + 10) = 0;
    *(_BYTE *)(v1 + 848) = 0;
    *(_BYTE *)(v1 + 961) = 1;
    return sub_19C290(2, 0, 0);
  }
  return result;
}

