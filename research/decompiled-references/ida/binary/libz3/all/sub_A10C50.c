__int64 __fastcall sub_A10C50(__int64 *a1, double a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  __int64 v4; // rax
  unsigned int v5; // r12d
  __int64 v6; // rdx

  v2 = a1[58];
  v3 = *(unsigned __int8 *)(v2 + 144);
  if ( (_BYTE)v3 )
  {
    v3 = *(unsigned __int8 *)(v2 + 36);
    if ( (_BYTE)v3 )
    {
      v4 = a1[103];
      v3 = 0;
      if ( v4 )
      {
        v5 = 0;
        do
        {
          if ( v5 >= *(_DWORD *)(v4 - 4) )
            break;
          v6 = v5++;
          v3 |= sub_A101B0(a1, *(_DWORD *)(v4 + 4 * v6), a2);
          v4 = a1[103];
        }
        while ( v4 );
      }
    }
  }
  return v3;
}

