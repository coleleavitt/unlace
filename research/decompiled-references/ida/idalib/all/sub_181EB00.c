__int64 __fastcall sub_181EB00(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4, _DWORD *a5, __m128i a6, double a7)
{
  __int64 v9; // rax
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // r15
  __int64 v12; // rax
  __int64 result; // rax
  unsigned int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rax
  size_t v17; // rax
  int v18; // eax
  unsigned int *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // [rsp+0h] [rbp-168h]
  __int64 v22; // [rsp+0h] [rbp-168h]
  size_t v23; // [rsp+8h] [rbp-160h]
  int v24; // [rsp+1Ch] [rbp-14Ch] BYREF
  _DWORD v25[6]; // [rsp+20h] [rbp-148h] BYREF
  void *v26; // [rsp+38h] [rbp-130h]
  __int64 v27; // [rsp+48h] [rbp-120h] BYREF
  int v28[6]; // [rsp+60h] [rbp-108h] BYREF
  void *v29; // [rsp+78h] [rbp-F0h]
  __int64 v30; // [rsp+88h] [rbp-E0h] BYREF
  _BYTE v31[200]; // [rsp+A0h] [rbp-C8h] BYREF

  v9 = *(_QWORD *)(a2 + 8LL * a3 + 80);
  v10 = v9 & 0xFFFFFFFFFFFFFFFCLL;
  if ( a3 >= *(unsigned __int16 *)(a2 + 56) || (v9 & 2) == 0 )
  {
    v11 = sub_BFD550(*(_QWORD *)(a2 + 8LL * a3 + 80) & 0xFFFFFFFFFFFFFFFCLL);
    if ( (*(_WORD *)v11 & 0x1FF) == 9 )
    {
      if ( a5 )
        *a5 = sub_EEB7E0(v10, a2, *(double *)a6.m128i_i64);
      if ( ((*(_BYTE *)(v11 + 2) >> 3) & 7) == 0 || ((*(_BYTE *)(v11 + 2) >> 3) & 7) == 5 )
      {
        v12 = *(_DWORD *)(v11 + 16) * ((*(_WORD *)(v11 + 2) >> 6) & 7u);
        *a4 = v11 + 4LL * *(unsigned int *)(v11 + 4) + 20;
        a4[1] = v12;
        return sub_181E980(a1, a2, v10, a4, a5, *(double *)a6.m128i_i64);
      }
    }
    else if ( a5 )
    {
      *a5 = sub_EEB7E0(v10, a2, *(double *)a6.m128i_i64);
    }
    v14 = sub_EEB7E0(v10, a2, *(double *)a6.m128i_i64);
    sub_168B9F0((__int64)v31, (__int64 *)(a1 + 8), v14, 0xC57u, 0);
    v15 = sub_15DD120((__int64)v31, a2);
    v28[0] = 2;
    sub_180A710(v15, v28);
    sub_15F7200(v31);
    return 0;
  }
  sub_168B9F0((__int64)v31, (__int64 *)(a1 + 8), *(_DWORD *)v10, 0xC57u, 0);
  v16 = sub_15DD120((__int64)v31, a2);
  v24 = 2;
  v21 = sub_180A710(v16, &v24);
  v17 = j__strlen("\"");
  sub_9EC740((__int64)v25, *(_DWORD *)v10, "\"", v17, 0);
  v22 = sub_1589170(v21, v25);
  v23 = j__strlen("\"");
  v18 = sub_15F0EF0(a1, *(_DWORD *)v10, 0, a6, a7);
  sub_9EC740((__int64)v28, v18, "\"", v23, 0);
  sub_1589170(v22, v28);
  if ( v29 != &v30 )
    operator delete(v29);
  if ( v26 != &v27 )
    operator delete(v26);
  sub_15F7200(v31);
  v19 = *(unsigned int **)(*(_QWORD *)(v10 + 8) + 16LL);
  v20 = *v19;
  *a4 = v19 + 4;
  result = 1;
  a4[1] = v20;
  if ( a5 )
    *a5 = *(_DWORD *)v10;
  return result;
}
