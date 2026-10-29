/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_433550
// Address: 0x00433550

//----- (00433550) --------------------------------------------------------
int __thiscall sub_433550(_QWORD *this, char *a2)
{
  char v2; // bl
  unsigned __int64 v3; // rax

  v2 = *a2;
  if ( *(_BYTE *)this )
  {
    v3 = *((_QWORD *)a2 + 1);
    if ( v2 )
    {
      if ( *(this + 1) <= v3 )
        goto LABEL_12;
    }
    else if ( *(this + 1) <= v3 )
    {
      goto LABEL_12;
    }
LABEL_11:
    *((_DWORD *)this + 2) = 1;
    *((_DWORD *)this + 3) = 0;
    *(_BYTE *)this = 0;
    return 1;
  }
  if ( v2 )
  {
    if ( *(this + 1) <= *((_QWORD *)a2 + 1) )
      goto LABEL_12;
    goto LABEL_11;
  }
  if ( *(this + 1) > *((_QWORD *)a2 + 1) )
    goto LABEL_11;
LABEL_12:
  *(_BYTE *)this = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  return 0;
}
