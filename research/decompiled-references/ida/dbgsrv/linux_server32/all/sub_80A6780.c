/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A6780
// Address: 0x080A6780

//----- (080A6780) --------------------------------------------------------
void *__cdecl sub_80A6780(char **a1, char *s)
{
  size_t v2; // eax
  unsigned int v3; // esi
  size_t v4; // edi
  unsigned int v5; // edx
  char *v6; // ecx
  char *v8; // eax
  char *ptr; // [esp+0h] [ebp-24h]
  unsigned int v10; // [esp+4h] [ebp-20h]
  unsigned int v11; // [esp+4h] [ebp-20h]

  if ( !s )
  {
    v3 = (unsigned int)a1[1];
    v4 = 1;
    v5 = v3 + 1;
    if ( v3 == -1 )
    {
      a1[1] = (char *)0x7FFFFFFF;
      v3 = -1;
      s = "";
      return memcpy(&(*a1)[v3], s, v4);
    }
    v6 = a1[1];
    s = "";
    ptr = *a1;
    if ( (unsigned int)a1[2] >= v5 )
      goto LABEL_4;
    goto LABEL_12;
  }
  v2 = strlen(s);
  v3 = (unsigned int)a1[1];
  v4 = v2 + 1;
  v5 = v2 + 1 + v3;
  if ( !__CFADD__(v2 + 1, v3) )
  {
LABEL_3:
    v6 = a1[1];
    ptr = *a1;
    if ( (unsigned int)a1[2] >= v5 )
    {
LABEL_4:
      v10 = v5;
      memset(&ptr[(_DWORD)v6], 0, v5 - (_DWORD)v6);
      a1[1] = (char *)v10;
      return memcpy(&(*a1)[v3], s, v4);
    }
LABEL_12:
    v11 = v5;
    v8 = (char *)sub_80CF920((int)a1, ptr, v5, 1u);
    v6 = a1[1];
    ptr = v8;
    v5 = v11;
    *a1 = v8;
    goto LABEL_4;
  }
  if ( v3 <= 0x7FFFFFFE )
  {
    v5 = 0x7FFFFFFF;
    goto LABEL_3;
  }
  if ( v3 != 0x7FFFFFFF )
    a1[1] = (char *)0x7FFFFFFF;
  return memcpy(&(*a1)[v3], s, v4);
}
