/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42A190
// Address: 0x0042A190

//----- (0042A190) --------------------------------------------------------
int __stdcall sub_42A190(_DWORD *a1)
{
  int v2; // ebx
  int v3; // eax
  int v4; // ecx
  void *v5; // edi
  signed int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  void *v10; // ecx
  int v12; // edi
  int v13; // eax
  int v14; // ecx
  bool v15; // zf
  int v16; // eax
  int v17; // edx
  void ***v18; // ecx
  const char *v19; // eax
  void ***v20; // edi
  int v21; // esi
  unsigned int *v22; // [esp+1Ch] [ebp-14h]
  unsigned int v23; // [esp+38h] [ebp+8h]
  _DWORD *v24; // [esp+38h] [ebp+8h]

  v2 = sub_42EFE0((int)a1, 2);
  if ( !v2 )
  {
    v3 = a1[44];
    v4 = *(unsigned __int16 *)(a1[43] + 2 * v3 - 2);
    if ( v3 )
      a1[44] = v3 - 1;
    *(_DWORD *)(*(_DWORD *)(a1[46] + 4 * a1[47] - 4) + 12) = v4;
  }
  v5 = nullptr;
  v22 = (unsigned int *)(a1[21] + 12 * a1[22] - 12);
  v6 = v22[1];
  v23 = v6;
  if ( v6 )
  {
    v5 = sub_4539E0(v6);
    sub_464310((unsigned int)v5, *v22, v23);
  }
  v7 = a1[22];
  if ( v7 )
  {
    v8 = v7 - 1;
    a1[22] = v8;
    v9 = a1[21] + 12 * v8;
    v24 = (_DWORD *)v9;
    v10 = *(void **)v9;
    if ( *(_DWORD *)v9 )
    {
      *(_DWORD *)(v9 + 4) = 0;
      sub_453A20(v10);
      *v24 = 0;
      v24[2] = 0;
    }
  }
  if ( v5 )
    sub_453A20(v5);
  if ( v2 )
    return v2;
  if ( *(_DWORD *)(a1[24] + 8) )
  {
    while ( 1 )
    {
      v12 = *(_DWORD *)(*(_DWORD *)(a1[14] + 40) + 4 * *(_DWORD *)(a1[24] + 8));
      v13 = sub_420020((unsigned int *)v12, (const char **)(v12 + 16));
      v14 = a1[47];
      v15 = v13 == 0x7FFFFFFF;
      v16 = a1[46];
      if ( !v15 )
        break;
      if ( *(int *)(*(_DWORD *)(v16 + 4 * v14 - 4) + 12) > 0 )
      {
        v19 = MultiByteStr;
        if ( *(_DWORD *)(v12 + 20) )
          v19 = *(const char **)(v12 + 16);
        sub_45CB10(0, v19);
        return sub_45CC20(56);
      }
      if ( !*(_DWORD *)(v12 + 8) )
        goto LABEL_18;
    }
    v20 = *(void ****)(v16 + 4 * v14 - 4);
    if ( v14 )
      a1[47] = v14 - 1;
    v21 = sub_42D890((int)a1, v20, 0, 0);
    if ( v20 )
      sub_42C5A0(v20, 1);
    return sub_45CC20(v21);
  }
  else
  {
LABEL_18:
    v17 = a1[47];
    v18 = *(void ****)(a1[46] + 4 * v17 - 4);
    if ( v17 )
      a1[47] = v17 - 1;
    if ( v18 )
      sub_42C5A0(v18, 1);
    if ( a1[47] )
    {
      if ( byte_4B70F0 )
        __debugbreak();
      sub_4533F0(270);
    }
    return 0;
  }
}
// 4B70F0: using guessed type char byte_4B70F0;
