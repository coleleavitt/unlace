__int64 __fastcall sub_1424250(__int64 a1, __m128i a2, double a3)
{
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r13
  __int64 v9; // rbp
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  int v13; // r15d
  unsigned __int64 v14; // rbp
  char v15; // al
  __int64 v16; // rdi
  __int64 v17; // rdi
  int v18; // r15d
  __int64 v19; // rcx
  int v20; // ebp
  unsigned int v21; // eax
  int *v22; // rdx
  int v23; // esi
  unsigned int v24; // eax
  int v25; // ebp
  int v26; // edx
  int v27; // edi
  int v28; // esi
  __int64 v29; // [rsp+8h] [rbp-D0h]
  int v30; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v31; // [rsp+18h] [rbp-C0h]
  __int16 v32; // [rsp+20h] [rbp-B8h]
  _QWORD v33[2]; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v34; // [rsp+40h] [rbp-98h]
  _DWORD v35[34]; // [rsp+50h] [rbp-88h] BYREF

  ++*(_DWORD *)(a1 + 2304);
  result = sub_141B710(a1, (__int64)&v30, 2, nullptr, a2, a3);
  if ( v32 == 2 )
    return result;
  sub_1421C50(a1, (__int64)"undef", 0);
  if ( (unsigned __int16)(v32 - 7) <= 0xCu || v32 == 1 )
  {
    sub_1423DB0((__int64)v33, (_QWORD *)a1, 0, v5, v6, v7);
    BUG();
  }
  v8 = v31;
  sub_1423DB0((__int64)v33, (_QWORD *)a1, v31, v5, v6, v7);
  if ( (*(_BYTE *)(v8 + 5) & 2) != 0 )
    sub_145FCF0(a1, &v30, 1);
  result = v34;
  if ( v34 )
  {
    result = *(_QWORD *)(v33[1] + 8 * v34 - 8);
    v9 = *(_QWORD *)(result + 16);
  }
  else
  {
    if ( (v33[0] & 0xFFFFFFFFFFFFFFF8LL) == 0 )
      goto LABEL_24;
    result = (__int64)sub_13F1C60((__int64 *)(v33[0] & 0xFFFFFFFFFFFFFFF8LL));
    if ( !result )
      goto LABEL_24;
    v9 = *(_QWORD *)(result + 16);
  }
  if ( v9 )
  {
    if ( *(char *)(v9 + 36) >= 0 && (*(_BYTE *)(v9 + 37) & 2) != 0 )
    {
      sub_FC70B0((__int64)v35, *(_QWORD *)(a1 + 48), *(_DWORD *)v9, 1292);
      sub_AEA040((__int64)v35);
    }
    if ( sub_141A500(*(__int64 **)(a1 + 88), v9, (_WORD *)(*(_QWORD *)(v8 + 16) + 16LL), **(unsigned int **)(v8 + 16)) )
    {
      sub_FC70B0((__int64)v35, *(_QWORD *)(a1 + 48), v30, 1251);
      sub_AEA040((__int64)v35);
      if ( (*(_BYTE *)(v9 + 37) & 2) == 0 )
        goto LABEL_14;
    }
    else if ( (*(_BYTE *)(v9 + 37) & 2) == 0 )
    {
      goto LABEL_14;
    }
    v18 = *(_DWORD *)v9;
    if ( (*(_BYTE *)(a1 + 2104) & 1) != 0 )
    {
      v19 = a1 + 2112;
      v20 = 31;
    }
    else
    {
      v25 = *(_DWORD *)(a1 + 2120);
      v19 = *(_QWORD *)(a1 + 2112);
      if ( !v25 )
        goto LABEL_14;
      v20 = v25 - 1;
    }
    v29 = v19;
    v35[0] = v18;
    v21 = v20 & sub_101AC30(v35);
    v22 = (int *)(v29 + 4LL * v21);
    v23 = *v22;
    if ( *v22 == v18 )
    {
LABEL_30:
      *v22 = -2;
      v24 = *(_DWORD *)(a1 + 2104);
      ++*(_DWORD *)(a1 + 2108);
      *(_DWORD *)(a1 + 2104) = (2 * (v24 >> 1) - 2) | v24 & 1;
      goto LABEL_14;
    }
    v26 = 1;
    if ( v23 != -1 )
    {
      do
      {
        v27 = v26 + 1;
        v21 = v20 & (v26 + v21);
        v22 = (int *)(v29 + 4LL * v21);
        v28 = *v22;
        if ( v18 == *v22 )
          goto LABEL_30;
        v26 = v27;
      }
      while ( v28 != -1 );
    }
LABEL_14:
    v12 = *(_QWORD *)(a1 + 128);
    v13 = v30;
    *(_QWORD *)(a1 + 208) += 16LL;
    v14 = (v12 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    if ( *(_QWORD *)(a1 + 136) >= v14 + 16 && v12 )
      *(_QWORD *)(a1 + 128) = v14 + 16;
    else
      v14 = sub_986170(a1 + 128, 16, 16, 4, v10, v11);
    v15 = *(_BYTE *)(v14 + 12);
    v16 = *(_QWORD *)(a1 + 1192);
    *(_QWORD *)v14 = 0;
    *(_DWORD *)(v14 + 8) = v13;
    *(_BYTE *)(v14 + 12) = v15 & 0xF0 | 9;
    if ( v16 )
      (*(void (__fastcall **)(__int64, int *, _QWORD *, unsigned __int64))(*(_QWORD *)v16 + 264LL))(v16, &v30, v33, v14);
    return sub_144BC70(a1, v8);
  }
LABEL_24:
  v17 = *(_QWORD *)(a1 + 1192);
  if ( v17 )
    return (*(__int64 (__fastcall **)(__int64, int *, _QWORD *, _QWORD))(*(_QWORD *)v17 + 264LL))(v17, &v30, v33, 0);
  return result;
}
