void __fastcall sub_F0A1F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbp

  v2 = *(_QWORD *)(a2 + 16);
  if ( (v2 & 4) != 0 )
  {
    v3 = *(_QWORD *)((v2 & 0xFFFFFFFFFFFFFFF8LL) + 48);
    if ( v3 )
    {
      sub_971800(*(_QWORD *)(a1 + 1096), " extended by ");
      sub_F06990(a1, v3);
    }
  }
}

