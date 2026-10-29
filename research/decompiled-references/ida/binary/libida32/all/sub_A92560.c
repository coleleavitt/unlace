__int64 __fastcall sub_A92560(_QWORD *a1, __int64 a2, unsigned __int8 a3)
{
  unsigned int v3; // ebp
  __int64 v5; // rax
  char v6; // dl
  unsigned int v7; // eax
  unsigned int *v8; // r12
  unsigned __int8 v9; // al
  unsigned int v10; // ebp
  unsigned __int8 v11; // r14
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 result; // rax
  _BYTE *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rbp
  unsigned __int16 v19; // cx
  __int64 *v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r12
  __int64 v25; // r15
  __int64 v26; // r13
  char v27; // al
  __int64 *v28; // rdi
  __int64 v29; // rax
  unsigned __int64 v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rax
  _QWORD *v33; // r12
  unsigned __int64 v34; // rbp
  __int64 v35; // rax
  unsigned __int16 v36; // [rsp+0h] [rbp-228h]
  __int64 v37; // [rsp+0h] [rbp-228h]
  __int64 i; // [rsp+8h] [rbp-220h] BYREF
  bool v39; // [rsp+17h] [rbp-211h] BYREF
  __int64 v40; // [rsp+18h] [rbp-210h] BYREF
  __int64 v41; // [rsp+28h] [rbp-200h]
  __int64 v42; // [rsp+30h] [rbp-1F8h]
  _QWORD v43[4]; // [rsp+40h] [rbp-1E8h] BYREF
  __m128i ptr; // [rsp+60h] [rbp-1C8h] BYREF
  __int64 v45; // [rsp+70h] [rbp-1B8h] BYREF

  v3 = a3;
  for ( i = a2; ; i = v5 )
  {
    v5 = sub_EFF0A0(&i, v3);
    if ( !v6 )
      break;
  }
  v7 = sub_EFEE00(&i);
  if ( v7 == 4 )
  {
    v33 = (_QWORD *)sub_EFF230(&i);
    v34 = *v33 & 0xFFFFFFFFFFFFFFF8LL;
    v35 = sub_A93830(a1, v34);
    if ( v35 == v34 && (*(_BYTE *)v33 & 4) != 0 )
      return i;
    sub_EFF2B0(&ptr, v35, v33[1], 1);
    return sub_A5CE20((__int64)a1, &ptr);
  }
  if ( v7 <= 4 )
  {
    if ( !v7 )
    {
      v15 = (_BYTE *)sub_EFEE90(&i, 0);
      if ( (v15[28] & 0x7F) == 0x44 )
        v15 = (_BYTE *)sub_A91E00(a1, (__int64)v15);
      v16 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v15 + 32LL))(v15);
      sub_EFED60(&ptr, v16);
      return ptr.m128i_i64[0];
    }
    return sub_A92A30();
  }
  if ( v7 == 6 )
  {
    v8 = (unsigned int *)sub_EFF1D0(&i);
    sub_EFE420(&ptr, v8);
    sub_A92E70(v43, a1);
    v9 = sub_EFEA60(v8);
    v10 = *v8;
    v11 = v9;
    v12 = sub_EFEA50(v8);
    v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 32LL))(v12);
    return sub_A5CCD0((__int64)a1, (__int64)v43, v13, (v10 >> 3) & 0x3FFF, v11);
  }
  if ( v7 != 8 )
    return sub_A92A30();
  v17 = sub_EFF4F0(&i);
  v18 = *(_QWORD *)(v17 + 16);
  v19 = (*(_DWORD *)v17 >> 3) & 0x3FFF;
  v42 = *(_WORD *)(v17 + 2) >> 1;
  v36 = v19;
  v41 = v17 + 24;
  v40 = sub_A92560(a1, v18, 1);
  v39 = v40 != v18;
  sub_A93410(&ptr, a1, v41, v42, &v39);
  v24 = *(_QWORD *)(sub_EFEE90(&v40, 0) + 56);
  v25 = ptr.m128i_i32[2] - 1;
  if ( ptr.m128i_i32[2] - 1 >= 0 )
  {
    while ( 1 )
    {
      v26 = *(_QWORD *)(v24 + 8 * v25 + 24);
      v27 = *(_BYTE *)(v26 + 28) & 0x7F;
      switch ( v27 )
      {
        case 'C':
          if ( (*(_QWORD *)(v26 + 72) & 0xFFFFFFFFFFFFFFF8LL) == 0 )
            goto LABEL_25;
          if ( !(_BYTE)byte_2CA2580 && __cxa_guard_acquire(&byte_2CA2580) )
          {
            qword_2CA25A0 &= 0xFFFFFFFE00000000LL;
            qword_2CA25A8 = 0;
            qword_2CA25B8 = 0;
            __cxa_guard_release(&byte_2CA2580);
          }
          v29 = *(_QWORD *)(v26 + 72);
          v30 = v29 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v29 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
          {
            v20 = &qword_2CA25A0;
            goto LABEL_19;
          }
          break;
        case 'D':
          if ( (*(_QWORD *)(v26 + 72) & 0xFFFFFFFFFFFFFFF8LL) == 0 )
            goto LABEL_25;
          v20 = sub_A3B270(*(_QWORD *)(v24 + 8 * v25 + 24));
          goto LABEL_19;
        case '/':
          if ( (*(_QWORD *)(v26 + 72) & 0xFFFFFFFFFFFFFFF8LL) == 0 )
            goto LABEL_25;
          if ( !(_BYTE)byte_2CA2540 && __cxa_guard_acquire(&byte_2CA2540) )
          {
            qword_2CA2560 &= 0xFFFFFFFE00000000LL;
            qword_2CA2568 = 0;
            qword_2CA2578 = 0;
            __cxa_guard_release(&byte_2CA2540);
          }
          v29 = *(_QWORD *)(v26 + 72);
          v30 = v29 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v29 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
          {
            v20 = &qword_2CA2560;
            goto LABEL_19;
          }
          break;
        default:
          return sub_A92A30();
      }
      v20 = (__int64 *)v30;
      v31 = (v29 >> 1) & 3;
      if ( v31 == 1 )
      {
        v32 = *(_QWORD *)(v30 + 72);
        v20 = nullptr;
        if ( v32 )
        {
          v20 = (__int64 *)(*(_QWORD *)(v30 + 72) & 0xFFFFFFFFFFFFFFF8LL);
          if ( ((v32 >> 1) & 3) == 2 )
          {
            if ( v20 )
LABEL_42:
              v20 = (__int64 *)v20[1];
          }
        }
      }
      else if ( v31 == 2 )
      {
        goto LABEL_42;
      }
LABEL_19:
      if ( v20 )
      {
        sub_A92E70(v43, a1);
        if ( !(unsigned __int8)sub_EF9EB0(ptr.m128i_i64[0] + 24 * v25, v43) )
        {
          if ( ptr.m128i_i32[2] - 1 == (_DWORD)v25 )
            --ptr.m128i_i32[2];
          v39 = 1;
        }
        if ( (int)--v25 >= 0 )
          continue;
      }
      break;
    }
  }
LABEL_25:
  v28 = (__int64 *)ptr.m128i_i64[0];
  result = i;
  if ( v39 )
  {
    v43[1] = ptr.m128i_i64[0];
    LODWORD(v43[0]) = v36;
    v43[2] = ptr.m128i_u32[2];
    result = sub_A5CB90((__int64)a1, v40, (__int64)v20, v21, v22, v23, v36, ptr.m128i_i32[0], ptr.m128i_u32[2]);
    v28 = (__int64 *)ptr.m128i_i64[0];
  }
  if ( v28 != &v45 )
  {
    v37 = result;
    free(v28);
    return v37;
  }
  return result;
}

