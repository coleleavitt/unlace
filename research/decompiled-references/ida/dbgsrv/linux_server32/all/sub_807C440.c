/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_807C440
// Address: 0x0807C440

//----- (0807C440) --------------------------------------------------------
int __cdecl sub_807C440(char *a1, void **a2, char a3)
{
  int *v3; // eax
  int v4; // edi
  _DWORD *v5; // eax
  unsigned __int8 v7; // [esp+4h] [ebp-34h]
  unsigned __int8 v8; // [esp+8h] [ebp-30h]
  pthread_mutex_t *mutex; // [esp+Ch] [ebp-2Ch]
  _DWORD v10[9]; // [esp+14h] [ebp-24h] BYREF

  mutex = (pthread_mutex_t *)dword_811E6F8;
  sub_80D15A0((pthread_mutex_t *)dword_811E6F8);
  v3 = off_811DA24();
  sub_8093810((int)v3, nullptr, 0);
  v8 = a3 & 1;
  v4 = sub_807F510();
  v5 = (_DWORD *)sub_809AFD0(*(_DWORD *)(v4 + 16), a1);
  if ( v5 )
  {
    sub_807BE60(*(_DWORD **)(v4 + 16), 0, a2);
    sub_809B360(*(_DWORD *)(v4 + 16), v8);
    v7 = 0;
  }
  else
  {
    v10[1] = -1;
    v10[0] = &off_811BD60;
    if ( (a3 & 2) != 0 )
      v5 = v10;
    v7 = sub_807C120(v4, (int)v5, a2, (a3 & 4) == 0);
    sub_809B360(*(_DWORD *)(v4 + 16), v8);
  }
  sub_80D1600(mutex);
  if ( v10[2] != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v7;
}
// 809AFD0: using guessed type _DWORD __cdecl sub_809AFD0(_DWORD, char *);
// 811BD60: using guessed type int (__cdecl *off_811BD60)(int, int);
// 811DA24: using guessed type int *(*off_811DA24)();
// 811E6F8: using guessed type int dword_811E6F8;
