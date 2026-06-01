/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_807D880
// Address: 0x0807D880

//----- (0807D880) --------------------------------------------------------
int __cdecl sub_807D880(int a1, int a2)
{
  void *ptr; // [esp+0h] [ebp-28h] BYREF
  unsigned int v4; // [esp+4h] [ebp-24h]
  pthread_mutex_t *mutex; // [esp+8h] [ebp-20h]
  unsigned int v6; // [esp+Ch] [ebp-1Ch]

  v6 = __readgsdword(0x14u);
  ptr = nullptr;
  v4 = 0;
  mutex = nullptr;
  sub_807C7A0((int (__cdecl *)(int, int))sub_807C670, (int)&ptr, a1, a2);
  if ( v4 > 1 )
    sub_8058290();
  if ( ptr )
  {
    v4 = 0;
    sub_80CF780(ptr);
  }
  if ( v6 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return 0;
}
