void __fastcall sub_172BCD0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, _BYTE *a5, __int64 a6)
{
  unsigned int *v6; // rdx
  unsigned int *v7; // rbx
  unsigned int *v8; // r13
  __int64 v9; // rbp
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  _BYTE *v12; // [rsp+8h] [rbp-90h]
  __int64 v13; // [rsp+18h] [rbp-80h] BYREF
  __int64 v14; // [rsp+20h] [rbp-78h] BYREF
  char v15; // [rsp+28h] [rbp-70h]
  char v16; // [rsp+29h] [rbp-6Fh]
  char v17; // [rsp+2Ah] [rbp-6Eh]
  void *ptr; // [rsp+30h] [rbp-68h] BYREF
  __int64 v19; // [rsp+38h] [rbp-60h]
  _BYTE v20[88]; // [rsp+40h] [rbp-58h] BYREF

  v15 = 0;
  v17 = 0;
  ptr = v20;
  v14 = 0;
  v19 = 0x400000000LL;
  v16 = 1;
  if ( !a3 )
    goto LABEL_10;
  v13 = a3;
  if ( (a3 & 1) != 0 )
  {
    v6 = (unsigned int *)(a3 & 0xFFFFFFFFFFFFFFFELL);
    v7 = v6 + 2;
    v8 = &v6[2 * *v6 + 2];
    if ( v8 == v6 + 2 )
      goto LABEL_10;
  }
  else
  {
    v7 = (unsigned int *)&v13;
    v8 = (unsigned int *)&v14;
  }
  a5 = v20;
  do
  {
    v9 = *(_QWORD *)v7;
    if ( *(_QWORD *)v7 )
    {
      v10 = (unsigned int)v19;
      a4 = HIDWORD(v19);
      v11 = (unsigned int)v19 + 1LL;
      if ( v11 > HIDWORD(v19) )
      {
        v12 = a5;
        sub_2237220(&ptr, a5, v11, 8);
        v10 = (unsigned int)v19;
        a5 = v12;
      }
      *((_QWORD *)ptr + v10) = v9;
      LODWORD(v19) = v19 + 1;
    }
    v7 += 2;
  }
  while ( v7 != v8 );
LABEL_10:
  sub_172AF50(a1, a2, (__int64)&v14, a4, (__int64)a5, a6);
  if ( ptr != v20 )
    free(ptr);
}
