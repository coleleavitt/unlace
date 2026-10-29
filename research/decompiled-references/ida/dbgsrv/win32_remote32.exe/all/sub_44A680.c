/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44A680
// Address: 0x0044A680

//----- (0044A680) --------------------------------------------------------
_DWORD *__cdecl sub_44A680(int a1, const char **a2)
{
  int v2; // eax
  bool v3; // cf
  SIZE_T v4; // eax
  _DWORD *v5; // eax
  _DWORD *v6; // ebx
  unsigned int *v7; // ebx
  const char **v8; // esi
  unsigned __int8 *v9; // ecx
  unsigned __int8 *v10; // edi
  unsigned int v12; // edi
  unsigned int v13; // eax
  unsigned int v14; // edx
  const char *v15; // eax
  const char *v16; // esi
  unsigned int v18; // edi
  unsigned int v19; // eax
  unsigned __int8 *v21; // [esp+14h] [ebp-14h]
  _DWORD *v22; // [esp+18h] [ebp-10h]

  if ( a1 <= 0 )
    return nullptr;
  v2 = 32 * a1;
  if ( !is_mul_ok(0x20u, a1) )
    v2 = -1;
  v3 = __CFADD__(v2, 4);
  v4 = v2 + 4;
  if ( v3 )
    v4 = -1;
  v5 = sub_4631A3(v4);
  if ( v5 )
  {
    v6 = v5 + 1;
    *v5 = a1;
    v22 = v5 + 1;
    sub_46312F((int)(v5 + 1), 32, a1, (void (__thiscall *)(int))sub_449680, (int)sub_40ACD0);
  }
  else
  {
    v6 = nullptr;
    v22 = nullptr;
  }
  v7 = v6 + 3;
  do
  {
    v8 = a2;
    *(v7 - 3) = sub_4541E0((unsigned __int8 **)a2, (unsigned int)a2[1]);
    *(v7 - 2) = sub_4541E0((unsigned __int8 **)a2, (unsigned int)a2[1]);
    v9 = (unsigned __int8 *)*a2;
    v10 = (unsigned __int8 *)*a2;
    v21 = (unsigned __int8 *)*a2;
    do
    {
      if ( v9 >= (unsigned __int8 *)a2[1] )
        goto LABEL_18;
    }
    while ( *v9++ );
    *a2 = (const char *)v9;
    if ( !v10 || (v12 = strlen((const char *)v10)) == 0 )
    {
LABEL_18:
      *v7 = 0;
      goto LABEL_19;
    }
    v13 = v12 + 1;
    if ( v12 + 1 > v7[1] )
    {
      *(v7 - 1) = (unsigned int)sub_453B00((int)(v7 - 1), (void *)*(v7 - 1), v12 + 1, 1u);
      v13 = v12 + 1;
      v8 = a2;
    }
    *v7 = v13;
    sub_464310(*(v7 - 1), (unsigned int)v21, v12);
    *(_BYTE *)(v12 + *(v7 - 1)) = 0;
LABEL_19:
    v14 = (unsigned int)v8[1];
    v15 = *v8;
    v16 = *v8;
    do
    {
      if ( (unsigned int)v15 >= v14 )
        goto LABEL_27;
    }
    while ( *v15++ );
    *a2 = v15;
    if ( !v16 || (v18 = strlen(v16)) == 0 )
    {
LABEL_27:
      v7[3] = 0;
      goto LABEL_28;
    }
    v19 = v18 + 1;
    if ( v18 + 1 > v7[4] )
    {
      v7[2] = (unsigned int)sub_453B00((int)(v7 + 2), (void *)v7[2], v18 + 1, 1u);
      v19 = v18 + 1;
    }
    v7[3] = v19;
    sub_464310(v7[2], (unsigned int)v16, v18);
    *(_BYTE *)(v18 + v7[2]) = 0;
LABEL_28:
    v7 += 8;
    --a1;
  }
  while ( a1 );
  return v22;
}
