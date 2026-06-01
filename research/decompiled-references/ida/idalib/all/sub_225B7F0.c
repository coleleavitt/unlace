__int64 __fastcall sub_225B7F0(__int64 *a1, __int64 a2)
{
  bool v2; // zf
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rbp
  __int64 v5; // rbp
  __int64 v6; // rdi
  unsigned __int64 v8; // rdx
  __int64 v9; // [rsp+0h] [rbp-88h] BYREF
  unsigned __int64 v10; // [rsp+8h] [rbp-80h]
  void *ptr; // [rsp+10h] [rbp-78h] BYREF
  __m128i si128; // [rsp+18h] [rbp-70h]
  _BYTE v13[24]; // [rsp+28h] [rbp-60h] BYREF
  const char *v14; // [rsp+40h] [rbp-48h] BYREF
  __int16 v15; // [rsp+60h] [rbp-28h]

  v2 = *(_DWORD *)(a2 + 32) == 1;
  v9 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23ABCE0);
  ptr = v13;
  v10 = 0;
  if ( !v2 )
  {
    v6 = *a1;
    v5 = 0;
    v14 = "expected string";
    v15 = 259;
    sub_226EEF0(v6, a2, &v14, 0);
    goto LABEL_6;
  }
  v9 = sub_2270420(a2, &ptr);
  v10 = v3;
  v4 = v3;
  if ( v3 == j__strlen("cwd") )
  {
    v5 = 0x100000000LL;
    if ( !(unsigned int)sub_22462B0((__int64)&v9, (unsigned __int8 *)"cwd", v10) )
      goto LABEL_6;
    v4 = v10;
  }
  if ( v4 == j__strlen("overlay-dir") )
  {
    v8 = v4;
    v5 = 0x100000001LL;
    if ( (unsigned int)sub_22462B0((__int64)&v9, "overlay-dir", v8) )
      v5 = 0;
  }
  else
  {
    v5 = 0;
  }
LABEL_6:
  if ( ptr != v13 )
    free(ptr);
  return v5;
}
