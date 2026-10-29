__int64 __fastcall sub_99D7B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rax
  unsigned int v11; // ebx
  _QWORD *v13; // rdi
  __int64 (*v14)(void); // rdx
  _QWORD *v15; // rdi
  _QWORD *v16; // rdi
  _QWORD *v17; // rdi
  _QWORD *v18; // rdi
  _QWORD *v19; // rdi
  _QWORD *v20; // rdi
  _QWORD *v21; // rdi
  _QWORD *v22; // rdi
  _QWORD **v23; // rdi
  __int64 v24; // r14
  void *v25; // rax
  void *v26; // rcx
  __int64 *v27; // rsi
  int v28; // eax
  __int64 *v29; // rsi
  int v30; // eax
  __int64 v31; // [rsp+18h] [rbp-D0h] BYREF
  int v32; // [rsp+2Ch] [rbp-BCh] BYREF
  __m128i v33; // [rsp+30h] [rbp-B8h] BYREF
  int *v34; // [rsp+40h] [rbp-A8h]
  __int64 v35; // [rsp+48h] [rbp-A0h]
  __int64 *v36; // [rsp+50h] [rbp-98h]
  unsigned __int64 v37; // [rsp+60h] [rbp-88h] BYREF
  void *v38; // [rsp+68h] [rbp-80h]
  void *ptr; // [rsp+70h] [rbp-78h]
  __int64 v40; // [rsp+78h] [rbp-70h]
  _BYTE v41[104]; // [rsp+80h] [rbp-68h] BYREF

  v31 = a2;
  v9 = sub_8E8FB0(a3);
  v10 = sub_8E8FB0(a4);
  if ( (unsigned __int8)sub_99A7C0(a1, a2, v10, 1u) && (unsigned __int8)sub_99A7C0(a1, v31, v9, 0) )
  {
    v13 = *(_QWORD **)(a1 + 24);
    v14 = *(__int64 (**)(void))(*v13 + 104LL);
    if ( (char *)v14 == (char *)sub_8D7E60
      && (v15 = (_QWORD *)v13[3], v14 = *(__int64 (**)(void))(*v15 + 104LL), (char *)v14 == (char *)sub_8D7E60)
      && (v16 = (_QWORD *)v15[3], v14 = *(__int64 (**)(void))(*v16 + 104LL), (char *)v14 == (char *)sub_8D7E60)
      && (v17 = (_QWORD *)v16[3], v14 = *(__int64 (**)(void))(*v17 + 104LL), (char *)v14 == (char *)sub_8D7E60)
      && (v18 = (_QWORD *)v17[3], v14 = *(__int64 (**)(void))(*v18 + 104LL), (char *)v14 == (char *)sub_8D7E60)
      && (v19 = (_QWORD *)v18[3], v14 = *(__int64 (**)(void))(*v19 + 104LL), (char *)v14 == (char *)sub_8D7E60)
      && (v20 = (_QWORD *)v19[3], v14 = *(__int64 (**)(void))(*v20 + 104LL), (char *)v14 == (char *)sub_8D7E60)
      && (v21 = (_QWORD *)v20[3], v14 = *(__int64 (**)(void))(*v21 + 104LL), (char *)v14 == (char *)sub_8D7E60)
      && (v22 = (_QWORD *)v21[3], v14 = *(__int64 (**)(void))(*v22 + 104LL), (char *)v14 == (char *)sub_8D7E60)
      && (v23 = (_QWORD **)v22[3], v14 = (__int64 (*)(void))(*v23)[13], (char *)v14 == (char *)sub_8D7E60) )
    {
      v24 = (*(__int64 (__fastcall **)(_QWORD *))(*v23[3] + 104LL))(v23[3]);
    }
    else
    {
      v24 = v14();
    }
    v38 = nullptr;
    v37 = 8 * a5;
    ptr = v41;
    v40 = 0x300000000LL;
    v25 = (void *)operator new[]((unsigned int)a5);
    v26 = v25;
    if ( (_DWORD)a5 )
      v26 = memset(v25, 0, (unsigned int)a5);
    v38 = v26;
    v27 = *(__int64 **)(a1 + 192);
    v28 = *(unsigned __int8 *)(*(_QWORD *)(*v27 + 17288) + 272LL);
    v33 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v37, (__m128i)(unsigned __int64)&v32);
    v32 = v28;
    sub_998620(
      a3,
      v27,
      0,
      v37,
      (__int64 (__fastcall *)(__int64, __int64 *, _QWORD, unsigned __int64, __int64, _BOOL4))sub_9981A0,
      (__int64)&v33);
    v29 = *(__int64 **)(a1 + 192);
    v30 = *(unsigned __int8 *)(*(_QWORD *)(v24 + 17288) + 272LL);
    v33.m128i_i64[0] = v24;
    v33.m128i_i64[1] = (__int64)&v37;
    v32 = v30;
    v34 = &v32;
    v35 = a1;
    v36 = &v31;
    v11 = sub_998620(
            a4,
            v29,
            0,
            v37,
            (__int64 (__fastcall *)(__int64, __int64 *, _QWORD, unsigned __int64, __int64, _BOOL4))sub_99BB00,
            (__int64)&v33);
    if ( ptr != v41 )
      free(ptr);
    if ( v38 )
      operator delete[](v38);
  }
  else
  {
    return 0;
  }
  return v11;
}

