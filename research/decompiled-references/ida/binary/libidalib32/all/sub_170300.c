__int64 __fastcall sub_170300(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // r13
  __int64 v6; // r14
  __int64 *i; // r12
  __int64 v8; // rax
  unsigned int v9; // edx
  unsigned __int64 v10; // rbx
  unsigned int v11; // ecx
  unsigned int v12; // esi
  int v13; // ecx
  __int16 v14; // dx
  unsigned int v15; // esi
  __int64 v16; // rcx
  __int16 v17; // ax
  int v18; // edx
  __int16 v19; // ax
  __int64 *j; // rax
  unsigned int v21; // esi
  __int16 v22; // dx
  unsigned int v23; // edx
  unsigned int v24; // ecx
  __int64 k; // rbx
  __int64 v26; // rcx

  result = (__int64)a2 - a1;
  if ( (__int64)a2 - a1 > 128 )
  {
    v4 = result >> 4;
    v5 = a3;
    v6 = ((__int64)a2 - a1) >> 3;
    for ( i = a2; v5; v6 = (__int64)(v10 - a1) >> 3 )
    {
      v8 = a1 + 8 * v4;
      v9 = *(_DWORD *)(a1 + 8);
      --v5;
      v10 = a1 + 8;
      v11 = *(_DWORD *)v8;
      if ( v9 < *(_DWORD *)v8 || v11 >= v9 && *(_WORD *)(a1 + 12) < *(_WORD *)(v8 + 4) )
      {
        v15 = *((_DWORD *)i - 2);
        if ( v11 >= v15 && (v15 < v11 || *(_WORD *)(v8 + 4) >= *((_WORD *)i - 2)) )
        {
          if ( v9 < v15 || v15 >= v9 && *(_WORD *)(a1 + 12) < *((_WORD *)i - 2) )
          {
LABEL_20:
            v18 = *(_DWORD *)a1;
            v19 = *(_WORD *)(a1 + 4);
            *(_QWORD *)a1 = *(i - 1);
            *((_DWORD *)i - 2) = v18;
            *((_WORD *)i - 2) = v19;
            goto LABEL_21;
          }
LABEL_19:
          v16 = *(_QWORD *)(a1 + 8);
          v17 = *(_WORD *)(a1 + 4);
          *(_DWORD *)(a1 + 8) = *(_DWORD *)a1;
          *(_QWORD *)a1 = v16;
          *(_WORD *)(a1 + 12) = v17;
          goto LABEL_21;
        }
      }
      else
      {
        v12 = *((_DWORD *)i - 2);
        if ( v9 < v12 || v12 >= v9 && *(_WORD *)(a1 + 12) < *((_WORD *)i - 2) )
          goto LABEL_19;
        if ( v11 < v12 || v12 >= v11 && *(_WORD *)(v8 + 4) < *((_WORD *)i - 2) )
          goto LABEL_20;
      }
      v13 = *(_DWORD *)a1;
      v14 = *(_WORD *)(a1 + 4);
      *(_QWORD *)a1 = *(_QWORD *)v8;
      *(_DWORD *)v8 = v13;
      *(_WORD *)(v8 + 4) = v14;
LABEL_21:
      for ( j = i; ; *((_WORD *)j + 2) = v22 )
      {
        v23 = *(_DWORD *)a1;
        while ( 1 )
        {
          v24 = *(_DWORD *)v10;
          if ( *(_DWORD *)v10 >= v23 && (v23 < v24 || *(_WORD *)(v10 + 4) >= *(_WORD *)(a1 + 4)) )
            break;
          v10 += 8LL;
        }
        do
        {
          do
            v21 = *((_DWORD *)j-- - 2);
          while ( v23 < v21 );
        }
        while ( v21 >= v23 && *(_WORD *)(a1 + 4) < *((_WORD *)j + 2) );
        if ( v10 >= (unsigned __int64)j )
          break;
        v22 = *(_WORD *)(v10 + 4);
        v10 += 8LL;
        *(_QWORD *)(v10 - 8) = *j;
        *(_DWORD *)j = v24;
      }
      sub_170300(v10, i, v5);
      result = v10 - a1;
      if ( (__int64)(v10 - a1) <= 128 )
        return result;
      i = (__int64 *)v10;
      v4 = result >> 4;
    }
    for ( k = v4 - 1; ; --k )
    {
      sub_1700A0(a1, k, v6, *(_QWORD *)(a1 + 8 * k));
      if ( !k )
        break;
    }
    for ( result = (__int64)i - a1; (__int64)i - a1 > 8; result = sub_1700A0(a1, 0, ((__int64)i - a1) >> 3, v26) )
    {
      v26 = *--i;
      *i = *(_QWORD *)a1;
    }
  }
  return result;
}

