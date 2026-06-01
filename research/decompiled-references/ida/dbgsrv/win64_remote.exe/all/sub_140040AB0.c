/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140040AB0
// Address: 0x0000000140040AB0

//----- (0000000140040AB0) ----------------------------------------------------
__int64 *__fastcall sub_140040AB0(__int64 *a1, _QWORD *a2)
{
  __int64 *v2; // r14
  char *v3; // r13
  __int64 v4; // rbx
  __int64 v5; // r15
  char *v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // rdi
  size_t v9; // rsi
  void *v10; // rax
  size_t v11; // rsi
  void *v12; // rax

  v2 = a1;
  v3 = nullptr;
  v4 = 0;
  v5 = a2[1];
  if ( v5 )
  {
    v3 = (char *)sub_14005AAA0(80 * v5);
    v6 = v3 + 24;
    v7 = v5;
    do
    {
      v8 = (__int64)&v6[*a2 + -24LL - (_QWORD)v3];
      *(_OWORD *)(v6 - 24) = *(_OWORD *)v8;
      *((_QWORD *)v6 - 1) = 0;
      *(_QWORD *)v6 = 0;
      *((_QWORD *)v6 + 1) = 0;
      v9 = *(_QWORD *)(v8 + 24);
      if ( v9 )
      {
        v10 = sub_14005AAA0(*(_QWORD *)(v8 + 24));
        *((_QWORD *)v6 - 1) = v10;
        *((_QWORD *)v6 + 1) = v9;
        memcpy(v10, *(const void **)(v8 + 16), v9);
        *(_QWORD *)v6 = v9;
      }
      *((_QWORD *)v6 + 2) = 0;
      *((_QWORD *)v6 + 3) = 0;
      *((_QWORD *)v6 + 4) = 0;
      v11 = *(_QWORD *)(v8 + 48);
      if ( v11 )
      {
        v12 = sub_14005AAA0(*(_QWORD *)(v8 + 48));
        *((_QWORD *)v6 + 2) = v12;
        *((_QWORD *)v6 + 4) = v11;
        memcpy(v12, *(const void **)(v8 + 40), v11);
        *((_QWORD *)v6 + 3) = v11;
      }
      *((_QWORD *)v6 + 5) = *(_QWORD *)(v8 + 64);
      v6[48] = *(_BYTE *)(v8 + 72);
      v6[49] = *(_BYTE *)(v8 + 73);
      v6 += 80;
      --v7;
    }
    while ( v7 );
    v4 = v5;
    v2 = a1;
  }
  if ( *v2 )
  {
    sub_14001A500(v2, 0);
    j_free((void *)*v2);
    v2[2] = 0;
  }
  *v2 = (__int64)v3;
  v2[1] = v4;
  v2[2] = v4;
  return v2;
}
