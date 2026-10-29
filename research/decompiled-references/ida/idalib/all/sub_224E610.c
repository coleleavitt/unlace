int __fastcall sub_224E610(_QWORD *a1, _BYTE *a2, signed __int64 a3, _BYTE *a4, signed __int64 a5, pthread_mutex_t *a6)
{
  void *v7; // rax
  void *v11; // rax
  int v12; // eax
  __int64 v13; // rax
  __int64 *v14; // rax

  v7 = a1 + 2;
  *a1 = a1 + 2;
  if ( &a2[a3] && !a2 )
LABEL_28:
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  if ( (unsigned __int64)a3 > 0xF )
  {
    if ( a3 < 0 )
      goto LABEL_29;
    v7 = (void *)operator new(a3 + 1);
    a1[2] = a3;
    *a1 = v7;
    goto LABEL_23;
  }
  if ( a3 != 1 )
  {
    if ( !a3 )
      goto LABEL_6;
LABEL_23:
    memcpy(v7, a2, a3);
    v7 = (void *)*a1;
    goto LABEL_6;
  }
  *((_BYTE *)a1 + 16) = *a2;
LABEL_6:
  a1[1] = a3;
  *((_BYTE *)v7 + a3) = 0;
  v11 = a1 + 6;
  a1[4] = a1 + 6;
  if ( &a4[a5] && !a4 )
    goto LABEL_28;
  if ( (unsigned __int64)a5 > 0xF )
  {
    if ( a5 >= 0 )
    {
      v11 = (void *)operator new(a5 + 1);
      a1[6] = a5;
      a1[4] = v11;
      goto LABEL_26;
    }
LABEL_29:
    std::__throw_length_error("basic_string::_M_create");
  }
  if ( a5 != 1 )
  {
    if ( !a5 )
      goto LABEL_11;
LABEL_26:
    memcpy(v11, a4, a5);
    v11 = (void *)a1[4];
    goto LABEL_11;
  }
  *((_BYTE *)a1 + 48) = *a4;
LABEL_11:
  a1[5] = a5;
  *((_BYTE *)v11 + a5) = 0;
  a1[8] = 0;
  a1[9] = 0;
  a1[10] = 0;
  a1[11] = 0;
  if ( &_pthread_key_create )
  {
    v12 = pthread_mutex_lock(a6);
    if ( v12 )
      std::__throw_system_error(v12);
  }
  v13 = qword_2D0ABC8;
  if ( qword_2D0ABC8 )
    *(_QWORD *)(qword_2D0ABC8 + 96) = a1 + 13;
  a1[13] = v13;
  v14 = &qword_2D0ABC8;
  a1[12] = &qword_2D0ABC8;
  qword_2D0ABC8 = (__int64)a1;
  if ( &_pthread_key_create )
    LODWORD(v14) = pthread_mutex_unlock(a6);
  return (int)v14;
}
