/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14002B8F0
// Address: 0x000000014002B8F0

//----- (000000014002B8F0) ----------------------------------------------------
bool __fastcall sub_14002B8F0(__int64 a1, __int64 a2, char *a3)
{
  _BYTE *v4; // rax
  const char *v6; // rsi
  _QWORD *v7; // rax
  char v9; // bl
  void *v10; // rdi
  void *v11; // rax
  void *Src[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+30h] [rbp-18h]

  v4 = (_BYTE *)a2;
  if ( !a2 )
    return (unsigned int)sub_140029410((char *)a1, (__int64)v4, a3, 0) == 0;
  if ( *(_BYTE *)a2 == 7 )
  {
    v6 = Str1;
    if ( *(_QWORD *)(a2 + 16) )
      v6 = *(const char **)(a2 + 8);
    v7 = sub_14002DA30();
    v4 = (_BYTE *)sub_14002D440((__int64)v7, v6);
    if ( !v4 )
    {
      sub_1400640B0(0x5FCu);
      return 0;
    }
  }
  if ( *v4 != 5 || a3 && *a3 )
    return (unsigned int)sub_140029410((char *)a1, (__int64)v4, a3, 0) == 0;
  *(_OWORD *)Src = 0;
  v13 = 0;
  if ( (unsigned int)sub_140029930((__int64)Src, (__int64)v4) )
  {
    v9 = 0;
  }
  else
  {
    sub_140029390(a1);
    *(_BYTE *)a1 = 7;
    *(_QWORD *)(a1 + 8) = 0;
    *(_QWORD *)(a1 + 16) = 0;
    *(_QWORD *)(a1 + 24) = 0;
    v10 = Src[1];
    if ( Src[1] )
    {
      v11 = sub_14005AAA0((signed __int64)Src[1]);
      *(_QWORD *)(a1 + 8) = v11;
      *(_QWORD *)(a1 + 24) = v10;
      memcpy(v11, Src[0], (size_t)v10);
      *(_QWORD *)(a1 + 16) = v10;
    }
    v9 = 1;
  }
  if ( Src[0] )
  {
    Src[1] = nullptr;
    j_free(Src[0]);
  }
  return v9;
}
