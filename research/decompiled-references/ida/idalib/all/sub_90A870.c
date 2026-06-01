__int64 __fastcall sub_90A870(
        __int64 a1,
        unsigned __int64 *a2,
        _QWORD *a3,
        _DWORD *a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned int a7,
        unsigned int a8)
{
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // r12
  bool v14; // cl
  unsigned __int64 v15; // r15
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rdx
  unsigned int v20; // r8d
  unsigned __int64 v21; // rdx
  __int64 v22; // rax
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  unsigned int v25; // esi
  int v26; // eax
  unsigned int v27; // ecx
  unsigned __int64 v28; // rax
  __int64 v29; // rax
  int v30; // edx

  v9 = a5;
  v10 = a5 + a6;
  v14 = a2 != nullptr && a4[24] == 1;
  if ( (unsigned int)(a4[7] - 1) <= 1 && (v15 = 16777214, (a8 & 1) != 0) )
  {
    if ( a6 > 0xFFFFFE )
      goto LABEL_4;
  }
  else
  {
    v15 = 3758096382LL;
    if ( a6 > 0xDFFFFFFE )
    {
LABEL_4:
      v16 = *(_QWORD *)a1;
      v17 = *(unsigned int *)(a1 + 24);
      v9 = v10 - v15;
      if ( *(_QWORD *)a1 != v10 - v15 )
        goto LABEL_5;
      goto LABEL_42;
    }
  }
  if ( a6 )
  {
    v16 = *(_QWORD *)a1;
    v15 = a6;
    v17 = *(unsigned int *)(a1 + 24);
    if ( *(_QWORD *)a1 != a5 )
    {
LABEL_5:
      v18 = *(_QWORD *)(a1 + 8);
      *(_DWORD *)(a1 + 28) = v17;
      v19 = v16 - v18;
      *(_QWORD *)(a1 + 16) = v18;
      v20 = v19;
      *(_DWORD *)(a1 + 24) = v19;
      *(_QWORD *)(a1 + 8) = v9 - v19;
      if ( (unsigned int)(v19 - v17) <= 7 )
      {
        *(_DWORD *)(a1 + 28) = v19;
        v17 = (unsigned int)v19;
      }
      goto LABEL_7;
    }
LABEL_42:
    v20 = v17;
    v18 = *(_QWORD *)(a1 + 16);
    v17 = *(unsigned int *)(a1 + 28);
LABEL_7:
    *(_QWORD *)a1 = v10;
    if ( v10 > v18 + v17 && v9 < v18 + (unsigned __int64)v20 )
    {
      if ( (__int64)(v10 - v18) <= v20 )
        v20 = v10 - v18;
      *(_DWORD *)(a1 + 28) = v20;
    }
    if ( !v14 )
    {
LABEL_24:
      if ( a4[7] <= 7u )
      {
        v27 = a4[3];
        if ( a4[2] >= v27 )
          v27 = a4[2];
        if ( v27 > 0x1C )
          LOBYTE(v27) = 28;
        v28 = (unsigned int)(8 << v27);
        if ( v28 < v15 )
        {
          v15 = (unsigned int)(8 << v27);
          LODWORD(v9) = v10 - v28;
        }
      }
      v29 = *(_QWORD *)(a1 + 8);
      *(_DWORD *)(a1 + 44) = v9 - v29;
      v30 = 0;
      if ( a4[12] )
        goto LABEL_33;
      goto LABEL_32;
    }
    v21 = *a2;
    v22 = *((unsigned int *)a2 + 6);
    if ( *a2 == v9 )
    {
      v25 = *((_DWORD *)a2 + 6);
      v23 = a2[2];
      v22 = *((unsigned int *)a2 + 7);
    }
    else
    {
      v23 = a2[1];
      *((_DWORD *)a2 + 7) = v22;
      v24 = v21 - v23;
      a2[2] = v23;
      v25 = v24;
      *((_DWORD *)a2 + 6) = v24;
      a2[1] = v9 - v24;
      if ( (unsigned int)(v24 - v22) <= 7 )
      {
        *((_DWORD *)a2 + 7) = v24;
        v22 = (unsigned int)v24;
      }
    }
    *a2 = v10;
    if ( v10 > v23 + v22 && v9 < v23 + v25 )
    {
      if ( (__int64)(v10 - v23) <= v25 )
        v25 = v10 - v23;
      *((_DWORD *)a2 + 7) = v25;
    }
LABEL_21:
    v26 = 0;
    if ( !a4[12] )
      v26 = v10 - *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 12) = v26;
    sub_9584E0(a2, v9, v10, a4 + 24);
    goto LABEL_24;
  }
  if ( v14 )
  {
    v15 = 0;
    v9 = a5;
    goto LABEL_21;
  }
  v29 = *(_QWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 44) = v10 - v29;
  if ( a4[12] )
  {
    *(_DWORD *)(a1 + 40) = 0;
    *(_DWORD *)(a1 + 136) = a4[37];
    return 0;
  }
  LODWORD(v9) = a5;
  v15 = 0;
LABEL_32:
  v30 = v10 - v29;
LABEL_33:
  *(_DWORD *)(a1 + 40) = v30;
  *(_DWORD *)(a1 + 136) = a4[37];
  if ( v15 > 8 )
  {
    sub_90A2E0(a1, a3, (__int64)a4, v9, v10);
    switch ( a4[7] )
    {
      case 1:
        sub_922E80(a1, v10, a7, a8);
        break;
      case 2:
        sub_919680(a1, v10, a7, a8);
        break;
      case 3:
      case 4:
      case 5:
        if ( *(_DWORD *)(a1 + 140) )
        {
          sub_9452C0(a1, v10 - 8);
        }
        else if ( a4[36] == 1 )
        {
          memset(*(void **)(a1 + 56), 0, 1LL << a4[3]);
          sub_945870(a1, v10 - 8);
        }
        else
        {
          sub_945690(a1, v10 - 8);
        }
        break;
      case 6:
      case 7:
      case 8:
      case 9:
        sub_966670(a1, v10 - 8, v10);
        break;
      default:
        break;
    }
    *(_DWORD *)(a1 + 44) = v10 - *(_DWORD *)(a1 + 8);
  }
  return 0;
}
