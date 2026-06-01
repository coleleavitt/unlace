__int64 __fastcall sub_A65A40(__int64 a1, double a2)
{
  __int64 v2; // rbx
  __int64 v3; // r14
  unsigned int *v4; // r12
  unsigned int v5; // ebp
  __int64 v6; // rdx
  unsigned __int8 v7; // al
  __int64 v8; // rax
  unsigned int v9; // ebx
  unsigned int v11; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v12; // [rsp+14h] [rbp-44h] BYREF
  unsigned int *v13[8]; // [rsp+18h] [rbp-40h] BYREF

  sub_9E4980(a1 + 1192);
  v2 = *(_QWORD *)(a1 + 568);
  if ( !v2 )
    return 1;
  v3 = v2 + 24LL * *(unsigned int *)(v2 - 4);
  if ( v3 == v2 )
    return 1;
  v4 = nullptr;
  do
  {
LABEL_5:
    while ( 1 )
    {
      v5 = *(_DWORD *)(v2 + 12);
      v11 = v5;
      if ( v5 != -1 )
      {
        v6 = v5;
        v7 = *(_BYTE *)(*(_QWORD *)(a1 + 592) + 4LL * v5 + 3);
        if ( (v7 & 0x40) != 0 )
        {
          if ( ((v7 >> 4) & 3) == 2 )
          {
            v8 = sub_999840(a1, v5);
            v6 = v5;
          }
          else
          {
            v8 = *(_QWORD *)(a1 + 600) + 32LL * v5;
          }
          if ( ((*(_BYTE *)(v8 + 20) & 1) != 0 || *(_DWORD *)(v8 + 16) != 1)
            && (!*(_QWORD *)(*(_QWORD *)(a1 + 616) + 8 * v6) || !*(_QWORD *)(*(_QWORD *)(a1 + 624) + 8 * v6))
            && !sub_98B080(*(_DWORD **)(a1 + 1192), *(_DWORD *)(a1 + 1200), v5) )
          {
            break;
          }
        }
      }
      v2 += 24;
      if ( v3 == v2 )
        goto LABEL_15;
    }
    v13[0] = v4;
    sub_98D100(v13, &v11);
    v12 = v5;
    v4 = v13[0];
    sub_9E1E20(a1 + 1192, (int *)&v12);
    v2 += 24;
  }
  while ( v3 != v2 );
LABEL_15:
  if ( v4 )
  {
    while ( 1 )
    {
      if ( !*(v4 - 1) )
      {
        v9 = 1;
        goto LABEL_25;
      }
      v13[0] = v4;
      if ( (unsigned __int8)sub_A65980(a1, v13, a2) )
        break;
      *(v4 - 1) = 0;
      v2 = *(_QWORD *)(a1 + 568);
      if ( v2 )
      {
        v3 = v2 + 24LL * *(unsigned int *)(v2 - 4);
        if ( v2 != v3 )
          goto LABEL_5;
      }
    }
    v9 = 0;
LABEL_25:
    sub_186B220(v4 - 2);
  }
  else
  {
    return 1;
  }
  return v9;
}

