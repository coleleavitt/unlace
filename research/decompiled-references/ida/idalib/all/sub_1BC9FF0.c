__int64 *__fastcall sub_1BC9FF0(__int64 *a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 *v8; // rbx
  __int64 *v9; // rbp
  __int64 v10; // rdi
  __int64 *v11; // r13
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 *v14; // rax
  __int64 *v15; // rax
  __int64 *v17; // rax
  __int64 *v18; // rax
  __int64 *v19; // rax
  __int64 *v20; // rax
  __int64 *v21; // rax
  __int64 *v22; // rax
  __int64 *i; // rax
  __int64 v24; // rcx
  __int64 *j; // rax
  __int64 v26; // rcx
  unsigned __int64 *v27; // rax
  __int64 *v28; // rdx
  unsigned __int64 v29; // rcx
  __int64 *n; // rax
  __int64 v31; // rcx
  __int64 *v32; // rax
  __int64 *m; // rax
  __int64 v34; // rcx
  unsigned __int64 v35; // rax
  __int64 *v36; // rax
  __int64 *v37; // rax
  __int64 *v38; // rax
  __int64 *k; // rax
  __int64 v40; // rcx

  v6 = (a2 - (__int64)a1) >> 5;
  v7 = (a2 - (__int64)a1) >> 3;
  if ( v6 <= 0 )
  {
    v8 = a1;
  }
  else
  {
    v8 = a1;
    v9 = &a1[4 * v6];
    do
    {
      if ( (*(_BYTE *)(*v8 + 29) & 1) != 0 )
      {
        v14 = sub_B8C3D0(*v8, a2, a3, a4, a5, a6);
        a3 = *v14;
        a4 = *v14 + 8LL * *((unsigned int *)v14 + 2);
        if ( *v14 >= a4 )
        {
          if ( a3 != a4 )
          {
            if ( *(_WORD *)(*(_QWORD *)a4 + 36LL) == 102 )
              return v8;
            for ( i = (__int64 *)(a4 + 8); ; ++i )
            {
              a4 = (unsigned __int64)i;
              if ( (__int64 *)a3 == i )
                break;
              v24 = *i;
              if ( *(_WORD *)(v24 + 36) == 102 )
                return v8;
            }
          }
        }
        else
        {
          v15 = (__int64 *)*v14;
          while ( 1 )
          {
            a3 = *v15;
            if ( *(_WORD *)(*v15 + 36) == 102 )
              break;
            if ( (__int64 *)a4 == ++v15 )
              goto LABEL_3;
          }
          if ( (__int64 *)a4 != v15 )
            return v8;
        }
      }
LABEL_3:
      v10 = v8[1];
      v11 = v8 + 1;
      if ( (*(_BYTE *)(v10 + 29) & 1) != 0 )
      {
        v17 = sub_B8C3D0(v10, a2, a3, a4, a5, a6);
        a3 = *v17;
        a4 = *v17 + 8LL * *((unsigned int *)v17 + 2);
        if ( *v17 >= a4 )
        {
          if ( a3 != a4 )
          {
            if ( *(_WORD *)(*(_QWORD *)a4 + 36LL) == 102 )
              return v11;
            for ( j = (__int64 *)(a4 + 8); ; ++j )
            {
              a4 = (unsigned __int64)j;
              if ( (__int64 *)a3 == j )
                break;
              v26 = *j;
              if ( *(_WORD *)(v26 + 36) == 102 )
                return v11;
            }
          }
        }
        else
        {
          v18 = (__int64 *)*v17;
          while ( 1 )
          {
            a3 = *v18;
            if ( *(_WORD *)(*v18 + 36) == 102 )
              break;
            if ( (__int64 *)a4 == ++v18 )
              goto LABEL_4;
          }
          if ( (__int64 *)a4 != v18 )
            return v11;
        }
      }
LABEL_4:
      v12 = v8[2];
      v11 = v8 + 2;
      if ( (*(_BYTE *)(v12 + 29) & 1) != 0 )
      {
        v19 = sub_B8C3D0(v12, a2, a3, a4, a5, a6);
        a3 = *v19;
        a4 = *v19 + 8LL * *((unsigned int *)v19 + 2);
        if ( *v19 >= a4 )
        {
          if ( a3 != a4 )
          {
            while ( *(_WORD *)(*(_QWORD *)a4 + 36LL) != 102 )
            {
              a4 += 8LL;
              if ( a3 == a4 )
                goto LABEL_5;
            }
            return v11;
          }
        }
        else
        {
          v20 = (__int64 *)*v19;
          while ( 1 )
          {
            a3 = *v20;
            if ( *(_WORD *)(*v20 + 36) == 102 )
              break;
            if ( (__int64 *)a4 == ++v20 )
              goto LABEL_5;
          }
          if ( (__int64 *)a4 != v20 )
            return v11;
        }
      }
LABEL_5:
      v13 = v8[3];
      v11 = v8 + 3;
      if ( (*(_BYTE *)(v13 + 29) & 1) != 0 )
      {
        v21 = sub_B8C3D0(v13, a2, a3, a4, a5, a6);
        a3 = *v21;
        a4 = *v21 + 8LL * *((unsigned int *)v21 + 2);
        if ( *v21 >= a4 )
        {
          if ( a3 != a4 )
          {
            while ( *(_WORD *)(*(_QWORD *)a4 + 36LL) != 102 )
            {
              a4 += 8LL;
              if ( a3 == a4 )
                goto LABEL_6;
            }
            return v11;
          }
        }
        else
        {
          v22 = (__int64 *)*v21;
          while ( 1 )
          {
            a3 = *v22;
            if ( *(_WORD *)(*v22 + 36) == 102 )
              break;
            if ( (__int64 *)a4 == ++v22 )
              goto LABEL_6;
          }
          if ( (__int64 *)a4 != v22 )
            return v11;
        }
      }
LABEL_6:
      v8 += 4;
    }
    while ( v9 != v8 );
    v7 = (a2 - (__int64)v8) >> 3;
  }
  if ( v7 != 2 )
  {
    if ( v7 != 3 )
    {
      if ( v7 != 1 )
        return (__int64 *)a2;
      goto LABEL_63;
    }
    if ( (*(_BYTE *)(*v8 + 29) & 1) != 0 )
    {
      v37 = sub_B8C3D0(*v8, a2, a3, a4, a5, a6);
      a3 = *v37;
      a4 = *v37 + 8LL * *((unsigned int *)v37 + 2);
      if ( *v37 >= a4 )
      {
        if ( a3 != a4 )
        {
          if ( *(_WORD *)(*(_QWORD *)a4 + 36LL) == 102 )
            return v8;
          for ( k = (__int64 *)(a4 + 8); ; ++k )
          {
            a4 = (unsigned __int64)k;
            if ( k == (__int64 *)a3 )
              break;
            v40 = *k;
            if ( *(_WORD *)(v40 + 36) == 102 )
              return v8;
          }
        }
      }
      else
      {
        v38 = (__int64 *)*v37;
        while ( 1 )
        {
          a3 = *v38;
          if ( *(_WORD *)(*v38 + 36) == 102 )
            break;
          if ( (__int64 *)a4 == ++v38 )
            goto LABEL_60;
        }
        if ( (__int64 *)a4 != v38 )
          return v8;
      }
    }
LABEL_60:
    ++v8;
  }
  if ( (*(_BYTE *)(*v8 + 29) & 1) != 0 )
  {
    v32 = sub_B8C3D0(*v8, a2, a3, a4, a5, a6);
    a3 = *v32;
    a4 = *v32 + 8LL * *((unsigned int *)v32 + 2);
    if ( *v32 < a4 )
    {
      v36 = (__int64 *)*v32;
      while ( 1 )
      {
        a3 = *v36;
        if ( *(_WORD *)(*v36 + 36) == 102 )
          break;
        if ( (__int64 *)a4 == ++v36 )
          goto LABEL_62;
      }
      if ( (__int64 *)a4 != v36 )
        return v8;
    }
    else if ( a3 != a4 )
    {
      if ( *(_WORD *)(*(_QWORD *)a4 + 36LL) == 102 )
        return v8;
      for ( m = (__int64 *)(a4 + 8); ; ++m )
      {
        a4 = (unsigned __int64)m;
        if ( (__int64 *)a3 == m )
          break;
        v34 = *m;
        if ( *(_WORD *)(v34 + 36) == 102 )
          return v8;
      }
    }
  }
LABEL_62:
  ++v8;
LABEL_63:
  if ( (*(_BYTE *)(*v8 + 29) & 1) != 0 )
  {
    v27 = sub_B8C3D0(*v8, a2, a3, a4, a5, a6);
    v28 = (__int64 *)*v27;
    v29 = *v27 + 8LL * *((unsigned int *)v27 + 2);
    if ( *v27 < v29 )
    {
      v35 = *v27;
      while ( *(_WORD *)(*(_QWORD *)v35 + 36LL) != 102 )
      {
        v35 += 8LL;
        if ( v29 == v35 )
          return (__int64 *)a2;
      }
      if ( v29 == v35 )
        return (__int64 *)a2;
      return v8;
    }
    if ( v28 != (__int64 *)v29 )
    {
      if ( *(_WORD *)(*(_QWORD *)v29 + 36LL) == 102 )
        return v8;
      for ( n = (__int64 *)(v29 + 8); v28 != n; ++n )
      {
        v31 = *n;
        if ( *(_WORD *)(v31 + 36) == 102 )
          return v8;
      }
    }
  }
  return (__int64 *)a2;
}
