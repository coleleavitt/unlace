__int64 __fastcall sub_A627A0(__int64 a1, double a2)
{
  __int64 v3; // r12
  __int64 v4; // r14
  __int64 v5; // r13
  unsigned int *v6; // rbp
  unsigned int v7; // ebx
  __int64 v8; // rdx
  unsigned __int8 v9; // al
  int *v10; // rax
  __int64 v11; // rax
  _DWORD *v12; // rdx
  int v13; // ecx
  _DWORD *v14; // rdi
  __int64 v15; // rcx
  _DWORD *v16; // r9
  _DWORD *i; // rax
  int v18; // ecx
  unsigned int v19; // ebx
  int v21; // eax
  unsigned int v22; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v23; // [rsp+14h] [rbp-44h] BYREF
  unsigned int *v24[8]; // [rsp+18h] [rbp-40h] BYREF

  v3 = a1 + 1288;
  sub_9E4980(a1 + 1288);
  v4 = *(_QWORD *)(a1 + 632);
  if ( !v4 )
    return 1;
  v5 = v4 + 24LL * *(unsigned int *)(v4 - 4);
  if ( v5 == v4 )
    return 1;
  v6 = nullptr;
  do
  {
LABEL_5:
    while ( 1 )
    {
      v7 = *(_DWORD *)(v4 + 12);
      v22 = v7;
      if ( v7 != -1 )
      {
        v8 = v7;
        v9 = *(_BYTE *)(*(_QWORD *)(a1 + 656) + 4LL * v7 + 3);
        if ( (v9 & 0x40) != 0 )
        {
          if ( ((v9 >> 4) & 3) == 2 )
          {
            v10 = sub_9AA360(a1, v7);
            v8 = v7;
          }
          else
          {
            v10 = (int *)(*(_QWORD *)(a1 + 664) + ((unsigned __int64)v7 << 6));
          }
          if ( ((v10[5] & 1) != 0 || v10[4] != 1 || v10[8])
            && (!*(_QWORD *)(*(_QWORD *)(a1 + 680) + 8 * v8) || !*(_QWORD *)(*(_QWORD *)(a1 + 688) + 8 * v8)) )
          {
            break;
          }
        }
      }
LABEL_4:
      v4 += 24;
      if ( v4 == v5 )
        goto LABEL_21;
    }
    v11 = *(unsigned int *)(a1 + 1296);
    v12 = *(_DWORD **)(a1 + 1288);
    v13 = v11 - 1;
    v11 *= 8;
    v14 = (_DWORD *)((char *)v12 + v11);
    v15 = 8LL * (v7 & v13);
    v16 = &v12[(unsigned __int64)v15 / 4];
    if ( v15 != v11 )
    {
      for ( i = &v12[(unsigned __int64)v15 / 4]; v14 != i; i += 2 )
      {
        v18 = i[1];
        if ( v18 + 0x80000000 > 1 )
        {
          if ( *i == v7 && v7 == v18 )
            goto LABEL_4;
        }
        else if ( v18 == 0x80000000 )
        {
          goto LABEL_20;
        }
      }
    }
    for ( ; v16 != v12; v12 += 2 )
    {
      v21 = v12[1];
      if ( v21 + 0x80000000 > 1 )
      {
        if ( *v12 == v7 && v7 == v21 )
          goto LABEL_4;
      }
      else if ( v21 == 0x80000000 )
      {
        break;
      }
    }
LABEL_20:
    v24[0] = v6;
    sub_98D100(v24, &v22);
    v23 = v7;
    v6 = v24[0];
    sub_9E1E20(v3, (int *)&v23);
    v4 += 24;
  }
  while ( v4 != v5 );
LABEL_21:
  if ( v6 )
  {
    while ( 1 )
    {
      if ( !*(v6 - 1) )
      {
        v19 = 1;
        goto LABEL_39;
      }
      v24[0] = v6;
      if ( (unsigned __int8)sub_A626F0(a1, v24, a2) )
        break;
      v4 = *(_QWORD *)(a1 + 632);
      *(v6 - 1) = 0;
      if ( v4 )
      {
        v5 = v4 + 24LL * *(unsigned int *)(v4 - 4);
        if ( v4 != v5 )
          goto LABEL_5;
      }
    }
    v19 = 0;
LABEL_39:
    sub_186B220(v6 - 2);
  }
  else
  {
    return 1;
  }
  return v19;
}

