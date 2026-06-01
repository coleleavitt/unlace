bool __fastcall sub_179D380(__int64 a1, int a2)
{
  _QWORD *v2; // rax
  int v3; // r9d
  __int64 v4; // r10
  _QWORD *v5; // r11
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // r8
  _QWORD *v11; // rdx
  __int64 v12; // rax
  _QWORD *v13; // r11
  __int64 v14; // rdi
  __int64 v15; // rax
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  int v18; // edx
  __int64 v19; // r10
  _QWORD *v20; // r11
  _QWORD *v21; // rax
  _QWORD *v22; // r10
  _QWORD *v23; // rcx

  v2 = sub_179B160(
         *(_QWORD **)(*(_QWORD *)a1 + 40LL),
         *(_QWORD *)(*(_QWORD *)a1 + 40LL) + 8LL * *(unsigned int *)(*(_QWORD *)a1 + 48LL),
         a2);
  if ( v5 != v2 )
    return 1;
  v7 = *(_DWORD *)(v4 + 136);
  if ( !v7 )
  {
LABEL_22:
    v17 = sub_179B160(*(_QWORD **)(v4 + 736), *(_QWORD *)(v4 + 736) + 8LL * *(unsigned int *)(v4 + 744), v3);
    if ( v20 == v17 )
    {
      v21 = sub_179B160(
              *(_QWORD **)(*(_QWORD *)(v19 + 808) + 8LL),
              *(_QWORD *)(*(_QWORD *)(v19 + 808) + 8LL) + 8LL * *(unsigned int *)(*(_QWORD *)(v19 + 808) + 16LL),
              v18);
      return v22 != v21;
    }
    return 1;
  }
  v8 = *(_QWORD *)(v4 + 128);
  v9 = v8 + 24;
  v10 = v8 + 144LL * (unsigned int)(v7 - 1) + 168;
  while ( 1 )
  {
    v11 = *(_QWORD **)v9;
    v12 = 8LL * *(unsigned int *)(v9 + 8);
    v13 = (_QWORD *)(*(_QWORD *)v9 + v12);
    v14 = v12 >> 3;
    v15 = v12 >> 5;
    if ( v15 )
      break;
    v23 = *(_QWORD **)v9;
LABEL_18:
    if ( v14 != 2 )
    {
      if ( v14 != 3 )
      {
        if ( v14 != 1 )
          goto LABEL_21;
        goto LABEL_36;
      }
      if ( v3 == *(unsigned __int16 *)(*v23 + 32LL) )
        goto LABEL_24;
      ++v23;
    }
    if ( v3 == *(unsigned __int16 *)(*v23 + 32LL) )
      goto LABEL_24;
    ++v23;
LABEL_36:
    if ( v3 == *(unsigned __int16 *)(*v23 + 32LL) && v13 != v23 )
      return 1;
LABEL_21:
    v9 += 144;
    if ( v10 == v9 )
      goto LABEL_22;
  }
  if ( v3 == *(unsigned __int16 *)(*v11 + 32LL) )
  {
    v23 = *(_QWORD **)v9;
    goto LABEL_24;
  }
  if ( v3 == *(unsigned __int16 *)(v11[1] + 32LL) )
  {
    v23 = v11 + 1;
    goto LABEL_24;
  }
  if ( v3 == *(unsigned __int16 *)(v11[2] + 32LL) )
  {
    v23 = v11 + 2;
LABEL_24:
    if ( v13 != v23 )
      return 1;
    goto LABEL_21;
  }
  v16 = &v11[4 * v15];
  if ( v3 == *(unsigned __int16 *)(v11[3] + 32LL) )
  {
    v23 = v11 + 3;
    goto LABEL_24;
  }
  while ( 1 )
  {
    v23 = v11 + 4;
    if ( v16 == v11 + 4 )
    {
      v14 = v13 - v23;
      goto LABEL_18;
    }
    if ( v3 == *(unsigned __int16 *)(v11[4] + 32LL) )
      goto LABEL_24;
    if ( v3 == *(unsigned __int16 *)(v11[5] + 32LL) )
    {
      if ( v13 == v11 + 5 )
        goto LABEL_21;
      return 1;
    }
    if ( v3 == *(unsigned __int16 *)(v11[6] + 32LL) )
    {
      if ( v13 == v11 + 6 )
        goto LABEL_21;
      return 1;
    }
    if ( v3 == *(unsigned __int16 *)(v11[7] + 32LL) )
      break;
    v11 += 4;
  }
  if ( v13 == v11 + 7 )
    goto LABEL_21;
  return 1;
}
