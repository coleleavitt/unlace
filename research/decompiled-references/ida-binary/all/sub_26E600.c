__int64 __fastcall sub_26E600(__int64 a1, __int64 a2)
{
  if ( *(int *)a2 >= 0 && *(int *)(a2 + 4) >= 0 && *(_QWORD *)(a2 + 16) )
    return *(_DWORD *)(a2 + 12) == 0;
  else
    return *(unsigned int *)(a1 + 24);
}
