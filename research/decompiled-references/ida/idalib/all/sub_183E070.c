__int64 __fastcall sub_183E070(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        __m128i a7,
        __int64 a8,
        char a9,
        char a10)
{
  __int64 *v14; // rax
  char v15; // r9
  __int64 v16; // r15
  char v17; // r8
  __int64 v18; // rax
  unsigned __int64 v19; // rsi
  __int64 v20; // rax
  unsigned __int64 v21; // rcx
  unsigned int v22; // eax
  unsigned int v23; // ecx
  unsigned int v24; // r14d
  char v27; // [rsp+20h] [rbp-98h]
  char v28; // [rsp+20h] [rbp-98h]
  char v29; // [rsp+28h] [rbp-90h]
  char v30; // [rsp+28h] [rbp-90h]
  _BYTE v31[120]; // [rsp+40h] [rbp-78h] BYREF

  v14 = (__int64 *)(a2[6] & 0xFFFFFFFFFFFFFFF0LL);
  v15 = a9;
  v16 = *v14;
  v17 = a10;
  if ( *(_BYTE *)(*v14 + 16) != 26 )
  {
    v18 = sub_F63050(*v14, a2, a3, a4);
    v17 = a10;
    v15 = a9;
    v16 = v18;
  }
  v19 = *(unsigned __int16 *)(v16 + 22);
  v20 = a5;
  v21 = *(unsigned int *)(a8 + 12);
  if ( a5 >= (unsigned int)v19 )
  {
    if ( a5 > v21 )
    {
      v29 = v17;
      v27 = v15;
      sub_2237220(a8, a8 + 16, a5, 8);
      v17 = v29;
      v15 = v27;
      v20 = a5;
    }
  }
  else if ( v19 > v21 )
  {
    v30 = v17;
    v28 = v15;
    sub_2237220(a8, a8 + 16, v19, 8);
    v20 = a5;
    v15 = v28;
    v17 = v30;
  }
  v22 = sub_192CA10(a1, a4, v20, (unsigned int)(*(char *)(v16 + 19) >= 0) + 3, v15, v17);
  v23 = *(_DWORD *)(a8 + 8);
  v24 = v22;
  if ( v23 > (unsigned __int64)*(unsigned int *)(a8 + 12) )
  {
    sub_2237220(a8, a8 + 16, v23, 8);
    v23 = *(_DWORD *)(a8 + 8);
  }
  *(_DWORD *)(a8 + 8) = v23;
  *(double *)a7.m128i_i64 = sub_18CE000(a1, a2, a6, v31, 0, v31);
  sub_16EB510(a1, a2, a3, (__int64)v31, 0, v16, a7, a6);
  return v24;
}
