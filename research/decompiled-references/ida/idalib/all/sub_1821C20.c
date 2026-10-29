__int64 __fastcall sub_1821C20(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4, __m128i a5, double a6)
{
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  unsigned int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r15
  size_t v16; // rax
  __int64 v17; // r15
  int v18; // eax
  unsigned int *v19; // rax
  __int64 v20; // rdx
  size_t v21; // [rsp+8h] [rbp-160h]
  int v22; // [rsp+1Ch] [rbp-14Ch] BYREF
  _DWORD v23[6]; // [rsp+20h] [rbp-148h] BYREF
  void *v24; // [rsp+38h] [rbp-130h]
  __int64 v25; // [rsp+48h] [rbp-120h] BYREF
  int v26[6]; // [rsp+60h] [rbp-108h] BYREF
  void *v27; // [rsp+78h] [rbp-F0h]
  __int64 v28; // [rsp+88h] [rbp-E0h] BYREF
  _BYTE v29[200]; // [rsp+A0h] [rbp-C8h] BYREF

  v7 = *(_QWORD *)(a2 + 8LL * a3 + 80);
  v8 = v7 & 0xFFFFFFFFFFFFFFFCLL;
  if ( *(unsigned __int16 *)(a2 + 56) > a3 && (v7 & 2) != 0 )
  {
    sub_168B9F0((__int64)v29, (__int64 *)(a1 + 8), *(_DWORD *)v8, 0xC57u, 0);
    v14 = sub_15DD120((__int64)v29, a2);
    v22 = 2;
    v15 = sub_180A710(v14, &v22);
    v16 = j__strlen("\"");
    sub_9EC740((__int64)v26, *(_DWORD *)v8, "\"", v16, 0);
    v17 = sub_1589170(v15, v26);
    v21 = j__strlen("\"");
    v18 = sub_15F0EF0(a1, *(_DWORD *)v8, 0, a5, a6);
    sub_9EC740((__int64)v23, v18, "\"", v21, 0);
    sub_1589170(v17, v23);
    if ( v24 != &v25 )
      operator delete(v24);
    if ( v27 != &v28 )
      operator delete(v27);
    sub_15F7200(v29);
    v19 = *(unsigned int **)(*(_QWORD *)(v8 + 8) + 16LL);
    v20 = *v19;
    *a4 = v19 + 4;
    a4[1] = v20;
    return 1;
  }
  else
  {
    v9 = sub_BFD550(*(_QWORD *)(a2 + 8LL * a3 + 80) & 0xFFFFFFFFFFFFFFFCLL);
    if ( (*(_WORD *)v9 & 0x1FF) == 9 && (((*(_BYTE *)(v9 + 2) >> 3) & 7) == 0 || ((*(_BYTE *)(v9 + 2) >> 3) & 7) == 5) )
    {
      v10 = *(_DWORD *)(v9 + 16) * ((*(_WORD *)(v9 + 2) >> 6) & 7u);
      *a4 = v9 + 4LL * *(unsigned int *)(v9 + 4) + 20;
      a4[1] = v10;
      return sub_181E980(a1, a2, v8, a4, nullptr, *(double *)a5.m128i_i64);
    }
    else
    {
      v12 = sub_EEB7E0(v8, a2, *(double *)a5.m128i_i64);
      sub_168B9F0((__int64)v29, (__int64 *)(a1 + 8), v12, 0xC57u, 0);
      v13 = sub_15DD120((__int64)v29, a2);
      v26[0] = 2;
      sub_180A710(v13, v26);
      sub_15F7200(v29);
      return 0;
    }
  }
}
