__int64 __fastcall sub_EE2300(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // r13d
  unsigned __int8 v9; // cl
  unsigned __int64 *v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax

  v8 = sub_EE1FD0(a1, a2, a3);
  if ( (_BYTE)v8 )
  {
    if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    {
LABEL_3:
      v9 = 0;
LABEL_4:
      sub_EE19F0(a1, a2, a3, v9);
      return v8;
    }
    v11 = sub_B8C3D0(a2, a2, v4, v5, v6, v7);
    v12 = *v11;
    v13 = *v11 + 8LL * *((unsigned int *)v11 + 2);
    if ( *v11 < v13 )
    {
      v15 = *v11;
      while ( 1 )
      {
        v12 = v15;
        if ( *(_WORD *)(*(_QWORD *)v15 + 36LL) == 288 )
          break;
        v15 += 8LL;
        if ( v13 == v15 )
          goto LABEL_3;
      }
    }
    else
    {
      if ( v12 == v13 )
        goto LABEL_3;
      if ( *(_WORD *)(*(_QWORD *)v13 + 36LL) != 288 )
      {
        v14 = v13 + 8;
        do
        {
          v13 = v14;
          if ( v12 == v14 )
            goto LABEL_3;
          v14 += 8LL;
        }
        while ( *(_WORD *)(*(_QWORD *)v13 + 36LL) != 288 );
      }
    }
    v9 = v12 != v13;
    goto LABEL_4;
  }
  return v8;
}
