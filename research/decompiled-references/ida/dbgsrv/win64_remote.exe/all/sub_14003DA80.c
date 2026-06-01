/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14003DA80
// Address: 0x000000014003DA80

//----- (000000014003DA80) ----------------------------------------------------
__int64 __fastcall sub_14003DA80(_QWORD *a1, char *a2, char a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  char *v7; // rax
  char *v8; // r12
  unsigned __int8 v9; // di
  const char *i; // rsi
  size_t v11; // r15
  void *v12; // rax
  void **v13; // rdx
  bool v14; // al
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r8
  void *v17; // rsi
  void *v18; // r14
  void *v19; // r15
  __int64 v20; // rcx
  __int64 v21; // rcx
  void *Block[2]; // [rsp+20h] [rbp-30h] BYREF
  void *v24; // [rsp+30h] [rbp-20h]
  void *v25; // [rsp+38h] [rbp-18h]
  void *v26; // [rsp+40h] [rbp-10h]
  void *v27; // [rsp+48h] [rbp-8h]
  const char *v28; // [rsp+98h] [rbp+48h] BYREF
  void *v29; // [rsp+A8h] [rbp+58h]

  v6 = (struct _RTL_CRITICAL_SECTION *)qword_1400CAFD8;
  v29 = qword_1400CAFD8;
  sub_14005D6B0((struct _RTL_CRITICAL_SECTION *)qword_1400CAFD8);
  if ( !a3 && a1[3] )
  {
    sub_14001A6C0(a1 + 3, 0);
    j_free((void *)a1[3]);
    a1[3] = 0;
    a1[5] = 0;
  }
  if ( !a2 )
    goto LABEL_26;
  v7 = sub_14005AB50(a2);
  v8 = v7;
  if ( v7 )
  {
    for ( i = sub_140062340(v7, ";", &v28); i; i = sub_140062340(nullptr, ";", &v28) )
    {
      if ( *i )
      {
        *(_OWORD *)Block = 0;
        v24 = nullptr;
        v11 = strlen(i);
        v12 = nullptr;
        if ( v11 != -1 )
        {
          v12 = sub_14005ABE0((__int64)Block, nullptr, v11 + 1, 1u);
          Block[0] = v12;
        }
        Block[1] = (void *)(v11 + 1);
        memcpy(v12, i, v11);
        *((_BYTE *)Block[0] + v11) = 0;
        v13 = (void **)a1[3];
        v14 = Block >= v13 && Block < &v13[3 * a1[5]];
        v15 = a1[5];
        v16 = a1[4] + 1LL;
        if ( v14 )
        {
          v17 = Block[0];
          v25 = Block[0];
          Block[0] = nullptr;
          v18 = Block[1];
          v26 = Block[1];
          Block[1] = nullptr;
          v19 = v24;
          v27 = v24;
          v24 = nullptr;
          if ( v16 > v15 )
          {
            v13 = (void **)sub_14005ABE0((__int64)(a1 + 3), v13, v16, 0x18u);
            a1[3] = v13;
          }
          v20 = 3LL * a1[4];
          v13[v20] = v17;
          v13[v20 + 1] = v18;
          v13[v20 + 2] = v19;
        }
        else
        {
          if ( v16 > v15 )
          {
            v13 = (void **)sub_14005ABE0((__int64)(a1 + 3), v13, v16, 0x18u);
            a1[3] = v13;
          }
          v21 = 3LL * a1[4];
          v13[v21] = Block[0];
          Block[0] = nullptr;
          v13[v21 + 1] = Block[1];
          Block[1] = nullptr;
          v13[v21 + 2] = v24;
          v24 = nullptr;
        }
        ++a1[4];
        if ( Block[0] )
        {
          Block[1] = nullptr;
          j_free(Block[0]);
        }
      }
    }
    j_free(v8);
LABEL_26:
    v9 = 1;
    goto LABEL_27;
  }
  v9 = 0;
LABEL_27:
  sub_14005D6D0(v6);
  return v9;
}
