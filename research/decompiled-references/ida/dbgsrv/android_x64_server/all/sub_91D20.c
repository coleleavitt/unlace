/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_91D20
// Address: 0x0000000000091D20

//----- (0000000000091D20) ----------------------------------------------------
__int64 __fastcall sub_91D20(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  const char *v4; // r15
  __int64 *v5; // r13
  __int64 *v6; // rbx
  const char *v7; // rdi
  int v8; // eax
  const char *v9; // rsi
  void *ptr[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v12; // [rsp+10h] [rbp-48h]
  unsigned __int64 v13; // [rsp+20h] [rbp-38h]

  v13 = __readfsqword(0x28u);
  *(_OWORD *)ptr = 0;
  v12 = 0;
  sub_91650(a2, (__int64)ptr);
  v3 = *(_QWORD *)(a1 + 8);
  if ( !v3 )
    goto LABEL_16;
  v4 = s1;
  if ( ptr[1] )
    v4 = (const char *)ptr[0];
  v5 = (__int64 *)(a1 + 8);
  v6 = (__int64 *)(a1 + 8);
  do
  {
    v7 = s1;
    if ( *(_QWORD *)(v3 + 40) )
      v7 = *(const char **)(v3 + 32);
    v8 = strcmp(v7, v4);
    if ( v8 >= 0 )
      v6 = (__int64 *)v3;
    v3 = *(_QWORD *)(v3 + 8LL * (v8 < 0));
  }
  while ( v3 );
  if ( v6 == v5 || (!v6[5] ? (v9 = s1) : (v9 = (const char *)v6[4]), strcmp(v4, v9) < 0) )
  {
LABEL_16:
    LODWORD(v3) = 0;
  }
  else
  {
    LOBYTE(v3) = 1;
    sub_9D710(a1, v6);
  }
  if ( ptr[0] )
  {
    ptr[1] = nullptr;
    qfree(ptr[0]);
    ptr[0] = nullptr;
    v12 = 0;
  }
  return (unsigned int)v3;
}
