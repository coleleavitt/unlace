/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_651B0
// Address: 0x00000000000651B0

//----- (00000000000651B0) ----------------------------------------------------
_BOOL8 __fastcall sub_651B0(_QWORD *a1)
{
  const char *v1; // rsi
  unsigned __int16 v2; // ax
  int v3; // ecx
  _BOOL8 result; // rax
  __int64 v5; // rax
  int *v6; // r14
  unsigned int v7; // ebx
  int v8; // [rsp+Ch] [rbp-1Ch] BYREF
  unsigned __int64 v9; // [rsp+10h] [rbp-18h]

  v9 = __readfsqword(0x28u);
  if ( a1[6] )
    v1 = (const char *)a1[5];
  else
    v1 = s1;
  v2 = sub_64D00(a1, v1, &v8);
  if ( (unsigned int)(v8 - 1) > 2 )
  {
    v3 = set_qerrno(0x3Au);
    result = 1;
    if ( v3 )
      return result;
  }
  else
  {
    sub_61840((__int64)a1, 0xDDC6C4u >> (8 * (v8 - 1)), v2);
  }
  sub_65070((__int64)a1);
  v5 = a1[44];
  v6 = *(int **)(a1[43] + 8 * v5 - 8);
  if ( v5 )
    a1[44] = v5 - 1;
  v7 = sub_66D00((__int64)a1, (__int64)v6, 0, 0);
  if ( v6 )
  {
    sub_652B0(v6);
    operator delete(v6);
  }
  return (unsigned int)set_qerrno(v7) != 0;
}
