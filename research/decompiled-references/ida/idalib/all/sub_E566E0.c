bool __fastcall sub_E566E0(__int64 a1, _BYTE *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // r12d
  unsigned __int64 *v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r12
  unsigned __int8 v13; // cl
  char v14; // al
  __int64 v15; // rax

  if ( (a2[28] & 0x7Fu) - 34 <= 5 )
  {
    v6 = sub_B841C0((__int64)a2);
    if ( (a2[29] & 1) != 0 )
    {
      v8 = sub_B8C3D0((__int64)a2, (__int64)a2, v2, v3, v4, v5);
      v9 = *v8;
      v10 = *v8 + 8LL * *((unsigned int *)v8 + 2);
      if ( *v8 >= v10 )
      {
        if ( v9 != v10 )
        {
          while ( *(_WORD *)(*(_QWORD *)v10 + 36LL) != 435 )
          {
            v10 += 8LL;
            if ( v9 == v10 )
              goto LABEL_3;
          }
          return 1;
        }
      }
      else
      {
        v11 = *v8;
        while ( *(_WORD *)(*(_QWORD *)v11 + 36LL) != 435 )
        {
          v11 += 8LL;
          if ( v10 == v11 )
            goto LABEL_3;
        }
        if ( v10 != v11 )
          return 1;
      }
    }
LABEL_3:
    if ( (unsigned __int8)sub_B81C90((__int64)a2) || (unsigned __int8)sub_B7E110((__int64)a2) )
      return 0;
    if ( (a2[40] & 7) != 0 || v6 == 1 )
      return 1;
    if ( !v6 )
      return 0;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 2320LL) + 1LL) & 8) == 0 )
    return 0;
  if ( ((a2[28] + 88) & 0x7Fu) > 5 )
    return 1;
  if ( (unsigned __int8)sub_B82160((__int64)a2) )
    return 0;
  v12 = sub_E3D330(a1, (__int64)a2);
  v13 = *(_BYTE *)(v12 + 8) & 0x7F;
  if ( v13 > 0x12u )
  {
    if ( ((v13 + 94) & 0x7Fu) > 5 )
      return 1;
  }
  else if ( ((1LL << v13) & 0x40182) == 0 )
  {
    goto LABEL_25;
  }
  v14 = sub_B843B0(a2);
  v13 = *(_BYTE *)(v12 + 8) & 0x7F;
  if ( v14 && v13 && v13 != 24 )
  {
    do
    {
      v15 = sub_B8C1B0(v12);
      v12 = sub_E3D330(a1, v15);
      v13 = *(_BYTE *)(v12 + 8) & 0x7F;
    }
    while ( v13 != 24 && v13 );
  }
LABEL_25:
  if ( v13
    || (unsigned __int8)sub_B844D0(a2) == 2
    || (unsigned __int8)sub_E564D0(a1, (__int64)a2)
    || (a2[28] & 0x7Fu) - 41 <= 1 )
  {
    return 1;
  }
  return sub_B72C70((__int64)a2) != 0;
}
