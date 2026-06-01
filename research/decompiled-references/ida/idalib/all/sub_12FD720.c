__int64 __fastcall sub_12FD720(
        __int64 (__fastcall *a1)(__int64, _QWORD *),
        __int64 a2,
        int a3,
        unsigned int a4,
        int a5)
{
  _UNKNOWN **v5; // rcx
  _UNKNOWN **v6; // rax
  _BYTE *v7; // r13
  char *v8; // rbx
  size_t v9; // rax
  bool v10; // zf
  _QWORD v12[4]; // [rsp+0h] [rbp-58h] BYREF
  __int16 v13; // [rsp+20h] [rbp-38h]

  v5 = (&off_2BAFBA0)[2 * a4];
  v6 = v5 + 2;
  if ( a5 != *((_DWORD *)v5 + 2) )
  {
    do
    {
      v5 = v6;
      v6 += 2;
    }
    while ( *((_DWORD *)v6 - 2) != a5 );
  }
  v7 = *v5;
  v8 = &byte_2601800[a3];
  if ( v8 )
    v9 = strlen(&byte_2601800[a3]);
  else
    v9 = 0;
  v10 = *v7 == 0;
  v12[0] = v8;
  v12[1] = v9;
  if ( v10 )
  {
    v13 = 261;
  }
  else
  {
    v12[2] = v7;
    v13 = 773;
  }
  return a1(a2, v12);
}
