__int64 __fastcall sub_15E720(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  unsigned int v3; // edx

  v2 = (int)(float)((float)((float)(*(_DWORD *)(a1 + 744) - *(_DWORD *)(a1 + 740)) / (float)*(__int16 *)(a1 + 736))
                  * (float)*(int *)(a2 + 72))
     + *(_DWORD *)(a1 + 740);
  v3 = 0;
  if ( *(_DWORD *)(a1 + 744) == v2 )
    v3 = 0x7FFFFFFF;
  return sub_15E6E0(a1, v2, v3);
}

