bool __fastcall sub_179BA20(_BYTE *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 *v7; // rax
  __int64 *v8; // rdx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  __int64 *v11; // rax
  __int64 v12; // rcx

  if ( (a1[29] & 1) != 0 )
  {
    v7 = sub_B8C3D0((__int64)a1, a2, a3, a4, a5, a6);
    v8 = (__int64 *)*v7;
    v9 = *v7 + 8LL * *((unsigned int *)v7 + 2);
    if ( *v7 >= v9 )
    {
      if ( v8 != (__int64 *)v9 )
      {
        if ( *(_WORD *)(*(_QWORD *)v9 + 36LL) == 221 )
          goto LABEL_9;
        v11 = (__int64 *)(v9 + 8);
        while ( v8 != v11 )
        {
          v12 = *v11++;
          if ( *(_WORD *)(v12 + 36) == 221 )
            goto LABEL_9;
        }
      }
    }
    else
    {
      v10 = *v7;
      while ( *(_WORD *)(*(_QWORD *)v10 + 36LL) != 221 )
      {
        v10 += 8LL;
        if ( v9 == v10 )
          goto LABEL_2;
      }
      if ( v9 != v10 )
        goto LABEL_9;
    }
  }
LABEL_2:
  if ( (*(_BYTE *)(a2 + 45) & 1) == 0 )
    return 0;
LABEL_9:
  if ( (*(_BYTE *)(a2 + 1) & 8) != 0 || (a1[82] & 2) == 0 )
    return 0;
  return a1[81] >> 5 == 1;
}
