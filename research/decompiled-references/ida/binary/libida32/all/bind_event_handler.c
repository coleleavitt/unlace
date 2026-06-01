__int64 __fastcall bind_event_handler(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v3; // rsi
  __int64 v4; // rdx
  _QWORD *v5; // rcx
  _QWORD *v6; // rax
  unsigned __int64 v8; // rdx
  _QWORD *v9; // rsi
  __int64 v10; // rdx
  _QWORD *v11; // rcx
  _QWORD *v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx

  v3 = (_QWORD *)a1[1];
  v4 = a1[2];
  v5 = &v3[v4];
  if ( v3 != v5 )
  {
    v6 = (_QWORD *)a1[1];
    while ( (_QWORD *)*v6 != a2 )
    {
      if ( v5 == ++v6 )
        goto LABEL_7;
    }
    if ( v5 != v6 )
      return 0;
  }
LABEL_7:
  v8 = v4 + 1;
  if ( a1[3] < v8 )
  {
    v14 = qvector_reserve(a1 + 1, v3, v8, 8);
    v15 = a1[2];
    a1[1] = v14;
    v5 = (_QWORD *)(v14 + 8 * v15);
  }
  *v5 = a2;
  ++a1[2];
  v9 = (_QWORD *)a2[1];
  v10 = a2[2];
  v11 = &v9[v10];
  if ( v9 == v11 )
    goto LABEL_15;
  v12 = (_QWORD *)a2[1];
  while ( (_QWORD *)*v12 != a1 )
  {
    if ( v11 == ++v12 )
      goto LABEL_15;
  }
  if ( v11 == v12 )
  {
LABEL_15:
    v13 = v10 + 1;
    if ( a2[3] < v13 )
    {
      v16 = qvector_reserve(a2 + 1, v9, v13, 8);
      v17 = a2[2];
      a2[1] = v16;
      v11 = (_QWORD *)(v16 + 8 * v17);
    }
    *v11 = a1;
    ++a2[2];
  }
  return 1;
}

