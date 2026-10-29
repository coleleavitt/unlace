unsigned __int64 __fastcall sub_1DA45E0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, char a5, double a6, double a7)
{
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r12
  __int64 v14; // rsi
  __int64 v15; // rcx
  unsigned __int64 v16; // rbx
  __int64 v18; // rax
  _DWORD *v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rdx
  unsigned int v24; // eax
  __int64 v25; // rdx

  v11 = sub_1D9F590((__int64)a1, *(_QWORD *)(a3 + 32), *(void **)(a4 + 8), 0, 0);
  if ( !v11 )
    return 0;
  v13 = v12;
  v14 = (unsigned __int8)(*(_WORD *)(a3 + 18) >> 3);
  v16 = sub_1D88270(a1, v14, *(_DWORD *)a4, v11, v12, *(_QWORD *)(a3 + 40), a6, a7, *(_DWORD *)(a4 + 16), a5);
  if ( (v16 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v18 = *(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v18 + 16) == 24
    || (v23 = *(_QWORD *)(*(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v23 + 16) == 24)
    && (v18 = sub_F63050(v18, v14, v23, v15)) != 0 )
  {
    sub_1EA6140(a2, *(_QWORD *)(v18 + 40), 4, 4);
    *v19 = *(_DWORD *)(a4 + 16);
    v20 = 16;
    if ( (unsigned __int8)(*(_WORD *)(v16 + 18) >> 3) == 6 )
      v20 = 16LL * (*(_QWORD *)(v16 + 32) != 0);
    v21 = sub_1EA6140(a2, v16, v20, 8);
    if ( (unsigned __int8)(*(_WORD *)(v21 + 18) >> 3) != 6 || *(_QWORD *)(v21 + 32) )
    {
      *(_DWORD *)v22 = *(_DWORD *)a4;
      if ( (unsigned __int8)(*(_WORD *)(v21 + 18) >> 3) != 6 || *(_QWORD *)(v21 + 32) )
        *(_QWORD *)(v22 + 8) = v13;
    }
  }
  else
  {
    sub_1EA6140(a2, v16, 24, 8);
    v24 = *(_DWORD *)a4;
    *(_QWORD *)(v25 + 8) = v13;
    *(_DWORD *)v25 = v24;
    *(_DWORD *)(v25 + 16) = *(_DWORD *)(a4 + 16);
  }
  return v16;
}
