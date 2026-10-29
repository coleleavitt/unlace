__int64 __fastcall sub_19FA760(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  _QWORD *v4; // r14
  _WORD *v5; // rax
  __int64 v6; // rdx
  __m128i *v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __m128i v13; // xmm1
  __int64 v14; // rdx
  __int64 (__fastcall **v15)(__int64); // r13
  __int64 (__fastcall *v16)(__int64); // rdi
  __int64 (__fastcall *v17)(__int64); // rax
  __int64 *v18; // rdi
  __int64 v19; // rax
  unsigned __int64 v20; // rcx
  __int64 v21; // r13
  __int64 v22; // rax
  unsigned __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 (__fastcall **v29)(__int64); // r13
  __int64 (__fastcall *v30)(__int64); // rdi
  __int64 (__fastcall *v31)(__int64); // rax
  _QWORD *v32; // rdi
  __int64 v34; // [rsp-8h] [rbp-F0h]
  unsigned __int64 v35; // [rsp+8h] [rbp-E0h]
  __int64 (__fastcall *v36)(__int64); // [rsp+18h] [rbp-D0h]
  unsigned __int64 v37; // [rsp+20h] [rbp-C8h]
  unsigned __int64 v38; // [rsp+28h] [rbp-C0h]
  __m128i v39; // [rsp+30h] [rbp-B8h] BYREF
  __m128i v40; // [rsp+40h] [rbp-A8h]
  __int64 (__fastcall *v41)(__int64); // [rsp+50h] [rbp-98h] BYREF
  unsigned __int64 v42; // [rsp+58h] [rbp-90h]
  void *v43; // [rsp+60h] [rbp-88h]
  unsigned __int64 v44; // [rsp+68h] [rbp-80h]
  __m128i v45; // [rsp+70h] [rbp-78h] BYREF
  __m128i v46; // [rsp+80h] [rbp-68h] BYREF
  __int64 (__fastcall *v47)(__int64); // [rsp+90h] [rbp-58h]
  void *v48; // [rsp+A0h] [rbp-48h]

  v3 = a2;
  v4 = *(_QWORD **)(a1 + 248);
  v5 = sub_19F9FC0(a1, a2, 1);
  v6 = a2 + 48;
  if ( !a2 )
    v6 = 0;
  v7 = (__m128i *)sub_B96A60(v4, 0, v6, 0, 0, (__int64)v5, 0, 0);
  v8 = sub_B32990((__int64)v4, 0, 0);
  sub_B8CC60((__int64)v7, v8, v9, v10, v11, v12);
  v7[1].m128i_i8[13] |= 2u;
  sub_B809C0((__int64)v7);
  sub_B7ADF0(&v41, a2);
  sub_B7ADA0((__m128 *)&v39, a2);
  v45 = v39;
  v46 = v40;
  v36 = v41;
  v47 = v41;
  v35 = v42;
  v38 = (unsigned __int64)v43;
  v48 = v43;
  v37 = v44;
  v13 = _mm_load_si128(&v46);
  v39 = _mm_load_si128(&v45);
  v40 = v13;
  v14 = v34;
LABEL_4:
  if ( *(_OWORD *)&v39 != __PAIR128__(v35, (unsigned __int64)v36) || __PAIR128__(v37, v38) != *(_OWORD *)&v40 )
  {
    v15 = &v41;
    v16 = nullptr;
    v42 = 0;
    v41 = sub_19F51C0;
    v43 = sub_19F51E0;
    v44 = 0;
    while ( 1 )
    {
      v17 = *v15;
      v18 = (__int64 *)((char *)v39.m128i_i64 + (_QWORD)v16);
      if ( ((unsigned __int8)*v15 & 1) != 0 )
      {
        v14 = *v18;
        v17 = *(__int64 (__fastcall **)(__int64))((char *)v17 + *v18 - 1);
      }
      v19 = ((__int64 (__fastcall *)(__int64 *, __int64, __int64))v17)(v18, a2, v14);
      if ( v19 )
        break;
      v15 += 2;
      v16 = v15[1];
    }
    v21 = *(_QWORD *)v19;
    if ( (*(_BYTE *)(*(_QWORD *)v19 + 28LL) & 0x7Fu) - 40 <= 6 && (*(_BYTE *)(v21 + 96) & 7) != 2 )
    {
      v22 = *(_QWORD *)&byte_8[*(_QWORD *)(v21 + 48) & 0xFFFFFFFFFFFFFFF0LL];
      if ( (v22 & 8) == 0
        || (v20 = v22 & 0xFFFFFFFFFFFFFFF0LL,
            (*(_DWORD *)((char *)&qword_18 + (v22 & 0xFFFFFFFFFFFFFFF0LL)) | (unsigned int)(v22 & 7)) >> 9 != 19) )
      {
        a2 = sub_F63050(
               *(_QWORD *)(*(_QWORD *)(v21 + 48) & 0xFFFFFFFFFFFFFFF0LL),
               a2,
               *(_QWORD *)(v21 + 48) & 0xFFFFFFFFFFFFFFF0LL,
               v20);
        v23 = *(_QWORD *)(v21 + 40) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(v21 + 40) & 7) != 0 )
          v23 = 0;
        v24 = sub_19FA690(a1, a2, v23, (__int64)v7);
        if ( v24 )
        {
          sub_B94AD0(v7 + 4, v24, v25, v26, v27, v28);
          a2 = *(_QWORD *)(v21 + 48);
          *(_QWORD *)(v21 + 48) = sub_A70E70((__int64)v4, a2, 20);
        }
      }
    }
    v29 = &v41;
    v30 = nullptr;
    v42 = 0;
    v41 = sub_19F5160;
    v43 = sub_19F5190;
    v44 = 0;
    while ( 1 )
    {
      v31 = *v29;
      v32 = (__int64 *)((char *)v39.m128i_i64 + (_QWORD)v30);
      if ( ((unsigned __int8)*v29 & 1) != 0 )
      {
        if ( (*(unsigned __int8 (**)(void))((char *)v31 + *v32 - 1))() )
          goto LABEL_4;
      }
      else if ( (unsigned __int8)v31((__int64)v32) )
      {
        goto LABEL_4;
      }
      v29 += 2;
      v30 = v29[1];
    }
  }
  (*(void (__fastcall **)(__m128i *, __int64, __int64))(v7->m128i_i64[0] + 104))(v7, a2, v14);
  return sub_B7AD90(v3, (__int64)v7);
}
