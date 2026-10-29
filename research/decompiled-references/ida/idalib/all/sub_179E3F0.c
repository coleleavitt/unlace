char __fastcall sub_179E3F0(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v7; // rax
  __int64 *i; // rax
  __int64 v9; // rcx
  __int64 v10; // rdi
  unsigned __int8 v11; // al
  __int64 v12; // rdx
  unsigned __int64 *v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  unsigned __int64 j; // rax
  _QWORD *v17; // rbx
  __int64 v18; // rbp
  _QWORD *v19; // r12
  __int64 v20; // rax
  __int64 v21; // rbp
  _QWORD *v22; // rbp
  _QWORD *v23; // r13
  unsigned __int64 v24; // rdi
  unsigned __int64 v25; // rdi
  unsigned __int64 v26; // rdi
  unsigned __int64 v27; // rdi
  __int64 *v28; // rax
  __int64 *v29; // rax
  __int64 *v30; // rax
  __int64 *v31; // rax
  __int64 *v32; // rax
  __int64 *v33; // rax
  __int64 *v34; // rax
  __int64 *v35; // rax
  __int64 *v36; // rax
  __int64 *k; // rax
  __int64 v38; // rcx
  __int64 *m; // rax
  __int64 v40; // rcx
  __int64 *n; // rax
  __int64 v42; // rcx
  unsigned __int64 v43; // rdi
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rdi
  unsigned __int64 v46; // rdi

  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 2320) + 1LL) & 8) != 0 )
    return 1;
  if ( (*(_BYTE *)(a3 + 29) & 1) == 0 )
    goto LABEL_3;
  v7 = sub_B8C3D0(a3, a2, a3, a4, a5, a6);
  a3 = *v7;
  a4 = *v7 + 8LL * *((unsigned int *)v7 + 2);
  if ( *v7 >= a4 )
  {
    if ( a3 == a4 )
      goto LABEL_3;
    if ( *(_WORD *)(*(_QWORD *)a4 + 36LL) != 435 )
    {
      for ( i = (__int64 *)(a4 + 8); ; ++i )
      {
        a4 = (unsigned __int64)i;
        if ( (__int64 *)a3 == i )
          break;
        v9 = *i;
        if ( *(_WORD *)(v9 + 36) == 435 )
          return 1;
      }
      goto LABEL_3;
    }
    return 1;
  }
  v30 = (__int64 *)*v7;
  while ( 1 )
  {
    a3 = *v30;
    if ( *(_WORD *)(*v30 + 36) == 435 )
      break;
    if ( (__int64 *)a4 == ++v30 )
      goto LABEL_3;
  }
  if ( (__int64 *)a4 != v30 )
    return 1;
LABEL_3:
  if ( *(_DWORD *)a1 != 3 )
  {
    if ( *(_DWORD *)a1 == 2 )
    {
      v10 = **(_QWORD **)(a1 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      v11 = *(_BYTE *)(v10 + 28) & 0x7F;
      v12 = (v11 + 52) & 0x7F;
      if ( (unsigned __int8)v12 <= 1u || (unsigned int)v11 - 53 <= 1 )
        v10 = sub_B72ED0(v10);
      if ( (*(_BYTE *)(v10 + 29) & 1) != 0 )
      {
        v13 = sub_B8C3D0(v10, a2, v12, a4, a5, a6);
        v14 = *v13;
        v15 = *v13 + 8LL * *((unsigned int *)v13 + 2);
        if ( *v13 < v15 )
        {
          v44 = *v13;
          while ( 1 )
          {
            v14 = v44;
            if ( *(_WORD *)(*(_QWORD *)v44 + 36LL) == 435 )
              break;
            v44 += 8LL;
            if ( v15 == v44 )
              return 0;
          }
          return v14 != v15;
        }
        if ( v14 != v15 )
        {
          if ( *(_WORD *)(*(_QWORD *)v15 + 36LL) != 435 )
          {
            for ( j = v15 + 8; ; j += 8LL )
            {
              v15 = j;
              if ( v14 == j )
                break;
              if ( *(_WORD *)(*(_QWORD *)v15 + 36LL) == 435 )
                return v14 != v15;
            }
            return 0;
          }
          return v14 != v15;
        }
      }
    }
    return 0;
  }
  v17 = *(_QWORD **)(a1 + 8);
  v18 = 8LL * *(unsigned int *)(a1 + 16);
  v19 = &v17[(unsigned __int64)v18 / 8];
  v20 = v18 >> 3;
  v21 = v18 >> 5;
  if ( !v21 )
  {
LABEL_87:
    if ( v20 != 2 )
    {
      if ( v20 != 3 )
      {
        if ( v20 != 1 )
          return 0;
LABEL_90:
        v43 = *v17 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_BYTE *)(v43 + 29) & 1) != 0 && sub_179ACE0(v43, a2, a3, a4, a5, a6) )
          return v19 != v17;
        return 0;
      }
      v45 = *v17 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_BYTE *)(v45 + 29) & 1) != 0 && sub_179ACE0(v45, a2, a3, a4, a5, a6) )
        return v19 != v17;
      ++v17;
    }
    v46 = *v17 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_BYTE *)(v46 + 29) & 1) != 0 && sub_179ACE0(v46, a2, a3, a4, a5, a6) )
      return v19 != v17;
    ++v17;
    goto LABEL_90;
  }
  v22 = &v17[4 * v21];
  while ( 1 )
  {
    v27 = *v17 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_BYTE *)(v27 + 29) & 1) != 0 )
    {
      v28 = sub_B8C3D0(v27, a2, a3, a4, a5, a6);
      a3 = *v28;
      a4 = *v28 + 8LL * *((unsigned int *)v28 + 2);
      if ( *v28 < a4 )
      {
        v29 = (__int64 *)*v28;
        while ( 1 )
        {
          a3 = *v29;
          if ( *(_WORD *)(*v29 + 36) == 435 )
            break;
          if ( (__int64 *)a4 == ++v29 )
            goto LABEL_27;
        }
        if ( (__int64 *)a4 != v29 )
          return v19 != v17;
        goto LABEL_27;
      }
      if ( a3 != a4 )
        break;
    }
LABEL_27:
    v23 = v17 + 1;
    v24 = v17[1] & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_BYTE *)(v24 + 29) & 1) != 0 )
    {
      v31 = sub_B8C3D0(v24, a2, a3, a4, a5, a6);
      a3 = *v31;
      a4 = *v31 + 8LL * *((unsigned int *)v31 + 2);
      if ( *v31 >= a4 )
      {
        if ( a3 != a4 )
        {
          if ( *(_WORD *)(*(_QWORD *)a4 + 36LL) == 435 )
            return v19 != v23;
          for ( k = (__int64 *)(a4 + 8); ; ++k )
          {
            a4 = (unsigned __int64)k;
            if ( (__int64 *)a3 == k )
              break;
            v38 = *k;
            if ( *(_WORD *)(v38 + 36) == 435 )
              return v19 != v23;
          }
        }
      }
      else
      {
        v32 = (__int64 *)*v31;
        while ( 1 )
        {
          a3 = *v32;
          if ( *(_WORD *)(*v32 + 36) == 435 )
            break;
          if ( (__int64 *)a4 == ++v32 )
            goto LABEL_28;
        }
        if ( (__int64 *)a4 != v32 )
          return v19 != v23;
      }
    }
LABEL_28:
    v23 = v17 + 2;
    v25 = v17[2] & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_BYTE *)(v25 + 29) & 1) != 0 )
    {
      v33 = sub_B8C3D0(v25, a2, a3, a4, a5, a6);
      a3 = *v33;
      a4 = *v33 + 8LL * *((unsigned int *)v33 + 2);
      if ( *v33 >= a4 )
      {
        if ( a3 != a4 )
        {
          if ( *(_WORD *)(*(_QWORD *)a4 + 36LL) == 435 )
            return v19 != v23;
          for ( m = (__int64 *)(a4 + 8); ; ++m )
          {
            a4 = (unsigned __int64)m;
            if ( (__int64 *)a3 == m )
              break;
            v40 = *m;
            if ( *(_WORD *)(v40 + 36) == 435 )
              return v19 != v23;
          }
        }
      }
      else
      {
        v34 = (__int64 *)*v33;
        while ( 1 )
        {
          a3 = *v34;
          if ( *(_WORD *)(*v34 + 36) == 435 )
            break;
          if ( (__int64 *)a4 == ++v34 )
            goto LABEL_29;
        }
        if ( (__int64 *)a4 != v34 )
          return v19 != v23;
      }
    }
LABEL_29:
    v23 = v17 + 3;
    v26 = v17[3] & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_BYTE *)(v26 + 29) & 1) != 0 )
    {
      v35 = sub_B8C3D0(v26, a2, a3, a4, a5, a6);
      a3 = *v35;
      a4 = *v35 + 8LL * *((unsigned int *)v35 + 2);
      if ( *v35 >= a4 )
      {
        if ( a3 != a4 )
        {
          if ( *(_WORD *)(*(_QWORD *)a4 + 36LL) == 435 )
            return v19 != v23;
          for ( n = (__int64 *)(a4 + 8); ; ++n )
          {
            a4 = (unsigned __int64)n;
            if ( (__int64 *)a3 == n )
              break;
            v42 = *n;
            if ( *(_WORD *)(v42 + 36) == 435 )
              return v19 != v23;
          }
        }
      }
      else
      {
        v36 = (__int64 *)*v35;
        while ( 1 )
        {
          a3 = *v36;
          if ( *(_WORD *)(*v36 + 36) == 435 )
            break;
          if ( (__int64 *)a4 == ++v36 )
            goto LABEL_30;
        }
        if ( (__int64 *)a4 != v36 )
          return v19 != v23;
      }
    }
LABEL_30:
    v17 += 4;
    if ( v22 == v17 )
    {
      v20 = v19 - v17;
      goto LABEL_87;
    }
  }
  while ( *(_WORD *)(*(_QWORD *)a4 + 36LL) != 435 )
  {
    a4 += 8LL;
    if ( a3 == a4 )
      goto LABEL_27;
  }
  return v19 != v17;
}
