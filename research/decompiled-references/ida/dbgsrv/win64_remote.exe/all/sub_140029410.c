/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140029410
// Address: 0x0000000140029410

//----- (0000000140029410) ----------------------------------------------------
__int64 __fastcall sub_140029410(char *a1, __int64 a2, char *a3, char a4)
{
  char *v6; // rdi
  _QWORD *v7; // r15
  char *v8; // rax
  __int128 v9; // xmm2
  __int128 v10; // xmm3
  int v12; // esi
  unsigned int v13; // ebx
  _QWORD *v14; // r13
  char *v15; // r12
  void *v16; // rax
  size_t v17; // r15
  void *v18; // rax
  __int64 *v19; // rsi
  _DWORD *v20; // r13
  char *v21; // r15
  void *v22; // rdi
  const char *v23; // rdx
  const char *v24; // rcx
  int v25; // eax
  bool v26; // zf
  __int64 *v27; // rax
  const char *v28; // rdx
  const char *v29; // rcx
  unsigned __int64 v30; // r12
  __int128 v31; // xmm2
  __int128 v32; // xmm3
  _DWORD *v33; // rax
  size_t v34; // r13
  void *v35; // rax
  int v36; // esi
  size_t v37; // rdi
  void *v38; // rax
  __int64 v39; // rax
  const char *v40; // r8
  unsigned int v41; // edi
  void *Block[2]; // [rsp+20h] [rbp-B9h] BYREF
  __int64 v43; // [rsp+30h] [rbp-A9h]
  __m256i v44; // [rsp+38h] [rbp-A1h] BYREF
  _QWORD *v45; // [rsp+58h] [rbp-81h]
  _BYTE v46[208]; // [rsp+60h] [rbp-79h] BYREF
  char *v47; // [rsp+140h] [rbp+67h] BYREF
  _DWORD *v48; // [rsp+148h] [rbp+6Fh]
  char v49; // [rsp+158h] [rbp+7Fh]

  v49 = a4;
  v47 = a1;
  v6 = a1;
  sub_14005D6B0((struct _RTL_CRITICAL_SECTION *)qword_1400CAFD8);
  v7 = sub_14002DA30();
  if ( !a2 )
  {
    v8 = (char *)sub_14002EAD0(a3);
    if ( v8 )
    {
      if ( v6 )
      {
        v44.m256i_i8[0] = 2;
        memset(&v44.m256i_u64[1], 0, 24);
        sub_140028E70(v44.m256i_i8, v8);
        v9 = *(_OWORD *)v6;
        v10 = *((_OWORD *)v6 + 1);
        *(__m256i *)v6 = v44;
        *(_OWORD *)v44.m256i_i8 = v9;
        *(_OWORD *)&v44.m256i_u64[2] = v10;
        sub_140029390((__int64)&v44);
        sub_14005D6D0((struct _RTL_CRITICAL_SECTION *)qword_1400CAFD8);
        return 0;
      }
      goto LABEL_40;
    }
    v12 = sub_14002CEB0(v7, a3);
    if ( v12 != 0x7FFFFFFF )
    {
      if ( v6 )
      {
        sub_140029390((__int64)v6);
        *v6 = 6;
        *((_DWORD *)v6 + 2) = v12;
        sub_14005D6D0((struct _RTL_CRITICAL_SECTION *)qword_1400CAFD8);
        return 0;
      }
      goto LABEL_40;
    }
    sub_140063F70(0, a3);
    v13 = 1538;
LABEL_7:
    sub_14005D6D0((struct _RTL_CRITICAL_SECTION *)qword_1400CAFD8);
    sub_1400640B0(v13);
    return v13;
  }
  if ( *(_BYTE *)a2 != 5 )
  {
    v13 = 1532;
    goto LABEL_7;
  }
  v14 = *(_QWORD **)(a2 + 8);
  v45 = v14;
  v15 = nullptr;
  Block[0] = nullptr;
  v16 = nullptr;
  Block[1] = nullptr;
  v43 = 0;
  if ( a3 )
  {
    v17 = strlen(a3);
    v18 = nullptr;
    if ( v17 != -1 )
    {
      v18 = sub_14005ABE0((__int64)Block, nullptr, v17 + 1, 1u);
      Block[0] = v18;
    }
    Block[1] = (void *)(v17 + 1);
    memcpy(v18, a3, v17);
    *((_BYTE *)Block[0] + v17) = 0;
    v15 = (char *)Block[0];
    v16 = Block[1];
  }
  v48 = (_DWORD *)*v14;
  v19 = *((__int64 **)v48 + 1);
  v20 = v48;
  v21 = (char *)Str1;
  if ( !*((_BYTE *)v19 + 25) )
  {
    v22 = Block[1];
    do
    {
      v23 = Str1;
      if ( v22 )
        v23 = v15;
      v24 = Str1;
      if ( v19[5] )
        v24 = (const char *)v19[4];
      v25 = strcmp(v24, v23);
      v26 = v25 >= 0;
      if ( v25 >= 0 )
        v20 = v19;
      v27 = v19 + 2;
      if ( v26 )
        v27 = v19;
      v19 = (__int64 *)*v27;
    }
    while ( !*(_BYTE *)(*v27 + 25) );
    v6 = v47;
    v16 = Block[1];
  }
  if ( *((_BYTE *)v20 + 25) )
    goto LABEL_34;
  v28 = Str1;
  if ( *((_QWORD *)v20 + 5) )
    v28 = *((const char **)v20 + 4);
  v29 = Str1;
  if ( v16 )
    v29 = v15;
  if ( strcmp(v29, v28) < 0 )
LABEL_34:
    v20 = v48;
  if ( v15 )
  {
    Block[1] = nullptr;
    j_free(v15);
    Block[0] = nullptr;
    v43 = 0;
  }
  v30 = (unsigned __int64)v45;
  if ( v20 != (_DWORD *)*v45 )
  {
    if ( v6 )
    {
      v44.m256i_i8[0] = 2;
      memset(&v44.m256i_u64[1], 0, 24);
      sub_140028E70(v44.m256i_i8, (char *)v20 + 56);
      v31 = *(_OWORD *)v6;
      v32 = *((_OWORD *)v6 + 1);
      *(__m256i *)v6 = v44;
      *(_OWORD *)v44.m256i_i8 = v31;
      *(_OWORD *)&v44.m256i_u64[2] = v32;
      sub_140029390((__int64)&v44);
    }
    goto LABEL_40;
  }
  v33 = (_DWORD *)sub_14002D950(*((int *)v45 + 5));
  v48 = v33;
  *(_OWORD *)Block = 0;
  v43 = 0;
  if ( a3 )
  {
    v34 = strlen(a3);
    v35 = nullptr;
    if ( v34 != -1 )
    {
      v35 = sub_14005ABE0((__int64)Block, nullptr, v34 + 1, 1u);
      Block[0] = v35;
    }
    Block[1] = (void *)(v34 + 1);
    memcpy(v35, a3, v34);
    *((_BYTE *)Block[0] + v34) = 0;
    v33 = v48;
  }
  v36 = sub_140025060(v33, (__int64)Block);
  if ( Block[0] )
  {
    Block[1] = nullptr;
    j_free(Block[0]);
  }
  if ( v36 == -1 )
  {
    sub_14005D6D0((struct _RTL_CRITICAL_SECTION *)qword_1400CAFD8);
    if ( v49 )
    {
      *(_OWORD *)Block = 0;
      v43 = 0;
      if ( a3 )
      {
        v37 = strlen(a3);
        v38 = nullptr;
        if ( v37 != -1 )
        {
          v38 = sub_14005ABE0((__int64)Block, nullptr, v37 + 1, 1u);
          Block[0] = v38;
        }
        Block[1] = (void *)(v37 + 1);
        memcpy(v38, a3, v37);
        *((_BYTE *)Block[0] + v37) = 0;
      }
      sub_1400210A0((__int64)v46, 0, 1u);
      if ( sub_140025490((__int64)v46, v30, (const char **)Block, &v47) )
      {
        sub_140021420((__int64)v46);
        if ( Block[0] )
        {
          Block[1] = nullptr;
          j_free(Block[0]);
        }
        return 0;
      }
      sub_140021420((__int64)v46);
      if ( Block[0] )
      {
        Block[1] = nullptr;
        j_free(Block[0]);
      }
    }
    memset(&v44, 0, 24);
    v39 = sub_14002D950(*(int *)(v30 + 20));
    v40 = Str1;
    if ( *(_QWORD *)(v39 + 32) )
      v40 = *(const char **)(v39 + 24);
    sub_140002FB0((__int64)&v44, "%s.%s", v40, a3);
    if ( v44.m256i_i64[1] )
      v21 = (char *)v44.m256i_i64[0];
    sub_140063F70(0, v21);
    v41 = sub_1400640B0(0x602u);
    if ( v44.m256i_i64[0] )
    {
      v44.m256i_i64[1] = 0;
      j_free((void *)v44.m256i_i64[0]);
    }
    return v41;
  }
  else
  {
    if ( !v6 )
    {
LABEL_40:
      sub_14005D6D0((struct _RTL_CRITICAL_SECTION *)qword_1400CAFD8);
      return 0;
    }
    sub_140029390((__int64)v6);
    *v6 = 6;
    *((_DWORD *)v6 + 2) = v36;
    sub_14005D6D0((struct _RTL_CRITICAL_SECTION *)qword_1400CAFD8);
    return 0;
  }
}
