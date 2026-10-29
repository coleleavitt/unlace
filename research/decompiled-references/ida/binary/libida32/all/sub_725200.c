__int16 __fastcall sub_725200(__int64 a1, _DWORD **a2, int a3, _DWORD *a4)
{
  __int64 v5; // r12
  _DWORD *v8; // r14
  _QWORD *v9; // rax
  _DWORD *v10; // rdx
  unsigned int v11; // edi
  unsigned int v12; // esi
  __int64 v13; // rax
  unsigned __int16 *v14; // rax
  __int64 v15; // r8
  int v16; // edi
  _BYTE *v17; // rdx
  _BYTE *v18; // rsi
  char *v19; // rax

  v5 = a3;
  v8 = *a2;
  LOWORD(v9) = sub_724ED0((unsigned int *)a1, a2, a3, a4);
  if ( !(_BYTE)v9 )
    return (__int16)v9;
  v10 = *a2;
  v11 = *((unsigned __int16 *)*a2 + 3 * v5 + 5);
  v12 = *(*a2 - 2);
  v13 = *((unsigned __int16 *)*a2 + 3 * v5 + 5);
  if ( *(_WORD *)(a1 + 1632) != 0xFFFF )
  {
    if ( v11 < v12 )
    {
      v14 = (unsigned __int16 *)((char *)v10 + v13);
      v15 = *v14;
      if ( (int)v14 + (int)v15 + 3 - (int)v10 < v12 )
      {
        v16 = *(unsigned __int16 *)((char *)v14 + v15 + 2) + *v14 + 4;
        if ( (int)v14 + v16 - 1 - (int)v10 < v12 )
          goto LABEL_6;
      }
    }
LABEL_15:
    sub_722BF0();
  }
  if ( v11 >= v12 )
    goto LABEL_15;
  v19 = (char *)v10 + v13;
  v16 = *(unsigned __int16 *)&v19[*(unsigned __int16 *)(v19 + 1) + 3] + *(unsigned __int16 *)(v19 + 1) + 4;
  if ( v16 + (int)v19 - (int)v10 >= v12 )
    goto LABEL_15;
LABEL_6:
  v9 = &qword_2CA26D0;
  v17 = (_BYTE *)(qword_2CA26D0 + *((unsigned __int16 *)v8 + 3 * v5 + 5));
  v18 = &v17[v16 - 1];
  do
  {
    if ( *v17 != 1 )
    {
      LODWORD(v9) = *a4;
      BYTE1(v9) = BYTE1(*a4) | 0x80;
      if ( *v17 )
        LODWORD(v9) = *a4 | 0x10000;
      *a4 = (_DWORD)v9;
    }
    ++v17;
  }
  while ( v17 != v18 );
  return (__int16)v9;
}

