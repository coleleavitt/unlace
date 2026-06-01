bool __fastcall sub_179BC40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  bool v6; // dl
  __int64 v8; // rbx
  __int64 *v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  __int64 *v14; // rax
  __int64 v15; // rcx
  __int64 *v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  __int64 *v21; // rax
  unsigned __int64 *v22; // rax
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rax
  __int64 *v26; // rax
  unsigned __int64 v27; // rax

  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    goto LABEL_2;
  v8 = a2;
  v9 = sub_B8C3D0(a2, a2, a3, a4, a5, a6);
  v12 = *v9;
  v13 = *v9 + 8LL * *((unsigned int *)v9 + 2);
  if ( *v9 < v13 )
  {
    v26 = (__int64 *)*v9;
    while ( 1 )
    {
      v12 = *v26;
      if ( *(_WORD *)(*v26 + 36) == 160 )
        break;
      if ( (__int64 *)v13 == ++v26 )
        goto LABEL_10;
    }
    if ( (__int64 *)v13 != v26 )
      goto LABEL_26;
  }
  else if ( v12 != v13 )
  {
    a2 = *(_QWORD *)v13;
    v14 = (__int64 *)(v13 + 8);
    if ( *(_WORD *)(*(_QWORD *)v13 + 36LL) == 160 )
    {
LABEL_26:
      v6 = 1;
      return ((*(_BYTE *)(a1 + 89) & 4) != 0) == v6;
    }
    while ( 1 )
    {
      v13 = (unsigned __int64)v14;
      if ( (__int64 *)v12 == v14 )
        break;
      v15 = *v14++;
      if ( *(_WORD *)(v15 + 36) == 160 )
        goto LABEL_26;
    }
  }
LABEL_10:
  if ( (*(_BYTE *)(v8 + 29) & 1) != 0 )
  {
    v16 = sub_B8C3D0(v8, a2, v12, v13, v10, v11);
    v19 = *v16;
    v20 = *v16 + 8LL * *((unsigned int *)v16 + 2);
    if ( *v16 >= v20 )
    {
      if ( v19 != v20 )
      {
        while ( *(_WORD *)(*(_QWORD *)v20 + 36LL) != 168 )
        {
          v20 += 8LL;
          if ( v19 == v20 )
            goto LABEL_15;
        }
        goto LABEL_26;
      }
    }
    else
    {
      v21 = (__int64 *)*v16;
      while ( 1 )
      {
        v19 = *v21;
        if ( *(_WORD *)(*v21 + 36) == 168 )
          break;
        if ( (__int64 *)v20 == ++v21 )
          goto LABEL_15;
      }
      if ( (__int64 *)v20 != v21 )
        goto LABEL_26;
    }
LABEL_15:
    if ( (*(_BYTE *)(v8 + 29) & 1) != 0 )
    {
      v22 = sub_B8C3D0(v8, a2, v19, v20, v17, v18);
      v23 = *v22;
      v24 = *v22 + 8LL * *((unsigned int *)v22 + 2);
      if ( *v22 < v24 )
      {
        v25 = *v22;
        while ( 1 )
        {
          v23 = v25;
          if ( *(_WORD *)(*(_QWORD *)v25 + 36LL) == 163 )
            goto LABEL_32;
          v25 += 8LL;
          if ( v24 == v25 )
            goto LABEL_2;
        }
      }
      if ( v23 != v24 )
      {
        if ( *(_WORD *)(*(_QWORD *)v24 + 36LL) != 163 )
        {
          v27 = v24 + 8;
          do
          {
            v24 = v27;
            if ( v23 == v27 )
              goto LABEL_2;
            v27 += 8LL;
          }
          while ( *(_WORD *)(*(_QWORD *)v24 + 36LL) != 163 );
        }
LABEL_32:
        v6 = v23 != v24;
        return ((*(_BYTE *)(a1 + 89) & 4) != 0) == v6;
      }
    }
  }
LABEL_2:
  v6 = 0;
  return ((*(_BYTE *)(a1 + 89) & 4) != 0) == v6;
}
