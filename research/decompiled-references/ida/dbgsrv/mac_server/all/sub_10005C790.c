/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005C790
// Address: 0x000000010005C790

//----- (000000010005C790) ----------------------------------------------------
__int64 __fastcall sub_10005C790(__int64 a1, __int64 a2, char a3, const char *a4, const char *a5, int a6, char *__s)
{
  __int128 v9; // xmm0
  size_t v11; // rax
  size_t v12; // r15
  size_t v13; // rbx
  void *v14; // rdi
  size_t v15; // rax
  size_t v16; // r14
  size_t v17; // rbx
  void *v18; // rdi
  size_t v19; // rax
  size_t v20; // r15
  size_t v21; // rbx
  void *v22; // rdi
  char *v23; // r15
  char *i; // r13
  size_t v25; // rax
  size_t v26; // r12
  size_t v27; // rbx
  void *v28; // rax
  void **v30; // [rsp+10h] [rbp-470h]
  _QWORD *v31; // [rsp+18h] [rbp-468h]
  _QWORD *v34; // [rsp+28h] [rbp-458h]
  __int128 v35; // [rsp+30h] [rbp-450h] BYREF
  __int64 v36; // [rsp+40h] [rbp-440h]
  const char *v37; // [rsp+48h] [rbp-438h] BYREF
  char v38[1024]; // [rsp+50h] [rbp-430h] BYREF

  *(_QWORD *)a1 = off_1000A97A0;
  v30 = (void **)(a1 + 1032);
  v34 = (_QWORD *)(a1 + 1056);
  v9 = 0;
  *(_OWORD *)(a1 + 1032) = 0;
  *(_OWORD *)(a1 + 1048) = 0;
  *(_OWORD *)(a1 + 1064) = 0;
  if ( a4 )
  {
    v11 = strlen(a4);
    v12 = v11;
    v13 = v11 + 1;
    if ( v11 == -1 )
    {
      v14 = nullptr;
    }
    else
    {
      v14 = qvector_reserve((__int64)v34, nullptr, v11 + 1, 1u);
      *v34 = v14;
    }
    *(_QWORD *)(a1 + 1064) = v13;
    memmove(v14, a4, v12);
    *(_BYTE *)(*(_QWORD *)(a1 + 1056) + v12) = 0;
    v9 = 0;
  }
  *(_OWORD *)(a1 + 1080) = v9;
  *(_QWORD *)(a1 + 1096) = 0;
  if ( a5 )
  {
    v15 = strlen(a5);
    v16 = v15;
    v17 = v15 + 1;
    if ( v15 == -1 )
    {
      v18 = nullptr;
    }
    else
    {
      v18 = qvector_reserve(a1 + 1080, nullptr, v15 + 1, 1u);
      *(_QWORD *)(a1 + 1080) = v18;
    }
    *(_QWORD *)(a1 + 1088) = v17;
    memmove(v18, a5, v16);
    *(_BYTE *)(*(_QWORD *)(a1 + 1080) + v16) = 0;
  }
  v31 = (_QWORD *)(a1 + 1104);
  *(_OWORD *)(a1 + 1104) = 0;
  *(_QWORD *)(a1 + 1120) = 0;
  if ( __s )
  {
    v19 = strlen(__s);
    v20 = v19;
    v21 = v19 + 1;
    if ( v19 == -1 )
    {
      v22 = nullptr;
    }
    else
    {
      v22 = qvector_reserve((__int64)v31, nullptr, v19 + 1, 1u);
      *v31 = v22;
    }
    *(_QWORD *)(a1 + 1112) = v21;
    memmove(v22, __s, v20);
    *(_BYTE *)(*(_QWORD *)(a1 + 1104) + v20) = 0;
  }
  *(_DWORD *)(a1 + 1128) = a6;
  *(_BYTE *)(a1 + 8) = 0;
  v23 = ";";
  if ( a3 )
    v23 = ":";
  qstrncpy(v38, a2, 1024);
  for ( i = qstrtok(v38, v23, &v37); i; i = qstrtok(nullptr, v23, &v37) )
  {
    v35 = 0;
    v36 = 0;
    v25 = strlen(i);
    v26 = v25;
    v27 = v25 + 1;
    if ( v25 == -1 )
    {
      v28 = nullptr;
    }
    else
    {
      v28 = qvector_reserve((__int64)&v35, nullptr, v25 + 1, 1u);
      *(_QWORD *)&v35 = v28;
    }
    *((_QWORD *)&v35 + 1) = v27;
    memmove(v28, i, v26);
    *(_BYTE *)(v35 + v26) = 0;
    sub_100015270(v30, (char *)&v35);
    if ( (_QWORD)v35 )
    {
      *((_QWORD *)&v35 + 1) = 0;
      qfree((void *)v35);
    }
  }
  return __stack_chk_guard;
}
// 1000A97A0: using guessed type __int64 (__fastcall *off_1000A97A0[2])();
