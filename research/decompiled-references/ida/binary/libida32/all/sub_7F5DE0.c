__int64 __fastcall sub_7F5DE0(_QWORD *a1, unsigned __int8 *a2)
{
  unsigned __int64 v2; // rax
  _QWORD *v3; // r8
  int v4; // edx
  __int64 v5; // rax
  unsigned __int64 v6; // rax
  char *v8; // rdi
  char *v9; // rdx
  char v10; // cl
  const char *v11; // rax
  __int64 v12; // rdi
  unsigned __int64 v13; // r10
  char *v14; // rcx
  unsigned __int8 *v15; // rbx
  unsigned __int64 v16; // rdx
  __int64 v17; // r9
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rsi
  __int64 v21; // rdx
  unsigned __int64 v22; // rax
  const char *v23; // rax
  unsigned __int64 v24; // rdx
  char v25; // di
  unsigned __int64 v26; // rax

  v2 = *((_QWORD *)a2 + 1);
  v3 = a1;
  if ( !v2 )
  {
    v8 = (char *)a1[142];
    v9 = (char *)v3[141];
    while ( 1 )
    {
      if ( v8 == v9 )
      {
        v11 = "end-of-input in read_integer";
        goto LABEL_10;
      }
      if ( v2 > 0x1FFFFFFFFFFFFFFLL )
        break;
      v10 = *v9++;
      v2 = v10 & 0x7F | (v2 << 7);
      if ( v10 >= 0 )
      {
        *((_QWORD *)a2 + 1) = v2;
        v3[141] = v9;
        goto LABEL_2;
      }
    }
    v11 = "overflow in read_intger";
LABEL_10:
    v3[8] = v11;
    return 4294949584LL;
  }
LABEL_2:
  v4 = *a2;
  v5 = v3[128];
  if ( (unsigned __int8)v4 <= 2u )
  {
    v6 = *((_QWORD *)a2 + 1) + v5;
    if ( v3[129] >= v6 )
    {
      v3[128] = v6;
      return 0;
    }
    v11 = "size too large";
    goto LABEL_10;
  }
  v12 = v3[57];
  v13 = (unsigned int)(v4 - 3);
  v14 = (char *)v3[149];
  v15 = (unsigned __int8 *)v3[150];
  if ( v13 < v12 + 2 )
  {
    v24 = 0;
    do
    {
      if ( v15 == (unsigned __int8 *)v14 )
      {
        v23 = "end-of-input in read_integer";
        goto LABEL_25;
      }
      if ( v24 > 0x1FFFFFFFFFFFFFFLL )
      {
        v23 = "overflow in read_intger";
        goto LABEL_25;
      }
      v25 = *v14++;
      v24 = v25 & 0x7F | (v24 << 7);
    }
    while ( v25 < 0 );
    *((_QWORD *)a2 + 2) = v24;
    v3[149] = v14;
    v16 = *((_QWORD *)a2 + 2);
    if ( (_DWORD)v13 )
    {
      if ( (_DWORD)v13 == 1 )
      {
        v26 = v5 - v16;
        *((_QWORD *)a2 + 2) = v26;
        v16 = v26;
      }
      else
      {
        v16 += *(_QWORD *)(v3[60] + 8 * v13 - 16);
        *((_QWORD *)a2 + 2) = v16;
      }
    }
  }
  else
  {
    if ( v15 == (unsigned __int8 *)v14 )
    {
      v23 = "address underflow";
      goto LABEL_25;
    }
    *((_QWORD *)a2 + 2) = *(_QWORD *)(v3[61] + 8 * ((unsigned __int8)*v14 + ((v13 - (v12 + 2)) << 8)));
    ++v3[149];
    v16 = *((_QWORD *)a2 + 2);
  }
  sub_7F3C40(v3 + 57, v16);
  v18 = *(_QWORD *)(v17 + 16);
  v19 = v3[128];
  if ( v18 >= v19 )
  {
    v23 = "address too large";
  }
  else
  {
    v20 = v3[117];
    v21 = *(_QWORD *)(v17 + 8);
    if ( v18 >= v20 || v20 >= v21 + v18 )
    {
      v22 = v21 + v19;
      if ( v3[129] >= v22 )
      {
        v3[128] = v22;
        return 0;
      }
    }
    v23 = "size too large";
  }
LABEL_25:
  v3[8] = v23;
  return 4294949584LL;
}

