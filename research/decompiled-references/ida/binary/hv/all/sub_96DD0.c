__int64 __fastcall sub_96DD0(__int64 a1)
{
  __int64 v1; // rax
  void (*v2)(void); // rbx
  void *v3; // rbx

  while ( 1 )
  {
    v3 = qword_1671B8;
    if ( !qword_1671B8 )
      break;
    v1 = *((_QWORD *)qword_1671B8 + 1);
    if ( !v1 )
    {
      if ( *(_QWORD *)qword_1671B8 )
        j__free(*(void **)qword_1671B8);
      j__free(v3);
      break;
    }
    v2 = *(void (**)(void))(*(_QWORD *)qword_1671B8 + 8 * v1 - 8);
    sub_96D50((__int64)v2);
    v2();
  }
  qword_1671B8 = nullptr;
  if ( *(_BYTE *)(a1 + 28) )
    exit(*(_DWORD *)(a1 + 24));
  return 0;
}

