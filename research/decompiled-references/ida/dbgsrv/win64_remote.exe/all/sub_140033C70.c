/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140033C70
// Address: 0x0000000140033C70

//----- (0000000140033C70) ----------------------------------------------------
void __fastcall sub_140033C70(__int64 a1, int a2, __int64 a3, void **a4)
{
  double v4; // xmm2_8
  void *v9; // rcx
  __int64 v10; // rax
  int v11; // r8d
  int v12; // r8d
  char *v13; // rax
  const char *v14; // rax
  const char *v15; // rdi
  size_t v16; // rax
  void *Block[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v18; // [rsp+30h] [rbp-28h]
  int v19; // [rsp+78h] [rbp+20h] BYREF

  if ( a4 )
  {
    v9 = *a4;
    if ( *a4 )
    {
      a4[1] = nullptr;
      j_free(v9);
      *a4 = nullptr;
      a4[2] = nullptr;
    }
    if ( a2 == -1 )
      a2 = sub_140063DE0();
    if ( a2 )
    {
      v10 = sub_14003E690(a1, &v19, nullptr, 0);
      v11 = v19;
      if ( v19 != -1 )
      {
        if ( v10 )
        {
          sub_140002FB0((__int64)a4, (char *)&dword_140091764, v10);
          v11 = v19;
        }
        if ( v11 )
        {
          if ( (unsigned __int64)a4[1] <= 1 )
          {
            v12 = v11 - 1;
            v19 = v12;
          }
          else
          {
            sub_140004830((__int64)a4, 44);
            v12 = v19;
          }
          sub_140024520((__int64)a4, "%d", v12);
        }
        if ( (unsigned __int64)a4[1] > 1 )
          sub_1400048F0((__int64)a4, ": ", 2u);
      }
      if ( a2 == 47 )
      {
        *(_OWORD *)Block = 0;
        v18 = 0;
        v13 = (char *)sub_14003EA00(Block, a3, v4);
        sub_140063F70(0, v13);
        if ( Block[0] )
        {
          Block[1] = nullptr;
          j_free(Block[0]);
        }
      }
      v14 = sub_140064D10(a2);
      v15 = v14;
      if ( v14 )
      {
        v16 = strlen(v14);
        sub_1400048F0((__int64)a4, v15, v16);
      }
    }
  }
}
// 140033D6A: variable 'v4' is possibly undefined
// 140091764: using guessed type int dword_140091764;
