/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A35F0
// Address: 0x00000000000A35F0

//----- (00000000000A35F0) ----------------------------------------------------
unsigned __int64 __fastcall sub_A35F0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r12
  unsigned int v4; // r14d
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // r13
  __int64 v8; // rax
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r13
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  char v14; // [rsp+Fh] [rbp-39h] BYREF
  unsigned __int64 v15; // [rsp+10h] [rbp-38h]

  v3 = a3;
  v4 = a2;
  v15 = __readfsqword(0x28u);
  if ( (*(__int64 (__fastcall **)(__int64, __int64, unsigned __int64, char *, __int64))(*(_QWORD *)a1 + 384LL))(
         a1,
         a2,
         a3 - 1,
         &v14,
         1) == 1 )
  {
    v5 = v3;
    v6 = v3;
    v7 = v3;
    do
    {
      v7 <<= v5 < 0x7FFFFFFFFFFFFFFFLL;
      v3 = v5 + v6;
      v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64, char *, __int64))(*(_QWORD *)a1 + 384LL))(
             a1,
             v4,
             v5 + v6 - 1,
             &v14,
             1);
      v9 = v6;
      v5 = v7;
      v6 = v3;
    }
    while ( v8 == 1 );
  }
  else
  {
    v9 = 0;
  }
  if ( v9 + 1 < v3 )
  {
    do
    {
      v10 = (v3 + v9) >> 1;
      v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, char *, __int64))(*(_QWORD *)a1 + 384LL))(
              a1,
              v4,
              (__int64)((v10 << 32) - 0x100000000LL) >> 32,
              &v14,
              1);
      v12 = (int)v10;
      if ( v11 == 1 )
      {
        v9 = (int)v10;
        v12 = v3;
      }
      else
      {
        v3 = (int)v10;
      }
    }
    while ( v9 + 1 < v12 );
  }
  return v9;
}
