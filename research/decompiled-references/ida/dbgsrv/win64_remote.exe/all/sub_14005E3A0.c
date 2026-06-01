/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005E3A0
// Address: 0x000000014005E3A0

//----- (000000014005E3A0) ----------------------------------------------------
void **sub_14005E3A0()
{
  const char *i; // rbx
  size_t v1; // rsi
  void *v2; // rax
  void *v3; // rdi
  void *v4; // rbx
  void *v5; // rsi
  __int64 v6; // rax
  void *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  void *Block[2]; // [rsp+20h] [rbp-30h] BYREF
  void *v12; // [rsp+30h] [rbp-20h]
  void *Src[2]; // [rsp+38h] [rbp-18h] BYREF
  __int64 v14; // [rsp+48h] [rbp-8h]
  const char *v15; // [rsp+70h] [rbp+20h] BYREF
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+78h] [rbp+28h] BYREF

  sub_14005BA20(&v16);
  if ( !qword_1400CB860 )
  {
    *(_OWORD *)Src = 0;
    v14 = 0;
    if ( sub_14005D470("IDAUSR", (__int64)Src) )
    {
      if ( Src[0] )
      {
        for ( i = sub_140062340((char *)Src[0], ";", &v15); i; i = sub_140062340(nullptr, ";", &v15) )
        {
          if ( *i )
          {
            *(_OWORD *)Block = 0;
            v12 = nullptr;
            v1 = strlen(i);
            v2 = nullptr;
            if ( v1 != -1 )
            {
              v2 = sub_14005ABE0((__int64)Block, nullptr, v1 + 1, 1u);
              Block[0] = v2;
            }
            Block[1] = (void *)(v1 + 1);
            memcpy(v2, i, v1);
            *((_BYTE *)Block[0] + v1) = 0;
            sub_140034BE0((__int64)&qword_1400CB858, (__int64 *)Block);
            if ( Block[0] )
            {
              Block[1] = nullptr;
              j_free(Block[0]);
              Block[0] = nullptr;
              v12 = nullptr;
            }
          }
        }
      }
    }
    if ( !qword_1400CB860 )
    {
      if ( (unsigned __int8)sub_14005E1D0(Src) )
      {
        *(_OWORD *)Block = 0;
        v3 = nullptr;
        v12 = nullptr;
        v4 = Src[1];
        if ( Src[1] )
        {
          v5 = sub_14005AAA0((signed __int64)Src[1]);
          Block[0] = v5;
          v3 = v4;
          v12 = v4;
          memcpy(v5, Src[0], (size_t)v4);
          Block[1] = v4;
        }
        else
        {
          v4 = Block[1];
          v5 = Block[0];
        }
        v6 = qword_1400CB860;
        if ( qword_1400CB860 + 1 <= (unsigned __int64)qword_1400CB868 )
        {
          v7 = qword_1400CB858;
        }
        else
        {
          v7 = sub_14005ABE0((__int64)&qword_1400CB858, qword_1400CB858, qword_1400CB860 + 1, 0x18u);
          qword_1400CB858 = v7;
          v6 = qword_1400CB860;
        }
        v8 = 3 * v6;
        *((_QWORD *)v7 + v8) = v5;
        *((_QWORD *)v7 + v8 + 1) = v4;
        *((_QWORD *)v7 + v8 + 2) = v3;
        v9 = ++qword_1400CB860;
      }
      else
      {
        v9 = qword_1400CB860;
      }
      if ( !v9 )
      {
        if ( byte_1400CB61C )
          __debugbreak();
        sub_14005A480(1450);
      }
    }
    if ( Src[0] )
    {
      Src[1] = nullptr;
      j_free(Src[0]);
    }
  }
  sub_14005D6D0(v16);
  return &qword_1400CB858;
}
// 1400CB61C: using guessed type char byte_1400CB61C;
// 1400CB860: using guessed type __int64 qword_1400CB860;
// 1400CB868: using guessed type __int64 qword_1400CB868;
