/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100013750
// Address: 0x0000000100013750

//----- (0000000100013750) ----------------------------------------------------
__int64 __fastcall sub_100013750(_QWORD *a1, __int64 a2, unsigned __int8 a3)
{
  void *v5; // rdi
  __int64 v6; // r12
  void *v7; // rdi
  char *v8; // rax
  __int128 v10; // [rsp+0h] [rbp-50h] BYREF
  __int64 v11; // [rsp+10h] [rbp-40h]
  _QWORD v12[2]; // [rsp+18h] [rbp-38h] BYREF

  v5 = *(void **)a2;
  if ( *(_QWORD *)a2 )
  {
    *(_QWORD *)(a2 + 8) = 0;
    qfree(v5);
    *(_QWORD *)a2 = 0;
    *(_QWORD *)(a2 + 16) = 0;
  }
  v6 = *(_QWORD *)(a2 + 24);
  if ( v6 )
  {
    v7 = *(void **)(v6 + 8);
    if ( v7 )
    {
      *(_QWORD *)(v6 + 16) = 0;
      qfree(v7);
      *(_QWORD *)(v6 + 8) = 0;
      *(_QWORD *)(v6 + 24) = 0;
    }
    if ( *(_BYTE *)(v6 + 48) == 1 )
    {
      close_linput(*(void **)(v6 + 32));
      *(_QWORD *)(v6 + 32) = 0;
    }
  }
  v10 = 0;
  v11 = 0;
  v12[0] = off_1000A7C78;
  v12[1] = &v10;
  if ( (unsigned __int8)sub_100010C80((__int64)a1, (__int64)v12) )
  {
    sub_100012A90((__int64)a1, (__int64)&v10, (__int64 *)a2);
    v8 = sub_1000134B0(a1, (__int64)&v10, a3);
    if ( v8 )
    {
      *(_QWORD *)(a2 + 24) = v8;
      *(_BYTE *)(a2 + 32) = 1;
    }
  }
  return __stack_chk_guard;
}
// 1000A7C78: using guessed type __int64 (__fastcall *off_1000A7C78[38])();
