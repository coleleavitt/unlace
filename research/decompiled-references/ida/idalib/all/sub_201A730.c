void __fastcall sub_201A730(unsigned int *a1)
{
  operator delete(*((_QWORD *)a1 + 14), 16LL * a1[32], 8);
  if ( *((_BYTE *)a1 + 76) )
  {
    if ( *((_BYTE *)a1 + 20) )
      return;
LABEL_5:
    free(*(void **)a1);
    return;
  }
  free(*((void **)a1 + 7));
  if ( !*((_BYTE *)a1 + 20) )
    goto LABEL_5;
}
