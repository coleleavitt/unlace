void __fastcall sub_204C2F0(__int64 a1)
{
  __int64 v1; // rdx
  __int64 i; // rdi
  __int64 v3; // rcx
  _QWORD *v4; // rax
  _QWORD *v5; // r8
  _QWORD *v6; // rsi
  __int64 v7; // rcx

  v1 = *(_QWORD *)(a1 + 56);
  for ( i = a1 + 48; i != v1; v1 = *(_QWORD *)(v1 + 8) )
  {
    if ( !v1 )
      BUG();
    v3 = 4LL * (*(_DWORD *)(v1 - 20) & 0x7FFFFFF);
    if ( (*(_BYTE *)(v1 - 17) & 0x40) != 0 )
    {
      v4 = *(_QWORD **)(v1 - 32);
      v5 = &v4[v3];
    }
    else
    {
      v5 = (_QWORD *)(v1 - 24);
      v4 = (_QWORD *)(v1 - 24 - v3 * 8);
    }
    for ( ; v5 != v4; v4 += 4 )
    {
      v6 = (_QWORD *)v4[2];
      if ( v6 )
      {
        v7 = v4[1];
        *v6 = v7;
        if ( v7 )
        {
          *(_QWORD *)(v7 + 16) = v6;
          v4[1] = 0;
        }
        v4[2] = 0;
      }
      *v4 = 0;
    }
  }
}
