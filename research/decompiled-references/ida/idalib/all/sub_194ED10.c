__int64 __fastcall sub_194ED10(__int64 *a1, __int64 a2, __int64 a3, _DWORD *a4, __m128 a5, __m128 a6)
{
  _DWORD *v9; // rbx
  unsigned int v10; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD *v16; // r14
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rbx
  __int64 v23; // rax
  _DWORD *v24; // rdx

  v9 = a4 + 1;
  v10 = sub_F6C520(*(_QWORD *)(a3 + 32));
  v13 = sub_1946010(
          a1,
          a2,
          *(_QWORD *)(a3 + 32),
          v10 * (((unsigned __int64)v9 - (v9 != nullptr)) / v10 + (v9 != nullptr)),
          v11,
          v12,
          a5,
          a6);
  if ( (v13 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v16 = (_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  v17 = v13;
  if ( *(_BYTE *)(*v16 + 16LL) == 41 )
  {
    v18 = (unsigned int)*a4;
    v19 = v13;
    v20 = *a1;
    if ( *(_BYTE *)(*v16 + 40LL) )
      goto LABEL_4;
LABEL_7:
    v21 = sub_1E5F000(v20, v19, v18);
    if ( (v21 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      return 0;
    goto LABEL_8;
  }
  v23 = sub_F63050(*v16, a2, v14, v15);
  v18 = (unsigned int)*a4;
  v20 = *a1;
  v19 = v17;
  if ( !*(_BYTE *)(v23 + 40) )
    goto LABEL_7;
LABEL_4:
  v21 = sub_1E5EFF0(v20, v19, v18);
  if ( (v21 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
LABEL_8:
  sub_1EA6140(a2, v21, 4, 4);
  *v24 = *a4;
  return v21;
}
