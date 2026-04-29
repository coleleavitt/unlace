__int64 __fastcall sub_DB6C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rdx
  bool v6; // zf
  __int64 v7; // r13
  int v8; // r15d
  __int64 v9; // rax
  __int64 v10; // r14
  int v11; // eax
  _DWORD *v13; // rdx
  int v14; // eax
  unsigned int v15; // r10d
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // r14
  char v19; // al
  __int64 v20; // rax
  char v21; // al
  unsigned int v23; // [rsp+Ch] [rbp-5Ch]
  char v24; // [rsp+17h] [rbp-51h] BYREF
  __int64 v25; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v26[9]; // [rsp+20h] [rbp-48h] BYREF

  v5 = *(_QWORD **)(a1 + 48);
  v6 = v5[1] == 0;
  v26[1] = __readfsqword(0x28u);
  v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 480LL) + 112LL);
  if ( v6 )
    return 0;
  v8 = 0;
  v9 = 0;
  while ( 1 )
  {
    v10 = 4 * v9;
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v7 + 240LL))(
            v7,
            *(unsigned int *)(*v5 + 4 * v9),
            a3)
        & 1) != 0 )
      break;
    v5 = *(_QWORD **)(a1 + 48);
    v9 = ++v8;
    if ( (unsigned __int64)v8 >= v5[1] )
      return 0;
  }
  v11 = *(_DWORD *)(a1 + 124);
  if ( (*(_BYTE *)(a1 + 120) & 6) != 0 )
  {
LABEL_5:
    if ( v8 >= v11 )
      return 1;
LABEL_7:
    *(_DWORD *)(a1 + 136) = *(_DWORD *)(a2 + 72);
    return 1;
  }
  v13 = (_DWORD *)(*(_QWORD *)(a1 + 80) + 4LL * v11);
  if ( v8 >= v11 )
  {
    if ( *v13 != -1 && *v13 <= v8 )
    {
      if ( v8 <= v11 )
        return 1;
      goto LABEL_14;
    }
    v14 = v8;
  }
  else
  {
    v14 = v11 + 1;
    *(_DWORD *)(a1 + 136) = *(_DWORD *)(a2 + 72);
    if ( v14 >= *v13 && *v13 != -1 )
      goto LABEL_7;
  }
  *v13 = v14;
  v11 = *(_DWORD *)(a1 + 124);
  if ( v11 >= v8 )
    goto LABEL_5;
LABEL_14:
  v15 = *(_DWORD *)(**(_QWORD **)(a1 + 48) + v10);
  v16 = *(_QWORD *)(a1 + 32);
  v25 = a4;
  v17 = *(_QWORD *)(v16 + 480);
  v18 = *(_QWORD *)(v17 + 112);
  if ( *(char *)(*(_QWORD *)(v17 + 8) + 10LL) >= 0
    || (v23 = v15, v24 = 1, LOBYTE(v26[0]) = 1, v20 = sub_CFF70(0x2Du, &v25, &v24, v26), v15 = v23, v20 != 1) )
  {
    v25 = -1;
LABEL_16:
    v19 = sub_32E840(v26, v18, v15, a3 + 1, a4, 1);
    if ( (v19 & 2) != 0 )
    {
LABEL_23:
      *(_QWORD *)(a1 + 112) = v26[0];
      return 0;
    }
    *(_QWORD *)(a1 + 112) = -1;
    if ( !v19 )
    {
      v11 = *(_DWORD *)(a1 + 124);
      goto LABEL_5;
    }
    return 0;
  }
  if ( v25 == -1 )
    goto LABEL_16;
  v21 = sub_32E840(v26, v18, v23, v25, v25 + 1, 1);
  v15 = v23;
  if ( !v21 )
    goto LABEL_16;
  if ( (v21 & 2) != 0 )
    goto LABEL_23;
  *(_QWORD *)(a1 + 112) = -1;
  return 0;
}
