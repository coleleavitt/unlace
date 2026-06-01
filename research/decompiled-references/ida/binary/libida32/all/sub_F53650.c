char __fastcall sub_F53650(__m128i *a1, __int64 a2, unsigned __int64 a3)
{
  _BYTE *v5; // rax
  _QWORD *v6; // rsi
  __int64 v7; // rax
  _BYTE *v8; // rdx
  _BYTE *v10; // rax

  v5 = *(_BYTE **)(a3 + 32);
  if ( (unsigned __int64)v5 >= *(_QWORD *)(a3 + 24) )
  {
    sub_2257CD0(a3, 91);
  }
  else
  {
    *(_QWORD *)(a3 + 32) = v5 + 1;
    *v5 = 91;
  }
  if ( ((*(_BYTE *)(a2 + 18) >> 3) & 7) != 0 )
  {
    sub_F4B110(a3, (*(_BYTE *)(a2 + 18) >> 3) & 7, (a1->m128i_i8[3] & 4) != 0);
    v10 = *(_BYTE **)(a3 + 32);
    if ( (unsigned __int64)v10 < *(_QWORD *)(a3 + 24) )
    {
      *(_QWORD *)(a3 + 32) = v10 + 1;
      *v10 = 32;
      if ( ((*(_WORD *)(a2 + 18) >> 6) & 7) != 1 )
        goto LABEL_5;
      goto LABEL_13;
    }
    sub_2257CD0(a3, 32);
  }
  if ( ((*(_WORD *)(a2 + 18) >> 6) & 7) != 1 )
    goto LABEL_5;
LABEL_13:
  sub_971800(a3, "static ");
LABEL_5:
  v6 = *(_QWORD **)(a2 + 40);
  if ( (*(_BYTE *)(a2 + 19) & 2) != 0 )
  {
    if ( *((_DWORD *)v6 + 2) <= 0x40u )
      v6 = (_QWORD *)*v6;
    else
      v6 = *(_QWORD **)*v6;
  }
  v7 = sub_2257BD0(a3, v6);
  v8 = *(_BYTE **)(v7 + 32);
  if ( (unsigned __int64)v8 >= *(_QWORD *)(v7 + 24) )
  {
    sub_2257CD0(v7, 93);
  }
  else
  {
    *(_QWORD *)(v7 + 32) = v8 + 1;
    *v8 = 93;
  }
  return sub_F53190(a1, *(_QWORD *)(a2 + 32), a3);
}

