__int64 __fastcall sub_43C6D0(__int64 a1, int *a2, int a3, int a4)
{
  _BYTE *v5; // rbx
  __int64 v7; // rdx
  int v8; // ebp
  _BYTE *v9; // rbx
  int v10; // r8d
  int v11; // r9d
  int v12; // eax
  int v13; // ecx
  __int64 v14; // rdx
  int v15; // ebx
  __int64 v16; // rax
  int v17; // ebx
  int v18; // ebp
  _DWORD *v19; // rdx
  int v20; // eax
  __int64 v21; // r13
  int v22; // r14d
  __int64 v23; // rbp
  __int64 i; // rax
  __int64 v25; // rcx
  __int64 v26; // rbx
  int v27; // edx
  int v28; // eax
  int j; // r12d
  __int64 v30; // rbx
  __int64 v31; // rsi
  _BYTE v32[4]; // [rsp+Ch] [rbp-5Ch] BYREF
  _BYTE v33[88]; // [rsp+10h] [rbp-58h] BYREF

  if ( a3 <= a4 )
  {
    v5 = (_BYTE *)(*(_QWORD *)(a1 + 112) + a2[1]);
    if ( *a2 )
    {
      if ( *a2 == 1 )
        *v5 = 36;
      else
        *v5 = 38;
    }
    else
    {
      *v5 = 34;
    }
    v5[1] = a3;
    return 0;
  }
  v7 = *(_QWORD *)(a1 + 120);
  if ( (unsigned __int64)(v7 + 3) > *(_QWORD *)(a1 + 128) )
  {
    sub_439150(a1);
    v7 = *(_QWORD *)(a1 + 120);
  }
  v8 = a3 + 3;
  v9 = (_BYTE *)(*(_QWORD *)(a1 + 112) + a2[1]);
  memmove(v9 + 5, v9 + 2, (unsigned int)(v7 - (_DWORD)v9 - 2));
  v12 = *a2;
  *(_QWORD *)(a1 + 120) += 3LL;
  if ( v12 )
  {
    if ( v12 == 1 )
      *v9 = 37;
    else
      *v9 = 39;
  }
  else
  {
    *v9 = 35;
  }
  v9[4] = v8;
  v9[1] = HIBYTE(v8);
  v9[2] = BYTE2(v8);
  v9[3] = BYTE1(v8);
  v13 = *(_DWORD *)(a1 + 32) - 1;
  if ( a2[2] < v13 )
  {
    v14 = *(_QWORD *)(a1 + 192);
    v15 = a2[2];
    do
    {
      v16 = v15++;
      *(_DWORD *)(16 * v16 + v14) += 3;
    }
    while ( v15 <= v13 );
  }
  v17 = a2[3];
  v18 = *(_DWORD *)(a1 + 176) - 1;
  while ( v17 <= v18 )
  {
    v19 = (_DWORD *)(*(_QWORD *)(a1 + 168) + 28LL * v17);
    v20 = *v19;
    v19[2] += 3;
    if ( v20 )
    {
      if ( v20 == 1 )
      {
        v19[6] += 3;
        ++v17;
        continue;
      }
      sub_47D740((unsigned int)"TclFixupForwardJump: bad ExceptionRange type %d", *v19, (_DWORD)v19, v13, v10, v11);
    }
    else
    {
      v28 = v19[5];
      v19[4] += 3;
      if ( v28 != -1 )
      {
        ++v17;
        v19[5] = v28 + 3;
        continue;
      }
    }
    ++v17;
  }
  v21 = *(_QWORD *)(a1 + 3264);
  v22 = 0;
  v23 = sub_40FB00(8 * *(_DWORD *)(v21 + 76));
  for ( i = sub_457E20(v21 + 32, v33); ; i = sub_457DE0(v33) )
  {
    v25 = i;
    if ( !i )
      break;
    v26 = v22;
    *(_DWORD *)(v23 + 8LL * v22 + 4) = *(_QWORD *)(i + 24);
    v27 = i + 32;
    if ( *(_DWORD *)(v21 + 92) == 1 || *(_DWORD *)(v21 + 92) == -1 )
      v27 = *(_DWORD *)(i + 32);
    *(_DWORD *)(v23 + 8LL * v22) = v27;
    if ( v27 >= a2[1] + 2 )
    {
      ++v22;
      sub_457BC0(i);
      *(_DWORD *)(v23 + 8 * v26) += 3;
    }
  }
  for ( j = 0; j < v22; *(_QWORD *)(v25 + 24) = *(int *)(v23 + 8 * v30 + 4) )
  {
    v30 = j;
    v31 = *(int *)(v23 + 8LL * j++);
    v25 = (*(__int64 (__fastcall **)(__int64, __int64, _BYTE *, __int64))(v21 + 104))(v21 + 32, v31, v32, v25);
  }
  Tcl_Free(v23);
  return 1;
}

