__int64 __fastcall sub_42F760(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE *v3; // rdi
  __int64 result; // rax
  char *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // [rsp+0h] [rbp-D8h] BYREF
  _BYTE v8[16]; // [rsp+8h] [rbp-D0h] BYREF
  __int64 v9; // [rsp+18h] [rbp-C0h]
  void *ptr; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v11; // [rsp+28h] [rbp-B0h]
  _BYTE v12[168]; // [rsp+30h] [rbp-A8h] BYREF

  v7 = a3;
  sub_16669D0(v8, a3);
  v9 = a2;
  ptr = v12;
  v11 = 0x1000000000LL;
  sub_430240(&v7, &ptr, a1);
  v3 = ptr;
  result = (unsigned int)v11;
  v5 = (char *)ptr + 8 * (unsigned int)v11;
  if ( ptr != v5 )
  {
    result = (__int64)ptr;
    do
    {
      v6 = *(_QWORD *)result;
      result += 8;
      *(_BYTE *)(v6 + 6) &= ~1u;
    }
    while ( v5 != (char *)result );
  }
  LODWORD(v11) = 0;
  if ( v3 != v12 )
  {
    if ( v3 )
      return sub_186B220(v3);
  }
  return result;
}

