__int64 __fastcall sub_9ADF90(__int64 a1, unsigned int a2)
{
  int *v3; // rax
  void *v4; // r15
  _DWORD *v5; // rax
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  bool v9; // r15
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rcx
  _DWORD *v13; // rsi
  __int64 v14; // rdi
  bool v15; // zf
  __int64 v16; // r15
  __int64 v17; // r13
  __int64 v18; // rdi
  __m128i v19; // xmm0
  _DWORD *v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rdi
  _DWORD *v23; // rsi
  __int64 v24; // rdi
  void *v25; // rbx
  void *v26; // rbx
  __int64 v28; // rbx
  int v29; // [rsp-8h] [rbp-D8h]
  int v30; // [rsp+0h] [rbp-D0h]
  int v31; // [rsp+8h] [rbp-C8h]
  int v32; // [rsp+Ch] [rbp-C4h]
  _QWORD *v33; // [rsp+10h] [rbp-C0h]
  __int64 v34; // [rsp+10h] [rbp-C0h]
  int v35[2]; // [rsp+18h] [rbp-B8h]
  int v36[2]; // [rsp+18h] [rbp-B8h]
  __int64 v37; // [rsp+28h] [rbp-A8h] BYREF
  _DWORD *v38; // [rsp+30h] [rbp-A0h] BYREF
  __int64 v39; // [rsp+38h] [rbp-98h]
  int v40; // [rsp+40h] [rbp-90h] BYREF
  char v41; // [rsp+44h] [rbp-8Ch]
  int v42; // [rsp+50h] [rbp-80h] BYREF
  char v43; // [rsp+54h] [rbp-7Ch]
  int v44; // [rsp+60h] [rbp-70h] BYREF
  char v45; // [rsp+64h] [rbp-6Ch]
  __int64 v46; // [rsp+68h] [rbp-68h]
  int v47; // [rsp+70h] [rbp-60h] BYREF
  char v48; // [rsp+74h] [rbp-5Ch]
  __int64 v49; // [rsp+78h] [rbp-58h]
  _QWORD v50[2]; // [rsp+80h] [rbp-50h] BYREF
  __m128i v51; // [rsp+90h] [rbp-40h]

  ++*(_DWORD *)(a1 + 340);
  *(_QWORD *)v35 = *(_QWORD *)(a1 + 24);
  v3 = sub_9AD4F0(a1, a2);
  sub_9ABE60((__int64)&v40, (__int64)(v3 + 8));
  v45 &= 0xFCu;
  v48 &= 0xFCu;
  v44 = 0;
  v4 = qword_1C7F2C0;
  v46 = 0;
  v47 = 1;
  v49 = 0;
  if ( (v41 & 1) != 0 )
    sub_182C690(qword_1C7F2C0, &v44, &v40);
  else
    v44 = v40;
  if ( (v43 & 1) != 0 )
  {
    sub_182C690(v4, &v47, &v42);
  }
  else
  {
    v48 &= ~1u;
    v47 = v42;
  }
  v38 = nullptr;
  v39 = *(_QWORD *)v35;
  v5 = *(_DWORD **)(sub_15D1F10(**(_QWORD **)(*(_QWORD *)(a1 + 32) + 8LL * a2)) + 24);
  v9 = 0;
  if ( v5 && *v5 == 5 )
    v9 = v5[1] == 1;
  v10 = *(_QWORD *)(a1 + 480);
  if ( !v10 )
  {
    sub_16669E0(a1 + 472);
    v10 = *(_QWORD *)(a1 + 480);
  }
  sub_166A700(v10, (unsigned int)&v44, v9, v6, v7, v8);
  v11 = sub_15E1B70(*(_QWORD *)(a1 + 472));
  v12 = v11;
  if ( v11 )
    ++*(_DWORD *)(v11 + 8);
  v13 = v38;
  if ( v38 )
  {
    v14 = v39;
    v15 = v38[2]-- == 1;
    if ( v15 )
    {
      v34 = v11;
      sub_15D7BC0(v14, v13);
      v12 = v34;
    }
  }
  v16 = *(_QWORD *)(a1 + 24);
  v17 = *(_QWORD *)(a1 + 16);
  v38 = (_DWORD *)v12;
  v33 = &v38;
  v18 = *(_QWORD *)v35;
  v50[1] = &v38;
  v15 = *(_QWORD *)(v16 + 912) == 0;
  v50[0] = *(_QWORD *)v35;
  v19 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_1C56530), (__m128i)(unsigned __int64)sub_98E120);
  v51 = v19;
  if ( !v15 )
  {
    sub_15E1A70(v35[0]);
    v20 = (_DWORD *)sub_15E1B70(v35[0]);
    if ( v20 )
      ++v20[2];
    v13 = v20;
    v37 = 0;
    sub_966750(a1, (int)v20, -1, 0, 0, -1, (__int64 ***)&v37, v29, v30, v31, (int)&v38, v20);
    v18 = v37;
    if ( v37 )
    {
      v18 = v37 - 8;
      sub_186B220((void *)(v37 - 8));
    }
    if ( *(_QWORD *)v36 )
    {
      v32 = *(_DWORD *)(*(_QWORD *)v36 + 8LL);
      *(_DWORD *)(*(_QWORD *)v36 + 8LL) = v32 - 1;
      if ( v32 == 1 )
      {
        v13 = *(_DWORD **)v36;
        v18 = v16;
        sub_15D7BC0(v16, *(_QWORD *)v36);
      }
    }
  }
  if ( (unsigned int)sub_180B130(v18) > 9 )
  {
    if ( (unsigned __int8)sub_186A530(*(double *)v19.m128i_i64) )
    {
      sub_186A4C0(*(double *)v19.m128i_i64);
      v21 = sub_180B150(v18, v13);
      std::__ostream_insert<char,std::char_traits<char>>();
      v22 = sub_160EBE0(v21, v33);
      std::operator<<<std::char_traits<char>>();
      sub_186A500(v22, "\n");
    }
    else
    {
      v28 = sub_180B150(v18, v13);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_160EBE0(v28, v33);
      std::operator<<<std::char_traits<char>>();
    }
  }
  sub_B6F780(v17);
  (*(void (__fastcall **)(_QWORD, _DWORD *))(**(_QWORD **)(v17 + 7488) + 48LL))(*(_QWORD *)(v17 + 7488), v38);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v17 + 7488) + 64LL))(*(_QWORD *)(v17 + 7488));
  if ( *(_QWORD *)(v16 + 912) )
    std::__ostream_insert<char,std::char_traits<char>>();
  if ( v51.m128i_i64[0] )
    ((void (__fastcall *)(_QWORD *, _QWORD *, __int64))v51.m128i_i64[0])(v50, v50, 3);
  v23 = v38;
  if ( v38 )
  {
    v24 = v39;
    v15 = v38[2]-- == 1;
    if ( v15 )
      sub_15D7BC0(v24, v23);
  }
  v25 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v44);
  sub_182CBA0(v25, &v47);
  v26 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v40);
  return sub_182CBA0(v26, &v42);
}

