__int64 __fastcall sub_CE6670(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r13
  __int64 v5; // rbx
  __int64 v6; // r12
  __int64 v7; // r15
  unsigned int v9; // [rsp+Ch] [rbp-3Ch]

  v3 = a3;
  v9 = 0;
  v4 = sub_E29BF0(*(_QWORD *)(a1 + 24), a3);
  do
  {
    v5 = *(_QWORD *)(v4 + 8);
    v6 = v5 + 32LL * *(unsigned int *)(v4 + 16);
    if ( v5 != v6 )
    {
      v7 = *(_QWORD *)v5;
      if ( a2 == *(_QWORD *)v5 )
      {
LABEL_12:
        v3 = a2;
      }
      else
      {
        while ( !(unsigned __int8)sub_B70650(v7, a2) )
        {
          v5 += 32;
          if ( v5 == v6 )
            goto LABEL_10;
          v7 = *(_QWORD *)v5;
          if ( *(_QWORD *)v5 == a2 )
            goto LABEL_12;
        }
        v3 = v7;
      }
      v9 += *(_DWORD *)(v5 + 8);
      v4 = *(_QWORD *)(v5 + 24);
    }
LABEL_10:
    ;
  }
  while ( v3 != a2 );
  return v9;
}
