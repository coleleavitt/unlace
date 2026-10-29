__int64 __fastcall sub_5718A0(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 v4; // rax
  _QWORD *v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 i; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r15
  int v13; // eax
  __int64 v14; // rbp
  int v15; // r13d
  __int64 v16; // rax
  unsigned int v17; // edx
  __int64 v18; // r14
  __int64 v19; // rdx
  __int64 v20; // r12
  __int64 v21; // rbx
  int v22; // eax
  int v24; // eax
  __int64 v25; // [rsp+0h] [rbp-48h]

  v4 = a2[1];
  v5 = (_QWORD *)a2[4];
  if ( v4 )
  {
    v6 = *(unsigned int *)(v4 - 4);
    if ( (_DWORD)v6 )
    {
      v7 = *a3;
      v8 = a2[3];
      for ( i = 0; i != v6; ++i )
      {
        v10 = *(_QWORD *)(v7 + 8 * i);
        v11 = *(unsigned int *)(v8 + 4 * i);
        v5[v11] = v10;
      }
    }
  }
  v12 = a2[2];
  sub_56B5A0(v12, v5);
  v25 = *(_QWORD *)(v12 + 152);
  v13 = sub_17E8B20(**(_QWORD **)(v12 + 96) + v25, *(unsigned int *)(v12 + 104), 0);
  v14 = *(_QWORD *)(v12 + 128);
  v15 = v13;
  v16 = *(unsigned int *)(v12 + 136);
  v17 = v16 - 1;
  v16 *= 16;
  v18 = v14 + v16;
  v19 = 16LL * (v15 & v17);
  v20 = v14 + v19;
  v21 = v14 + v19;
  if ( v19 != v16 )
  {
    do
    {
      v22 = *(_DWORD *)(v21 + 4);
      if ( v22 == 2 )
      {
        if ( v15 == *(_DWORD *)v21
          && !memcmp(
                (const void *)(*(_QWORD *)(v21 + 8) + **(_QWORD **)(v12 + 112)),
                (const void *)(**(_QWORD **)(v12 + 112) + v25),
                *(unsigned int *)(v12 + 120)) )
        {
LABEL_12:
          *(_QWORD *)(a1 + 8) = *(_QWORD *)(v21 + 8);
          *(_BYTE *)a1 = 1;
          return a1;
        }
      }
      else if ( !v22 )
      {
        goto LABEL_21;
      }
      v21 += 16;
    }
    while ( v18 != v21 );
  }
  for ( ; v20 != v14; v14 += 16 )
  {
    v24 = *(_DWORD *)(v14 + 4);
    if ( v24 == 2 )
    {
      if ( v15 == *(_DWORD *)v14
        && !memcmp(
              (const void *)(*(_QWORD *)(v14 + 8) + **(_QWORD **)(v12 + 112)),
              (const void *)(**(_QWORD **)(v12 + 112) + v25),
              *(unsigned int *)(v12 + 120)) )
      {
        v21 = v14;
        goto LABEL_12;
      }
    }
    else if ( !v24 )
    {
      break;
    }
  }
LABEL_21:
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  return a1;
}

