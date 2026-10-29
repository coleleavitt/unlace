__int64 __fastcall sub_7E8DF0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  _BYTE *v3; // rdi
  char *v4; // rcx
  char *v5; // rax
  __int64 v6; // rdx
  _BYTE *v7; // rdi
  __int64 result; // rax
  char *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // [rsp+0h] [rbp-158h] BYREF
  void *v12; // [rsp+8h] [rbp-150h]
  __int64 v13; // [rsp+10h] [rbp-148h]
  _BYTE v14[128]; // [rsp+18h] [rbp-140h] BYREF
  void *ptr; // [rsp+98h] [rbp-C0h]
  __int64 v16; // [rsp+A0h] [rbp-B8h]
  _BYTE v17[128]; // [rsp+A8h] [rbp-B0h] BYREF
  __int64 v18; // [rsp+128h] [rbp-30h]
  __int64 v19; // [rsp+130h] [rbp-28h]

  v2 = *a1;
  v19 = a2;
  v11 = v2;
  v12 = v14;
  v13 = 0x1000000000LL;
  ptr = v17;
  v16 = 0x1000000000LL;
  v18 = 0;
  sub_7E8300(&v11, a1);
  if ( v18 )
    sub_186B220((void *)(v18 - 8));
  v3 = ptr;
  v4 = (char *)ptr + 8 * (unsigned int)v16;
  if ( ptr != v4 )
  {
    v5 = (char *)ptr;
    do
    {
      v6 = *(_QWORD *)v5;
      v5 += 8;
      *(_BYTE *)(v6 + 6) &= ~1u;
    }
    while ( v5 != v4 );
  }
  LODWORD(v16) = 0;
  if ( v3 && v3 != v17 )
    sub_186B220(v3);
  v7 = v12;
  result = (unsigned int)v13;
  v9 = (char *)v12 + 8 * (unsigned int)v13;
  if ( v12 != v9 )
  {
    result = (__int64)v12;
    do
    {
      v10 = *(_QWORD *)result;
      result += 8;
      *(_BYTE *)(v10 + 6) &= ~2u;
    }
    while ( v9 != (char *)result );
  }
  LODWORD(v13) = 0;
  if ( v7 != v14 )
  {
    if ( v7 )
      return sub_186B220(v7);
  }
  return result;
}

