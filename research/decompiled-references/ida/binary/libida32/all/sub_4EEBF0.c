unsigned int *__fastcall sub_4EEBF0(__int64 a1)
{
  unsigned int *v1; // rbx
  __int64 v2; // rax

  v1 = *(unsigned int **)(a1 + 24);
  if ( v1 )
  {
    v2 = *((_QWORD *)v1 + 1);
    v1 = nullptr;
    if ( (_DWORD)v2 )
    {
      v1 = sub_4EE890(a1, 0);
      sub_4EE680(*(_QWORD *)(a1 + 24) + 64LL, a1, v1);
    }
  }
  return v1;
}

