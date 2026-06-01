/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qdirname
// Address: 0x000000010007BC40

//----- (000000010007BC40) ----------------------------------------------------
__int64 __fastcall qdirname(char *__dst, unsigned __int64 a2, char *a3)
{
  char *v3; // r14
  char *v5; // rax
  size_t v6; // r12

  if ( !a3 || a2 < 2 && __dst != nullptr )
    goto LABEL_3;
  v3 = strrchr(a3, 47);
  v5 = strrchr(a3, 92);
  if ( v3 > v5 )
    v5 = v3;
  LOBYTE(v3) = v5 != nullptr;
  if ( v5 )
  {
    v6 = a2 - 1;
    if ( v5 - a3 < a2 )
      v6 = v5 - a3;
    if ( v6 )
    {
      if ( __dst )
        goto LABEL_11;
    }
    else
    {
      v6 = (*v5 == 47) | (unsigned __int8)(*v5 == 92);
      if ( __dst )
      {
LABEL_11:
        if ( __dst != a3 )
          memcpy(__dst, a3, v6);
        goto LABEL_15;
      }
    }
    LOBYTE(v3) = 1;
    return (unsigned int)v3;
  }
  if ( __dst )
  {
    *__dst = 46;
    v6 = 1;
LABEL_15:
    __dst[v6] = 0;
    return (unsigned int)v3;
  }
LABEL_3:
  LODWORD(v3) = 0;
  return (unsigned int)v3;
}
