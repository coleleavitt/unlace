/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A0918
// Address: 0x00000000000A0918

//----- (00000000000A0918) ----------------------------------------------------
pthread_mutex_t *__fastcall sub_A0918(pthread_mutex_t *a1, __int64 a2)
{
  pthread_mutex_t *v4; // x0
  char *v5; // x8
  char *v6; // x20
  size_t v7; // x0
  pthread_mutex_t v9; // [xsp+0h] [xbp-40h] BYREF

  *(&v9.__align + 1) = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = pack_dd(&v9, (unsigned __int64)&v9.__align + 5, *(unsigned int *)(a2 + 4));
  sub_545E8(a1, &v9, (char *)v4 - (char *)&v9);
  if ( *(_QWORD *)(a2 + 16) )
    v5 = *(char **)(a2 + 8);
  else
    v5 = &byte_F154B;
  if ( v5 )
    v6 = v5;
  else
    v6 = "";
  v7 = strlen(v6);
  return sub_545E8(a1, v6, v7 + 1);
}
// F154B: using guessed type char byte_F154B;
