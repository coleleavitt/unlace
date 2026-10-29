__int64 __fastcall sub_7A4950(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  _QWORD *v5; // r14
  unsigned __int64 v7; // rsi
  int v8; // ebx
  _QWORD v9[2]; // [rsp+10h] [rbp-2B8h] BYREF
  int v10; // [rsp+20h] [rbp-2A8h]
  void *v11; // [rsp+28h] [rbp-2A0h]
  __m128i si128; // [rsp+30h] [rbp-298h]
  _BYTE v13[128]; // [rsp+40h] [rbp-288h] BYREF
  void *v14; // [rsp+C0h] [rbp-208h]
  __int64 v15; // [rsp+C8h] [rbp-200h]
  _BYTE v16[128]; // [rsp+D0h] [rbp-1F8h] BYREF
  _QWORD v17[2]; // [rsp+150h] [rbp-178h] BYREF
  int v18; // [rsp+160h] [rbp-168h]
  void *v19; // [rsp+168h] [rbp-160h]
  __m128i v20; // [rsp+170h] [rbp-158h]
  _BYTE v21[128]; // [rsp+180h] [rbp-148h] BYREF
  void *ptr; // [rsp+200h] [rbp-C8h]
  __int64 v23; // [rsp+208h] [rbp-C0h]
  _BYTE v24[184]; // [rsp+210h] [rbp-B8h] BYREF

  v3 = a2 & 3;
  v4 = *a1 & 3LL;
  if ( (_DWORD)v4 == (_DWORD)v3 )
  {
    LODWORD(v5) = 1;
    if ( v4 != 2 )
      return (unsigned int)v5;
  }
  else
  {
    LODWORD(v5) = 0;
    if ( v4 != 2 )
      return (unsigned int)v5;
  }
  LODWORD(v5) = 0;
  if ( v3 == 2 )
  {
    v7 = *a1 & 0xFFFFFFFFFFFFFFFCLL;
    v5 = v17;
    v10 = 0;
    v15 = 0x2000000000LL;
    v23 = 0x2000000000LL;
    si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E280);
    v20 = si128;
    v9[0] = 0;
    v9[1] = 0;
    v11 = v13;
    v14 = v16;
    v18 = 0;
    v17[0] = 0;
    v17[1] = 0;
    v19 = v21;
    ptr = v24;
    sub_A7D060(v9, v7);
    sub_A7D060(v17, a2 & 0xFFFFFFFFFFFFFFFCLL);
    v8 = sub_A7D0A0(v9);
    LOBYTE(v5) = v8 == (unsigned int)sub_A7D0A0(v17);
    if ( ptr != v24 )
      free(ptr);
    if ( v19 != v21 )
      free(v19);
    operator delete();
    if ( v14 != v16 )
      free(v14);
    if ( v11 != v13 )
      free(v11);
    operator delete();
  }
  return (unsigned int)v5;
}

