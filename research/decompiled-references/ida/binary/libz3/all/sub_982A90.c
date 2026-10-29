__int64 __fastcall sub_982A90(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // r11
  unsigned int v5; // eax
  __int64 v6; // rdi
  unsigned int *v7; // rcx
  unsigned __int64 v8; // r8
  __int64 v9; // rax

  v3 = *(_QWORD *)(a1 + 336);
  if ( v3 )
  {
    v5 = *(_DWORD *)(v3 - 4);
    if ( a2 < v5 )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8872LL);
      v7 = (unsigned int *)(v3 + 4LL * a2);
      v8 = v3 + 4 * (a2 + (unsigned __int64)(v5 - a2 - 1)) + 4;
      do
      {
        v9 = *v7++;
        *(_BYTE *)(v6 + 16 * v9 + 11) &= ~1u;
      }
      while ( (unsigned int *)v8 != v7 );
    }
    *(_DWORD *)(v3 - 4) = a2;
  }
  return sub_9827B0(a1, a3);
}

