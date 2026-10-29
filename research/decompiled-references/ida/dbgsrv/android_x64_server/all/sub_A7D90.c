/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A7D90
// Address: 0x00000000000A7D90

//----- (00000000000A7D90) ----------------------------------------------------
__int64 __fastcall sub_A7D90(__int64 a1, const char *a2, __int64 a3)
{
  __time_t v3; // rax
  const char *v4; // rcx
  unsigned int v5; // ebx
  void *ptr[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v8; // [rsp+10h] [rbp-48h]
  char v9[40]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v10; // [rsp+48h] [rbp-10h]

  v10 = __readfsqword(0x28u);
  *(_OWORD *)ptr = 0;
  v8 = 0;
  sub_4BA10((__int64)ptr, a2, a3);
  v3 = qtime64();
  format_timestamp(v9, 25, v3, 0);
  if ( ptr[1] )
    v4 = (const char *)ptr[0];
  else
    v4 = s1;
  v5 = sub_AD470("%s [%u] %s", v9, *(_DWORD *)(a1 + 168), v4);
  if ( ptr[0] )
  {
    ptr[1] = nullptr;
    qfree(ptr[0]);
    ptr[0] = nullptr;
    v8 = 0;
  }
  return v5;
}
