unsigned __int64 __fastcall sub_7AF1E0(_QWORD *a1, _QWORD *a2, int a3)
{
  _DWORD *v5; // rcx
  int v6; // eax
  unsigned __int64 result; // rax
  __int64 v8; // rsi
  unsigned int *v9; // rdi
  unsigned int v10; // r14d
  _QWORD *v11; // rbx
  unsigned int v12; // r13d
  __int64 v13; // r12
  _DWORD *v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // r11
  __int64 (__fastcall *v17)(); // rdx
  __int64 (__fastcall *v18)(); // rax
  __int64 v19; // rax
  unsigned int v20; // edx
  __int64 v21; // rax
  int *v22; // rax
  int v23; // edx
  unsigned __int64 v24; // rbx
  int v25; // edx
  _DWORD *v26; // rsi
  int v27; // eax
  _DWORD *v28; // rdi
  int v29; // eax
  char v30; // al
  unsigned int v31; // ebp

  v5 = (_DWORD *)*a2;
  if ( *a2 )
    v6 = *(v5 - 1);
  else
    v6 = 0;
  LODWORD(result) = v6 - 1;
  do
  {
    if ( (_DWORD)result == -1 )
    {
      sub_1872CE0("");
      sub_1873130(114, 825);
    }
    v8 = (unsigned int)result;
    result = (unsigned int)(result - 1);
    v9 = &v5[2 * v8];
  }
  while ( a3 != v9[1] >> 1 );
  v31 = *v9;
  v24 = *v9;
  if ( *v9 == 1 )
    return result;
  if ( !v5 )
    goto LABEL_23;
  v10 = *(v5 - 1);
  if ( !v10 )
    goto LABEL_23;
  v11 = a1;
  v12 = 0;
  do
  {
    while ( 1 )
    {
      v13 = 2LL * v12;
      v14 = &v5[v13];
      v15 = (unsigned int)v5[v13];
      if ( !(v5[v13] % v31) )
        goto LABEL_26;
      v16 = (unsigned int)v14[1];
      v17 = *(__int64 (__fastcall **)())(*v11 + 544LL);
      if ( v17 == sub_7C5AC0 )
        break;
      v30 = ((__int64 (__fastcall *)(_QWORD *, _QWORD, __int64 (__fastcall *)(), _DWORD *, __int64 (__fastcall *)(), __int64 (__fastcall *)()))v17)(
              v11,
              (unsigned int)v16,
              v17,
              v5,
              sub_7C5AC0,
              sub_7C55E0);
      v5 = (_DWORD *)*a2;
      if ( !v30 )
      {
LABEL_29:
        v14 = &v5[v13];
        v15 = (unsigned int)v5[2 * v12];
        goto LABEL_16;
      }
LABEL_26:
      if ( ++v12 >= v10 )
        goto LABEL_19;
    }
    v18 = *(__int64 (__fastcall **)())(*v11 + 536LL);
    if ( v18 != sub_7C55E0 )
    {
      v29 = ((__int64 (__fastcall *)(_QWORD *, _QWORD, __int64 (__fastcall *)(), _DWORD *, __int64 (__fastcall *)(), __int64 (__fastcall *)()))v18)(
              v11,
              (unsigned int)v16,
              v17,
              v5,
              sub_7C5AC0,
              sub_7C55E0);
      v5 = (_DWORD *)*a2;
LABEL_25:
      if ( v29 != -1 )
        goto LABEL_29;
      goto LABEL_26;
    }
    v19 = v11[20];
    if ( !v19 )
    {
      v29 = *(_DWORD *)(*(_QWORD *)(v11[3] + 3288LL) + 4 * v16);
      goto LABEL_25;
    }
    v20 = *(_DWORD *)(*(_QWORD *)(v19 + 880) + 4LL * ((unsigned int)v16 >> 1));
    if ( v20 >= *(_DWORD *)(v19 + 888) && (((unsigned __int8)v16 ^ (unsigned __int8)v20) & 1) != 0 )
      goto LABEL_26;
LABEL_16:
    v21 = 0x1FFFFFFFELL;
    a2[1] -= v15;
    if ( v5 )
      v21 = 2LL * (unsigned int)(*(v5 - 1) - 1);
    v22 = &v5[v21];
    --v10;
    v23 = *v22;
    LODWORD(v22) = v22[1];
    *v14 = v23;
    v14[1] = (_DWORD)v22;
    --*(v5 - 1);
  }
  while ( v12 < v10 );
LABEL_19:
  v24 = v31;
  if ( v5 )
  {
    v25 = *(v5 - 1);
    if ( v25 )
    {
      v26 = &v5[2 * (v25 - 1)];
      do
      {
        v27 = *v26;
        v28 = v26;
        v26 -= 2;
        v26[2] = (v31 - 1 + v27) / v31;
      }
      while ( v5 != v28 );
    }
  }
LABEL_23:
  result = (v24 + a2[1] - 1) / v24;
  a2[1] = result;
  return result;
}

