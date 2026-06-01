__int64 __fastcall sub_56FE70(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        double a4,
        double a5,
        double a6,
        __m128 a7)
{
  __int16 v7; // ax
  __int64 v9; // rbp
  __int64 v10; // rax
  unsigned int v11; // edx
  __int64 v12; // r12
  const __m128i *v13; // r15
  unsigned int v14; // edx
  unsigned int v15; // r14d
  unsigned int v16; // ebx
  __int64 v18; // rbp
  __int64 v19; // r12
  __int64 v20; // r10
  int v21; // r9d
  const void *v22; // r11
  volatile signed __int32 **v23; // rdx
  volatile signed __int32 *v24; // rax
  unsigned int v25; // ecx
  __int64 v26; // rbx
  char *v27; // r8
  char *v28; // rax
  size_t v29; // rdx
  char *v30; // rdi
  __int64 v31; // rcx
  __int16 v32; // dx
  unsigned __int16 v33; // di
  volatile signed __int32 *v34; // rbx
  __int64 v35; // rdx
  __int64 result; // rax
  char *v37; // rax
  const __m128i *v38; // [rsp+0h] [rbp-88h]
  const void *v39; // [rsp+10h] [rbp-78h]
  char *v40; // [rsp+10h] [rbp-78h]
  int v41; // [rsp+18h] [rbp-70h]
  const void *v42; // [rsp+18h] [rbp-70h]
  unsigned int v43; // [rsp+20h] [rbp-68h]
  __int64 v44; // [rsp+20h] [rbp-68h]
  __int64 v45; // [rsp+28h] [rbp-60h]
  unsigned int v46; // [rsp+30h] [rbp-58h]
  int v47; // [rsp+30h] [rbp-58h]
  __int64 v48; // [rsp+38h] [rbp-50h]
  __m128i v49; // [rsp+40h] [rbp-48h] BYREF

  v7 = BYTE1(a3);
  v9 = a2;
  if ( (a3 & 1) == 0 )
    v7 = *(_WORD *)(a3 + 40);
  if ( v7 )
    __assert_fail("ts_subtree_is_eof(lookahead)", "lib/src/./parser.c", 0x41Fu, "ts_parser__accept");
  sub_55FE40(*(_QWORD *)(a1 + 1216), a2, a3, 1);
  v10 = sub_56D830(*(_QWORD *)(a1 + 1216), a2, sub_55C990, 0, 0, a4, a5, a6, a7);
  v12 = v10;
  if ( v11 )
  {
    v13 = (const __m128i *)v10;
    v48 = v10;
    v38 = (const __m128i *)(v10 + 24LL * v11);
    while ( 1 )
    {
      v49 = _mm_loadu_si128(v13);
      v14 = v49.m128i_u32[2];
      v15 = v49.m128i_i32[2] - 1;
      if ( !v49.m128i_i32[2] )
LABEL_40:
        __assert_fail("root.ptr", "lib/src/./parser.c", 0x43Cu, "ts_parser__accept");
      v16 = v49.m128i_i32[2] - 1;
      while ( 1 )
      {
        v18 = *(_QWORD *)(v49.m128i_i64[0] + 8LL * v16);
        v19 = 8LL * v16;
        if ( (v18 & 1) != 0 )
        {
          if ( (v18 & 8) == 0 )
            break;
          goto LABEL_9;
        }
        if ( (*(_BYTE *)(v18 + 44) & 4) == 0 )
          break;
LABEL_9:
        if ( v16-- == 0 )
          goto LABEL_40;
      }
      if ( (v18 & 1) != 0 )
        __assert_fail("!tree.data.is_inline", "lib/src/./parser.c", 0x42Au, "ts_parser__accept");
      v20 = *(unsigned int *)(v18 + 36);
      v21 = *(_DWORD *)(v18 + 36);
      v22 = (const void *)(v18 - 8 * v20);
      if ( (_DWORD)v20 )
      {
        v23 = (volatile signed __int32 **)(v18 - 8 * v20);
        do
        {
          v24 = *v23;
          if ( ((unsigned __int8)*v23 & 1) == 0 )
          {
            if ( !*v24 )
              __assert_fail("self.ptr->ref_count > 0", "lib/src/./subtree.c", 0x22Bu, "ts_subtree_retain");
            _InterlockedAdd(v24, 1u);
            if ( !*v24 )
              __assert_fail("self.ptr->ref_count != 0", "lib/src/./subtree.c", 0x22Du, "ts_subtree_retain");
          }
          ++v23;
        }
        while ( v23 != (volatile signed __int32 **)v18 );
        v14 = v49.m128i_u32[2];
        v25 = v16 + v21;
        v15 = v21 + v49.m128i_i32[2] - 1;
      }
      else
      {
        v25 = v16;
      }
      v26 = v16 + 1;
      if ( v14 < (unsigned int)v26 )
        __assert_fail("old_end <= self->size", "lib/src/./././././array.h", 0xE2u, "_array__splice");
      v27 = (char *)v49.m128i_i64[0];
      if ( v49.m128i_i32[3] < v15 )
      {
        v45 = v20;
        v43 = v25;
        v46 = v14;
        v41 = v21;
        v39 = (const void *)(v18 - 8 * v20);
        if ( v49.m128i_i64[0] )
        {
          v28 = (char *)off_8C52A8((void *)v49.m128i_i64[0], 8LL * v15);
          v22 = v39;
          v21 = v41;
          v14 = v46;
          v25 = v43;
          v27 = v28;
          v20 = v45;
        }
        else
        {
          v37 = (char *)off_8C52B8(8LL * v15);
          v20 = v45;
          v25 = v43;
          v14 = v46;
          v21 = v41;
          v27 = v37;
          v22 = v39;
        }
        v49.m128i_i64[0] = (__int64)v27;
        v49.m128i_i32[3] = v15;
      }
      if ( (unsigned int)v26 < v14 )
      {
        v44 = v20;
        v47 = v21;
        v42 = v22;
        v40 = v27;
        memmove(&v27[8 * v25], &v27[8 * v26], 8LL * (v14 - (unsigned int)v26));
        v20 = v44;
        v21 = v47;
        v22 = v42;
        v27 = v40;
      }
      if ( v21 )
      {
        v29 = 8 * v20;
        v30 = &v27[v19];
        if ( v22 )
          memcpy(v30, v22, v29);
        else
          memset(v30, 0, v29);
      }
      v31 = *(_QWORD *)(a1 + 1256);
      v32 = *(_WORD *)(v18 + 66);
      v49.m128i_i32[2] = v15;
      if ( (v18 & 1) != 0 )
        v33 = BYTE1(v18);
      else
        v33 = *(_WORD *)(v18 + 40);
      v34 = (volatile signed __int32 *)sub_56C3B0(v33, (__int64)&v49, v32, v31);
      sub_56C9A0(a1 + 1224, (volatile signed __int32 *)v18);
      if ( !v34 )
        goto LABEL_40;
      ++*(_DWORD *)(a1 + 1432);
      if ( *(_QWORD *)(a1 + 1288) )
      {
        if ( (unsigned __int8)sub_56F560(a1, *(_QWORD *)(a1 + 1288), (unsigned __int64)v34) )
        {
          sub_56C9A0(a1 + 1224, *(volatile signed __int32 **)(a1 + 1288));
          *(_QWORD *)(a1 + 1288) = v34;
        }
        else
        {
          sub_56C9A0(a1 + 1224, v34);
        }
      }
      else
      {
        *(_QWORD *)(a1 + 1288) = v34;
      }
      v13 = (const __m128i *)((char *)v13 + 24);
      if ( v13 == v38 )
      {
        v9 = a2;
        v12 = v48;
        break;
      }
    }
  }
  sub_56E7E0(*(__int64 **)(a1 + 1216), *(_DWORD *)(v12 + 16));
  v35 = *(_QWORD *)(a1 + 1216);
  if ( (unsigned int)v9 >= *(_DWORD *)(v35 + 8) )
    sub_55D3D0();
  result = *(_QWORD *)v35 + 48 * v9;
  *(_DWORD *)(result + 40) = 2;
  return result;
}
