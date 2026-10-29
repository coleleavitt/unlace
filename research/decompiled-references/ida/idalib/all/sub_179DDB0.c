__int64 __fastcall sub_179DDB0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 *v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 *v12; // rax
  __int64 *v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  __int64 *v18; // rax
  unsigned __int64 *v19; // rax
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rax
  __int64 *i; // rax
  __int64 v24; // rcx

  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) == 0 )
    return sub_B82160(a2);
  if ( (unsigned __int8)sub_B73580(a2) )
  {
    if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
      return sub_B82160(a2);
    v7 = sub_B8C3D0(a2, a2, v2, v3, v4, v5);
    v10 = *v7;
    v11 = *v7 + 8LL * *((unsigned int *)v7 + 2);
    if ( *v7 >= v11 )
    {
      if ( v10 != v11 )
      {
        if ( *(_WORD *)(*(_QWORD *)v11 + 36LL) == 435 )
          return 0;
        for ( i = (__int64 *)(v11 + 8); ; ++i )
        {
          v11 = (unsigned __int64)i;
          if ( (__int64 *)v10 == i )
            break;
          v24 = *i;
          if ( *(_WORD *)(v24 + 36) == 435 )
            return 0;
        }
      }
    }
    else
    {
      v12 = (__int64 *)*v7;
      while ( 1 )
      {
        v10 = *v12;
        if ( *(_WORD *)(*v12 + 36) == 435 )
          break;
        if ( (__int64 *)v11 == ++v12 )
          goto LABEL_11;
      }
      if ( (__int64 *)v11 != v12 )
        return 0;
    }
LABEL_11:
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 60LL) & 0x10) == 0 || (*(_BYTE *)(a2 + 29) & 1) == 0 )
      return sub_B82160(a2);
    v13 = sub_B8C3D0(a2, a2, v10, v11, v8, v9);
    v16 = *v13;
    v17 = *v13 + 8LL * *((unsigned int *)v13 + 2);
    if ( *v13 >= v17 )
    {
      if ( v16 != v17 )
      {
        while ( *(_WORD *)(*(_QWORD *)v17 + 36LL) != 160 )
        {
          v17 += 8LL;
          if ( v16 == v17 )
            goto LABEL_17;
        }
        return 0;
      }
    }
    else
    {
      v18 = (__int64 *)*v13;
      while ( 1 )
      {
        v16 = *v18;
        if ( *(_WORD *)(*v18 + 36) == 160 )
          break;
        if ( (__int64 *)v17 == ++v18 )
          goto LABEL_17;
      }
      if ( (__int64 *)v17 != v18 )
        return 0;
    }
LABEL_17:
    if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
      return sub_B82160(a2);
    v19 = sub_B8C3D0(a2, a2, v16, v17, v14, v15);
    v20 = *v19;
    v21 = *v19 + 8LL * *((unsigned int *)v19 + 2);
    if ( *v19 >= v21 )
    {
      if ( v20 == v21 )
        return sub_B82160(a2);
      while ( *(_WORD *)(*(_QWORD *)v21 + 36LL) != 165 )
      {
        v21 += 8LL;
        if ( v20 == v21 )
          return sub_B82160(a2);
      }
    }
    else
    {
      v22 = *v19;
      while ( *(_WORD *)(*(_QWORD *)v22 + 36LL) != 165 )
      {
        v22 += 8LL;
        if ( v21 == v22 )
          return sub_B82160(a2);
      }
      if ( v21 == v22 )
        return sub_B82160(a2);
    }
  }
  return 0;
}
