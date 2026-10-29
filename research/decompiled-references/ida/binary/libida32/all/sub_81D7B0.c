__int64 __fastcall sub_81D7B0(__int64 a1)
{
  __int64 v1; // rax
  void (*v2)(void); // rbx
  void *v3; // rbx

  while ( 1 )
  {
    v3 = qword_2CACFF8;
    if ( !qword_2CACFF8 )
      break;
    v1 = *((_QWORD *)qword_2CACFF8 + 1);
    if ( !v1 )
    {
      if ( *(_QWORD *)qword_2CACFF8 )
        qfree(*(void **)qword_2CACFF8);
      qfree(v3);
      break;
    }
    v2 = *(void (**)(void))(*(_QWORD *)qword_2CACFF8 + 8 * v1 - 8);
    del_qatexit(v2);
    v2();
  }
  qword_2CACFF8 = nullptr;
  if ( *(_BYTE *)(a1 + 28) )
    exit(*(_DWORD *)(a1 + 24));
  return 0;
}

