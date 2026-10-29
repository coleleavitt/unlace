void __fastcall sub_1666600(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // ebp
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 *v21; // rax
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  __int64 *i; // rax
  __int64 v27; // rcx
  __int64 *v28; // rax
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  unsigned __int64 v32; // rcx
  __int64 *v33; // rax
  __int64 *v34; // rax
  __int64 *v35; // rax
  unsigned __int64 *v36; // rax
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // rax
  __int64 *v40; // rax
  __int64 *j; // rax
  __int64 v42; // rcx

  v6 = a3;
  v7 = a2;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v21 = sub_B8C3D0(a2, a2, a3, a4, a5, a6);
    v24 = *v21;
    v25 = *v21 + 8LL * *((unsigned int *)v21 + 2);
    if ( *v21 < v25 )
    {
      v40 = (__int64 *)*v21;
      while ( 1 )
      {
        v24 = *v40;
        if ( *(_WORD *)(*v40 + 36) == 257 )
          break;
        if ( (__int64 *)v25 == ++v40 )
          goto LABEL_11;
      }
      if ( (__int64 *)v25 != v40 )
        return;
    }
    else if ( v24 != v25 )
    {
      if ( *(_WORD *)(*(_QWORD *)v25 + 36LL) == 257 )
        return;
      for ( i = (__int64 *)(v25 + 8); ; ++i )
      {
        v25 = (unsigned __int64)i;
        if ( (__int64 *)v24 == i )
          break;
        v27 = *i;
        if ( *(_WORD *)(v27 + 36) == 257 )
          return;
      }
    }
LABEL_11:
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
    {
      v28 = sub_B8C3D0(a2, a2, v24, v25, v22, v23);
      v31 = *v28;
      v32 = *v28 + 8LL * *((unsigned int *)v28 + 2);
      if ( *v28 >= v32 )
      {
        if ( v31 != v32 )
        {
          if ( *(_WORD *)(*(_QWORD *)v32 + 36LL) == 53 )
            return;
          for ( j = (__int64 *)(v32 + 8); ; ++j )
          {
            v32 = (unsigned __int64)j;
            if ( (__int64 *)v31 == j )
              break;
            v42 = *j;
            if ( *(_WORD *)(v42 + 36) == 53 )
              return;
          }
        }
      }
      else
      {
        v33 = (__int64 *)*v28;
        while ( 1 )
        {
          v31 = *v33;
          if ( *(_WORD *)(*v33 + 36) == 53 )
            break;
          if ( (__int64 *)v32 == ++v33 )
            goto LABEL_16;
        }
        if ( (__int64 *)v32 != v33 )
          return;
      }
LABEL_16:
      if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      {
        v34 = sub_B8C3D0(a2, a2, v31, v32, v29, v30);
        v12 = *v34;
        v13 = *v34 + 8LL * *((unsigned int *)v34 + 2);
        if ( *v34 >= v13 )
        {
          if ( v12 != v13 )
          {
            while ( *(_WORD *)(*(_QWORD *)v13 + 36LL) != 321 )
            {
              v13 += 8LL;
              if ( v12 == v13 )
                goto LABEL_2;
            }
            goto LABEL_3;
          }
        }
        else
        {
          v35 = (__int64 *)*v34;
          while ( 1 )
          {
            v12 = *v35;
            if ( *(_WORD *)(*v35 + 36) == 321 )
              break;
            if ( (__int64 *)v13 == ++v35 )
              goto LABEL_2;
          }
          if ( (__int64 *)v13 != v35 )
            goto LABEL_3;
        }
      }
    }
  }
LABEL_2:
  a2 = sub_B32670(*(_QWORD *)(a1 + 248), ((unsigned __int64)v6 << 32) | v6, 0);
  sub_B8CC60(v7, a2, v8, v9, v10, v11);
LABEL_3:
  if ( (*(_BYTE *)(v7 + 29) & 1) == 0 )
  {
LABEL_4:
    v16 = sub_B331E0(*(_QWORD *)(a1 + 248), ((unsigned __int64)v6 << 32) | v6, 0);
    sub_B8CC60(v7, v16, v17, v18, v19, v20);
    return;
  }
  v36 = sub_B8C3D0(v7, a2, v12, v13, v14, v15);
  v37 = *v36;
  v38 = *v36 + 8LL * *((unsigned int *)v36 + 2);
  if ( *v36 >= v38 )
  {
    if ( v37 == v38 )
      goto LABEL_4;
    while ( *(_WORD *)(*(_QWORD *)v38 + 36LL) != 54 )
    {
      v38 += 8LL;
      if ( v37 == v38 )
        goto LABEL_4;
    }
  }
  else
  {
    v39 = *v36;
    while ( *(_WORD *)(*(_QWORD *)v39 + 36LL) != 54 )
    {
      v39 += 8LL;
      if ( v38 == v39 )
        goto LABEL_4;
    }
    if ( v38 == v39 )
      goto LABEL_4;
  }
}
