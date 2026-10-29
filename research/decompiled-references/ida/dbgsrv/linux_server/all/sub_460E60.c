/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_460E60
// Address: 0x0000000000460E60

//----- (0000000000460E60) ----------------------------------------------------
__int64 __fastcall sub_460E60(
        __int64 a1,
        unsigned int *a2,
        unsigned int a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  signed __int64 v12; // rax
  double v13; // xmm4_8
  double v14; // xmm5_8
  size_t v15; // rbp
  unsigned __int64 v16; // r13
  unsigned __int64 v17; // r15
  unsigned int v18; // ebx
  char *v20; // rsi
  unsigned __int64 v21; // rax
  void *ptr; // [rsp+0h] [rbp-68h] BYREF
  unsigned __int64 v23; // [rsp+8h] [rbp-60h]
  unsigned __int64 v24; // [rsp+10h] [rbp-58h]
  _BYTE src[5]; // [rsp+23h] [rbp-45h] BYREF
  unsigned __int64 v26[8]; // [rsp+28h] [rbp-40h] BYREF

  v26[0] = __readfsqword(0x28u);
  sub_470050((__int64)&ptr, 55);
  sub_46C160((char **)&ptr, a2);
  v12 = sub_47FB50(src, (unsigned __int64)v26, a3) - src;
  v15 = v12;
  if ( v12 )
  {
    v16 = v23;
    v17 = v23 + v12;
    if ( __CFADD__(v23, v12) )
    {
      if ( v23 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v23 != 0x7FFFFFFFFFFFFFFFLL )
          v23 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_6:
        memcpy((char *)ptr + v16, src, v15);
        goto LABEL_7;
      }
      v17 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v20 = (char *)ptr;
    v21 = v23;
    if ( v24 < v17 )
    {
      ptr = sub_481540((__int64)&ptr, ptr, v17, 1u);
      v20 = (char *)ptr;
      v21 = v23;
    }
    memset(&v20[v21], 0, v17 - v21);
    v23 = v17;
    goto LABEL_6;
  }
LABEL_7:
  v18 = sub_46B580((__int64 *)(a1 + 192), (__int64 *)&ptr, -1, 0, a4, a5, a6, a7, v13, v14, a10, a11);
  if ( ptr )
  {
    v23 = 0;
    j__free(ptr);
  }
  return v18;
}
// 460F12: variable 'v13' is possibly undefined
// 460F12: variable 'v14' is possibly undefined
