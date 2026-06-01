unsigned __int64 __fastcall sub_1B10BB0(__int64 *a1, unsigned __int64 a2, int a3, int a4, int a5, __m128 a6, __m128 a7)
{
  unsigned int v7; // r9d
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  char v14; // al
  unsigned __int64 v15; // rdx
  _QWORD *v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // rcx
  unsigned __int64 v21; // rsi
  int v22; // eax
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rax
  int v28; // [rsp+Ch] [rbp-3Ch] BYREF
  unsigned __int64 v29; // [rsp+10h] [rbp-38h] BYREF
  __int64 v30[6]; // [rsp+18h] [rbp-30h] BYREF

  v7 = 103;
  v11 = a1[1];
  v29 = a2;
  v12 = *(unsigned int *)(v11 + 344);
  v28 = 103;
  v30[0] = 0;
  if ( (_DWORD)v12 )
  {
    v13 = *(_QWORD *)(v11 + 336) + 6776 * v12 - 6776;
    if ( *(_QWORD *)(v13 + 6768) == *(_QWORD *)(v11 + 328) )
    {
      v24 = *(unsigned int *)(v13 + 8);
      v25 = *(unsigned int *)(v11 + 27504);
      if ( (unsigned int)v24 > (unsigned int)v25 )
      {
        v26 = v24 - v25;
        if ( v26 )
        {
          v27 = *(_QWORD *)v13 + 1688 * (v26 - 1);
          if ( v27 )
            v7 = *(_DWORD *)(v27 + 976);
        }
      }
    }
  }
  v14 = sub_1B108C0(&v29, *a1, 81, 0, 1, v7, a6, a7, &v28, v30);
  v15 = 0;
  if ( v14 )
  {
    v16 = (_QWORD *)sub_168B6C0((__int64)a1);
    v19 = v16[294];
    v16[304] += 40LL;
    v15 = (v19 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v16[295] >= v15 + 40 && v19 )
      v16[294] = v15 + 40;
    else
      v15 = sub_986170((__int64)(v16 + 294), 40, 40, 3, v17, v18);
    v20 = v30[0];
    v21 = v29;
    *(_DWORD *)(v15 + 28) = a4;
    v22 = v28;
    *(_DWORD *)(v15 + 4) = a5;
    *(_DWORD *)v15 = a3;
    *(_DWORD *)(v15 + 8) = 81;
    *(_QWORD *)(v15 + 32) = v21;
    *(_QWORD *)(v15 + 16) = v20;
    *(_DWORD *)(v15 + 24) = v22;
  }
  return v15;
}
