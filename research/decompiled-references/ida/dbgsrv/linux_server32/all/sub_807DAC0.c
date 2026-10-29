/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_807DAC0
// Address: 0x0807DAC0

//----- (0807DAC0) --------------------------------------------------------
int __cdecl sub_807DAC0(int a1)
{
  int v1; // edi
  int v2; // ecx
  _DWORD *v3; // edx
  int i; // eax
  int v5; // esi
  int v7; // eax
  _DWORD *v8; // eax
  pthread_mutex_t *v9; // [esp-24h] [ebp-24h]

  if ( !a1 )
    return -1;
  v1 = *(_DWORD *)(a1 + 8);
  if ( v1 )
    return -1;
  v9 = (pthread_mutex_t *)dword_811E640;
  sub_80D15A0((pthread_mutex_t *)dword_811E640);
  v2 = *((_DWORD *)&qword_811CFF4 + 1424);
  v3 = *((_DWORD **)&qword_811CFF4 + 1423);
  if ( v2 > 0 )
  {
    for ( i = 0; ; ++i )
    {
      if ( v3[i] == a1 )
      {
        v1 = -1;
        goto LABEL_9;
      }
      v5 = i + 1;
      if ( v2 == i + 1 )
        break;
    }
    while ( v3[v1] )
    {
      if ( v1 == i )
        goto LABEL_18;
      ++v1;
    }
  }
  if ( v2 == v1 )
  {
    v5 = *((_DWORD *)&qword_811CFF4 + 1424);
LABEL_18:
    v7 = v2 + 1;
    if ( *((_DWORD *)&qword_811CFF4 + 1425) < (unsigned int)(v2 + 1) )
    {
      v8 = sub_80CF920((int)&qword_811CFF4 + 5692, v3, v2 + 1, 4u);
      v2 = *((_DWORD *)&qword_811CFF4 + 1424);
      v3 = v8;
      *((_DWORD *)&qword_811CFF4 + 1423) = v8;
      v7 = v2 + 1;
    }
    *((_DWORD *)&qword_811CFF4 + 1424) = v7;
    v1 = v5;
    v3[v2] = a1;
  }
  else
  {
    v3[v1] = a1;
  }
  nullsub_20(0, a1, v1);
LABEL_9:
  sub_80D1600(v9);
  return v1;
}
// 80C3670: using guessed type int __cdecl nullsub_20(_DWORD, _DWORD, _DWORD);
// 811CFF4: using guessed type __int64 qword_811CFF4;
// 811E640: using guessed type int dword_811E640;
