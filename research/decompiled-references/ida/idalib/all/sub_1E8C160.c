char __fastcall sub_1E8C160(_QWORD *a1, __int64 a2, __m128 a3, __m128 a4)
{
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 *v10; // rax
  unsigned __int64 v11; // rdx
  __int64 *v12; // rbx
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  char result; // al
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  _QWORD *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9

  v6 = sub_A71450(a1[31], a2);
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 6 )
    return 0;
  v10 = (__int64 *)(v6 & 0xFFFFFFFFFFFFFFF0LL);
  v11 = v10[1];
  v12 = v10;
  if ( (v11 & 8) != 0 )
  {
    v11 = ((*(__int64 *)((char *)&qword_18 + (v10[1] & 0xFFFFFFFFFFFFFFF0LL)) | v10[1] & 7uLL) >> 6) & 6;
    if ( (_DWORD)v11 )
      return 0;
  }
  v13 = 0;
  if ( sub_F62670(*v10, nullptr, v11, v7, v8, v9) )
    return 0;
  v19 = a1[31];
  v20 = *(_QWORD *)(v19 + 2320);
  if ( (*(_BYTE *)(v20 + 16) & 1) != 0 || *(char *)(v20 + 15) < 0 )
  {
    v13 = a2;
    if ( (unsigned __int8)sub_A976E0(v19, a2, v14, v15, v16) )
      return 0;
  }
  result = sub_F61140(*v12, v13, v14, v15, v16, v17);
  if ( !result )
  {
    result = 1;
    v24 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*v12 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 57;
    if ( (unsigned int)v24 > 1 )
    {
      v25 = sub_F63270(*v12, v13, v24, v21, v22, v23);
      if ( v25 )
        return sub_1E8C0F0(a1, (__int64)v25, v26, v27, v28, v29, a3, a4);
      return 0;
    }
  }
  return result;
}
