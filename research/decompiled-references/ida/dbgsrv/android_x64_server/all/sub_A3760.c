/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A3760
// Address: 0x00000000000A3760

//----- (00000000000A3760) ----------------------------------------------------
__int64 *__fastcall sub_A3760(__int64 *a1, __int64 *a2)
{
  __int128 v2; // xmm0
  __int64 v3; // r12
  void *v4; // r13
  char *v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // rax
  bool v8; // zf
  void *ptr[4]; // [rsp+0h] [rbp-78h] BYREF
  __int128 v11; // [rsp+20h] [rbp-58h]
  __int64 v12; // [rsp+30h] [rbp-48h]
  unsigned __int64 v13; // [rsp+40h] [rbp-38h]

  v13 = __readfsqword(0x28u);
  v2 = 0;
  memset(ptr, 0, 24);
  v3 = a2[1];
  if ( v3 )
  {
    v4 = qalloc_or_throw(80 * v3);
    ptr[0] = v4;
    ptr[2] = (void *)v3;
    sub_A38D0((__int64)v4, *a2);
    if ( v3 != 1 )
    {
      v5 = (char *)(v3 - 1);
      v6 = 80;
      do
      {
        sub_A38D0((__int64)v4 + v6, v6 + *a2);
        v6 += 80;
        --v5;
      }
      while ( v5 );
    }
    ptr[1] = (void *)v3;
    v2 = 0;
  }
  else
  {
    v4 = nullptr;
  }
  *(_QWORD *)&v11 = v4;
  ptr[0] = nullptr;
  *((_QWORD *)&v11 + 1) = v3;
  v12 = v3;
  *(_OWORD *)&ptr[1] = v2;
  if ( *a1 )
  {
    sub_385C0(a1, 0);
    qfree((void *)*a1);
    v7 = v12;
    v8 = ptr[0] == nullptr;
    *(_OWORD *)a1 = v11;
    a1[2] = v7;
    if ( !v8 )
    {
      sub_385C0((__int64 *)ptr, 0);
      qfree(ptr[0]);
      ptr[0] = nullptr;
      ptr[2] = nullptr;
    }
  }
  else
  {
    *a1 = (__int64)v4;
    a1[1] = v3;
    a1[2] = v3;
  }
  return a1;
}
// 0: using guessed type int dword_0;
