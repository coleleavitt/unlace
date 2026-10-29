__int64 __fastcall sub_70AEE0(__int64 a1)
{
  __int64 result; // rax
  bool v2; // zf
  void **v3; // rbx
  void **v4; // rbp
  void *v5; // rdi

  result = close_linput(*(void **)a1);
  v2 = *(_BYTE *)(a1 + 128) == 0;
  *(_QWORD *)a1 = 0;
  if ( !v2 )
  {
    v3 = (void **)(a1 + 56);
    v4 = (void **)(a1 + 104);
    do
    {
      v5 = *v3++;
      result = close_linput(v5);
      *(v3 - 1) = nullptr;
    }
    while ( v3 != v4 );
  }
  return result;
}

