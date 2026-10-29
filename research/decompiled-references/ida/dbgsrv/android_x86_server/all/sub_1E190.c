/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1E190
// Address: 0x0001E190

//----- (0001E190) --------------------------------------------------------
int __cdecl sub_1E190(int a1, _DWORD *a2)
{
  unsigned int v2; // eax
  int v3; // ecx
  int v4; // eax
  int v5; // esi
  int v6; // ecx
  _DWORD *v7; // eax
  int v8; // ecx
  __int64 v10; // [esp+8h] [ebp-34h] BYREF
  int v11; // [esp+10h] [ebp-2Ch]
  __int64 v12; // [esp+18h] [ebp-24h]
  int v13; // [esp+20h] [ebp-1Ch]
  unsigned int v14; // [esp+28h] [ebp-14h]

  v14 = __readgsdword(0x14u);
  v2 = sub_19CA0(a1, &v10);
  if ( v2 )
  {
    sub_1DA50(v2);
    sub_1DE10("%s: %s\n");
  }
  if ( ((unsigned int)v10 | 2) != 3 )
  {
    v3 = *(_DWORD *)(*a2 + 572);
    if ( !v3 )
      goto LABEL_10;
    v4 = *a2 + 572;
    do
    {
      if ( *(_DWORD *)(v3 + 16) >= v11 )
        v4 = v3;
      v3 = *(_DWORD *)(v3 + 4 * (*(_DWORD *)(v3 + 16) < v11));
    }
    while ( v3 );
    if ( v4 == *a2 + 572 || v11 < *(_DWORD *)(v4 + 16) )
    {
LABEL_10:
      sub_1DB00();
      v5 = a2[1];
      v13 = v11;
      v12 = v10;
      v6 = *(_DWORD *)(v5 + 4);
      if ( *(_DWORD *)(v5 + 8) >= (unsigned int)(v6 + 1) )
      {
        v7 = *(_DWORD **)v5;
      }
      else
      {
        v7 = qvector_reserve(v5, *(void **)v5, v6 + 1, 0xCu);
        *(_DWORD *)v5 = v7;
        v6 = *(_DWORD *)(v5 + 4);
      }
      v8 = 3 * v6;
      v7[v8 + 2] = v13;
      *(_QWORD *)&v7[v8] = v12;
      ++*(_DWORD *)(v5 + 4);
    }
  }
  return 0;
}
