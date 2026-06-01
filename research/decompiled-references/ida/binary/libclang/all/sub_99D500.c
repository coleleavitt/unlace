__int64 __fastcall sub_99D500(__int64 a1, __int64 a2, __int64 a3, void *a4, __int64 a5, unsigned __int64 a6, _BYTE *a7)
{
  size_t v7; // r15
  void *v10; // rax
  void *v11; // rcx
  unsigned __int64 v12; // rax
  unsigned int v13; // ebx
  __int64 *v15; // rsi
  _QWORD *v16; // rdi
  __int64 (*v17)(void); // rdx
  _QWORD *v18; // rdi
  _QWORD *v19; // rdi
  _QWORD *v20; // rdi
  _QWORD *v21; // rdi
  _QWORD *v22; // rdi
  _QWORD *v23; // rdi
  _QWORD *v24; // rdi
  _QWORD *v25; // rdi
  _QWORD *v26; // rdi
  _QWORD *v27; // rdi
  _QWORD **v28; // rdi
  __int64 v29; // rax
  void *v30; // rbp
  size_t n; // [rsp+0h] [rbp-C8h]
  int v34; // [rsp+2Ch] [rbp-9Ch] BYREF
  void *src[2]; // [rsp+30h] [rbp-98h] BYREF
  unsigned __int64 v36; // [rsp+40h] [rbp-88h] BYREF
  void *v37; // [rsp+48h] [rbp-80h]
  void *ptr; // [rsp+50h] [rbp-78h]
  __int64 v39; // [rsp+58h] [rbp-70h]
  _BYTE v40[104]; // [rsp+60h] [rbp-68h] BYREF

  v7 = a6 >> 3;
  n = (unsigned int)(a6 >> 3);
  v36 = a6;
  v37 = nullptr;
  ptr = v40;
  v39 = 0x300000000LL;
  v10 = (void *)operator new[](n);
  v11 = v10;
  if ( n )
    v11 = memset(v10, 0, n);
  v37 = v11;
  v12 = sub_8E8FB0(a3);
  v13 = sub_99A7C0(a1, a2, v12, 0);
  if ( (_BYTE)v13 )
  {
    v15 = *(__int64 **)(a1 + 192);
    v34 = *(unsigned __int8 *)(*(_QWORD *)(*v15 + 17288) + 272LL);
    *(__m128i *)src = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v36, (__m128i)(unsigned __int64)&v34);
    v13 = sub_998620(
            a3,
            v15,
            0,
            v36,
            (__int64 (__fastcall *)(__int64, __int64 *, _QWORD, unsigned __int64, __int64, _BOOL4))sub_9981A0,
            (__int64)src);
    *a7 = sub_B9E160(&v36, 0, a5) ^ 1;
    v16 = *(_QWORD **)(a1 + 24);
    v17 = *(__int64 (**)(void))(*v16 + 104LL);
    if ( (char *)v17 == (char *)sub_8D7E60
      && (v18 = (_QWORD *)v16[3], v17 = *(__int64 (**)(void))(*v18 + 104LL), (char *)v17 == (char *)sub_8D7E60)
      && (v19 = (_QWORD *)v18[3], v17 = *(__int64 (**)(void))(*v19 + 104LL), (char *)v17 == (char *)sub_8D7E60)
      && (v20 = (_QWORD *)v19[3], v17 = *(__int64 (**)(void))(*v20 + 104LL), (char *)v17 == (char *)sub_8D7E60)
      && (v21 = (_QWORD *)v20[3], v17 = *(__int64 (**)(void))(*v21 + 104LL), (char *)v17 == (char *)sub_8D7E60)
      && (v22 = (_QWORD *)v21[3], v17 = *(__int64 (**)(void))(*v22 + 104LL), (char *)v17 == (char *)sub_8D7E60)
      && (v23 = (_QWORD *)v22[3], v17 = *(__int64 (**)(void))(*v23 + 104LL), (char *)v17 == (char *)sub_8D7E60)
      && (v24 = (_QWORD *)v23[3], v17 = *(__int64 (**)(void))(*v24 + 104LL), (char *)v17 == (char *)sub_8D7E60)
      && (v25 = (_QWORD *)v24[3], v17 = *(__int64 (**)(void))(*v25 + 104LL), (char *)v17 == (char *)sub_8D7E60)
      && (v26 = (_QWORD *)v25[3], v17 = *(__int64 (**)(void))(*v26 + 104LL), (char *)v17 == (char *)sub_8D7E60)
      && (v27 = (_QWORD *)v26[3], v17 = *(__int64 (**)(void))(*v27 + 104LL), (char *)v17 == (char *)sub_8D7E60)
      && (v28 = (_QWORD **)v27[3], v17 = (__int64 (*)(void))(*v28)[13], (char *)v17 == (char *)sub_8D7E60) )
    {
      v29 = (*(__int64 (__fastcall **)(_QWORD *))(*v28[3] + 104LL))(v28[3]);
    }
    else
    {
      v29 = v17();
    }
    sub_B9DE00(src, &v36, 0, a5, a6, *(unsigned __int8 *)(*(_QWORD *)(v29 + 17288) + 272LL));
    v30 = src[0];
    memcpy(a4, src[0], v7);
    operator delete[](v30);
    src[0] = nullptr;
  }
  if ( ptr != v40 )
    free(ptr);
  if ( v37 )
    operator delete[](v37);
  return v13;
}

