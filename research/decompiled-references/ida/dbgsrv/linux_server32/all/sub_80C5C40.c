/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C5C40
// Address: 0x080C5C40

//----- (080C5C40) --------------------------------------------------------
void *__usercall sub_80C5C40@<eax>(size_t n@<ecx>, char **a2@<eax>, const void *a3@<edx>)
{
  unsigned int v5; // esi
  unsigned int v6; // edx
  char *v7; // ecx
  char *v9; // eax
  char *ptr; // [esp+4h] [ebp-24h]
  unsigned int v12; // [esp+8h] [ebp-20h]
  unsigned int v13; // [esp+8h] [ebp-20h]

  v5 = (unsigned int)a2[1];
  v6 = n + v5;
  if ( !__CFADD__(n, v5) )
    goto LABEL_2;
  if ( v5 <= 0x7FFFFFFE )
  {
    v6 = 0x7FFFFFFF;
LABEL_2:
    v7 = a2[1];
    ptr = *a2;
    if ( (unsigned int)a2[2] < v6 )
    {
      v13 = v6;
      v9 = (char *)sub_80CF920((int)a2, ptr, v6, 1u);
      v7 = a2[1];
      ptr = v9;
      v6 = v13;
      *a2 = v9;
    }
    v12 = v6;
    memset(&ptr[(_DWORD)v7], 0, v6 - (_DWORD)v7);
    a2[1] = (char *)v12;
    return memcpy(&(*a2)[v5], a3, n);
  }
  if ( v5 != 0x7FFFFFFF )
    a2[1] = (char *)0x7FFFFFFF;
  return memcpy(&(*a2)[v5], a3, n);
}
