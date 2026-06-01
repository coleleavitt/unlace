char __fastcall sub_1528120(__int64 a1)
{
  unsigned int *v2; // rbp
  __int64 v3; // rsi
  int v4; // eax
  __int64 *v5; // rdi

  v2 = *(unsigned int **)(a1 + 24);
  v3 = *(unsigned int *)(a1 + 16);
  if ( *((_BYTE *)v2 + 12) )
  {
    sub_166C3E0(*(_QWORD *)(a1 + 96), v3, 1, v2[2] == 1);
    v3 = *(unsigned int *)(a1 + 16);
    if ( !*((_BYTE *)v2 + 20) )
    {
LABEL_3:
      if ( !*((_BYTE *)v2 + 4) )
        goto LABEL_4;
      goto LABEL_11;
    }
  }
  else if ( !*((_BYTE *)v2 + 20) )
  {
    goto LABEL_3;
  }
  sub_166C3E0(*(_QWORD *)(a1 + 96), v3, 2, v2[4] == 1);
  v3 = *(unsigned int *)(a1 + 16);
  if ( !*((_BYTE *)v2 + 4) )
  {
LABEL_4:
    if ( !*((_BYTE *)v2 + 28) )
      goto LABEL_5;
LABEL_12:
    sub_1666E80(*(_QWORD *)(a1 + 96), v3, v2[6]);
    v3 = *(unsigned int *)(a1 + 16);
    if ( !*((_BYTE *)v2 + 36) )
      goto LABEL_6;
    goto LABEL_13;
  }
LABEL_11:
  sub_1666B20(*(_QWORD *)(a1 + 96), v3, *v2);
  v3 = *(unsigned int *)(a1 + 16);
  if ( *((_BYTE *)v2 + 28) )
    goto LABEL_12;
LABEL_5:
  if ( !*((_BYTE *)v2 + 36) )
    goto LABEL_6;
LABEL_13:
  sub_166B890(*(_QWORD *)(a1 + 96), v3, v2[8]);
  LODWORD(v3) = *(_DWORD *)(a1 + 16);
LABEL_6:
  v4 = *(_DWORD *)(a1 + 20);
  v5 = *(__int64 **)(a1 + 8);
  if ( !v4 )
    v4 = v3;
  *(_DWORD *)(a1 + 40) = v4;
  return sub_14634E0(v5, (int *)(a1 + 16));
}
