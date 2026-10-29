void __fastcall sub_7CD500(char *a1)
{
  void (**v2)(void); // rax
  void *v3; // rdi
  void *v4; // rdi

  qmutex_free(*((void **)a1 + 2));
  v2 = *(void (***)(void))a1;
  *((_QWORD *)a1 + 2) = 0;
  if ( v2 )
  {
    if ( *((_QWORD *)a1 + 5) )
    {
      v2[15]();
      v2 = *(void (***)(void))a1;
      if ( !*((_QWORD *)a1 + 6) )
        goto LABEL_5;
    }
    else if ( !*((_QWORD *)a1 + 6) )
    {
      if ( !*((_QWORD *)a1 + 1) )
      {
LABEL_8:
        (*((void (__fastcall **)(void (**)(void)))*v2 + 1))(v2);
        goto LABEL_9;
      }
LABEL_6:
      (*((void (__fastcall **)(void (**)(void)))*v2 + 20))(v2);
      v2 = *(void (***)(void))a1;
LABEL_7:
      if ( !v2 )
        goto LABEL_9;
      goto LABEL_8;
    }
    v2[15]();
    v2 = *(void (***)(void))a1;
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
