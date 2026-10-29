void __fastcall sub_9A4400(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  int v4; // r11d
  __int64 v5; // rax
  unsigned int v6; // ecx

  v2 = *a1;
  if ( *a1 )
  {
    v3 = *(unsigned int *)(v2 - 4);
    v4 = *((_DWORD *)a1 + 2);
    v5 = 0;
    v6 = 0;
    if ( (_DWORD)v3 )
    {
      do
      {
        if ( *(_DWORD *)(v2 + 8 * v5) != -1 )
        {
          if ( v6 != (_DWORD)v5 )
          {
            *(_QWORD *)(v2 + 8LL * v6) = *(_QWORD *)(v2 + 8 * v5);
            *(_DWORD *)(*(_QWORD *)(*a2 + 24LL * *(unsigned int *)(v2 + 8 * v5))
                      + 40LL * *(unsigned int *)(v2 + 8 * v5 + 4)
                      + 36) = v6;
          }
          ++v6;
        }
        ++v5;
      }
      while ( v3 != v5 );
    }
    *(_DWORD *)(v2 - 4) = v4;
  }
  *((_DWORD *)a1 + 3) = -1;
}

