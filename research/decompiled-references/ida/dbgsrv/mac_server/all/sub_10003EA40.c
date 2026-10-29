/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10003EA40
// Address: 0x000000010003EA40

//----- (000000010003EA40) ----------------------------------------------------
void __fastcall __noreturn sub_10003EA40(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  void *v6; // rdi
  void *v7; // rdi
  void *v8; // rdi
  __int64 v9; // r15
  __int64 v10; // r12
  __int64 v11; // rax
  bool v12; // zf
  __int64 v15; // rax
  __int64 v16; // rdx
  __int128 *v17; // rsi
  __int128 v18; // xmm0
  __int128 v19; // xmm0
  __int128 v20; // xmm0
  __int128 v21; // [rsp+0h] [rbp-90h] BYREF
  __int64 v22; // [rsp+10h] [rbp-80h]
  char v23[8]; // [rsp+20h] [rbp-70h] BYREF
  __int64 v24; // [rsp+28h] [rbp-68h]
  __int128 v25; // [rsp+30h] [rbp-60h]
  _OWORD __p[2]; // [rsp+40h] [rbp-50h] BYREF

  v23[0] = 2;
  v25 = 0;
  v24 = a4;
  v21 = 0;
  v22 = 0;
  if ( !a4 )
    goto LABEL_2;
  LOBYTE(__p[0]) = 2;
  memset((char *)__p + 8, 0, 24);
  sub_10002E5F0((__int64)&v21, a4, (unsigned __int8 *)__p);
  if ( LOBYTE(__p[0]) == 5 )
  {
    sub_1000380B0(*((unsigned __int8 ***)&__p[0] + 1), (unsigned __int8 *)__p);
  }
  else if ( LOBYTE(__p[0]) == 7 && *((_QWORD *)&__p[0] + 1) )
  {
    *(_QWORD *)&__p[1] = 0;
    qfree(*((void **)&__p[0] + 1));
  }
  if ( a4 > 0 )
  {
    v15 = v21;
    v16 = 0;
    while ( 1 )
    {
      v17 = (__int128 *)(v16 + v15);
      if ( !(v16 + v15) )
        break;
      v18 = *v17;
      __p[1] = v17[1];
      __p[0] = v18;
      v19 = *(_OWORD *)(a3 + v16);
      v17[1] = *(_OWORD *)(a3 + v16 + 16);
      *v17 = v19;
      v20 = __p[0];
      *(_OWORD *)(a3 + v16 + 16) = __p[1];
      *(_OWORD *)(a3 + v16) = v20;
      v16 += 32;
      if ( 32LL * (unsigned int)a4 == v16 )
        goto LABEL_2;
    }
    if ( under_debugger != 1 )
      interr(0xA61u);
  }
  else
  {
LABEL_2:
    v6 = *(void **)(a1 + 48);
    if ( v6 )
    {
      *(_QWORD *)(a1 + 56) = 0;
      qfree(v6);
      *(_QWORD *)(a1 + 48) = 0;
      *(_QWORD *)(a1 + 64) = 0;
    }
    v7 = *(void **)(a1 + 72);
    if ( v7 )
    {
      *(_QWORD *)(a1 + 80) = 0;
      qfree(v7);
      *(_QWORD *)(a1 + 72) = 0;
      *(_QWORD *)(a1 + 88) = 0;
    }
    v8 = *(void **)(a1 + 24);
    if ( v8 )
    {
      v9 = *(_QWORD *)(a1 + 32);
      if ( v9 )
      {
        v10 = 0;
        do
        {
          sub_100039BA0((unsigned __int8 *)(v10 + *(_QWORD *)(a1 + 24)));
          v10 += 32;
          --v9;
        }
        while ( v9 );
        v8 = *(void **)(a1 + 24);
      }
      *(_QWORD *)(a1 + 32) = 0;
      qfree(v8);
      *(_QWORD *)(a1 + 24) = 0;
      *(_QWORD *)(a1 + 40) = 0;
    }
    v11 = *(_QWORD *)(a1 + 8);
    v12 = (*(_DWORD *)(v11 + 120))-- == 1;
    if ( v12 && off_1000AC0F8 != nullptr )
      off_1000AC0F8();
    *(_DWORD *)a1 = 0;
    (*(void (__fastcall **)(_QWORD, char *))(a2 + 8))(v21, v23);
    if ( under_debugger != 1 )
      interr(0x123u);
  }
  BUG();
}
// 1000AC0F8: using guessed type __int64 (__fastcall *off_1000AC0F8)();
// 1000AE23D: using guessed type char under_debugger;
