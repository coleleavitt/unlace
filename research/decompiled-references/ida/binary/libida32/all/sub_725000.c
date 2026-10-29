__int64 __fastcall sub_725000(unsigned int *a1, _DWORD **a2, _DWORD *a3)
{
  _DWORD *v3; // rcx
  _DWORD *v6; // r13
  __int64 v7; // r12
  __int64 v8; // rsi
  __int64 v9; // r14
  __int64 i; // rax
  unsigned __int16 *v11; // rax
  __int64 v12; // r13
  __int64 v13; // rbp
  unsigned __int16 *v14; // r12
  char j; // al
  _DWORD *v16; // rcx
  unsigned int v17; // edi
  _BYTE *v18; // rax
  unsigned int v19; // esi
  __int64 v20; // rdx
  unsigned __int16 *v21; // rdx
  __int64 v22; // r10
  unsigned int v23; // edi
  _BYTE *v24; // rcx
  int v25; // r11d
  __int64 result; // rax
  char *v27; // rdx
  int v29; // [rsp+14h] [rbp-44h]
  __int64 v30; // [rsp+18h] [rbp-40h]

  v3 = a3;
  v6 = *a2;
  v7 = unk_2CA26D0;
  v8 = (__int64)*a2 + 6;
  LODWORD(v9) = *((__int16 *)v6 + 2);
  if ( (int)v9 > (int)(*a1 / 0xA) )
    LODWORD(v9) = *a1 / 0xA;
  for ( i = 0; (unsigned int)i < *a1; ++i )
    *(_BYTE *)(v7 + i) = 0;
  if ( (int)v9 > 0 )
  {
    v30 = v8;
    v9 = (int)v9;
    v11 = (unsigned __int16 *)v6 + 5;
    v29 = 0;
    v12 = v7;
    v13 = 0;
    v14 = v11;
    for ( j = sub_724ED0(a1, a2, 0, a3); ; j = sub_724ED0(a1, a2, v13, a3) )
    {
      if ( j )
      {
        v16 = *a2;
        v17 = *((unsigned __int16 *)*a2 + 3 * v13 + 5);
        v18 = (_BYTE *)(v12 + *v14);
        v19 = *(*a2 - 2);
        v20 = *((unsigned __int16 *)*a2 + 3 * v13 + 5);
        if ( *((_WORD *)a1 + 816) == 0xFFFF )
        {
          if ( v17 >= v19
            || (v27 = (char *)v16 + v20,
                v23 = *(unsigned __int16 *)&v27[*(unsigned __int16 *)(v27 + 1) + 3] + *(unsigned __int16 *)(v27 + 1) + 4,
                v23 + (unsigned int)v27 - (unsigned int)v16 >= v19) )
          {
LABEL_25:
            sub_722BF0();
          }
        }
        else
        {
          if ( v17 >= v19 )
            goto LABEL_25;
          v21 = (unsigned __int16 *)((char *)v16 + v20);
          v22 = *v21;
          if ( (int)v21 + (int)v22 + 3 - (int)v16 >= v19 )
            goto LABEL_25;
          v23 = *(unsigned __int16 *)((char *)v21 + v22 + 2) + *v21 + 4;
          if ( (unsigned int)v21 + v23 - 1 - (unsigned int)v16 >= v19 )
            goto LABEL_25;
        }
        v24 = &v18[v23];
        do
        {
          if ( (unsigned __int64)v18 >= v12 + (unsigned __int64)*a1 )
            break;
          ++*v18++;
        }
        while ( v18 != v24 );
        ++v13;
        v29 += v23;
        v14 += 3;
        if ( (int)v9 == v13 )
        {
LABEL_18:
          v25 = v29;
          v8 = v30;
          v3 = a3;
          goto LABEL_19;
        }
      }
      else
      {
        ++v13;
        v14 += 3;
        if ( (int)v9 == v13 )
          goto LABEL_18;
      }
    }
  }
  v25 = 0;
  v9 = (int)v9;
LABEL_19:
  result = v25 + (unsigned int)*(unsigned __int16 *)(v8 + 6 * v9 + 4);
  if ( (_DWORD)result != *a1 )
  {
    if ( v3 )
      *v3 |= 0x2000000u;
  }
  return result;
}

