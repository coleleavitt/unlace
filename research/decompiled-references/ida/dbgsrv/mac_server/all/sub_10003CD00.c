/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10003CD00
// Address: 0x000000010003CD00

//----- (000000010003CD00) ----------------------------------------------------
__int64 __fastcall sub_10003CD00(__int64 a1, __int64 *a2)
{
  __int64 v3; // r15
  __int64 v4; // r12
  __int64 v5; // r15
  __int64 v6; // rax
  __int128 v7; // xmm0
  unsigned __int8 *v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned __int8 v14[8]; // [rsp+8h] [rbp-48h] BYREF
  void *__p[2]; // [rsp+10h] [rbp-40h]
  __int64 v16; // [rsp+20h] [rbp-30h]

  v3 = *(_QWORD *)(a1 + 24);
  v4 = 32LL * *(_QWORD *)(a1 + 32);
  if ( !(unsigned int)idcv_string(v3 + v4 - 32) )
  {
    v5 = v4 + v3;
    v6 = *a2;
    *a2 = *(_QWORD *)(v5 - 24);
    v7 = *(_OWORD *)(a2 + 1);
    a2[1] = *(_QWORD *)(v5 - 16);
    a2[2] = *(_QWORD *)(v5 - 8);
    *(_QWORD *)(v5 - 24) = v6;
    *(_OWORD *)(v5 - 16) = v7;
    v8 = (unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32);
    v14[0] = 2;
    *(_OWORD *)__p = 0;
    v16 = 0;
    copy_idcv(v14, v8);
    v9 = *(_QWORD *)(a1 + 32);
    if ( v9 )
    {
      v10 = v9 - 1;
      *(_QWORD *)(a1 + 32) = v10;
      sub_100039BA0((unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 32 * v10));
    }
    if ( v14[0] == 5 )
    {
      sub_1000380B0((unsigned __int8 **)__p[0], v14);
    }
    else if ( v14[0] == 7 )
    {
      if ( __p[0] )
      {
        __p[1] = nullptr;
        qfree(__p[0]);
      }
    }
    v11 = *(_QWORD *)(a1 + 24);
    v12 = 32LL * *(_QWORD *)(a1 + 32);
    if ( *(_BYTE *)(v11 + v12 - 32) == 5 )
      return *(_QWORD *)(v12 + v11 - 24);
    set_qerrno();
  }
  return 0;
}
