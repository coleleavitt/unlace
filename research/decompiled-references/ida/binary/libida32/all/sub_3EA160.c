__int64 __fastcall sub_3EA160(__int64 a1, unsigned int a2, int a3, _BYTE *a4)
{
  unsigned int v6; // ebx
  int v7; // eax
  int v8; // r14d
  int v9; // eax
  void *v10; // rax
  int v11; // edx
  int v12; // r8d
  int v13; // r9d

  v6 = a2;
  v7 = nbits(a2);
  *a4 = 0;
  v8 = v7 + 14;
  v9 = v7 + 7;
  if ( v9 >= 0 )
    v8 = v9;
  v10 = (void *)qcalloc(v8 >> 3, 0x10000);
  if ( v10 )
  {
    if ( a3 )
    {
      show_auto(a2, 0);
      callui(27, 0, v11, (int)&callui, v12, v13);
    }
    qfree(v10);
  }
  else
  {
    return (unsigned int)-1;
  }
  return v6;
}

