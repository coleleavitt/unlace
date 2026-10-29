/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8073570
// Address: 0x08073570

//----- (08073570) --------------------------------------------------------
int __cdecl sub_8073570(_DWORD *a1, int a2)
{
  char *v2; // edx
  int *v3; // eax
  FILE *v4; // edi
  int v5; // eax
  int v6; // edx
  _DWORD *v7; // eax
  _DWORD *v9; // edx
  pthread_mutex_t *mutex; // [esp+8h] [ebp-2Ch]
  unsigned int v11; // [esp+18h] [ebp-1Ch]

  v11 = __readgsdword(0x14u);
  mutex = (pthread_mutex_t *)dword_811E6F8;
  sub_80D15A0((pthread_mutex_t *)dword_811E6F8);
  v2 = (char *)&dword_80DDFD8;
  if ( a1[7] )
    v2 = (char *)a1[6];
  v3 = &dword_80DDFD8;
  if ( a1[2] )
    v3 = (int *)a1[1];
  v4 = sub_80CDA20((int)v3, v2);
  if ( v4 )
  {
    v5 = dword_811E624;
    if ( !dword_811E624 )
    {
      v9 = (_DWORD *)dword_811E620;
      if ( !dword_811E628 )
      {
        v9 = sub_80CF920((int)&dword_811E620, (void *)dword_811E620, 1u, 4u);
        dword_811E620 = (int)v9;
        v5 = dword_811E624;
      }
      v9[v5] = 0;
      v5 = ++dword_811E624;
    }
    *(_DWORD *)(a2 + 4) = v5;
    v6 = dword_811E624;
    v7 = (_DWORD *)dword_811E620;
    if ( dword_811E628 < (unsigned int)(dword_811E624 + 1) )
    {
      v7 = sub_80CF920((int)&dword_811E620, (void *)dword_811E620, dword_811E624 + 1, 4u);
      v6 = dword_811E624;
      dword_811E620 = (int)v7;
    }
    v7[v6] = v4;
    ++dword_811E624;
  }
  sub_80D1600(mutex);
  if ( v11 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return 0;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
// 811E620: using guessed type int dword_811E620;
// 811E624: using guessed type int dword_811E624;
// 811E628: using guessed type int dword_811E628;
// 811E6F8: using guessed type int dword_811E6F8;
