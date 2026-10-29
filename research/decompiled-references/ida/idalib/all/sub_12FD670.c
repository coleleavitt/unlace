__int64 __fastcall sub_12FD670(
        __int64 (__fastcall *a1)(__int64, _BYTE **),
        __int64 a2,
        int a3,
        unsigned int a4,
        int a5)
{
  _UNKNOWN **v5; // rcx
  _UNKNOWN **v6; // rax
  _BYTE *v7; // r13
  char *v8; // r12
  size_t v9; // rax
  _BYTE *v11; // [rsp+0h] [rbp-88h] BYREF
  __int16 v12; // [rsp+20h] [rbp-68h]
  _QWORD v13[4]; // [rsp+30h] [rbp-58h] BYREF
  __int16 v14; // [rsp+50h] [rbp-38h]

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
  v13[0] = v8;
  v14 = 261;
  v13[1] = v9;
  v12 = 257;
  if ( *v7 )
  {
    v11 = v7;
    LOBYTE(v12) = 3;
  }
  a1(a2, (_BYTE **)v13);
  return a1(a2, &v11);
}
