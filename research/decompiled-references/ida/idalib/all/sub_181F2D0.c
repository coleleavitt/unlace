__int64 __fastcall sub_181F2D0(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4, __m128i a5, double a6)
{
  __int64 v8; // rax
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r15
  __int64 v11; // rax
  __int64 result; // rax
  unsigned int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rax
  size_t v16; // rax
  int v17; // eax
  unsigned int *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // [rsp+0h] [rbp-168h]
  __int64 v21; // [rsp+0h] [rbp-168h]
  size_t v22; // [rsp+8h] [rbp-160h]
  int v23; // [rsp+1Ch] [rbp-14Ch] BYREF
  _DWORD v24[6]; // [rsp+20h] [rbp-148h] BYREF
  void *v25; // [rsp+38h] [rbp-130h]
  __int64 v26; // [rsp+48h] [rbp-120h] BYREF
  int v27[6]; // [rsp+60h] [rbp-108h] BYREF
  void *v28; // [rsp+78h] [rbp-F0h]
  __int64 v29; // [rsp+88h] [rbp-E0h] BYREF
  _BYTE v30[200]; // [rsp+A0h] [rbp-C8h] BYREF

  v8 = *(_QWORD *)(a2 + 80);
  v9 = v8 & 0xFFFFFFFFFFFFFFFCLL;
  if ( !*(_WORD *)(a2 + 56) || (v8 & 2) == 0 )
  {
    v10 = sub_BFD550(*(_QWORD *)(a2 + 80) & 0xFFFFFFFFFFFFFFFCLL);
    if ( (*(_WORD *)v10 & 0x1FF) == 9 )
    {
      if ( a4 )
        *a4 = sub_EEB7E0(v9, a2, *(double *)a5.m128i_i64);
      if ( ((*(_BYTE *)(v10 + 2) >> 3) & 7) == 0 || ((*(_BYTE *)(v10 + 2) >> 3) & 7) == 5 )
      {
        v11 = *(_DWORD *)(v10 + 16) * ((*(_WORD *)(v10 + 2) >> 6) & 7u);
        *a3 = v10 + 4LL * *(unsigned int *)(v10 + 4) + 20;
        a3[1] = v11;
        return sub_181E980(a1, a2, v9, a3, a4, *(double *)a5.m128i_i64);
      }
    }
    else if ( a4 )
    {
      *a4 = sub_EEB7E0(v9, a2, *(double *)a5.m128i_i64);
    }
    v13 = sub_EEB7E0(v9, a2, *(double *)a5.m128i_i64);
    sub_168B9F0((__int64)v30, (__int64 *)(a1 + 8), v13, 0xC57u, 0);
    v14 = sub_15DD120((__int64)v30, a2);
    v27[0] = 2;
    sub_180A710(v14, v27);
    sub_15F7200(v30);
    return 0;
  }
  sub_168B9F0((__int64)v30, (__int64 *)(a1 + 8), *(_DWORD *)v9, 0xC57u, 0);
  v15 = sub_15DD120((__int64)v30, a2);
  v23 = 2;
  v20 = sub_180A710(v15, &v23);
  v16 = j__strlen("\"");
  sub_9EC740((__int64)v27, *(_DWORD *)v9, "\"", v16, 0);
  v21 = sub_1589170(v20, v27);
  v22 = j__strlen("\"");
  v17 = sub_15F0EF0(a1, *(_DWORD *)v9, 0, a5, a6);
  sub_9EC740((__int64)v24, v17, "\"", v22, 0);
  sub_1589170(v21, v24);
  if ( v25 != &v26 )
    operator delete(v25);
  if ( v28 != &v29 )
    operator delete(v28);
  sub_15F7200(v30);
  v18 = *(unsigned int **)(*(_QWORD *)(v9 + 8) + 16LL);
  v19 = *v18;
  *a3 = v18 + 4;
  result = 1;
  a3[1] = v19;
  if ( a4 )
    *a4 = *(_DWORD *)v9;
  return result;
}
