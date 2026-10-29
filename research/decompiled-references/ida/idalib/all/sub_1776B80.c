unsigned __int64 __fastcall sub_1776B80(_QWORD *a1, __int64 a2, unsigned __int64 a3, _DWORD *a4)
{
  unsigned __int64 v4; // r15
  unsigned __int64 v6; // r13
  char v7; // al
  int v8; // eax
  __int64 v9; // rbx
  char *v10; // rbx
  unsigned int v11; // eax
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // rax
  __int64 v16; // rdi
  char v17; // al
  int v18; // eax
  __int64 v19; // rdx
  _DWORD *v20; // rdx
  unsigned __int16 v21[29]; // [rsp+Eh] [rbp-3Ah] BYREF

  v4 = a3;
  v6 = a3;
  v7 = *(_BYTE *)(a3 + 16);
  if ( v7 == 26 )
  {
    v8 = ((*(_BYTE *)(a3 + 19) >> 1) & 0xF) == 0 ? 15 : 23;
LABEL_3:
    v9 = 8 * ((v8 + 8 * (unsigned int)*(unsigned __int16 *)(a3 + 22)) >> 3) + 8;
    goto LABEL_4;
  }
  v9 = 16;
  if ( v7 != 25 )
  {
    v8 = 15;
    goto LABEL_3;
  }
LABEL_4:
  v10 = (char *)a4 + v9;
  v11 = sub_F6C520(*(_QWORD *)(a3 + 24));
  v14 = sub_17687F0(
          a1,
          a2,
          *(_QWORD *)(v6 + 24),
          (const __m128i *)(v11 * ((unsigned __int64)&v10[-(v10 != nullptr)] / v11 + (v10 != nullptr))),
          v12,
          v13);
  if ( (v14 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  if ( *(_DWORD *)(*a1 + 12632LL) || v14 != *(_QWORD *)(v6 + 24) )
  {
    v16 = *(_QWORD *)(*a1 + 248LL);
    v21[0] = 0;
    v6 = sub_A71610(v16, v14, v21);
    v4 = v6;
  }
  v17 = *(_BYTE *)(v4 + 16);
  if ( v17 == 26 )
  {
    v18 = ((*(_BYTE *)(v4 + 19) >> 1) & 0xF) == 0 ? 15 : 23;
  }
  else
  {
    v19 = 16;
    if ( v17 == 25 )
      goto LABEL_12;
    v18 = 15;
  }
  v19 = 8 * ((v18 + 8 * (unsigned int)*(unsigned __int16 *)(v4 + 22)) >> 3) + 8;
LABEL_12:
  sub_1EA6140(a2, v6, v19, 8);
  *v20 = *a4;
  v20[1] = a4[1];
  v20[2] = a4[2];
  v20[3] = a4[3];
  return v6;
}
