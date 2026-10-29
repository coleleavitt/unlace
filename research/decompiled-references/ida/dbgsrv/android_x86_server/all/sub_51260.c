/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_51260
// Address: 0x00051260

//----- (00051260) --------------------------------------------------------
bool __cdecl sub_51260(int a1, char a2)
{
  __int64 v2; // rax
  int v3; // esi
  pthread_mutex_t *v5; // [esp+8h] [ebp-14h]

  v5 = (pthread_mutex_t *)dword_13BD5C;
  qmutex_lock((pthread_mutex_t *)dword_13BD5C);
  v2 = 1LL << a2;
  v3 = *(_DWORD *)(a1 + 32);
  if ( ((1LL << a2) & *(_QWORD *)(a1 + 28)) == 0 )
  {
    if ( !*((_BYTE *)&qword_13ACD8 + 13940) )
      interr(1444);
    BUG();
  }
  *(_DWORD *)(a1 + 28) &= ~(_DWORD)v2;
  *(_DWORD *)(a1 + 32) = ~HIDWORD(v2) & v3;
  return qmutex_unlock(v5);
}
// 13ACD8: using guessed type __int64 qword_13ACD8;
// 13BD5C: using guessed type int dword_13BD5C;
