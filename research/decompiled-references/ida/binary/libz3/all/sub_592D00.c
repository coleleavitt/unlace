__int64 *__fastcall sub_592D00(__int64 *a1, __int64 a2)
{
  __int64 v3; // rax
  int v4; // edi
  _BYTE *v5; // r8
  unsigned int i; // ecx

  v3 = sub_186B270(0x40u);
  *(_QWORD *)v3 = &off_1C51CC0;
  v4 = *(_DWORD *)(a2 + 40);
  *(_DWORD *)(v3 + 8) = 0;
  *(_QWORD *)(v3 + 16) = a2;
  *(_DWORD *)(v3 + 24) = 0;
  *(_QWORD *)(v3 + 40) = a2;
  *(_QWORD *)(v3 + 48) = 0;
  *(_QWORD *)(v3 + 32) = &off_1C680D8;
  *(_QWORD *)(v3 + 56) = v3;
  if ( v4 )
  {
    v5 = *(_BYTE **)(a2 + 48);
    if ( (*v5 & 1) == 0 )
    {
      *(_DWORD *)(v3 + 24) = 1;
      if ( v4 != 1 )
      {
        for ( i = 1; i != v4; *(_DWORD *)(v3 + 24) = i )
        {
          if ( (*(_DWORD *)&v5[4 * (i >> 5)] & (1 << i)) != 0 )
            break;
          ++i;
        }
      }
    }
  }
  *a1 = v3;
  *(_DWORD *)(v3 + 8) = 1;
  return a1;
}

