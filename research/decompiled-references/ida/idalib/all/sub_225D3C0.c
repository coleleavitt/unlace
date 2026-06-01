__int64 __fastcall sub_225D3C0(__int64 a1, __int64 a2, __m128i *a3, unsigned int a4)
{
  __int64 v5; // rdx
  bool v7; // zf
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v13; // r15
  __int64 v14; // rax
  void *v15; // rdx
  __int64 v16; // rax
  __int64 *v17; // rdi
  void *v19; // [rsp+10h] [rbp-2F8h]
  __int64 v20; // [rsp+10h] [rbp-2F8h]
  _BYTE *v21; // [rsp+18h] [rbp-2F0h]
  void *v22; // [rsp+20h] [rbp-2E8h]
  int v23; // [rsp+2Ch] [rbp-2DCh]
  __int64 v24; // [rsp+30h] [rbp-2D8h] BYREF
  char v25; // [rsp+38h] [rbp-2D0h]
  void *v26[2]; // [rsp+40h] [rbp-2C8h] BYREF
  __int64 v27; // [rsp+50h] [rbp-2B8h] BYREF
  _OWORD v28[2]; // [rsp+60h] [rbp-2A8h] BYREF
  __int64 v29; // [rsp+80h] [rbp-288h]
  void *v30; // [rsp+90h] [rbp-278h] BYREF
  __m128i si128; // [rsp+98h] [rbp-270h]
  _BYTE v32[264]; // [rsp+A8h] [rbp-260h] BYREF
  _BYTE ptr[24]; // [rsp+1B0h] [rbp-158h] BYREF
  _BYTE v34[320]; // [rsp+1C8h] [rbp-140h] BYREF

  v5 = a4;
  v7 = *(_BYTE *)(a2 + 328) == 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
  v30 = v32;
  *(_QWORD *)ptr = v34;
  *(__m128i *)&ptr[8] = si128;
  if ( v7 || (*(_BYTE *)(a2 + 320) & 1) != 0 )
  {
    v29 = a3[2].m128i_i64[0];
    v28[0] = _mm_loadu_si128(a3);
    v28[1] = _mm_loadu_si128(a3 + 1);
  }
  else
  {
    sub_22538C0((const char **)a3, (__int64)ptr);
    LOWORD(v29) = 261;
    v28[0] = *(_OWORD *)(a2 + 168);
    sub_228E8C0(v28, ptr);
    v5 = a4;
    LOWORD(v29) = 261;
    v28[0] = *(_OWORD *)ptr;
  }
  sub_228D350(&v24, v28, v5, &v30);
  if ( (v25 & 1) != 0 )
  {
    v8 = v24;
    v24 = 0;
    *(_QWORD *)&v28[0] = v8;
    v9 = sub_2220DB0((std::_V2 *)v28);
    v10 = *(_QWORD *)&v28[0];
    *(_BYTE *)(a1 + 16) |= 1u;
    *(_DWORD *)a1 = v9;
    *(_QWORD *)(a1 + 8) = v11;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  }
  else
  {
    v23 = v24;
    sub_2253560(v26, a3);
    v21 = v30;
    v22 = v26[0];
    v13 = si128.m128i_i64[0];
    v19 = v26[1];
    v14 = operator new(0x88u);
    *(_QWORD *)v14 = &off_2BEB7F0;
    *(_DWORD *)(v14 + 8) = v23;
    LOWORD(v29) = 261;
    v15 = v19;
    *(_QWORD *)&v28[0] = v22;
    v20 = v14;
    *((_QWORD *)&v28[0] + 1) = v15;
    sub_2253560((_QWORD *)(v14 + 16), (_QWORD **)v28);
    v16 = v20;
    *(_OWORD *)(v20 + 48) = 0;
    *(_QWORD *)(v20 + 64) = 0;
    *(_QWORD *)(v20 + 72) = 0;
    *(_QWORD *)(v20 + 80) = 0;
    *(_QWORD *)(v20 + 88) = 0;
    *(_BYTE *)(v20 + 96) = 0;
    if ( v21 )
    {
      *(_QWORD *)(v20 + 104) = v20 + 120;
      sub_2259A00((_QWORD *)(v20 + 104), v21, (__int64)&v21[v13]);
      v16 = v20;
    }
    else
    {
      *(_QWORD *)(v20 + 112) = 0;
      *(_QWORD *)(v20 + 104) = v20 + 120;
      *(_BYTE *)(v20 + 120) = 0;
    }
    v17 = (__int64 *)v26[0];
    *(_QWORD *)a1 = v16;
    *(_BYTE *)(a1 + 16) &= ~1u;
    if ( v17 != &v27 )
      operator delete(v17);
  }
  sub_215DE50(&v24);
  if ( *(_BYTE **)ptr != v34 )
    free(*(void **)ptr);
  if ( v30 != v32 )
    free(v30);
  return a1;
}
