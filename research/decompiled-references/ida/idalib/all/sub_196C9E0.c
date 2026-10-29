unsigned __int64 __fastcall sub_196C9E0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int8 a5)
{
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r12
  __int64 v12; // rsi
  __int64 v13; // rcx
  unsigned __int64 v14; // rbx
  __int64 v16; // rax
  _DWORD *v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rdx
  unsigned int v22; // eax
  __int64 v23; // rdx

  v9 = sub_1969B50((__int64)a1, *(_QWORD *)(a3 + 32), *(void **)(a4 + 8), 0, 0);
  if ( !v9 )
    return 0;
  v11 = v10;
  v12 = (unsigned __int8)(*(_WORD *)(a3 + 18) >> 3);
  v14 = sub_19001B0(a1, v12, *(_DWORD *)a4, v9, v10, *(_QWORD *)(a3 + 40), *(_DWORD *)(a4 + 16), a5);
  if ( (v14 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v16 = *(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v16 + 16) == 24
    || (v21 = *(_QWORD *)(*(_QWORD *)(v16 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v21 + 16) == 24)
    && (v16 = sub_F63050(v16, v12, v21, v13)) != 0 )
  {
    sub_1EA6140(a2, *(_QWORD *)(v16 + 40), 4, 4);
    *v17 = *(_DWORD *)(a4 + 16);
    v18 = 16;
    if ( (unsigned __int8)(*(_WORD *)(v14 + 18) >> 3) == 6 )
      v18 = 16LL * (*(_QWORD *)(v14 + 32) != 0);
    v19 = sub_1EA6140(a2, v14, v18, 8);
    if ( (unsigned __int8)(*(_WORD *)(v19 + 18) >> 3) != 6 || *(_QWORD *)(v19 + 32) )
    {
      *(_DWORD *)v20 = *(_DWORD *)a4;
      if ( (unsigned __int8)(*(_WORD *)(v19 + 18) >> 3) != 6 || *(_QWORD *)(v19 + 32) )
        *(_QWORD *)(v20 + 8) = v11;
    }
  }
  else
  {
    sub_1EA6140(a2, v14, 24, 8);
    v22 = *(_DWORD *)a4;
    *(_QWORD *)(v23 + 8) = v11;
    *(_DWORD *)v23 = v22;
    *(_DWORD *)(v23 + 16) = *(_DWORD *)(a4 + 16);
  }
  return v14;
}
