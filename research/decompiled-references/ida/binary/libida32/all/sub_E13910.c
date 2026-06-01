__int64 __fastcall sub_E13910(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rbx
  __m128i si128; // xmm0
  size_t v5; // rbx
  void *v6; // r14
  unsigned int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 *v10; // r8
  __int64 *v11; // rax
  __int64 v12; // rax
  unsigned int v13; // r9d
  __int64 *v14; // r8
  __int64 v15; // rcx
  unsigned int v16; // eax
  __int64 v17; // rax
  unsigned int v18; // ebx
  unsigned int v20; // [rsp+Ch] [rbp-13Ch]
  __int64 *v21; // [rsp+10h] [rbp-138h]
  __int64 v22; // [rsp+18h] [rbp-130h]
  __int64 *v23; // [rsp+28h] [rbp-120h] BYREF
  __int64 (__fastcall **v24)(); // [rsp+30h] [rbp-118h] BYREF
  int v25; // [rsp+38h] [rbp-110h]
  __int128 v26; // [rsp+40h] [rbp-108h]
  __int64 v27; // [rsp+50h] [rbp-F8h]
  char v28; // [rsp+58h] [rbp-F0h]
  int v29; // [rsp+5Ch] [rbp-ECh]
  void **p_ptr; // [rsp+60h] [rbp-E8h]
  void *ptr; // [rsp+70h] [rbp-D8h] BYREF
  size_t n[2]; // [rsp+78h] [rbp-D0h]
  _BYTE v33[192]; // [rsp+88h] [rbp-C0h] BYREF

  v2 = *(_QWORD *)(sub_B68470(a2 + 72) + 16);
  if ( (v2 & 4) != 0 )
    v3 = *(_QWORD *)(v2 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v3 = v2 & 0xFFFFFFFFFFFFFFF8LL;
  si128 = _mm_load_si128((const __m128i *)&xmmword_2384D00);
  if ( v3 )
    v3 -= 64LL;
  ptr = v33;
  *(__m128i *)n = si128;
  v26 = 0;
  v25 = 2;
  v24 = &off_2BC1F40;
  v28 = 0;
  v29 = 1;
  v27 = 0;
  p_ptr = &ptr;
  sub_2257B70(&v24, 0, 0, 0);
  (*(void (__fastcall **)(_QWORD, unsigned __int64, __int64 (__fastcall ***)()))(**(_QWORD **)(a1 + 16) + 240LL))(
    *(_QWORD *)(a1 + 16),
    v3,
    &v24);
  v5 = n[0];
  v6 = ptr;
  v7 = sub_2220DF0(ptr, n[0]);
  v8 = (unsigned int)sub_2220F70(a1 + 24, v6, v5, v7);
  v10 = (__int64 *)(*(_QWORD *)(a1 + 24) + 8 * v8);
  if ( *v10 )
  {
    if ( *v10 != -8 )
    {
      sub_E138D0(&v23, v10, 0);
      v11 = v23;
      goto LABEL_12;
    }
    --*(_DWORD *)(a1 + 40);
  }
  v21 = v10;
  v20 = v8;
  v12 = sub_220C370(v5 + 17, 8, v8, v9, v10, v8);
  v13 = v20;
  v14 = v21;
  v15 = v12;
  if ( v5 )
  {
    v22 = v12;
    memcpy((void *)(v12 + 16), v6, v5);
    v15 = v22;
    v14 = v21;
    v13 = v20;
  }
  *(_BYTE *)(v15 + v5 + 16) = 0;
  *(_QWORD *)v15 = v5;
  *(_DWORD *)(v15 + 8) = 0;
  *v14 = v15;
  ++*(_DWORD *)(a1 + 36);
  v16 = sub_2221390(a1 + 24, v13);
  sub_E138D0(&v23, (__int64 *)(*(_QWORD *)(a1 + 24) + 8LL * v16), 0);
  v11 = v23;
LABEL_12:
  v17 = *v11;
  v18 = *(_DWORD *)(v17 + 8) + 1;
  *(_DWORD *)(v17 + 8) = v18;
  v24 = (__int64 (__fastcall **)())&unk_2C4C288;
  sub_2257A60(&v24);
  if ( ptr != v33 )
    free(ptr);
  return v18;
}

