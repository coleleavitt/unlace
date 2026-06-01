/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14000EAC0
// Address: 0x000000014000EAC0

//----- (000000014000EAC0) ----------------------------------------------------
_QWORD *__fastcall sub_14000EAC0(
        __int64 a1,
        struct _exception *a2,
        _BYTE *a3,
        __int64 a4,
        _BYTE *a5,
        char a6,
        char a7,
        __int64 a8)
{
  _BYTE *v12; // rdi
  _QWORD *result; // rax
  void *v14; // r14
  int v15; // eax
  const char *v16; // r8
  unsigned __int8 v17; // bl
  void *Block; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v19; // [rsp+28h] [rbp-D8h]
  __int64 v20; // [rsp+30h] [rbp-D0h]
  void *v21[2]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v22; // [rsp+48h] [rbp-B8h]
  __int64 v23; // [rsp+50h] [rbp-B0h] BYREF
  int v24; // [rsp+58h] [rbp-A8h]
  struct _exception *v25; // [rsp+60h] [rbp-A0h]
  _BYTE *v26; // [rsp+68h] [rbp-98h]
  __m128i si128; // [rsp+70h] [rbp-90h]
  __int64 v28; // [rsp+80h] [rbp-80h]
  void *v29; // [rsp+88h] [rbp-78h]
  _BYTE *v30; // [rsp+90h] [rbp-70h]
  __int64 v31; // [rsp+98h] [rbp-68h]
  __int64 (__fastcall **v32)(); // [rsp+A0h] [rbp-60h] BYREF
  void *v33; // [rsp+A8h] [rbp-58h]
  __int128 v34; // [rsp+B0h] [rbp-50h]

  v12 = a5;
  result = sub_1400639D0(a2, 0);
  v14 = result;
  if ( result )
  {
    v32 = &off_140092F30;
    v33 = nullptr;
    v34 = 0;
    sub_140019860((__int64)&v32, (__int64)result, 1, 1);
    sub_140063970(v14);
    if ( a5 && !*a5 )
      v12 = nullptr;
    if ( a3 && !*a3 )
      a3 = nullptr;
    v23 = 80;
    si128 = _mm_load_si128((const __m128i *)&xmmword_140093E30);
    v28 = -1;
    v15 = 6;
    if ( !a6 )
      v15 = 7;
    v24 = v15;
    if ( a7 )
    {
      v15 |= 0x100u;
      v24 = v15;
    }
    v25 = a2;
    v26 = a3;
    v30 = v12;
    v31 = a8;
    *(_OWORD *)v21 = 0;
    v22 = 0;
    if ( a4 )
    {
      if ( !*(_BYTE *)(a4 + 24) )
        v24 = v15 | 0x800;
      sub_1400126F0((__int64)v21, a4);
    }
    v29 = v21[0];
    Block = nullptr;
    v19 = 0;
    v20 = 0;
    if ( sub_14005C8B0((__int64)&v23, (const char **)&Block) )
    {
      v17 = 1;
    }
    else
    {
      v16 = Str1;
      if ( v19 )
        v16 = (const char *)Block;
      sub_140012440(a1, (struct __crt_locale_pointers *)"AUTOHIDE NONE\n%s", v16);
      v17 = 0;
    }
    if ( Block )
    {
      v19 = 0;
      j_free(Block);
      Block = nullptr;
      v20 = 0;
    }
    if ( v21[0] )
    {
      v21[1] = nullptr;
      j_free(v21[0]);
      v21[0] = nullptr;
      v22 = 0;
    }
    v32 = &off_140092F30;
    if ( v33 )
    {
      *(_QWORD *)&v34 = 0;
      j_free(v33);
    }
    return (_QWORD *)v17;
  }
  return result;
}
// 140092F30: using guessed type __int64 (__fastcall *off_140092F30)();
// 140093E30: using guessed type __int128 xmmword_140093E30;
