__int64 __fastcall sub_723E90(__int64 a1, unsigned __int16 *a2)
{
  bool v2; // zf
  __int64 v4; // r13
  unsigned __int64 v5; // rdi
  __int64 v6; // rbp
  unsigned __int16 *v7; // rsi
  unsigned int *v9; // r12
  __int64 v10; // rdx
  __int64 v11; // r13
  _QWORD *v12; // rdi
  unsigned int *v13; // rbp
  int v14; // r13d
  unsigned int *v15; // r12
  int v16; // edx
  int v17; // r12d
  unsigned int *v18; // rbp
  int v19; // r13d
  int v20; // edx
  int v21; // r12d

  if ( *(_BYTE *)(a1 + 5804) )
  {
    v2 = *(_WORD *)(a1 + 1632) == 0xFFFF;
    *(_BYTE *)(a1 + 5804) = 0;
    if ( !v2 )
    {
      if ( *a2 > 0x204u )
      {
        dword_2CA2738 = 18;
        sub_722BC0(18, 0);
      }
      if ( *(_QWORD *)(a1 + 8) && *(_DWORD *)(a1 + 24) && (unsigned __int8)sub_723230(a1, a2, 1) )
      {
        v4 = *(_QWORD *)(a1 + 2664);
        v5 = *(_QWORD *)(v4 + 8);
        if ( v5 )
          goto LABEL_8;
        if ( *(__int16 *)(a1 + 1634) > 0 )
        {
          v13 = (unsigned int *)(a1 + 1640);
          v14 = 0;
          v15 = (unsigned int *)(a1 + 1640);
          do
          {
            sub_724B00(a1, v15, *v15);
            v16 = *(__int16 *)(a1 + 1634);
            ++v14;
            v15 += 8;
          }
          while ( v14 < v16 );
          v4 = *(_QWORD *)(a1 + 2664);
          v5 = *(_QWORD *)(v4 + 8);
          if ( v5 )
          {
LABEL_8:
            v6 = a1 + 2672;
            v7 = sub_721F30(v5, a1 + 2672, *(int *)(v4 + 24), 0);
            if ( (unsigned __int16 *)(a1 + 2672) != v7 )
              sub_71D140((void *)(a1 + 2672), v7);
            *(_BYTE *)(a1 + 4220) = 1;
            goto LABEL_13;
          }
          v17 = 0;
          if ( (__int16)v16 > 0 )
          {
            do
            {
              sub_724B00(a1, v13, *v13);
              ++v17;
              v13 += 8;
            }
            while ( v17 < *(__int16 *)(a1 + 1634) );
            v5 = *(_QWORD *)(*(_QWORD *)(a1 + 2664) + 8LL);
            goto LABEL_8;
          }
        }
        v5 = *(_QWORD *)(v4 + 8);
        goto LABEL_8;
      }
      *(_BYTE *)(a1 + 4220) = 0;
      goto LABEL_12;
    }
    v9 = (unsigned int *)(a1 + 1640);
    v10 = *(unsigned int *)(a1 + 36);
    *(_WORD *)(a1 + 1634) = 1;
    *(_QWORD *)(a1 + 2664) = a1 + 1640;
    sub_724B00(a1, a1 + 1640, v10);
    if ( !(unsigned __int8)sub_723A80(a1, a2) )
    {
LABEL_12:
      v6 = 0;
LABEL_13:
      *(_BYTE *)(a1 + 5804) = 1;
      return v6;
    }
    v11 = *(_QWORD *)(a1 + 2664);
    v12 = *(_QWORD **)(v11 + 8);
    if ( !v12 )
    {
      if ( *(__int16 *)(a1 + 1634) <= 0 )
        goto LABEL_34;
      v18 = v9;
      v19 = 0;
      do
      {
        sub_724B00(a1, v9, *v9);
        v20 = *(__int16 *)(a1 + 1634);
        ++v19;
        v9 += 8;
      }
      while ( v19 < v20 );
      v11 = *(_QWORD *)(a1 + 2664);
      v12 = *(_QWORD **)(v11 + 8);
      if ( v12 )
        goto LABEL_17;
      if ( (__int16)v20 <= 0 )
      {
LABEL_34:
        v12 = *(_QWORD **)(v11 + 8);
      }
      else
      {
        v21 = 0;
        do
        {
          sub_724B00(a1, v18, *v18);
          ++v21;
          v18 += 8;
        }
        while ( v21 < *(__int16 *)(a1 + 1634) );
        v12 = *(_QWORD **)(*(_QWORD *)(a1 + 2664) + 8LL);
      }
    }
LABEL_17:
    v6 = a1 + 2672;
    sub_723D20(v12, (_WORD *)(a1 + 2672), *(int *)(v11 + 24));
    goto LABEL_13;
  }
  return 0;
}

