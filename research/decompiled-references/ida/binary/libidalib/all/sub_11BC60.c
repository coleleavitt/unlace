__int64 __fastcall sub_11BC60(__m128 a1, __m128 a2, __m128 a3, __m128 a4, double a5, double a6, __m128 a7, __m128 a8)
{
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 result; // rax
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  int v15; // r12d
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __m128 v21; // xmm4
  __m128 v22; // xmm5
  int v23; // esi
  char v24; // [rsp+0h] [rbp-28h]
  int v25; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v26; // [rsp+8h] [rbp-20h]

  v26 = __readfsqword(0x28u);
  v8 = sub_117410(1u, (__int64)"map", 971);
  if ( !v8 )
    return 1;
  v9 = sub_11B710(v8);
  result = 0;
  if ( !v9 )
    return result;
  v15 = sub_9E360();
  if ( v15 )
  {
    qfclose();
    if ( v15 == -1 )
    {
      sub_F9540(1003, &v25);
LABEL_14:
      qunlink();
      return 1;
    }
  }
  else
  {
    if ( !(unsigned int)sub_18C660(1000, (unsigned int)&word_251282, v11, v12, v13, v14) )
    {
      qfclose();
      return 1;
    }
    v16 = itext();
    sub_10E0D0((__int64)"%s", v16, v17, v18, v19, v20, a1, a2, a3, a4, v21, v22, a7, a8, v24);
    v25 = gen_file();
    sub_10DB30();
    qfclose();
  }
  v23 = v25;
  if ( v25 == -1 )
  {
    sub_F9540(1003);
    v23 = -1;
  }
  if ( v23 <= 0 )
    goto LABEL_14;
  sub_108D20(1010);
  return 1;
}

