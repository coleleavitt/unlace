/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_81070
// Address: 0x00081070

//----- (00081070) --------------------------------------------------------
unsigned int *__fastcall sub_81070(unsigned int a1)
{
  int v2; // r3
  unsigned int *v3; // r4
  unsigned int v4; // r3
  unsigned int v5; // r2
  int v7; // r3
  unsigned int v8; // r1
  int v9; // r5
  char *v10; // r2
  unsigned int *v11; // r0
  int *v12; // r4
  char *v13; // r0

  if ( &_pthread_key_create )
  {
    if ( pthread_mutex_lock((pthread_mutex_t *)&dword_D5C14) )
      sub_80F38();
    v2 = a1 + 8;
    v3 = (unsigned int *)dword_D5C2C;
    if ( a1 >= 0xFFFFFFF8 )
      v2 = 8;
    v4 = (v2 + 7) & 0xFFFFFFF8;
    if ( !dword_D5C2C )
      goto LABEL_12;
  }
  else
  {
    v7 = a1 + 8;
    if ( a1 >= 0xFFFFFFF8 )
      v7 = 8;
    v3 = (unsigned int *)dword_D5C2C;
    v4 = (v7 + 7) & 0xFFFFFFF8;
    if ( !dword_D5C2C )
      return v3;
  }
  v5 = *v3;
  if ( *v3 < v4 )
  {
    while ( 1 )
    {
      v11 = (unsigned int *)v3[1];
      if ( !v11 )
        break;
      v5 = *v11;
      if ( *v11 >= v4 )
      {
        v12 = (int *)(v3 + 1);
        goto LABEL_19;
      }
      v3 = (unsigned int *)v3[1];
    }
    v3 = nullptr;
    if ( !&_pthread_key_create )
      return v3;
    goto LABEL_12;
  }
  v11 = v3;
  v12 = &dword_D5C2C;
LABEL_19:
  v8 = v5 - v4;
  v9 = v11[1];
  if ( v5 - v4 <= 7 )
  {
    *v11 = v5;
    *v12 = v9;
  }
  else
  {
    v10 = (char *)v11 + v4;
    *((_DWORD *)v10 + 1) = v9;
    *(unsigned int *)((char *)v11 + v4) = v8;
    v11 = (unsigned int *)*v12;
    *(_DWORD *)*v12 = v4;
    *v12 = (int)v10;
  }
  v3 = v11 + 2;
  if ( &_pthread_key_create )
  {
LABEL_12:
    if ( pthread_mutex_unlock((pthread_mutex_t *)&dword_D5C14) )
    {
      v13 = sub_8117C(4);
      *(_DWORD *)v13 = &off_D1D14;
      sub_80D98(
        (int)v13,
        (int)&`typeinfo for'__gnu_cxx::__concurrence_unlock_error,
        (int)__gnu_cxx::__concurrence_unlock_error::~__concurrence_unlock_error);
    }
  }
  return v3;
}
// D1CEC: using guessed type int *`typeinfo for'__gnu_cxx::__concurrence_unlock_error;
// D1D14: using guessed type _UNKNOWN *off_D1D14;
// D5C14: using guessed type int dword_D5C14;
// D5C2C: using guessed type int dword_D5C2C;
