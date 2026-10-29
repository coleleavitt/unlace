/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8080EE0
// Address: 0x08080EE0

//----- (08080EE0) --------------------------------------------------------
int __cdecl sub_8080EE0(_DWORD *a1, char *s, int a3)
{
  int v3; // edi
  int v5; // ecx
  size_t v6; // eax
  int v7; // ecx
  int v8; // eax
  void *v9; // eax
  void *v10; // eax
  size_t n; // [esp+0h] [ebp-24h]
  int v12; // [esp+4h] [ebp-20h]
  size_t v13; // [esp+4h] [ebp-20h]
  pthread_mutex_t *mutex; // [esp+8h] [ebp-1Ch]

  if ( !s )
    return 0;
  mutex = (pthread_mutex_t *)dword_811E6F8;
  sub_80D15A0((pthread_mutex_t *)dword_811E6F8);
  v3 = sub_8080DF0((int)a1, s);
  if ( !v3 )
  {
    v3 = operator new(0x38u);
    *(_DWORD *)(v3 + 4) = 0;
    v5 = a1[10];
    *(_DWORD *)(v3 + 8) = 0;
    *(_DWORD *)(v3 + 12) = v3 + 4;
    *(_DWORD *)(v3 + 28) = v5;
    v12 = v5;
    *(_DWORD *)(v3 + 16) = v3 + 4;
    *(_DWORD *)(v3 + 20) = 0;
    *(_DWORD *)(v3 + 24) = 0;
    *(_DWORD *)(v3 + 32) = 0;
    *(_DWORD *)(v3 + 36) = 0;
    *(_DWORD *)(v3 + 40) = 0;
    *(_DWORD *)(v3 + 52) = -1;
    *(_QWORD *)(v3 + 44) = -1;
    v6 = strlen(s);
    v7 = v12;
    if ( v6 )
    {
      n = v6;
      v13 = v6 + 1;
      v10 = sub_80CF920(v3 + 32, nullptr, v6 + 1, 1u);
      *(_DWORD *)(v3 + 32) = v10;
      *(_DWORD *)(v3 + 36) = v13;
      memmove(v10, s, n);
      *(_BYTE *)(*(_DWORD *)(v3 + 32) + n) = 0;
      v7 = a1[10];
    }
    v8 = 0;
    if ( a3 )
      v8 = *(_DWORD *)(a3 + 28);
    *(_DWORD *)(v3 + 24) = v8;
    v9 = (void *)a1[9];
    if ( a1[11] < (unsigned int)(v7 + 1) )
    {
      v9 = sub_80CF920((int)(a1 + 9), v9, v7 + 1, 4u);
      v7 = a1[10];
      a1[9] = v9;
    }
    *((_DWORD *)v9 + v7) = v3;
    ++a1[10];
  }
  sub_80D1600(mutex);
  return v3;
}
// 811E6F8: using guessed type int dword_811E6F8;
