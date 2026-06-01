__int64 __fastcall sub_D5A3F0(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // r14
  __int64 v3; // r13
  void *v4; // rbp
  __int64 v5; // rbx
  __m128i v6; // xmm0
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  void *v11; // rax
  __int64 v12; // rdx
  unsigned int v13; // ebx
  __m128i v15; // [rsp+0h] [rbp-88h] BYREF
  void *v16; // [rsp+10h] [rbp-78h]
  __int64 v17; // [rsp+18h] [rbp-70h]
  __m128i v18; // [rsp+20h] [rbp-68h] BYREF
  void *v19; // [rsp+30h] [rbp-58h] BYREF
  int v20; // [rsp+38h] [rbp-50h]
  void *v21; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v22; // [rsp+48h] [rbp-40h]
  void *v23; // [rsp+50h] [rbp-38h] BYREF
  unsigned int v24; // [rsp+58h] [rbp-30h]
  char v25; // [rsp+5Ch] [rbp-2Ch]

  v2 = a1[70];
  v3 = a1[154];
  a1[155] = *a2;
  v4 = (void *)*(unsigned __int16 *)sub_DFDA20(v2, 8);
  sub_DFDA50(v2, 8);
  v5 = a1[70];
  v15 = _mm_loadu_si128((const __m128i *)sub_DFDA20(v5, 16));
  sub_DFDA50(v5, 16);
  v6 = _mm_load_si128(&v15);
  v19 = nullptr;
  v20 = 0;
  v18 = v6;
  v11 = (void *)sub_D21170(a1 + 48, v6.m128i_u32[2], v7, v8, v9, v10);
  v24 = 16;
  v17 = v12;
  v16 = v11;
  v19 = v11;
  v23 = v4;
  v20 = v12;
  v25 = 0;
  sub_D27A40((__int64)&v21, (__int64)&v18, 0);
  v13 = sub_D59CD0((__int64)(a1 + 48), v3, (__int64)&v21, (__int64)&v23, &v19);
  if ( v22 > 0x40 && v21 )
    operator delete[](v21);
  if ( v24 > 0x40 && v23 )
    operator delete[](v23);
  return v13;
}

