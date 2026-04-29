__int64 __fastcall sub_14B8B0(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebp
  _DWORD *v6; // rdi
  __int64 v7; // rbp
  int v8; // edx
  bool v9; // r13
  __int64 v10; // rax
  char *v11; // r14
  int v12; // ecx
  __int64 v13; // r15
  int v14; // ecx
  unsigned int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // r9d
  __int64 v19; // r15
  __m128i *v20; // r13
  __int64 v21; // rax
  char *v22; // rsi
  __int64 v23; // rax
  __int64 v24; // [rsp+8h] [rbp-80h]
  unsigned __int8 *v25; // [rsp+10h] [rbp-78h] BYREF
  __int64 v26; // [rsp+18h] [rbp-70h] BYREF
  unsigned __int64 v27; // [rsp+20h] [rbp-68h] BYREF
  __m128i *v28; // [rsp+28h] [rbp-60h]
  _QWORD v29[11]; // [rsp+30h] [rbp-58h] BYREF

  v29[3] = __readfsqword(0x28u);
  if ( *(_BYTE *)(a2 + 32) != 4 || *(_BYTE *)(a2 + 48) != 4 )
    return 0;
  v6 = *(_DWORD **)(a2 + 40);
  v7 = *(_QWORD *)(a2 + 56);
  v8 = *(_DWORD *)v7;
  if ( *v6 == 20 )
  {
    if ( v8 == 9 )
    {
      v9 = 1;
    }
    else
    {
      v9 = 0;
      if ( v8 != 20 )
        return 0;
    }
  }
  else
  {
    v9 = v8 == 20 && *v6 == 9;
    if ( !v9 )
      return 0;
    v6 = *(_DWORD **)(a2 + 56);
    v7 = *(_QWORD *)(a2 + 40);
  }
  v10 = sub_118E60((__int64)v6, &v25);
  v11 = (char *)v10;
  if ( !v10 )
    return 0;
  v24 = *(_QWORD *)(*(_QWORD *)(v10 + 8) + 16LL);
  if ( *(_DWORD *)v7 != 9 )
  {
    if ( *(_DWORD *)v7 != 20 )
      goto LABEL_11;
LABEL_26:
    v23 = sub_118E60(v7, &v26);
    if ( !v23 )
      return 0;
    v13 = *(_QWORD *)(*(_QWORD *)(v23 + 8) + 16LL);
    goto LABEL_13;
  }
  if ( *(_BYTE *)(v7 + 32) == 4 && **(_DWORD **)(v7 + 40) == 20 )
  {
    v7 = *(_QWORD *)(v7 + 40);
    goto LABEL_26;
  }
LABEL_11:
  v12 = *(_DWORD *)(v7 + 36);
  v13 = -1;
  v26 = v7 + 32;
  v14 = 8 * v12;
  if ( (unsigned __int64)v14 <= 0x3F )
    v13 = (1LL << v14) - 1;
LABEL_13:
  if ( *(_DWORD *)a2 == 12 && (v13 & v24) != 0 )
    return 0;
  LOBYTE(v15) = sub_121B90(v25, a1, v26, v9);
  v3 = v15;
  if ( !(_BYTE)v15 || *v25 == 4 && (unsigned __int8)sub_11CB60(*((_BYTE **)v25 + 1), a1, 0, v16, v17, v18) )
    return 0;
  if ( *(_DWORD *)a2 == 19 )
  {
    v19 = v24 | v13;
    goto LABEL_19;
  }
  if ( *(_DWORD *)a2 == 12 )
  {
    v19 = v24 + v13;
LABEL_19:
    *(_DWORD *)a2 = 20;
    v27 = 0xFFFFFFFF00000000LL;
    v28 = nullptr;
    sub_118FD0((char *)&v27, v11);
    v20 = v28;
    v21 = sub_326890(v19, HIDWORD(v27), 0);
    v22 = (char *)v25;
    v29[1] = 0;
    v29[0] = 0xFFFFFFFF00000000LL;
    v20[1] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v21, (__m128i)(unsigned __int64)v21);
    sub_118FD0((char *)v29, v22);
    sub_118FD0((char *)(a2 + 32), (char *)v29);
    sub_118FD0((char *)(a2 + 48), (char *)&v27);
    sub_119360((__int64)v29);
    sub_119360((__int64)&v27);
    return v3;
  }
  return 0;
}
