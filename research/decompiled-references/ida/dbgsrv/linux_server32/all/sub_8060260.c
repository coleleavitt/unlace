/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8060260
// Address: 0x08060260

//----- (08060260) --------------------------------------------------------
int __cdecl sub_8060260(int a1, signed int a2, int a3, char a4)
{
  char *v4; // eax
  char *v5; // edx
  unsigned __int64 v6; // xmm1_8
  char *v7; // eax
  int result; // eax
  int v9; // eax
  int (__cdecl **v10)(_DWORD, int); // ecx
  int v11; // eax
  int v12; // ebx
  int v13; // ecx
  int v14; // edx
  size_t v15; // edx
  void *v16; // eax
  int v17; // eax
  int v18; // eax
  int *v19; // eax
  void *v20; // eax
  size_t v21; // [esp-74h] [ebp-74h]
  char *v22; // [esp-70h] [ebp-70h]
  int v23; // [esp-68h] [ebp-68h]
  char **v24; // [esp-64h] [ebp-64h]
  char *v25; // [esp-64h] [ebp-64h]
  int v26; // [esp-50h] [ebp-50h] BYREF
  unsigned __int64 v27; // [esp-4Ch] [ebp-4Ch] BYREF
  int v28; // [esp-44h] [ebp-44h]
  char v29; // [esp-40h] [ebp-40h]
  int v30; // [esp-3Ch] [ebp-3Ch]
  void *v31[6]; // [esp-38h] [ebp-38h] BYREF
  unsigned int v32; // [esp-20h] [ebp-20h]

  v32 = __readgsdword(0x14u);
  v24 = sub_805FDA0(a1, a2);
  v4 = *(char **)(a1 + 692);
  v5 = &v4[4 * *(_DWORD *)(a1 + 696)];
  if ( v4 != v5 )
  {
    while ( *(_DWORD *)v4 != a2 )
    {
      v4 += 4;
      if ( v5 == v4 )
        goto LABEL_18;
    }
    if ( v5 != v4 )
    {
      memmove(v4, v4 + 4, v5 - v4 - 4);
      --*(_DWORD *)(a1 + 696);
      goto LABEL_7;
    }
  }
LABEL_18:
  v9 = sub_8068DC0(a1, &v26, a2, -1);
  v10 = (int (__cdecl **)(_DWORD, int))v9;
  if ( v9 == -1 )
  {
    v19 = __errno_location();
    v20 = sub_80D0500(*v19);
    sub_8058E20(a1, (char *)&qword_811CFF4 - 269732, a2, v20);
    result = 0;
    goto LABEL_16;
  }
  if ( v9 != a2 || (_BYTE)v26 != 127 )
    goto LABEL_20;
  if ( *(_BYTE *)(a1 + 734) )
  {
    if ( v26 >> 16 == 128 )
      goto LABEL_7;
LABEL_20:
    v11 = *(_DWORD *)(a1 + 664);
    if ( !v11 )
      goto LABEL_27;
    v23 = (int)v10;
    v12 = a1 + 660;
    do
    {
      while ( 1 )
      {
        v13 = *(_DWORD *)(v11 + 8);
        v14 = *(_DWORD *)(v11 + 12);
        if ( *(_DWORD *)(v11 + 16) < a2 )
          break;
        v12 = v11;
        v11 = *(_DWORD *)(v11 + 8);
        if ( !v13 )
          goto LABEL_25;
      }
      v11 = *(_DWORD *)(v11 + 12);
    }
    while ( v14 );
LABEL_25:
    v10 = (int (__cdecl **)(_DWORD, int))v23;
    if ( a1 + 660 != v12 && *(_DWORD *)(v12 + 16) <= a2 )
    {
      *(_BYTE *)(v12 + 44) = 1;
      if ( v23 <= 0 )
        goto LABEL_7;
    }
    else
    {
LABEL_27:
      *(_BYTE *)(v11 + 24) = 1;
      if ( (int)v10 <= 0 )
        goto LABEL_7;
    }
    sub_805A080((_DWORD *)a1, v10, (int (__cdecl **)(_DWORD, int))v26);
    goto LABEL_7;
  }
  if ( (v26 & 0xFF00) != 0x1300 )
    goto LABEL_20;
LABEL_7:
  memset(v31, 0, sizeof(v31));
  v6 = *(__int64 *)((char *)&qword_811CFF4 - 258036);
  v29 = 0;
  v28 = -1;
  v30 = 0;
  v27 = v6;
  sub_80C6150(&v27, 3);
  if ( (v30 & 0xFFFFFFFu) - 9 > 1 && (v30 & 0xFFFFFFF) != 3 )
  {
    if ( v32 == __readgsdword(0x14u) )
      sub_8054DA0();
LABEL_48:
    sub_80D7AB0();
  }
  if ( v24 + 8 != (char **)v31 )
  {
    v7 = v24[9];
    v22 = v7;
    if ( !v7 || (v15 = (size_t)(v7 - 1), v7 == (char *)1) )
    {
      v31[1] = nullptr;
    }
    else
    {
      v25 = v24[8];
      v16 = v31[0];
      if ( v31[2] < v22 )
      {
        v21 = v15;
        v16 = sub_80CF920((int)v31, v31[0], (unsigned int)v22, 1u);
        v15 = v21;
        v31[0] = v16;
      }
      v31[1] = v22;
      memmove(v16, v25, v15);
      *((_BYTE *)v31[0] + (unsigned int)v22 - 1) = 0;
    }
  }
  v27 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD *)(a1 + 724)), _mm_cvtsi32_si128(a2)).m128i_u64[0];
  if ( a4 )
    a3 = ptrace(PTRACE_PEEKUSER, a2, 48, 0);
  v29 = 1;
  v28 = a3;
  if ( (v30 & 0xFFFFFFF) != 0 )
  {
    v17 = *(_DWORD *)(a1 + 64);
    if ( v17 == *(_DWORD *)(a1 + 68) )
    {
      sub_80600D0((_DWORD *)(a1 + 56), (int)&v27);
    }
    else
    {
      *(_BYTE *)(v17 - 32) = 0;
      v18 = v17 - 44;
      *(_DWORD *)(v18 + 8) = -1;
      *(_QWORD *)v18 = v6;
      *(_DWORD *)(v18 + 16) = 0;
      sub_80C62B0(v18, (int)&v27);
      *(_DWORD *)(a1 + 64) -= 44;
    }
    *(_BYTE *)(a1 + 768) = 0;
  }
  sub_80C6090(&v27);
  result = 1;
LABEL_16:
  if ( v32 != __readgsdword(0x14u) )
    goto LABEL_48;
  return result;
}
// 811CFF4: using guessed type __int64 qword_811CFF4;
