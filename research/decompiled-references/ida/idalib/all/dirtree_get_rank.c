unsigned __int64 __fastcall dirtree_get_rank(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // r11
  __int64 v6; // r10
  __int64 v7; // rax
  __int64 v8; // rcx
  _QWORD *v10; // rdx
  __int64 v11; // r10

  if ( a2 < *(_QWORD *)(a1 + 56) )
  {
    v3 = *(_QWORD *)(a1 + 48) + 176 * a2;
    v4 = *(_QWORD *)(v3 + 32);
    v5 = *(_QWORD *)(v3 + 24);
    v6 = v5 + 9 * v4;
    if ( (*(_BYTE *)(v3 + 168) & 4) != 0 )
    {
      if ( !*(_BYTE *)(a3 + 8) )
      {
        v7 = sub_773990(*(_QWORD *)(v3 + 24), v5 + 9 * v4, a3);
        v8 = -1;
        if ( v7 == v11 || *(_QWORD *)v7 != *v10 || *(_BYTE *)(v7 + 8) )
          return v8;
        return 0x8E38E38E38E38E39LL * (v7 - v5);
      }
      v7 = *(_QWORD *)(v3 + 24);
      if ( v4 )
      {
        do
        {
          if ( !*(_BYTE *)(v7 + 8) )
            break;
          if ( *(_QWORD *)v7 == *(_QWORD *)a3 )
            goto LABEL_8;
          v7 += 9;
        }
        while ( v7 != v6 );
      }
    }
    else if ( v5 != v6 )
    {
      v7 = *(_QWORD *)(v3 + 24);
      while ( *(_QWORD *)a3 != *(_QWORD *)v7 || *(_BYTE *)(a3 + 8) != *(_BYTE *)(v7 + 8) )
      {
        v7 += 9;
        if ( v7 == v6 )
          return -1;
      }
LABEL_8:
      if ( v7 != v6 )
        return 0x8E38E38E38E38E39LL * (v7 - v5);
    }
  }
  return -1;
}
