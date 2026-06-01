/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14002DD00
// Address: 0x000000014002DD00

//----- (000000014002DD00) ----------------------------------------------------
void sub_14002DD00()
{
  struct _RTL_CRITICAL_SECTION *v0; // rax
  _QWORD *v1; // r14
  __int64 v2; // rax
  _QWORD *v3; // rbp
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  _QWORD *v5; // rax
  _QWORD *v6; // rsi
  int v7; // edi
  _QWORD *v8; // rax
  unsigned __int64 v9; // r8
  _QWORD *v10; // rbp
  struct _RTL_CRITICAL_SECTION *v11; // rbx
  _QWORD *v12; // rax
  _QWORD *v13; // rsi
  int v14; // edi
  _QWORD *v15; // rax
  unsigned __int64 v16; // r8
  _QWORD *v17; // rbp
  struct _RTL_CRITICAL_SECTION *v18; // rbx
  _QWORD *v19; // rax
  _QWORD *v20; // rsi
  int v21; // edi
  _QWORD *v22; // rax
  unsigned __int64 v23; // r8
  __int64 *v24; // rax
  __int8 *v25; // rax
  const char *v26; // rdx
  void *Block; // [rsp+30h] [rbp-168h] BYREF
  __int64 v28; // [rsp+38h] [rbp-160h]
  __int64 v29; // [rsp+40h] [rbp-158h]
  void *v30; // [rsp+48h] [rbp-150h]
  void *v31; // [rsp+50h] [rbp-148h]
  int v32[68]; // [rsp+60h] [rbp-138h] BYREF

  sub_14005A4C0((__int64)sub_14002E620);
  qword_1400CAFD8 = sub_14005D640();
  v0 = sub_14005D640();
  qword_1400CB020 = v0;
  if ( !qword_1400CAFD8 || !v0 )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(486);
  }
  v1 = sub_14002DA30();
  v2 = sub_14003E500(nullptr, 0, 0, 0);
  v1[4] = v2;
  sub_14003DCD0(v2, (__int64)sub_140033E90);
  v1[6] = qword_1400C6060;
  v1[5] = off_1400C6068;
  v3 = sub_14002DA30();
  v4 = (struct _RTL_CRITICAL_SECTION *)qword_1400CAFD8;
  v30 = qword_1400CAFD8;
  sub_14005D6B0((struct _RTL_CRITICAL_SECTION *)qword_1400CAFD8);
  if ( !sub_14002D380((__int64)v3, "object") )
  {
    v5 = operator new(0x40u);
    v6 = v5;
    v31 = v5;
    if ( v5 )
    {
      v7 = *((_DWORD *)v3 + 18);
      *v5 = 0;
      v5[1] = 0;
      v8 = operator new(0x40u);
      *v8 = v8;
      v8[1] = v8;
      v8[2] = v8;
      *((_WORD *)v8 + 12) = 257;
      *v6 = v8;
      *((_DWORD *)v6 + 4) = 0;
      *((_DWORD *)v6 + 5) = v7;
      v6[3] = 0;
      v6[4] = 0;
      v6[5] = 0;
      v6[6] = -1;
      *((_DWORD *)v6 + 14) = -1;
    }
    else
    {
      v6 = nullptr;
    }
    sub_140001810((__int64)(v6 + 3), "object", 6u);
    *((_DWORD *)v6 + 4) = 0;
    v9 = v3[9] + 1LL;
    if ( v9 > v3[10] )
      v3[8] = sub_14005ABE0((__int64)(v3 + 8), (void *)v3[8], v9, 8u);
    *(_QWORD *)(v3[8] + 8LL * v3[9]++) = v6;
  }
  sub_14005D6D0(v4);
  v10 = sub_14002DA30();
  v11 = (struct _RTL_CRITICAL_SECTION *)qword_1400CAFD8;
  v31 = qword_1400CAFD8;
  sub_14005D6B0((struct _RTL_CRITICAL_SECTION *)qword_1400CAFD8);
  if ( !sub_14002D380((__int64)v10, "typeinfo") )
  {
    v12 = operator new(0x40u);
    v13 = v12;
    v30 = v12;
    if ( v12 )
    {
      v14 = *((_DWORD *)v10 + 18);
      *v12 = 0;
      v12[1] = 0;
      v15 = operator new(0x40u);
      *v15 = v15;
      v15[1] = v15;
      v15[2] = v15;
      *((_WORD *)v15 + 12) = 257;
      *v13 = v15;
      *((_DWORD *)v13 + 4) = 0;
      *((_DWORD *)v13 + 5) = v14;
      v13[3] = 0;
      v13[4] = 0;
      v13[5] = 0;
      v13[6] = -1;
      *((_DWORD *)v13 + 14) = -1;
    }
    else
    {
      v13 = nullptr;
    }
    sub_140001810((__int64)(v13 + 3), "typeinfo", 8u);
    *((_DWORD *)v13 + 4) = 0;
    v16 = v10[9] + 1LL;
    if ( v16 > v10[10] )
      v10[8] = sub_14005ABE0((__int64)(v10 + 8), (void *)v10[8], v16, 8u);
    *(_QWORD *)(v10[8] + 8LL * v10[9]++) = v13;
  }
  sub_14005D6D0(v11);
  v17 = sub_14002DA30();
  v18 = (struct _RTL_CRITICAL_SECTION *)qword_1400CAFD8;
  v31 = qword_1400CAFD8;
  sub_14005D6B0((struct _RTL_CRITICAL_SECTION *)qword_1400CAFD8);
  if ( !sub_14002D380((__int64)v17, "exception") )
  {
    v19 = operator new(0x40u);
    v20 = v19;
    v30 = v19;
    if ( v19 )
    {
      v21 = *((_DWORD *)v17 + 18);
      *v19 = 0;
      v19[1] = 0;
      v22 = operator new(0x40u);
      *v22 = v22;
      v22[1] = v22;
      v22[2] = v22;
      *((_WORD *)v22 + 12) = 257;
      *v20 = v22;
      *((_DWORD *)v20 + 4) = 0;
      *((_DWORD *)v20 + 5) = v21;
      v20[3] = 0;
      v20[4] = 0;
      v20[5] = 0;
      v20[6] = -1;
      *((_DWORD *)v20 + 14) = -1;
    }
    else
    {
      v20 = nullptr;
    }
    sub_140001810((__int64)(v20 + 3), "exception", 9u);
    *((_DWORD *)v20 + 4) = 0;
    v23 = v17[9] + 1LL;
    if ( v23 > v17[10] )
      v17[8] = sub_14005ABE0((__int64)(v17 + 8), (void *)v17[8], v23, 8u);
    *(_QWORD *)(v17[8] + 8LL * v17[9]++) = v20;
  }
  sub_14005D6D0(v18);
  if ( qword_1400C6080 )
    qword_1400C6080();
  if ( byte_1400CAFC0 )
  {
    v24 = off_1400C6AE8();
    v25 = sub_14003A6F0(v24, (__int8 *)v32, 260, (__int64)"idc.idc", nullptr, 0);
    if ( v25 )
    {
      Block = nullptr;
      v28 = 0;
      v29 = 0;
      if ( !(unsigned __int8)sub_140035520(v25, &Block, 0) )
      {
        v26 = Str1;
        if ( v28 )
          v26 = (const char *)Block;
        sub_14002E660((signed __int64)&dword_140091764, v26);
        if ( Block )
        {
          v28 = 0;
          j_free(Block);
        }
        return;
      }
      v1[3] = sub_14003A1F0(v1[4]);
      if ( Block )
      {
        v28 = 0;
        j_free(Block);
      }
    }
  }
  if ( (unsigned int)sub_14002ECC0((__int64)qword_1400C6AF0) )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(1447);
  }
}
// 140091764: using guessed type int dword_140091764;
// 1400C6060: using guessed type __int64 qword_1400C6060;
// 1400C6080: using guessed type __int64 (*qword_1400C6080)(void);
// 1400C6AE8: using guessed type __int64 *(*off_1400C6AE8)();
// 1400C6AF0: using guessed type __int64 qword_1400C6AF0[2];
// 1400CAFC0: using guessed type char byte_1400CAFC0;
// 1400CB61C: using guessed type char byte_1400CB61C;
