/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005A320
// Address: 0x000000010005A320

//----- (000000010005A320) ----------------------------------------------------
__int64 __fastcall sub_10005A320(void **a1, __int64 a2)
{
  _BYTE *v2; // rax
  size_t v3; // r14
  unsigned __int64 v4; // r15
  unsigned __int64 v5; // r12
  char *v6; // rax
  unsigned __int8 v8; // [rsp+Dh] [rbp-33h] BYREF
  _BYTE __src[10]; // [rsp+Eh] [rbp-32h] BYREF
  _QWORD v10[5]; // [rsp+18h] [rbp-28h] BYREF

  v2 = pack_dq(__src, (unsigned __int64)v10, a2);
  v3 = v2 - __src;
  if ( v2 != __src )
  {
    v4 = (unsigned __int64)a1[1];
    v5 = 0x7FFFFFFFFFFFFFFFLL;
    if ( !__CFADD__(v3, v4) )
      v5 = v3 + v4;
    if ( v4 >= v5 )
    {
      if ( v4 != v5 )
      {
        v8 = 0;
        sub_10001CE90((__int64)a1, v5, &v8);
      }
    }
    else
    {
      v6 = (char *)*a1;
      if ( (unsigned __int64)a1[2] < v5 )
      {
        v6 = (char *)qvector_reserve((__int64)a1, *a1, v5, 1u);
        *a1 = v6;
      }
      __bzero(&v6[(_QWORD)a1[1]], v5 - (_QWORD)a1[1]);
      a1[1] = (void *)v5;
    }
    memcpy((char *)*a1 + v4, __src, v3);
  }
  return __stack_chk_guard;
}
// 100082B16: using guessed type __int64 __fastcall __bzero(_QWORD, _QWORD);
