__int64 __fastcall sub_718BC0(__int64 a1)
{
  __int64 v1; // r9
  __int64 v3; // r10
  __int64 v4; // rdx
  unsigned __int16 *v5; // r8
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rax
  int v9; // r11d
  __int64 v10; // rax
  int v11; // ecx
  unsigned __int8 v12; // di
  unsigned __int8 v13; // si
  unsigned __int16 v14; // ax
  unsigned __int16 v15; // cx
  __int64 v16; // r8
  unsigned __int16 v18; // cx
  unsigned int *v19; // rbp
  int v20; // r12d
  __int64 v21; // rdx
  unsigned int *v22; // rsi

  v1 = *(_QWORD *)(a1 + 2664);
  v3 = *(_QWORD *)(v1 + 8);
  if ( !v3 && *(__int16 *)(a1 + 1634) > 0 )
  {
    v19 = (unsigned int *)(a1 + 1640);
    v20 = 0;
    do
    {
      v21 = *v19;
      v22 = v19;
      ++v20;
      v19 += 8;
      sub_724B00(a1, v22, v21);
    }
    while ( v20 < *(__int16 *)(a1 + 1634) );
    v1 = *(_QWORD *)(a1 + 2664);
    v3 = *(_QWORD *)(v1 + 8);
  }
  v4 = (unsigned int)*(__int16 *)(*(_QWORD *)v3 + 4LL);
  if ( *(_WORD *)(*(_QWORD *)v3 + 4LL) )
  {
    v5 = *(unsigned __int16 **)(a1 + 4232);
    v6 = *(unsigned __int16 *)(a1 + 2672);
    v7 = *v5;
    v8 = v7;
    if ( v6 <= v7 )
      v8 = *(unsigned __int16 *)(a1 + 2672);
    v9 = v8;
    if ( v8 )
    {
      v10 = 0;
      v11 = 1;
      while ( 1 )
      {
        v12 = *((_BYTE *)v5 + v10 + 2);
        v13 = *(_BYTE *)(a1 + v10 + 2674);
        if ( v12 != v13 )
          break;
        ++v11;
        ++v10;
        if ( v9 < v11 )
          goto LABEL_16;
      }
      v14 = v11 - 1;
      v15 = ~(_WORD)v11;
      if ( v12 < v13 )
        v14 = v15;
    }
    else
    {
      LOWORD(v11) = 1;
LABEL_16:
      v14 = -1;
      if ( v6 != v7 )
      {
        v14 = v11 - 1;
        v18 = ~(_WORD)v11;
        if ( v6 >= v7 )
          v14 = v18;
      }
    }
    if ( (int)v4 < 0 )
      sub_718B20();
    v16 = v14;
  }
  else
  {
    v14 = 0;
    v16 = 0;
    v4 = 0;
  }
  *(_DWORD *)(v1 + 24) = v4;
  *(_BYTE *)(v1 + 28) = 0;
  *(_WORD *)(v1 + 30) = v14;
  return sub_725700(a1, v3, v4, *(_QWORD *)(a1 + 4232), v16);
}

