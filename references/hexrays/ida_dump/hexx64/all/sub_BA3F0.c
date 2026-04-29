__int64 __fastcall sub_BA3F0(__int64 a1, unsigned __int8 *a2)
{
  __int64 v3; // rdx
  __int64 v4; // r13
  unsigned __int8 v5; // al
  __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // rax
  _QWORD *v10; // rdx
  __int64 v11; // rsi
  __int64 *v12; // r14
  unsigned __int64 v13; // rbp
  __int64 v14; // rdx
  _DWORD *v15; // rcx
  _DWORD *v16; // rax
  __int64 *v17; // rax
  __int64 v18; // rdx
  unsigned __int64 v19; // rax
  __int64 v20; // r14
  __int64 v21; // rsi
  int v22; // eax
  unsigned __int64 v23; // rdx
  __int64 *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx

  v3 = *(_QWORD *)(a1 + 48);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 320) + 1504LL);
  v5 = *a2;
  if ( *a2 == 9 )
  {
    v11 = *((_QWORD *)a2 + 1);
    v12 = *(__int64 **)(a1 + 72);
    v13 = *(int *)(v11 + 16);
    if ( !v12 )
      goto LABEL_24;
    v14 = v12[1];
    v15 = (_DWORD *)(*v12 + 4 * v14);
    if ( (_DWORD *)*v12 == v15 )
      goto LABEL_34;
    v16 = (_DWORD *)*v12;
    while ( *v16 != (_DWORD)v13 )
    {
      if ( v15 == ++v16 )
        goto LABEL_34;
    }
    if ( v15 == v16 )
    {
LABEL_34:
      v23 = v14 + 1;
      if ( v12[2] < v23 )
      {
        v25 = qvector_reserve(v12, *v12, v23, 4);
        v26 = v12[1];
        *v12 = v25;
        v15 = (_DWORD *)(v25 + 4 * v26);
      }
      *v15 = v13;
      ++v12[1];
      v24 = *(__int64 **)(a1 + 56);
      v18 = *v24;
      v19 = v24[1];
      if ( *a2 != 9 )
      {
        if ( !under_debugger )
          sub_383060(50050);
        goto LABEL_48;
      }
      v11 = *((_QWORD *)a2 + 1);
      v13 = *(int *)(v11 + 16);
    }
    else
    {
LABEL_24:
      v17 = *(__int64 **)(a1 + 56);
      v18 = *v17;
      v19 = v17[1];
    }
    v20 = *(_QWORD *)(v11 + 8);
    if ( v13 >= v19 )
    {
      if ( !under_debugger )
        sub_383060(50051);
      goto LABEL_48;
    }
    v21 = *(_QWORD *)(v18 + 8 * v13);
    if ( v21 )
    {
      v22 = *((_DWORD *)a2 + 1);
      if ( v22 == -1 )
      {
        if ( (_DWORD)v20 )
        {
          if ( !under_debugger )
            sub_383060(50966);
          goto LABEL_48;
        }
        sub_125180(a2);
      }
      else
      {
        if ( *(_DWORD *)(v21 + 4) != (_DWORD)v20 + v22 )
        {
          if ( !under_debugger )
            sub_383060(50052);
          goto LABEL_48;
        }
        sub_125180(a2);
        if ( (_DWORD)v20 )
          sub_126F10(a2, v4, (unsigned int)v20);
      }
      goto LABEL_14;
    }
    return 1;
  }
  if ( v5 <= 9u )
  {
    if ( v5 != 7 )
    {
      if ( v5 == 8 )
      {
        v6 = *((_QWORD *)a2 + 1);
        if ( *(_DWORD *)(v6 + 284) == 13 )
          sub_120A10(*(_QWORD *)(v6 + 24), *(_QWORD *)(*(_QWORD *)(v3 + 320) + 1504LL), v3, 8, -1, 0);
      }
      return 0;
    }
    v9 = *((int *)a2 + 2);
    if ( (int)v9 > 0 )
    {
      v10 = *(_QWORD **)(a1 + 64);
      if ( v9 < v10[1] )
      {
        *((_DWORD *)a2 + 2) = *(_DWORD *)(*v10 + 4 * v9);
        return 0;
      }
    }
    if ( !under_debugger )
      sub_383060(50053);
LABEL_48:
    BUG();
  }
  if ( v5 != 10 )
    return 0;
  result = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)a1 + 16LL))(
             a1,
             *((_QWORD *)a2 + 1),
             0,
             0);
  if ( !(_DWORD)result )
  {
    v8 = *((_QWORD *)a2 + 1);
    if ( *(_BYTE *)v8 != 4 )
    {
      if ( *(_BYTE *)v8 != 1 )
        *(_DWORD *)(v8 + 4) = -1;
LABEL_14:
      *(_BYTE *)(a1 + 40) = 1;
      return 0;
    }
    return 1;
  }
  return result;
}
