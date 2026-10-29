unsigned __int64 __fastcall sub_1F4B5C0(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r13
  __int64 v7; // rdi
  bool v8; // zf
  __int64 v9; // rsi
  unsigned __int64 v10; // r12
  int v11; // eax
  unsigned __int64 v12; // r12
  __int64 v13; // r12
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rdx
  unsigned __int64 result; // rax
  __int64 v26; // rax
  __int64 v27; // [rsp+0h] [rbp-38h] BYREF
  __int64 v28; // [rsp+8h] [rbp-30h]

  sub_1F4B4A0(a1, a2);
  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(unsigned int *)(v4 + 24);
  v6 = *(_QWORD *)(v4 + 16);
  v7 = *(_QWORD *)(v4 + 8);
  v8 = *(_QWORD *)(v6 + 856) == 0;
  v9 = v6;
  *(_DWORD *)(v4 + 24) = v5 + 1;
  v10 = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 8 * v5);
  if ( !v8 )
  {
    sub_1EDF870(v7, v6);
    v26 = *(_QWORD *)(a1 + 16);
    v7 = *(_QWORD *)(v26 + 8);
    v9 = *(_QWORD *)(v26 + 16);
  }
  v11 = __ROR4__(v10, 1);
  v12 = HIDWORD(v10);
  if ( v12 )
    v6 = *(_QWORD *)(*(_QWORD *)(v6 + 3320) + 8LL * (unsigned int)(v12 - 1));
  if ( v11 )
    v11 = v11 + *(_DWORD *)(v6 + 1648) - 2;
  *(_DWORD *)(a2 + 24) = v11;
  v13 = sub_1F6A0A0(v7, v9);
  v14 = sub_1F6A0A0(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL), *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL));
  v28 = v13;
  v27 = v14;
  v15 = *(_QWORD *)(a1 + 16);
  v16 = *(_QWORD *)(v15 + 16);
  v17 = *(_QWORD *)(v15 + 8);
  *(__m128 *)(a2 + 104) = _mm_loadh_ps((const double *)&v27);
  *(_QWORD *)(a2 + 88) = sub_1F6A0A0(v17, v16);
  v27 = sub_1F6A0A0(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL), *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL));
  v28 = sub_1F6A0A0(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL), *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL));
  v18 = *(_QWORD *)(a1 + 16);
  v19 = *(_QWORD *)(v18 + 16);
  v20 = *(_QWORD *)(v18 + 8);
  *(__m128 *)(a2 + 120) = _mm_loadh_ps((const double *)&v27);
  v21 = sub_1F6A0A0(v20, v19);
  v22 = *(_QWORD *)(a1 + 16);
  v23 = *(unsigned int *)(v22 + 24);
  *(_DWORD *)(v22 + 24) = v23 + 1;
  v24 = *(_QWORD *)(*(_QWORD *)(v22 + 32) + 8 * v23);
  *(_QWORD *)(a2 + 96) = v21;
  *(_BYTE *)(a2 + 65) = (32 * (v24 & 3)) | *(_BYTE *)(a2 + 65) & 0x9F;
  result = sub_1EE13A0(
             *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL),
             *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL),
             (__int64 *)(*(_QWORD *)(a1 + 16) + 32LL),
             (_DWORD *)(*(_QWORD *)(a1 + 16) + 24LL));
  if ( result )
  {
    result = 2 * result + 1;
    *(_QWORD *)(a2 + 136) = result;
  }
  else
  {
    *(_QWORD *)(a2 + 136) = 0;
  }
  return result;
}
