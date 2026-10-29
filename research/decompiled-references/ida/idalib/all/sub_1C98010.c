unsigned __int64 __fastcall sub_1C98010(__int64 *a1, __int64 a2, __int64 a3, _DWORD *a4, __m128 a5, __m128 a6)
{
  char v8; // al
  int v9; // eax
  __int64 v10; // rbx
  char *v11; // rbx
  unsigned int v12; // eax
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // rax
  __int64 v17; // rdi
  unsigned __int64 v18; // rbx
  char v19; // al
  int v20; // eax
  __int64 v21; // rdx
  _DWORD *v22; // rdx
  unsigned __int16 v23[21]; // [rsp+Eh] [rbp-2Ah] BYREF

  v8 = *(_BYTE *)(a3 + 16);
  if ( v8 == 26 )
  {
    v9 = ((*(_BYTE *)(a3 + 19) >> 1) & 0xF) == 0 ? 15 : 23;
LABEL_3:
    v10 = 8 * ((v9 + 8 * (unsigned int)*(unsigned __int16 *)(a3 + 22)) >> 3) + 8;
    goto LABEL_4;
  }
  v10 = 16;
  if ( v8 != 25 )
  {
    v9 = 15;
    goto LABEL_3;
  }
LABEL_4:
  v11 = (char *)a4 + v10;
  v12 = sub_F6C520(*(_QWORD *)(a3 + 24));
  v15 = sub_1C892C0(
          a1,
          a2,
          *(_QWORD *)(a3 + 24),
          (const __m128i *)(v12 * ((unsigned __int64)&v11[-(v11 != nullptr)] / v12 + (v11 != nullptr))),
          v13,
          v14,
          a5,
          a6);
  if ( (v15 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v17 = *(_QWORD *)(*a1 + 248);
  v23[0] = 0;
  v18 = sub_A71610(v17, v15, v23);
  v19 = *(_BYTE *)(v18 + 16);
  if ( v19 == 26 )
  {
    v20 = ((*(_BYTE *)(v18 + 19) >> 1) & 0xF) == 0 ? 15 : 23;
  }
  else
  {
    v21 = 16;
    if ( v19 == 25 )
      goto LABEL_11;
    v20 = 15;
  }
  v21 = 8 * ((v20 + 8 * (unsigned int)*(unsigned __int16 *)(v18 + 22)) >> 3) + 8;
LABEL_11:
  sub_1EA6140(a2, v18, v21, 8);
  *v22 = *a4;
  v22[1] = a4[1];
  v22[2] = a4[2];
  v22[3] = a4[3];
  return v18;
}
