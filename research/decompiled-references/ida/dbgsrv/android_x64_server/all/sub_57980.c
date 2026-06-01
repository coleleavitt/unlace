/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_57980
// Address: 0x0000000000057980

//----- (0000000000057980) ----------------------------------------------------
unsigned int *__fastcall sub_57980(__int64 a1, int a2, const char *a3)
{
  __int64 v4; // rax
  unsigned int *v6; // rcx
  __int64 *v7; // r12
  unsigned int *v8; // rbx
  const char *v9; // rdi
  char *s1[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v12; // [rsp+10h] [rbp-48h]
  unsigned __int64 v13; // [rsp+20h] [rbp-38h]

  v13 = __readfsqword(0x28u);
  if ( !*(_BYTE *)(a1 + 168) )
  {
    if ( !(_BYTE)under_debugger )
      interr(20099);
    BUG();
  }
  *(_OWORD *)s1 = 0;
  v12 = 0;
  v4 = *(_QWORD *)(a1 + 40);
  if ( !(v4 << 6) )
    return nullptr;
  v6 = *(unsigned int **)(a1 + 32);
  v7 = (__int64 *)(a1 + 176);
  v8 = v6;
  do
  {
    if ( v8[1] == a2 )
    {
      s1[1] = nullptr;
      v9 = ::s1;
      if ( *v7 > 0 )
      {
        v9 = ::s1;
        if ( *(_QWORD *)(a1 + 192) )
        {
          sub_57CE0(*(_QWORD *)(a1 + 160), (__int64)s1, (__int64 *)(a1 + 176), *v8);
          v9 = ::s1;
          if ( s1[1] )
            v9 = s1[0];
        }
      }
      if ( !strcmp(v9, a3) )
        goto LABEL_13;
      v6 = *(unsigned int **)(a1 + 32);
      v4 = *(_QWORD *)(a1 + 40);
    }
    v8 += 16;
  }
  while ( v8 != &v6[16 * v4] );
  v8 = nullptr;
LABEL_13:
  if ( s1[0] )
  {
    s1[1] = nullptr;
    qfree(s1[0]);
    s1[0] = nullptr;
    v12 = 0;
  }
  return v8;
}
// 158B40: using guessed type __int64 under_debugger;
