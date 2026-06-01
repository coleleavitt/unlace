/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A2900
// Address: 0x00000000000A2900

//----- (00000000000A2900) ----------------------------------------------------
__int64 __fastcall sub_A2900(_BYTE *a1, char **a2, __int64 a3, int a4)
{
  unsigned int v4; // r15d
  char *v5; // rbx
  char *v8; // rdi
  char *v9; // rax
  char v11; // [rsp+7h] [rbp-31h] BYREF
  unsigned __int64 v12; // [rsp+8h] [rbp-30h]

  v4 = a4;
  v12 = __readfsqword(0x28u);
  a2[1] = nullptr;
  v5 = (char *)a4;
  if ( (a1[672] & 0x10) != 0 )
  {
    v11 = 0;
    sub_5E330((__int64)a2, a4, &v11);
  }
  else
  {
    if ( a4 )
    {
      if ( (unsigned __int64)a2[2] >= a4 )
      {
        v8 = *a2;
        v9 = nullptr;
      }
      else
      {
        v8 = (char *)qvector_reserve((__int64)a2, *a2, a4, 1u);
        *a2 = v8;
        v9 = a2[1];
      }
      memset(&v8[(_QWORD)v9], 0, v5 - v9);
      a2[1] = v5;
    }
    if ( (*(__int64 (__fastcall **)(_BYTE *, __int64, char *, char *, _QWORD))(*(_QWORD *)a1 + 288LL))(
           a1,
           a3,
           *a2,
           v5,
           0) <= 0 )
      return (unsigned int)-1;
  }
  return v4;
}
