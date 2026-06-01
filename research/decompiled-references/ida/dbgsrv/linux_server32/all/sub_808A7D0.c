/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_808A7D0
// Address: 0x0808A7D0

//----- (0808A7D0) --------------------------------------------------------
unsigned int __usercall sub_808A7D0@<eax>(unsigned __int8 *a1@<eax>, char *a2@<edx>)
{
  unsigned int v4; // edx
  unsigned int result; // eax
  int v6; // ecx
  int v7; // eax

  if ( !sub_8089920(a1, 2) || !sub_8089920((unsigned __int8 *)a2, 2) )
    return -1;
  v4 = *a1;
  result = *a2;
  if ( (_BYTE)v4 == (_BYTE)result )
    return result;
  if ( (unsigned __int8)v4 > 9u )
    return -1;
  v6 = 654;
  if ( !_bittest(&v6, v4) || (unsigned __int8)result > 9u || !_bittest(&v6, result) )
    return -1;
  if ( (_BYTE)v4 == 7 )
  {
    if ( (_BYTE)result == 7 )
      return result;
    if ( (char)result > 7 )
    {
      if ( (_BYTE)result != 9 )
        goto LABEL_16;
      if ( *(_QWORD *)(a2 + 4) )
        goto LABEL_39;
    }
    else
    {
      if ( (_BYTE)result != 2 )
        goto LABEL_23;
      if ( *((_DWORD *)a2 + 1) )
      {
        v7 = sub_808A3E0((int)a1);
        goto LABEL_13;
      }
    }
    v7 = sub_8089CE0((int)a2);
    goto LABEL_13;
  }
  if ( (char)v4 > 7 )
  {
    if ( (_BYTE)v4 != 9 )
      goto LABEL_16;
    if ( (_BYTE)result == 7 )
    {
      if ( !*(_QWORD *)(a1 + 4) )
        goto LABEL_41;
    }
    else
    {
      if ( (char)result > 7 )
      {
        if ( (_BYTE)result == 9 )
          return result;
        goto LABEL_16;
      }
      if ( (_BYTE)result != 2 )
        goto LABEL_23;
    }
    v7 = sub_808A540((int)a2);
    goto LABEL_13;
  }
  if ( (_BYTE)v4 != 2 )
  {
    if ( (_BYTE)v4 == 3 )
    {
      v7 = sub_808A6A0((int)a2);
      goto LABEL_13;
    }
LABEL_16:
    v7 = 61;
LABEL_17:
    sub_80C7880(v7);
    return -1;
  }
  if ( (_BYTE)result == 7 )
  {
    if ( *((_DWORD *)a1 + 1) )
    {
      v7 = sub_808A3E0((int)a2);
      goto LABEL_13;
    }
LABEL_41:
    v7 = sub_8089CE0((int)a1);
    goto LABEL_13;
  }
  if ( (char)result > 7 )
  {
    if ( (_BYTE)result != 9 )
      goto LABEL_16;
LABEL_39:
    v7 = sub_808A540((int)a1);
    goto LABEL_13;
  }
  if ( (_BYTE)result != 2 )
  {
LABEL_23:
    if ( (_BYTE)result != 3 )
      goto LABEL_16;
    v7 = sub_808A6A0((int)a1);
LABEL_13:
    if ( !v7 )
      return (char)*a1;
    goto LABEL_17;
  }
  return result;
}
