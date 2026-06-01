__int64 __fastcall sub_1ED1B0(QT::QAbstractScrollArea *this, __int64 a2, unsigned __int64 *a3, __int64 a4, double a5)
{
  __int64 v5; // r15
  int v8; // eax
  QT::QCoreApplication *v9; // rdi
  _DWORD *v10; // rbp
  _DWORD **v11; // rax
  _DWORD **v12; // rcx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // rbp
  __int64 v16; // rax
  __int64 v17; // rax
  __m128i v18; // xmm0
  int v19; // r15d
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 result; // rax
  __m128i v25; // xmm0
  int v26; // edx
  __m128i v27; // xmm0
  unsigned __int64 v28; // rax
  struct _Unwind_Exception *v29; // rbx
  unsigned __int64 v30; // [rsp+0h] [rbp-A8h]
  char v31; // [rsp+Ch] [rbp-9Ch]
  _DWORD v32[4]; // [rsp+10h] [rbp-98h] BYREF
  _QWORD v33[2]; // [rsp+20h] [rbp-88h] BYREF
  __m128i v34; // [rsp+30h] [rbp-78h] BYREF
  int v35; // [rsp+40h] [rbp-68h]
  __m128i v36; // [rsp+50h] [rbp-58h] BYREF
  int v37; // [rsp+60h] [rbp-48h]
  unsigned __int64 v38; // [rsp+68h] [rbp-40h]

  v31 = a4;
  v38 = __readfsqword(0x28u);
  if ( *((_BYTE *)this + 968) )
  {
    if ( !*((_QWORD *)this + 53) )
    {
      v29 = (struct _Unwind_Exception *)sub_1E69C0(a5, (__int64)this, a2, (__int64)a3, a4);
      sub_277860(v5);
      _Unwind_Resume(v29);
    }
    v8 = *((_DWORD *)this + 104);
    if ( v8 == 2 )
    {
      v9 = *((QT::QCoreApplication **)this + 112);
    }
    else if ( v8 == 3 )
    {
      v9 = *((QT::QCoreApplication **)this + 113);
    }
    else
    {
      v9 = nullptr;
      if ( v8 == 1 )
        v9 = *((QT::QCoreApplication **)this + 111);
    }
  }
  else
  {
    v9 = nullptr;
  }
  sub_176E70(v9);
  nullsub_66((char *)this + 104);
  v10 = *(_DWORD **)(sub_277DF0() + 112);
  if ( v10 )
  {
    v11 = (_DWORD **)(v10 + 14);
    v12 = (_DWORD **)(v10 + 20);
    while ( 1 )
    {
      v10 = *v11;
      if ( *v11 )
      {
        if ( (unsigned int)*((_QWORD *)this + 14) == v10[2] )
          break;
      }
      if ( v12 == ++v11 )
      {
        v10 = nullptr;
        break;
      }
    }
  }
  v30 = a3[1];
  sub_277780(&v36, (char *)this + 104);
  v13 = (*(__int64 (__fastcall **)(_DWORD *, unsigned __int64, _QWORD))(*(_QWORD *)v10 + 40LL))(v10, *a3, 0);
  v14 = v13;
  if ( v13 == -1 || v13 < *a3 || v13 >= a3[1] )
  {
    v14 = *a3;
    if ( v30 != -1 )
      goto LABEL_17;
  }
  else if ( v30 != -1 )
  {
LABEL_17:
    v15 = v30 - 1;
    goto LABEL_18;
  }
  v28 = (*(__int64 (__fastcall **)(_DWORD *, __int64, __int64, unsigned __int64))(*(_QWORD *)v10 + 40LL))(
          v10,
          -1,
          2,
          v30);
  v15 = v28;
  if ( v28 == -1 || v28 < *a3 || v28 >= a3[1] )
    v15 = *a3;
LABEL_18:
  sub_277860(&v36);
  v16 = *(_QWORD *)this;
  v34 = 0;
  v35 = 0;
  (*(void (__fastcall **)(QT::QAbstractScrollArea *, __m128i *, unsigned __int64, __int64))(v16 + 800))(
    this,
    &v34,
    v14,
    2);
  v17 = *(_QWORD *)this;
  v36 = 0;
  v37 = 0;
  if ( ((*(__int64 (__fastcall **)(QT::QAbstractScrollArea *, __m128i *, unsigned __int64, __int64))(v17 + 800))(
          this,
          &v36,
          v15,
          3)
      & 2) != 0 )
  {
    v18 = _mm_load_si128(&v34);
    v37 = 2;
    v36 = v18;
  }
  v19 = sub_277B90(&v36);
  v20 = QT::QAbstractScrollArea::viewport(this);
  v32[2] = *(_DWORD *)(*(_QWORD *)(v20 + 32) + 28LL) + 1 - *(_DWORD *)(*(_QWORD *)(v20 + 32) + 20LL);
  v32[0] = 0;
  v32[1] = sub_277B90(&v34);
  v32[3] = v19;
  v21 = QT::QAbstractScrollArea::viewport(this);
  v33[0] = 0;
  v33[1] = _mm_sub_epi32(
             _mm_loadl_epi64((const __m128i *)(*(_QWORD *)(v21 + 32) + 28LL)),
             _mm_loadl_epi64((const __m128i *)(*(_QWORD *)(v21 + 32) + 20LL))).m128i_u64[0];
  v22 = QT::QRect::operator&(v33, v32);
  if ( __PAIR64__(HIDWORD(v22) - 1, (int)v22 - 1) != v23 )
  {
    result = 1;
LABEL_22:
    v25 = _mm_load_si128(&v34);
    *(_DWORD *)(a2 + 16) = v35;
    v26 = v37;
    *(__m128i *)a2 = v25;
    v27 = _mm_load_si128(&v36);
    *(_DWORD *)(a2 + 36) = v26;
    *(__m128i *)(a2 + 20) = v27;
    return result;
  }
  result = 0;
  if ( !v31 )
    goto LABEL_22;
  return result;
}
