/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4570F0
// Address: 0x004570F0

//----- (004570F0) --------------------------------------------------------
int __stdcall sub_4570F0(int a1, char *a2, char a3)
{
  int v3; // ecx
  char *v4; // esi
  char v5; // al
  char *v6; // eax
  int *v7; // ebx
  unsigned int v8; // edi
  int v9; // esi
  int v10; // eax
  char *v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // ecx
  char *v15; // ecx
  char *v16; // eax
  char *v17; // eax
  int v19; // [esp-8h] [ebp-44h]
  int v20; // [esp-8h] [ebp-44h]
  int v21; // [esp+10h] [ebp-2Ch]
  bool v22; // [esp+14h] [ebp-28h]
  char *v23; // [esp+1Ch] [ebp-20h] BYREF
  int v24; // [esp+20h] [ebp-1Ch]
  int v25; // [esp+24h] [ebp-18h]
  int v26; // [esp+28h] [ebp-14h]
  int v27; // [esp+2Ch] [ebp-10h]
  int v28; // [esp+38h] [ebp-4h]
  char v29[260]; // [esp+3Ch] [ebp+0h] BYREF

  v3 = 0;
  v4 = a2;
  v26 = a1;
  v21 = *(_DWORD *)(a1 + 4);
  v5 = a3;
  v27 = 0;
  if ( (a3 & 1) != 0 )
  {
    v3 = sub_40F020((int)v29, 260);
    v27 = v3;
    v5 = a3;
  }
  v22 = (v5 & 2) != 0;
  if ( (v5 & 2) != 0 )
  {
    v19 = v3;
    v6 = sub_4575C0(a2);
    sub_456B50(a1, a3, v6, v19, 0);
  }
  v7 = sub_456F20();
  v8 = 0;
  if ( v7[1] )
  {
    v9 = 0;
    do
    {
      if ( *(_DWORD *)(*v7 + v9 + 4) )
        sub_456B50(v26, a3, *(char **)(*v7 + v9), a2, v27, 0);
      else
        sub_456B50(v26, a3, (char *)MultiByteStr, a2, v27, 0);
      ++v8;
      v9 += 12;
    }
    while ( v8 < v7[1] );
    v4 = a2;
  }
  if ( v4 )
  {
    v10 = strcmp(v4, "sig");
    if ( v10 )
      v10 = v10 < 0 ? -1 : 1;
    if ( v10 )
    {
      v12 = strcmp(v4, "ids");
      if ( v12 )
        v12 = v12 < 0 ? -1 : 1;
      if ( v12 )
      {
        v13 = strcmp(v4, "idc");
        if ( v13 )
          v13 = v13 < 0 ? -1 : 1;
        if ( v13 )
        {
          v14 = strcmp(v4, "til");
          if ( v14 )
            v14 = v14 < 0 ? -1 : 1;
          v11 = "IDATIL";
          if ( v14 )
            v11 = nullptr;
        }
        else
        {
          v11 = "IDAIDC";
        }
      }
      else
      {
        v11 = "IDAIDS";
      }
    }
    else
    {
      v11 = "IDASGN";
    }
    v15 = nullptr;
    v23 = nullptr;
    v24 = 0;
    v25 = 0;
    v28 = 0;
    if ( v11 )
    {
      if ( sub_4560B0(v11, (void **)&v23) )
      {
        v16 = (char *)MultiByteStr;
        if ( v24 )
          v16 = v23;
        sub_456B50(v26, a3, v16, v27, 0);
      }
      v15 = v23;
    }
    v28 = 1;
    if ( v15 )
    {
      v24 = 0;
      sub_453A20(v15);
      v23 = nullptr;
      v25 = 0;
    }
    v28 = -1;
  }
  if ( !v22 )
  {
    v20 = v27;
    v17 = sub_4575C0(v4);
    sub_456B50(v26, a3, v17, v20, 0);
  }
  return *(_DWORD *)(v26 + 4) - v21;
}
