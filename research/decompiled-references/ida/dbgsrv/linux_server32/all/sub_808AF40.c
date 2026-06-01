/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_808AF40
// Address: 0x0808AF40

//----- (0808AF40) --------------------------------------------------------
unsigned int __cdecl sub_808AF40(void **a1, char *a2, unsigned __int8 *a3)
{
  void **v3; // esi
  unsigned __int8 *v4; // ecx
  unsigned int result; // eax
  char *v6; // eax
  unsigned int v7; // edx
  char *v8; // eax
  unsigned int v9; // esi
  char *v10; // eax
  char *v11; // edx
  char *v12; // [esp+0h] [ebp-40h]
  char *v13; // [esp+4h] [ebp-3Ch]
  char *v14; // [esp+4h] [ebp-3Ch]
  unsigned __int8 *v15; // [esp+4h] [ebp-3Ch]
  char *v16; // [esp+4h] [ebp-3Ch]
  unsigned __int8 v17[4]; // [esp+10h] [ebp-30h] BYREF
  __int128 v18; // [esp+14h] [ebp-2Ch]
  unsigned int v19; // [esp+24h] [ebp-1Ch]

  v3 = a1;
  v19 = __readgsdword(0x14u);
  v4 = a3;
  v13 = (char *)a1[1];
  if ( a2 < v13 )
  {
    v12 = (char *)a1[1];
    v16 = a2;
    do
      sub_8089430((int)*a1 + 20 * (_DWORD)v16++);
    while ( v12 != v16 );
LABEL_17:
    v3[1] = a2;
    goto LABEL_3;
  }
  if ( v13 >= a2 )
    goto LABEL_3;
  v6 = (char *)*a1;
  v7 = (unsigned int)a1[2];
  if ( a3 < *a1 || a3 >= (unsigned __int8 *)&v6[20 * v7] )
  {
    if ( v7 >= (unsigned int)a2
      || (v6 = (char *)sub_80CF920((int)a1, v6, (unsigned int)a2, 0x14u),
          v11 = (char *)a1[1],
          *a1 = v6,
          v4 = a3,
          v13 = v11,
          v11 < a2) )
    {
      v9 = (unsigned int)v13;
      v15 = v4;
      while ( 1 )
      {
        v10 = &v6[20 * v9++];
        *v10 = 2;
        *(_OWORD *)(v10 + 4) = 0;
        sub_8089810((unsigned __int8 *)v10, v15);
        if ( v9 >= (unsigned int)a2 )
          break;
        v6 = (char *)*a1;
      }
      v3 = a1;
    }
    goto LABEL_17;
  }
  v17[0] = 2;
  v18 = 0;
  sub_8089810(v17, a3);
  if ( a1[2] < a2 )
    *a1 = sub_80CF920((int)a1, *a1, (unsigned int)a2, 0x14u);
  v14 = (char *)a1[1];
  if ( v14 < a2 )
  {
    do
    {
      v8 = (char *)*a1 + 20 * (_DWORD)v14;
      *v8 = 2;
      *(_OWORD *)(v8 + 4) = 0;
      sub_8089810((unsigned __int8 *)v8, v17);
      ++v14;
    }
    while ( a2 != v14 );
  }
  a1[1] = a2;
  sub_8089430((int)v17);
LABEL_3:
  result = v19 - __readgsdword(0x14u);
  if ( result )
    sub_80D7AB0();
  return result;
}
