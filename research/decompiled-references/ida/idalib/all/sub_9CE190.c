void __fastcall sub_9CE190(__int64 a1, __int64 a2, __int64 *a3, __int64 *a4, char a5)
{
  __int64 v8; // r15
  unsigned int v9; // eax
  __int64 v10; // rbx
  __int64 v11; // r14
  int v12; // edx
  __int64 v13; // rax
  __int64 *v14; // rdx
  unsigned __int64 v15; // rcx
  __int64 *i; // rax
  __int64 v17; // rcx
  __int64 *v18; // rax

  if ( !a2 )
    return;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v13 = sub_B8C3D0(a2);
    v14 = *(__int64 **)v13;
    v15 = *(_QWORD *)v13 + 8LL * *(unsigned int *)(v13 + 8);
    if ( *(_QWORD *)v13 < v15 )
    {
      v18 = *(__int64 **)v13;
      while ( *(_WORD *)(*v18 + 36) != 285 )
      {
        if ( (__int64 *)v15 == ++v18 )
          goto LABEL_3;
      }
      if ( (__int64 *)v15 != v18 )
        return;
    }
    else if ( v14 != (__int64 *)v15 )
    {
      if ( *(_WORD *)(*(_QWORD *)v15 + 36LL) == 285 )
        return;
      for ( i = (__int64 *)(v15 + 8); v14 != i; ++i )
      {
        v17 = *i;
        if ( *(_WORD *)(v17 + 36) == 285 )
          return;
      }
    }
  }
LABEL_3:
  v8 = *(_QWORD *)(a2 + 120);
  sub_B76070(a2);
  v10 = v8 + 8;
  if ( !a5 )
    v10 = v8;
  v11 = v8 + 8LL * v9;
  if ( v10 != v11 && a4 != a3 )
  {
    while ( 1 )
    {
      v12 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v10 + 48LL)
                                                                   & 0xFFFFFFFFFFFFFFF0LL)
                                                       + 8LL)
                                           & 0xFFFFFFFFFFFFFFF0LL)
                               + 16LL);
      if ( (unsigned int)(v12 - 43) <= 1 )
        break;
      if ( (_BYTE)v12 != 42 )
        goto LABEL_9;
      v10 += 8;
      sub_9CDDD0(*(_QWORD *)a1, a1 + 8, *a3, 0, 7u);
      if ( v10 == v11 )
        return;
LABEL_10:
      if ( a4 == ++a3 )
        return;
    }
    sub_9CD930(*(_QWORD *)a1, (unsigned __int16 **)(a1 + 8), *a3, 0, 3u);
LABEL_9:
    v10 += 8;
    if ( v10 == v11 )
      return;
    goto LABEL_10;
  }
}
