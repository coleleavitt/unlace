/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80D34B0
// Address: 0x080D34B0

//----- (080D34B0) --------------------------------------------------------
int __cdecl sub_80D34B0(_DWORD *a1, int a2, unsigned __int8 a3)
{
  int v3; // eax
  char *v4; // edx
  int v5; // edi
  unsigned int v6; // ebp
  unsigned int i; // eax
  int result; // eax
  signed int v9; // [esp+0h] [ebp-38h]
  char *v10; // [esp+14h] [ebp-24h] BYREF
  unsigned int v11; // [esp+18h] [ebp-20h]

  v11 = __readgsdword(0x14u);
  if ( !a1 )
    goto LABEL_13;
  v3 = a1[5];
  if ( !v3 )
    goto LABEL_17;
  v4 = (char *)a1[4];
  if ( *v4 < 0 || (v5 = 1 << (*v4 & 0xF), v5 > 8) || __CFADD__(a1[1], a2) )
  {
LABEL_13:
    result = 0;
    goto LABEL_14;
  }
  v9 = a2 - a1[3];
  if ( v9 )
  {
    v10 = v4 + 1;
    if ( v4 + 1 < &v4[v3] )
    {
      v6 = (unsigned int)&v4[v3];
      for ( i = sub_80CDEC0((unsigned int *)&v10, (unsigned int)&v4[v3]);
            i < v5 + i && v5 + i < a1[1];
            i = sub_80CDEC0((unsigned int *)&v10, v6) )
      {
        sub_80D32C0((_QWORD *)(*a1 + i), v5, v9, a3);
        if ( (unsigned int)v10 >= v6 )
          goto LABEL_16;
      }
      goto LABEL_13;
    }
LABEL_16:
    a1[3] = a2;
  }
LABEL_17:
  result = 1;
LABEL_14:
  if ( v11 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
