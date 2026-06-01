/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_472EA0
// Address: 0x0000000000472EA0

//----- (0000000000472EA0) ----------------------------------------------------
void __fastcall sub_472EA0(char *a1)
{
  pthread_mutex_t *v2; // rax
  void *v3; // rdi
  void *v4; // rdi

  sub_482C00(*((pthread_mutex_t **)a1 + 2));
  v2 = *(pthread_mutex_t **)a1;
  *((_QWORD *)a1 + 2) = 0;
  if ( v2 )
  {
    if ( *((_QWORD *)a1 + 5) )
    {
      ((void (*)(void))v2[3].__align)();
      v2 = *(pthread_mutex_t **)a1;
      if ( !*((_QWORD *)a1 + 6) )
        goto LABEL_5;
    }
    else if ( !*((_QWORD *)a1 + 6) )
    {
      if ( !*((_QWORD *)a1 + 1) )
      {
LABEL_8:
        (*(void (__fastcall **)(pthread_mutex_t *))(v2->__align + 8))(v2);
        goto LABEL_9;
      }
LABEL_6:
      (*(void (__fastcall **)(pthread_mutex_t *))(v2->__align + 160))(v2);
      v2 = *(pthread_mutex_t **)a1;
LABEL_7:
      if ( !v2 )
        goto LABEL_9;
      goto LABEL_8;
    }
    ((void (*)(void))v2[3].__align)();
    v2 = *(pthread_mutex_t **)a1;
LABEL_5:
    if ( !*((_QWORD *)a1 + 1) )
      goto LABEL_7;
    goto LABEL_6;
  }
LABEL_9:
  v3 = *((void **)a1 + 4);
  *((_QWORD *)a1 + 1) = 0;
  *(_OWORD *)(a1 + 40) = 0;
  if ( v3 )
    dlclose(v3);
  v4 = *((void **)a1 + 3);
  *((_QWORD *)a1 + 4) = 0;
  if ( v4 )
    dlclose(v4);
}
