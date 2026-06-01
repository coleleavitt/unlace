bool __fastcall sub_2B500(_QWORD *a1)
{
  pthread_mutex_t *v2; // rdi

  v2 = (pthread_mutex_t *)qword_7BCC8;
  *a1 = qword_7BCC8;
  return sub_2B4D0(v2);
}

