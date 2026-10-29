unsigned __int64 __fastcall sub_633480(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rbx
  void **v5; // rax
  __int64 *v6; // r12
  __int64 v7; // rdx
  char v8; // al
  int v9; // edx
  __int64 v10; // rcx
  int v11; // r8d
  int v12; // r9d
  int v13; // ebx
  __m128i si128; // xmm0
  int v15; // edx
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d
  void *v20[2]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v21; // [rsp+10h] [rbp-28h]
  int v22[2]; // [rsp+18h] [rbp-20h]
  int v23; // [rsp+20h] [rbp-18h]
  int v24; // [rsp+28h] [rbp-10h]
  __int64 v25; // [rsp+30h] [rbp-8h]

  *(_QWORD *)v22 = __readfsqword(0x28u);
  register_undo_handler(164, sub_6302A0, 0, 1);
  sub_62FF70(a1 + 640, a1);
  v4 = *(_QWORD *)(a1 + 1672);
  v5 = *(void ***)v4;
  v6 = *(__int64 **)(v4 + 24);
  v7 = *(_QWORD *)v4 + 640LL;
  v20[0] = v5;
  if ( v5 )
    v20[1] = v5[190];
  else
    v20[1] = (void *)-1LL;
  v21 = v7;
  v8 = sub_6317E0((__int64 *)v20, (__int64)&unk_2B34DE0, 0, v1, v2, v3);
  if ( *((_BYTE *)v6 + 28) )
  {
    v10 = *v6;
    v9 = 4;
    if ( (v8 & 4) != 0 )
    {
      v10 = v6[1];
      v9 = 8;
    }
    v6[2] = v10;
    *((_DWORD *)v6 + 6) = v9;
  }
  v13 = v4 + 1080;
  *(__m128i *)v20 = _mm_load_si128((const __m128i *)&xmmword_23A7910);
  rangeset_t_add(v13, (int)v20, v9, v10, v11, v12, (int)v20[0], v20[1], v21, v22[0], v23, v24, v25);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A7920);
  rangeset_t_add(
    v13,
    (int)v20,
    v15,
    v16,
    v17,
    v18,
    si128.m128i_i32[0],
    (void *)si128.m128i_i64[1],
    v21,
    v22[0],
    v23,
    v24,
    v25);
  return *(_QWORD *)v22 - __readfsqword(0x28u);
}
