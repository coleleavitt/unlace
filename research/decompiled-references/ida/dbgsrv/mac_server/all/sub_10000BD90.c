/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000BD90
// Address: 0x000000010000BD90

//----- (000000010000BD90) ----------------------------------------------------
__int64 __fastcall sub_10000BD90(__int64 a1, unsigned __int64 *a2)
{
  unsigned int v3; // r15d
  unsigned __int8 v4; // al
  _QWORD *v5; // r13
  size_t v6; // r14
  void *v7; // r15
  void *v8; // rdi
  __int64 (__fastcall **v10)(); // [rsp+8h] [rbp-88h] BYREF
  int v11; // [rsp+10h] [rbp-80h]
  _BYTE v12[24]; // [rsp+14h] [rbp-7Ch] BYREF
  void *__src[2]; // [rsp+30h] [rbp-60h]
  size_t __n[2]; // [rsp+40h] [rbp-50h]
  __int128 v15; // [rsp+50h] [rbp-40h]

  v10 = off_1000A7540;
  v11 = 1;
  memset(v12, 0, sizeof(v12));
  *(_OWORD *)__src = 0;
  *(_OWORD *)__n = 0;
  v15 = 0;
  v3 = 0;
  v4 = sub_10001AE50(*(_QWORD *)(a1 + 8) + 864LL, *a2, &v10, 0);
  if ( ((*(_DWORD *)&v12[8] == 2) & v4) == 1 )
  {
    sub_100005090(*(_QWORD *)(a1 + 8), "%a: located exe header\n", 0.0);
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1072LL) = *a2;
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1080LL) = *(_QWORD *)&v12[12];
    v5 = *(_QWORD **)(a1 + 8);
    v6 = __n[0];
    if ( __n[0] )
    {
      v7 = qalloc_or_throw(__n[0]);
      memcpy(v7, __src[1], v6);
    }
    else
    {
      v7 = nullptr;
    }
    v8 = (void *)v5[139];
    if ( v8 )
    {
      v5[140] = 0;
      qfree(v8);
    }
    v5[139] = v7;
    v5[140] = v6;
    v5[141] = v6;
    *(_DWORD *)(*(_QWORD *)(a1 + 8) + 856LL) = *(_DWORD *)&v12[4];
    v3 = 1;
  }
  v10 = off_1000A7540;
  if ( __src[1] )
  {
    __n[0] = 0;
    qfree(__src[1]);
  }
  return v3;
}
// 1000A7540: using guessed type __int64 (__fastcall *off_1000A7540[7])();
