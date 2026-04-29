__int64 __fastcall sub_6FB30(_QWORD *a1, int *a2)
{
  int v2; // eax
  int **v4; // rax

  v2 = *a2;
  if ( *a2 == 1 )
  {
LABEL_6:
    *a1 = *((_QWORD *)a2 + 1);
    return 1;
  }
  else
  {
    while ( v2 == 2 )
    {
      v4 = *((int ***)a2 + 1);
      if ( !v4[1] )
        break;
      a2 = *v4;
      v2 = **v4;
      if ( v2 == 1 )
        goto LABEL_6;
    }
    return 0;
  }
}
