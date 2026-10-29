__int64 __fastcall sub_1FC230(__m128i *this, __int64 a2)
{
  unsigned int v4; // eax
  __int64 v5; // rax
  double v6; // xmm0_8
  int v7; // r14d
  const __m128i *v8; // rbp
  const char *v9; // r12
  const char *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  char v13; // bp
  __int64 v14; // rdi
  int v15; // ebp
  int v17; // eax
  __int64 v18; // rdi
  const char *v19; // [rsp+0h] [rbp-68h] BYREF
  __int128 v20; // [rsp+8h] [rbp-60h]
  const char *v21; // [rsp+20h] [rbp-48h] BYREF
  __int64 v22; // [rsp+28h] [rbp-40h]
  unsigned __int64 v23; // [rsp+38h] [rbp-30h]

  v23 = __readfsqword(0x28u);
  sub_1EAF30(this, *(_QWORD *)(a2 + 48));
  sub_1EB140((QT::QAbstractScrollArea *)this, *(const char **)(a2 + 112), *(_QWORD *)(a2 + 120));
  v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 112) + 112LL))(*(_QWORD *)(a2 + 112));
  get_place_class((char *)this + 936, (char *)this + 940, v4);
  v5 = this->m128i_i64[0];
  v6 = 0.0;
  v19 = nullptr;
  v20 = 0;
  (*(void (__fastcall **)(__m128i *, const char **))(v5 + 920))(this, &v19);
  v7 = *(_DWORD *)(a2 + 128);
  v8 = (const __m128i *)(a2 + 64);
  v9 = &s1;
  if ( (_QWORD)v20 )
    v9 = v19;
  sub_1FA630((__int64)&v21);
  v10 = &s1;
  if ( v22 )
    v10 = v21;
  v13 = sub_1E9B20(this + 24, v10, (__int64)v9, v8, v7);
  if ( v21 )
  {
    v22 = 0;
    v6 = qfree(v21, v10);
  }
  v14 = (__int64)v19;
  *((_BYTE *)this + 968) = 1;
  if ( v14 )
  {
    *(_QWORD *)&v20 = 0;
    v6 = qfree(v14, v10);
  }
  if ( !v13 )
  {
    if ( !*((_QWORD *)this + 53) )
      goto LABEL_25;
    v15 = *((_DWORD *)this + 104);
    if ( !v15 )
      return v23 - __readfsqword(0x28u);
    if ( (get_merge_state() & 3) == 0 )
      *((_DWORD *)this + 236) = v15;
  }
  if ( !*((_BYTE *)this + 968) )
    return v23 - __readfsqword(0x28u);
  if ( !*((_QWORD *)this + 53) )
LABEL_25:
    sub_1E69C0(v6, v14, (__int64)v10, v11, v12);
  v17 = *((_DWORD *)this + 104);
  switch ( v17 )
  {
    case 2:
      v18 = *((_QWORD *)this + 112);
      break;
    case 3:
      v18 = *((_QWORD *)this + 113);
      break;
    case 1:
      v18 = *((_QWORD *)this + 111);
      break;
    default:
      return v23 - __readfsqword(0x28u);
  }
  if ( !v18 )
    return v23 - __readfsqword(0x28u);
  return sub_178A40(v18);
}
