/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5FFF0
// Address: 0x000000000005FFF0

//----- (000000000005FFF0) ----------------------------------------------------
__int64 __fastcall sub_5FFF0(__int64 a1, _BYTE *a2, double a3, __m128 a4)
{
  const char *v4; // rdi
  const char *v5; // rbx
  size_t v6; // rdx
  char *s[2]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v9; // [rsp+10h] [rbp-28h]
  unsigned __int64 v10; // [rsp+20h] [rbp-18h]

  v10 = __readfsqword(0x28u);
  *(_OWORD *)s = 0;
  v9 = 0;
  if ( *(_QWORD *)(a1 + 16) )
    v4 = *(const char **)(a1 + 8);
  else
    v4 = s1;
  compile_idc_file((__int64)v4, (__int64)s, 3, 0.0, a4);
  if ( s[1] )
  {
    v5 = s[0];
    if ( !s[0] )
    {
      v5 = nullptr;
      v6 = 0;
      goto LABEL_9;
    }
  }
  else
  {
    v5 = s1;
  }
  v6 = strlen(v5);
LABEL_9:
  *a2 = 7;
  sub_4ABC0((__int64)(a2 + 8), v5, v6);
  if ( s[0] )
  {
    s[1] = nullptr;
    qfree(s[0]);
    s[0] = nullptr;
    v9 = 0;
  }
  return 0;
}
