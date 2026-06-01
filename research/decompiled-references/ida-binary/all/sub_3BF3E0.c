__int64 __fastcall sub_3BF3E0(__int64 a1, __int64 a2, __int64 a3, const char *a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdi
  size_t v15; // r15
  size_t v16; // r12
  __int64 *v17; // rax
  __int64 *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r12
  __int64 v21; // r13
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rbp
  __int64 result; // rax
  __int64 v26; // rsi
  void *v27; // rax
  const void *v28; // rsi
  __int64 v29; // rax
  void *v30; // rax
  const void *v31; // rsi
  void *v32; // rax
  const void *v33; // rsi
  struct _Unwind_Exception *v34; // rbp
  size_t n; // [rsp+0h] [rbp-40h]

  *(_QWORD *)(a1 + 8) = 0xFFFFFFFF00000001LL;
  *(_QWORD *)(a1 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 24) = 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(a1 + 40) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 120) = 0;
  *(_QWORD *)a1 = &forms::abstract_form_desc_t___vtable;
  *(_QWORD *)(a1 + 144) = 0;
  *(_OWORD *)(a1 + 64) = 0;
  *(_OWORD *)(a1 + 88) = 0;
  *(_OWORD *)(a1 + 128) = 0;
  *(_OWORD *)(a1 + 152) = 0;
  if ( *(_QWORD *)(a2 + 8) )
  {
    n = *(_QWORD *)(a2 + 8);
    v27 = (void *)qalloc_or_throw(n);
    *(_QWORD *)(a1 + 144) = v27;
    v28 = *(const void **)a2;
    *(_QWORD *)(a1 + 160) = n;
    memcpy(v27, v28, n);
    *(_QWORD *)(a1 + 152) = n;
  }
  *(_DWORD *)(a1 + 168) = -1;
  *(_QWORD *)a1 = &forms::dialog_desc_t___vtable;
  *(_QWORD *)(a1 + 176) = 0;
  *(_DWORD *)(a1 + 200) = -1;
  *(_QWORD *)(a1 + 208) = 0;
  *(_QWORD *)(a1 + 232) = 0;
  *(_OWORD *)(a1 + 184) = 0;
  *(_OWORD *)(a1 + 216) = 0;
  *(_OWORD *)(a1 + 240) = 0;
  sub_3B7850(a1 + 176, 2, -1);
  sub_3B7850(a1 + 176, 4, -1);
  *(_QWORD *)(a1 + 256) = a3;
  *(_QWORD *)(a1 + 264) = 0;
  *(_QWORD *)(a1 + 288) = 0;
  *(_QWORD *)(a1 + 312) = 0;
  *(_OWORD *)(a1 + 272) = 0;
  *(_OWORD *)(a1 + 296) = 0;
  *(_OWORD *)(a1 + 320) = 0;
  v15 = *(_QWORD *)(a5 + 8);
  *(_QWORD *)a1 = &tos_dialog_t___vtable;
  if ( v15 )
  {
    v32 = (void *)qalloc_or_throw(v15);
    *(_QWORD *)(a1 + 312) = v32;
    v33 = *(const void **)a5;
    *(_QWORD *)(a1 + 328) = v15;
    memcpy(v32, v33, v15);
    *(_QWORD *)(a1 + 320) = v15;
  }
  *(_QWORD *)(a1 + 336) = 0;
  *(_OWORD *)(a1 + 344) = 0;
  v16 = *(_QWORD *)(a6 + 8);
  if ( v16 )
  {
    v30 = (void *)qalloc_or_throw(*(_QWORD *)(a6 + 8));
    *(_QWORD *)(a1 + 336) = v30;
    v31 = *(const void **)a6;
    *(_QWORD *)(a1 + 352) = v16;
    memcpy(v30, v31, v16);
    *(_QWORD *)(a1 + 344) = v16;
  }
  sub_3B74D0(a1 + 176, (__int64)a4, 1, 0);
  v17 = *(__int64 **)(a1 + 176);
  v18 = &v17[*(_QWORD *)(a1 + 184)];
  if ( v17 == v18 )
  {
LABEL_15:
    v19 = 0;
  }
  else
  {
    while ( 1 )
    {
      v19 = *v17;
      if ( *(_DWORD *)(*v17 + 132) == 2 )
        break;
      if ( v18 == ++v17 )
        goto LABEL_15;
    }
  }
  *(_DWORD *)(v19 + 12) = 2;
  v20 = operator new(0x28u);
  *(_QWORD *)(v20 + 8) = 0;
  *(_DWORD *)(v20 + 32) = 2;
  v21 = *(_QWORD *)(a1 + 256);
  *(_OWORD *)(v20 + 16) = 0;
  *(_QWORD *)v20 = &forms::vlayout_t___vtable;
  *(_QWORD *)(a1 + 104) = v20;
  v24 = operator new(0x80u);
  *(_QWORD *)(v24 + 8) = 0x100000008LL;
  *(_QWORD *)(v24 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v24 + 24) = 0xFFFFFFFFLL;
  *(_QWORD *)(v24 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v24 + 40) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v24 + 48) = 0;
  *(_QWORD *)(v24 + 56) = 0;
  *(_QWORD *)(v24 + 80) = 0;
  *(_QWORD *)v24 = &forms::embedded_chooser_t___vtable;
  *(_QWORD *)(v24 + 104) = v21;
  *(_QWORD *)(v24 + 112) = a1 + 264;
  *(_DWORD *)(v24 + 120) = 0;
  *(_OWORD *)(v24 + 64) = 0;
  *(_OWORD *)(v24 + 88) = 0;
  if ( (*(_BYTE *)(v21 + 12) & 2) == 0 )
  {
    if ( !under_debugger )
    {
      v34 = (struct _Unwind_Exception *)interr(70107, a4, v22, v23, 0.0);
      sub_176A30((__int64 *)(a1 + 232), (__int64)a4, v6, v7, v8);
      v9 = *(_QWORD *)(a1 + 208);
      if ( v9 )
      {
        *(_QWORD *)(a1 + 216) = 0;
        qfree(v9, a4);
      }
      sub_3B8AD0(v21, a4);
      forms::abstract_form_desc_t__::vfunc_0((_QWORD *)a1, a4);
      _Unwind_Resume(v34);
    }
    BUG();
  }
  result = *(_QWORD *)(v20 + 16);
  v26 = *(_QWORD *)(v20 + 8);
  if ( *(_QWORD *)(v20 + 24) < (unsigned __int64)(result + 1) )
  {
    v29 = qvector_reserve(v20 + 8, v26, result + 1, 8);
    *(_QWORD *)(v20 + 8) = v29;
    v26 = v29;
    result = *(_QWORD *)(v20 + 16);
  }
  *(_QWORD *)(v26 + 8 * result) = v24;
  ++*(_QWORD *)(v20 + 16);
  return result;
}
