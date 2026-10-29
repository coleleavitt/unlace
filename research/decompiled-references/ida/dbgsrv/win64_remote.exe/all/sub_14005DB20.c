/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005DB20
// Address: 0x000000014005DB20

//----- (000000014005DB20) ----------------------------------------------------
void __fastcall sub_14005DB20(_BYTE *a1, __int64 a2)
{
  unsigned __int64 v4; // rdx
  char *v5; // rdx
  const char *v6; // rax
  void *Block; // [rsp+20h] [rbp-248h] BYREF
  __int64 v8; // [rsp+28h] [rbp-240h]
  __int64 v9; // [rsp+30h] [rbp-238h]
  unsigned __int16 v10[264]; // [rsp+40h] [rbp-228h] BYREF

  if ( !sub_14007BA60((__int64)v10, 0x104u) )
  {
LABEL_14:
    v6 = (const char *)sub_140063E00(-1);
    sub_140005300("getcwd: %s", v6);
  }
  Block = nullptr;
  v8 = 0;
  v9 = 0;
  if ( !sub_140061D80((__int64)&Block, v10, -1) )
  {
    *errno() = 42;
LABEL_13:
    sub_140001640((__int64)&Block);
    goto LABEL_14;
  }
  v4 = v8 - 1;
  if ( !v8 )
    v4 = 0;
  if ( v4 >= a2 - 1 )
  {
    *errno() = 34;
    goto LABEL_13;
  }
  v5 = (char *)Str1;
  if ( v8 )
    v5 = (char *)Block;
  sub_140061AF0(a1, v5, a2);
  if ( Block )
  {
    v8 = 0;
    j_free(Block);
  }
}
