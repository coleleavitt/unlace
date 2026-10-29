__int64 __fastcall sub_65FA80(unsigned int *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  _BYTE *v11; // rdi
  _BYTE *v12; // rax
  unsigned int *v13; // r14
  __int64 v14; // rdi
  int v15; // eax

  v5 = pack_dd(a2, a3, *a1);
  v6 = pack_dd(v5, a3, a1[1] - *a1);
  v7 = pack_dd(v6, a3, a1[2]);
  v8 = pack_dd(v7, a3, a1[3]);
  v9 = pack_dd(v8, a3, a1[4]);
  v10 = pack_dw(v9, a3, *((unsigned __int16 *)a1 + 12));
  v11 = (_BYTE *)v10;
  if ( v10 < a3 )
  {
    v12 = (_BYTE *)(v10 + 1);
    *v11 = *((_BYTE *)a1 + 20);
    if ( (unsigned __int64)v12 >= a3
      || (v12 = v11 + 2, v11[1] = *((_BYTE *)a1 + 21), (unsigned __int64)(v11 + 2) >= a3)
      || (v12 = v11 + 3, v11[2] = *((_BYTE *)a1 + 22), (unsigned __int64)(v11 + 3) >= a3)
      || (v12 = v11 + 4, v11[3] = *((_BYTE *)a1 + 23), (unsigned __int64)(v11 + 4) >= a3) )
    {
      v11 = v12;
    }
    else
    {
      v11[4] = *((_BYTE *)a1 + 96);
      v11 += 5;
    }
  }
  v13 = a1 + 8;
  v14 = pack_dd(v11, a3, a1[7]);
  do
  {
    v15 = *v13++;
    v14 = pack_dd(v14, a3, (unsigned int)(v15 + 1));
  }
  while ( v13 != a1 + 24 );
  return pack_dd(v14, a3, a1[25] + 1) - a2;
}

