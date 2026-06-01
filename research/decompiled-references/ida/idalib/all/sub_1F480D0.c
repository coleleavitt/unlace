void __fastcall sub_1F480D0(__int64 *a1, __int64 a2)
{
  __int64 v4; // rax
  _QWORD *v5; // rbx
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rbx
  __int64 v21; // rbp
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __m128i v28[3]; // [rsp+0h] [rbp-38h] BYREF

  sub_1F458C0((__int64)a1, a2);
  *(_QWORD *)(a2 + 56) = sub_1EE7800(a1[2]);
  v4 = a1[2];
  v5 = *(_QWORD **)(v4 + 8);
  v6 = sub_1EE13A0((__int64)v5, *(_QWORD *)(v4 + 16), (__int64 *)(v4 + 32), (_DWORD *)(v4 + 24));
  v11 = sub_1EDB980(v5, v6, v7, v8, v9, v10);
  if ( !*(_QWORD *)(a2 + 48) )
    *(_QWORD *)(a2 + 48) = v11;
  v12 = a1[2];
  v13 = *(unsigned int *)(v12 + 24);
  *(_DWORD *)(v12 + 24) = v13 + 1;
  *(_BYTE *)(a2 + 80) = (*(_QWORD *)(*(_QWORD *)(v12 + 32) + 8 * v13) != 0) | *(_BYTE *)(a2 + 80) & 0xFE;
  v14 = a1[2];
  v15 = *(_QWORD *)(v14 + 32);
  v16 = *(unsigned int *)(v14 + 24);
  v17 = (unsigned int)(v16 + 2);
  *(_DWORD *)(a2 + 64) = *(_QWORD *)(v15 + 8 * v16) & 0xFFFFF | *(_DWORD *)(a2 + 64) & 0xFFF00000;
  v18 = *(_QWORD *)(v15 + 8LL * (unsigned int)(v16 + 1));
  *(_DWORD *)(v14 + 24) = v17;
  *(_WORD *)(a2 + 66) = (16 * v18) | *(_WORD *)(a2 + 66) & 0xF;
  if ( (*(_BYTE *)(a2 + 80) & 4) != 0 )
  {
    v19 = *(_DWORD *)(a2 + 84);
    if ( v19 )
    {
      v20 = a2 + 88;
      v21 = a2 + 8LL * (unsigned int)(v19 - 1) + 96;
      while ( 1 )
      {
        v20 += 8;
        *(_QWORD *)(v20 - 8) = sub_1EE7800(v14);
        if ( v21 == v20 )
          break;
        v14 = a1[2];
      }
    }
  }
  else
  {
    v22 = *(_QWORD *)(v15 + 8 * v17);
    *(_DWORD *)(v14 + 24) = v16 + 3;
    *(_BYTE *)(a2 + 80) = (2 * (v22 & 1)) | *(_BYTE *)(a2 + 80) & 0xFD;
    v23 = a1[2];
    v24 = *(unsigned int *)(v23 + 24);
    *(_DWORD *)(v23 + 24) = v24 + 1;
    if ( *(_QWORD *)(*(_QWORD *)(v23 + 32) + 8 * v24) )
    {
      sub_1F18E50(v28, v23);
      sub_BC4990(a2, *(_QWORD **)(*a1 + 144), v28, v25, v26, v27);
    }
  }
}
