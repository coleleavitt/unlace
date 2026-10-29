/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4232D0
// Address: 0x004232D0

//----- (004232D0) --------------------------------------------------------
char __userpurge sub_4232D0@<al>(_DWORD **this@<ecx>, int ebx0@<ebx>, int *a2, unsigned int *a3, char *a4)
{
  unsigned int v6; // eax
  int v7; // eax
  int v8; // ecx
  char *v9; // eax

  v6 = a2[3];
  if ( v6 )
  {
    while ( 1 )
    {
      v7 = sub_427FA0(*(this + 1), v6);
      v8 = *(_DWORD *)(v7 + 32);
      if ( v8 != -1 )
        return sub_41F210((int)this, ebx0, (int)a2, v8, a3, a4, 0);
      v6 = *(_DWORD *)(v7 + 8);
      if ( !v6 )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    v9 = (char *)sub_41CF00(a2, a3);
    sub_423670(v9, a4);
    return 1;
  }
}
