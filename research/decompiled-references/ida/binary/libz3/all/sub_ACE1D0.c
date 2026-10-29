void __fastcall sub_ACE1D0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  unsigned int v4; // eax
  unsigned int v5; // edx
  __int16 v6; // cx
  __int64 *v7; // r13
  __int64 v8; // rdx
  __int64 *v9; // r13
  __int64 v10; // rdx
  _QWORD *v11; // rax
  __int64 *v12; // r14
  __int64 v13; // rdx
  _QWORD *v14; // rcx
  __int64 v15; // rcx
  _QWORD *v16; // rax
  __int64 *v17; // r14
  __int64 v18; // rdx
  _QWORD *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  _QWORD v22[6]; // [rsp+8h] [rbp-30h] BYREF

  do
  {
    v2 = a1;
    a1 = *(_QWORD *)(a1 + 8);
  }
  while ( a1 );
  do
  {
    v3 = a2;
    a2 = *(_QWORD *)(a2 + 8);
  }
  while ( a2 );
  if ( v3 == v2 )
    return;
  v4 = *(_DWORD *)(v2 + 16);
  v5 = *(_DWORD *)(v3 + 16);
  if ( v5 >= v4 )
  {
    v4 = *(_DWORD *)(v3 + 16);
    v5 = *(_DWORD *)(v2 + 16);
    v15 = v3;
    v3 = v2;
    v2 = v15;
  }
  v6 = *(_WORD *)(v2 + 32);
  v7 = *(__int64 **)(v3 + 40);
  *(_QWORD *)(v3 + 8) = v2;
  *(_DWORD *)(v2 + 16) = v5 + v4;
  *(_WORD *)(v2 + 32) = *(_WORD *)(v3 + 32) | v6;
  if ( v7 )
  {
    v8 = *((unsigned int *)v7 - 1);
    if ( (_DWORD)v8 )
    {
      v16 = *(_QWORD **)(v2 + 40);
      if ( !v16 || !*((_DWORD *)v16 - 1) )
      {
        *(_QWORD *)(v2 + 40) = v7;
        *(_QWORD *)(v3 + 40) = v16;
        goto LABEL_8;
      }
      v17 = &v7[v8];
      v18 = *v7;
      v22[0] = *v7;
      do
      {
        v19 = &v16[*((unsigned int *)v16 - 1)];
        if ( v19 == v16 )
          break;
        while ( v18 != *v16 )
        {
          if ( v19 == ++v16 )
            goto LABEL_31;
        }
LABEL_29:
        if ( v17 == ++v7 )
        {
          v20 = *(_QWORD *)(v3 + 40);
          if ( v20 )
            sub_186B220((void *)(v20 - 8));
          *(_QWORD *)(v3 + 40) = 0;
          goto LABEL_8;
        }
        v18 = *v7;
        v16 = *(_QWORD **)(v2 + 40);
        v22[0] = *v7;
      }
      while ( v16 );
LABEL_31:
      sub_AC8580((_QWORD *)(v2 + 40), v22);
      goto LABEL_29;
    }
  }
LABEL_8:
  v9 = *(__int64 **)(v3 + 48);
  if ( !v9 )
    return;
  v10 = *((unsigned int *)v9 - 1);
  if ( !(_DWORD)v10 )
    return;
  v11 = *(_QWORD **)(v2 + 48);
  if ( !v11 || !*((_DWORD *)v11 - 1) )
  {
    *(_QWORD *)(v2 + 48) = v9;
    *(_QWORD *)(v3 + 48) = v11;
    return;
  }
  v12 = &v9[v10];
  v13 = *v9;
  v22[0] = *v9;
  while ( 1 )
  {
    v14 = &v11[*((unsigned int *)v11 - 1)];
    if ( v14 == v11 )
    {
LABEL_19:
      sub_AC8490((_QWORD *)(v2 + 48), v22);
      goto LABEL_17;
    }
    while ( v13 != *v11 )
    {
      if ( v14 == ++v11 )
        goto LABEL_19;
    }
LABEL_17:
    if ( v12 == ++v9 )
      break;
    v13 = *v9;
    v11 = *(_QWORD **)(v2 + 48);
    v22[0] = *v9;
    if ( !v11 )
      goto LABEL_19;
  }
  v21 = *(_QWORD *)(v3 + 48);
  if ( v21 )
    sub_186B220((void *)(v21 - 8));
  *(_QWORD *)(v3 + 48) = 0;
}

