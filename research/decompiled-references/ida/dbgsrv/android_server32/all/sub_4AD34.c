/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4AD34
// Address: 0x0004AD34

//----- (0004AD34) --------------------------------------------------------
int __fastcall sub_4AD34(int a1, int a2, const char *a3)
{
  pthread_mutex_t *v4; // r6
  int v5; // r7

  *(_DWORD *)(a1 + 68) = 0;
  if ( !a3
    || (v4 = (pthread_mutex_t *)dword_DE374,
        qmutex_lock((pthread_mutex_t *)dword_DE374),
        v5 = sub_41550(*(_DWORD **)(a1 + 4), a3),
        qmutex_unlock(v4),
        v5 != 0x7FFFFFFF) )
  {
    JUMPOUT(0x4ADB0);
  }
  return sub_4AD9C();
}
// 4AD74: control flows out of bounds to 4ADB0
// 4AD9C: using guessed type int sub_4AD9C(void);
// DE374: using guessed type int dword_DE374;
