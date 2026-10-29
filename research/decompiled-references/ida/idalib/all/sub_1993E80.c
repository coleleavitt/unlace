unsigned __int64 __fastcall sub_1993E80(__int64 *a1, __int64 a2, unsigned __int64 a3, _DWORD *a4, __m128 a5, __m128 a6)
{
  unsigned __int64 v6; // r15
  unsigned __int64 v8; // r13
  char v9; // al
  int v10; // eax
  __int64 v11; // rbx
  char *v12; // rbx
  unsigned int v13; // eax
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 v16; // rax
  __int64 v18; // rdi
  char v19; // al
  int v20; // eax
  __int64 v21; // rdx
  _DWORD *v22; // rdx
  unsigned __int16 v23[29]; // [rsp+Eh] [rbp-3Ah] BYREF

  v6 = a3;
  v8 = a3;
  v9 = *(_BYTE *)(a3 + 16);
  if ( v9 == 26 )
  {
    v10 = ((*(_BYTE *)(a3 + 19) >> 1) & 0xF) == 0 ? 15 : 23;
LABEL_3:
    v11 = 8 * ((v10 + 8 * (unsigned int)*(unsigned __int16 *)(a3 + 22)) >> 3) + 8;
    goto LABEL_4;
  }
  v11 = 16;
  if ( v9 != 25 )
  {
    v10 = 15;
    goto LABEL_3;
  }
LABEL_4:
  v12 = (char *)a4 + v11;
  v13 = sub_F6C520(*(_QWORD *)(a3 + 24));
  v16 = sub_1986980(
          a1,
          a2,
          *(_QWORD *)(v8 + 24),
          (__m128i *)(v13 * ((unsigned __int64)&v12[-(v12 != nullptr)] / v13 + (v12 != nullptr))),
          v14,
          v15,
          a5,
          a6);
  if ( (v16 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  if ( v16 != *(_QWORD *)(v8 + 24) )
  {
    v18 = *(_QWORD *)(*a1 + 248);
    v23[0] = 0;
    v6 = sub_A71610(v18, v16, v23);
    v8 = v6;
  }
  v19 = *(_BYTE *)(v6 + 16);
  if ( v19 == 26 )
  {
    v20 = ((*(_BYTE *)(v6 + 19) >> 1) & 0xF) == 0 ? 15 : 23;
  }
  else
  {
    v21 = 16;
    if ( v19 == 25 )
      goto LABEL_11;
    v20 = 15;
  }
  v21 = 8 * ((v20 + 8 * (unsigned int)*(unsigned __int16 *)(v6 + 22)) >> 3) + 8;
LABEL_11:
  sub_1EA6140(a2, v8, v21, 8);
  *v22 = *a4;
  v22[1] = a4[1];
  v22[2] = a4[2];
  v22[3] = a4[3];
  return v8;
}
