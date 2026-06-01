/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8089920
// Address: 0x08089920

//----- (08089920) --------------------------------------------------------
unsigned __int8 *__cdecl sub_8089920(unsigned __int8 *a1, char a2)
{
  unsigned __int8 *v2; // esi
  unsigned __int8 *v4; // edi
  unsigned __int8 *v5; // eax
  unsigned __int8 **v6; // edx
  unsigned __int8 **v7; // eax
  int v8; // [esp-30h] [ebp-30h]
  unsigned __int8 **v9; // [esp-2Ch] [ebp-2Ch] BYREF
  int v10; // [esp-28h] [ebp-28h]
  unsigned int v11; // [esp-24h] [ebp-24h]
  unsigned int v12; // [esp-20h] [ebp-20h]

  v12 = __readgsdword(0x14u);
  v2 = a1;
  if ( !a1 )
  {
    sub_80C7880(1563);
    goto LABEL_3;
  }
  if ( *a1 != 10 )
    goto LABEL_3;
  v9 = nullptr;
  v10 = 0;
  v11 = 0;
  v8 = sub_807F510();
  v4 = a1;
  while ( 1 )
  {
    v5 = (unsigned __int8 *)sub_8084BA0((int)(v4 + 4), v8);
    v4 = v5;
    if ( !v5 )
    {
LABEL_14:
      sub_80C7880(1563);
      goto LABEL_15;
    }
    if ( *v5 != 10 || (a2 & 1) != 0 )
      break;
    v6 = &v9[v10];
    if ( v9 != v6 )
    {
      v7 = v9;
      while ( v4 != *v7 )
      {
        if ( v6 == ++v7 )
          goto LABEL_18;
      }
      if ( v7 != v6 )
        goto LABEL_14;
    }
LABEL_18:
    if ( v11 < v10 + 1 )
    {
      v9 = (unsigned __int8 **)sub_80CF920((int)&v9, v9, v10 + 1, 4u);
      v6 = &v9[v10];
    }
    *v6 = v4;
    ++v10;
  }
  if ( (a2 & 2) != 0 )
  {
    *a1 = 2;
    if ( !sub_8089810(a1, v5) )
      goto LABEL_16;
LABEL_15:
    v2 = nullptr;
    goto LABEL_16;
  }
  v2 = v5;
LABEL_16:
  if ( v9 )
  {
    v10 = 0;
    sub_80CF780(v9);
  }
LABEL_3:
  if ( v12 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v2;
}
