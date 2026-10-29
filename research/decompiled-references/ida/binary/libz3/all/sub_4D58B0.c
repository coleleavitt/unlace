__int64 __fastcall sub_4D58B0(_DWORD *a1)
{
  __int64 v1; // rax
  void (*v3)(void); // rdx

  v1 = *(_QWORD *)a1;
  if ( a1[6] )
  {
    if ( (*(unsigned __int8 (**)(void))(v1 + 144))() )
      return 0;
  }
  else if ( (*(unsigned __int8 (**)(void))(v1 + 56))() )
  {
    return 0;
  }
  v3 = *(void (**)(void))(*(_QWORD *)a1 + 48LL);
  if ( (char *)v3 == (char *)sub_4C9AC0 )
    (*(void (**)(void))(*(_QWORD *)a1 + 40LL))();
  else
    v3();
  return 1;
}

