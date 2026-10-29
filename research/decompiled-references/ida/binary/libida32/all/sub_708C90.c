__int64 __fastcall sub_708C90(_QWORD *a1, __int64 a2)
{
  __int64 v3; // r12
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rax
  _QWORD *v8; // rdx
  __int64 v9; // rbx
  __int64 v11; // rdx
  __int64 v12; // rax

  if ( !a2 || *(_DWORD *)(a2 + 12) || !*(_QWORD *)(a2 + 32) )
    return -1;
  v3 = a1[1];
  qmutex_lock(v3);
  v5 = a1[4];
  v6 = a1[3];
  v7 = (int)v5;
  if ( (int)v5 <= 0 )
  {
    v7 = (int)v5;
    v9 = 0;
  }
  else
  {
    v8 = (_QWORD *)a1[3];
    do
    {
      if ( *v8 == a2 )
      {
        v9 = -2;
        goto LABEL_9;
      }
      ++v8;
    }
    while ( v8 != (_QWORD *)(v6 + 8LL * (unsigned int)(v5 - 1) + 8) );
    v9 = 0;
    while ( *(_QWORD *)(v6 + 8 * v9) )
    {
      if ( (int)v5 == ++v9 )
        goto LABEL_16;
    }
  }
  if ( v7 == v9 )
  {
LABEL_16:
    v11 = v5 + 1;
    if ( a1[5] < (unsigned __int64)(v5 + 1) )
    {
      v12 = qvector_reserve(a1 + 3, v6, v11, 8);
      v5 = a1[4];
      a1[3] = v12;
      v6 = v12;
      v11 = v5 + 1;
    }
    a1[4] = v11;
    *(_QWORD *)(v6 + 8 * v5) = a2;
  }
  else
  {
    *(_QWORD *)(v6 + 8 * v9) = a2;
  }
LABEL_9:
  qmutex_unlock(v3);
  return v9;
}

