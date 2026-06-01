void __fastcall sub_8E7370(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbx
  __int64 *v3; // rbp
  __int64 v4; // rsi
  char v5; // al

  v2 = *(__int64 **)(a2 + 56);
  if ( v2 )
  {
    v3 = &v2[*((unsigned int *)v2 - 1)];
    while ( v3 != v2 )
    {
      while ( 1 )
      {
        v4 = *v2;
        v5 = *(_BYTE *)(*v2 + 44);
        if ( (v5 & 1) == 0
          && v4 == *(_QWORD *)(v4 + 24)
          && ((v5 & 0x10) == 0 || *(_QWORD *)(*(_QWORD *)(v4 + 112) + 8LL) != *(_QWORD *)(*(_QWORD *)(v4 + 120) + 8LL)) )
        {
          *(_BYTE *)(v4 + 44) |= 1u;
          if ( (*(_BYTE *)(v4 + 45) & 1) != 0 )
            break;
        }
        if ( v3 == ++v2 )
          return;
      }
      ++v2;
      sub_97A460(a1 + 8712);
    }
  }
}

