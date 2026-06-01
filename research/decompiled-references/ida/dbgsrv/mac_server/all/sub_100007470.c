/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100007470
// Address: 0x0000000100007470

//----- (0000000100007470) ----------------------------------------------------
__int64 __fastcall sub_100007470(__int64 a1, __int64 a2, unsigned int a3)
{
  size_t v3; // rax
  size_t v4; // r12
  unsigned __int64 v5; // r13
  void *v6; // rax
  __int64 (__fastcall **v9[2])(_QWORD, _QWORD *); // [rsp+10h] [rbp-4A0h] BYREF
  __int64 (__fastcall **v10)(); // [rsp+20h] [rbp-490h] BYREF
  int v11; // [rsp+28h] [rbp-488h]
  __int128 v12; // [rsp+2Ch] [rbp-484h]
  __int64 v13; // [rsp+3Ch] [rbp-474h]
  __int128 v14; // [rsp+48h] [rbp-468h]
  __int128 v15; // [rsp+58h] [rbp-458h]
  __int128 v16; // [rsp+68h] [rbp-448h]
  __int64 v17; // [rsp+78h] [rbp-438h]
  char __s[1024]; // [rsp+80h] [rbp-430h] BYREF

  (*(void (__fastcall **)(__int64, __int64, char *, __int64))(*(_QWORD *)a1 + 624LL))(a1, a2, __s, 1024);
  v3 = strlen(__s);
  if ( v3 )
  {
    v4 = v3;
    v5 = v3 + 1;
    v6 = *(void **)(a1 + 1088);
    if ( *(_QWORD *)(a1 + 1104) < v5 )
    {
      v6 = qvector_reserve(a1 + 1088, *(void **)(a1 + 1088), v5, 1u);
      *(_QWORD *)(a1 + 1088) = v6;
    }
    *(_QWORD *)(a1 + 1096) = v5;
    memmove(v6, __s, v4);
    *(_BYTE *)(*(_QWORD *)(a1 + 1088) + v4) = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 1096) = 0;
  }
  v9[0] = (__int64 (__fastcall **)(_QWORD, _QWORD *))&off_1000A75B8;
  v9[1] = (__int64 (__fastcall **)(_QWORD, _QWORD *))a1;
  if ( (unsigned int)sub_100008850(a1, v9) != 1 )
    sub_100006F60(a1, "failed to find executable %s in the target process", __s);
  sub_100007660(a1, a2, a3);
  v11 = 4;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v10 = off_1000A74F0;
  v17 = a1;
  sub_100005930(a1, &v10, (unsigned __int64 *)(a1 + 1072));
  v10 = off_1000A7540;
  if ( *((_QWORD *)&v14 + 1) )
  {
    *(_QWORD *)&v15 = 0;
    qfree(*((void **)&v14 + 1));
  }
  return __stack_chk_guard;
}
// 1000A74F0: using guessed type __int64 (__fastcall *off_1000A74F0[7])();
// 1000A7540: using guessed type __int64 (__fastcall *off_1000A7540[7])();
// 1000A75B8: using guessed type __int64 (__fastcall *off_1000A75B8)();
