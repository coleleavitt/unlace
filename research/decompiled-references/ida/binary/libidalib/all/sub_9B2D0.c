unsigned __int64 __fastcall sub_9B2D0(TView *this, __int64 a2, _QWORD *a3, int a4)
{
  __int64 v6; // rax
  __m128i v7; // xmm1
  __m128i v8; // xmm0
  __int64 v9; // rbp
  __int64 v10; // r15
  void (*v11)(); // rax
  _QWORD *v12; // r13
  std::__detail::_List_node_base *v13; // rax
  void (*v14)(); // rax
  void (*v15)(); // rax
  void (*v16)(); // rax
  void (*v17)(); // rax
  _QWORD *v18; // rax
  std::__detail::_List_node_base *v19; // rax
  void (*v20)(); // rax
  void (*v21)(); // rax
  void (*v22)(); // rax
  void (*v23)(); // rax
  std::__detail::_List_node_base *v24; // rax
  std::__detail::_List_node_base *v25; // rax
  __int64 v26; // rax
  void (*v27)(); // rax
  void (*v28)(); // rax
  void (*v29)(); // rax
  __int64 v30; // rax
  __int64 v31; // rsi
  std::__detail::_List_node_base *v33; // [rsp+8h] [rbp-90h]
  std::__detail::_List_node_base *v34; // [rsp+10h] [rbp-88h]
  std::__detail::_List_node_base *v35; // [rsp+10h] [rbp-88h]
  __int64 v36; // [rsp+18h] [rbp-80h]
  std::__detail::_List_node_base *v37; // [rsp+20h] [rbp-78h]
  _QWORD *v38; // [rsp+28h] [rbp-70h]
  _QWORD *v39; // [rsp+30h] [rbp-68h] BYREF
  _QWORD *v40; // [rsp+38h] [rbp-60h] BYREF
  unsigned __int64 v41[3]; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v42; // [rsp+58h] [rbp-40h]

  v42 = __readfsqword(0x28u);
  sub_114B20(this);
  *((_WORD *)this + 12) &= ~1u;
  *(_QWORD *)this = &off_2369E0;
  *((_QWORD *)this + 16) = off_236AA8;
  *((_DWORD *)this + 126) = 0;
  *((_BYTE *)this + 532) = 0;
  *((_DWORD *)this + 127) = a4;
  *((_QWORD *)this + 67) = 0;
  *((_QWORD *)this + 62) = 0;
  *((_DWORD *)this + 128) = 0;
  *((_QWORD *)this + 65) = 10;
  *((_DWORD *)this + 132) = 0;
  *((_BYTE *)this + 544) = 0;
  *((_OWORD *)this + 29) = 0;
  *((_OWORD *)this + 30) = 0;
  v6 = operator new(0xB0u);
  v7 = _mm_cvtsi32_si128(*(_DWORD *)(a2 + 24));
  v8 = _mm_cvtsi32_si128(*((_DWORD *)this + 106));
  v9 = v6;
  v41[0] = 0;
  v41[1] = _mm_unpacklo_epi32(v8, v7).m128i_u64[0];
  sub_9A100(v6, (__int64)v41, (__int64)this);
  sub_1149B0(this);
  v10 = a3[107];
  v34 = (std::__detail::_List_node_base *)(a3 + 125);
  v11 = *(void (**)())(a3[125] + 16LL);
  if ( v11 != nullsub_1 )
    ((void (__fastcall *)(std::__detail::_List_node_base *, __int64))v11)(v34, 1);
  v12 = (_QWORD *)operator new(0x20u);
  *v12 = off_22F5C8;
  v12[1] = v9;
  v12[2] = sub_99720;
  v12[3] = 0;
  v13 = (std::__detail::_List_node_base *)operator new(0x18u);
  *((_QWORD *)v13 + 2) = v12;
  std::__detail::_List_node_base::_M_hook(v13, (std::__detail::_List_node_base *)(a3 + 126));
  v39 = a3 + 125;
  v36 = v9 + 72;
  v14 = *(void (**)())(*(_QWORD *)(v9 + 72) + 16LL);
  if ( v14 != nullsub_1 )
    ((void (__fastcall *)(__int64))v14)(v36);
  v33 = (std::__detail::_List_node_base *)(v9 + 80);
  sub_99EC0((_QWORD *)(v9 + 80), (unsigned __int64 *)&v39);
  v15 = *(void (**)())(*(_QWORD *)(v9 + 72) + 24LL);
  if ( v15 != nullsub_2 )
    ((void (__fastcall *)(__int64))v15)(v36);
  v16 = *(void (**)())(a3[125] + 24LL);
  if ( v16 != nullsub_2 )
    ((void (__fastcall *)(std::__detail::_List_node_base *))v16)(v34);
  v35 = (std::__detail::_List_node_base *)(a3 + 128);
  v17 = *(void (**)())(a3[128] + 16LL);
  if ( v17 != nullsub_1 )
    ((void (__fastcall *)(std::__detail::_List_node_base *))v17)(v35);
  v18 = (_QWORD *)operator new(0x20u);
  *v18 = off_22F608;
  v18[1] = v9;
  v18[2] = sub_99610;
  v18[3] = 0;
  v38 = v18;
  v19 = (std::__detail::_List_node_base *)operator new(0x18u);
  *((_QWORD *)v19 + 2) = v38;
  std::__detail::_List_node_base::_M_hook(v19, (std::__detail::_List_node_base *)(a3 + 129));
  v40 = a3 + 128;
  v20 = *(void (**)())(*(_QWORD *)(v9 + 72) + 16LL);
  if ( v20 != nullsub_1 )
    ((void (__fastcall *)(__int64))v20)(v36);
  sub_99EC0(v33, (unsigned __int64 *)&v40);
  v21 = *(void (**)())(*(_QWORD *)(v9 + 72) + 24LL);
  if ( v21 != nullsub_2 )
    ((void (__fastcall *)(__int64))v21)(v36);
  v22 = *(void (**)())(a3[128] + 24LL);
  if ( v22 != nullsub_2 )
    ((void (__fastcall *)(std::__detail::_List_node_base *))v22)(v35);
  v23 = *(void (**)())(*(_QWORD *)(v10 + 48) + 16LL);
  if ( v23 != nullsub_1 )
    ((void (__fastcall *)(__int64))v23)(v10 + 48);
  v24 = (std::__detail::_List_node_base *)operator new(0x20u);
  *(_QWORD *)v24 = off_22F608;
  *((_QWORD *)v24 + 1) = v9;
  *((_QWORD *)v24 + 2) = sub_99610;
  *((_QWORD *)v24 + 3) = 0;
  v37 = v24;
  v25 = (std::__detail::_List_node_base *)operator new(0x18u);
  *((_QWORD *)v25 + 2) = v37;
  std::__detail::_List_node_base::_M_hook(v25, (std::__detail::_List_node_base *)(v10 + 56));
  v26 = *(_QWORD *)(v9 + 72);
  v41[0] = v10 + 48;
  v27 = *(void (**)())(v26 + 16);
  if ( v27 != nullsub_1 )
    ((void (__fastcall *)(__int64))v27)(v36);
  sub_99EC0(v33, v41);
  v28 = *(void (**)())(*(_QWORD *)(v9 + 72) + 24LL);
  if ( v28 != nullsub_2 )
    ((void (__fastcall *)(__int64))v28)(v36);
  v29 = *(void (**)())(*(_QWORD *)(v10 + 48) + 24LL);
  if ( v29 != nullsub_2 )
    ((void (__fastcall *)(__int64))v29)(v10 + 48);
  v30 = xmmword_2519A8;
  v41[0] = (unsigned __int64)this;
  v31 = qword_2519A0;
  if ( *((_QWORD *)&xmmword_2519A8 + 1) < (unsigned __int64)(xmmword_2519A8 + 1) )
  {
    qword_2519A0 = qvector_reserve();
    v31 = qword_2519A0;
    v30 = xmmword_2519A8;
  }
  *(_QWORD *)(v31 + 8 * v30) = this;
  *(_QWORD *)&xmmword_2519A8 = xmmword_2519A8 + 1;
  return v42 - __readfsqword(0x28u);
}

