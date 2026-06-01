__int64 __fastcall sub_6DA8E0(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // ebp
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 v8; // rax

  v3 = *(_BYTE *)(a2 + 29) & 1;
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    return 0;
  v6 = sub_B8C3D0(a2);
  v7 = *(_QWORD *)v6 + 8LL * *(unsigned int *)(v6 + 8);
  v8 = 0;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
    v8 = *(_QWORD *)sub_B8C3D0(a2);
  if ( v8 == v7 )
  {
    return 0;
  }
  else
  {
    while ( a3 != *(unsigned __int16 *)(*(_QWORD *)v8 + 36LL) )
    {
      v8 += 8;
      if ( v7 == v8 )
        return 0;
    }
  }
  return v3;
}
