__int64 *__fastcall sub_100D960(__int64 *a1, __int64 a2, _BYTE *a3, __int64 a4)
{
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  void *v13; // rbx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r13
  void *v21; // rax
  void **v22; // rdi
  __int64 v23; // [rsp+8h] [rbp-90h] BYREF
  __int64 v24; // [rsp+10h] [rbp-88h] BYREF
  __int64 v25; // [rsp+18h] [rbp-80h]
  int v26; // [rsp+20h] [rbp-78h]
  void *v27; // [rsp+30h] [rbp-68h] BYREF
  __m128i v28; // [rsp+38h] [rbp-60h] BYREF
  __int16 v29; // [rsp+48h] [rbp-50h] BYREF
  __int64 v30; // [rsp+50h] [rbp-48h]
  __int64 v31; // [rsp+58h] [rbp-40h]
  int v32; // [rsp+60h] [rbp-38h]

  sub_E59960((void ***)&v27, (void **)"physicalLocation", (void **)&word_10);
  v7 = *(_DWORD *)(a2 + 16);
  v29 = 7;
  v8 = *(_QWORD *)a2;
  *(_QWORD *)a2 = 0;
  v30 = v8;
  v9 = *(_QWORD *)(a2 + 8);
  *(_DWORD *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 8) = 0;
  v31 = v9;
  v32 = v7;
  sub_100D6D0((__int64)a1, (__int64)&v27, 1, v10, v11, v12);
  sub_222B2A0(&v29);
  v13 = v27;
  if ( v27 )
  {
    if ( *(void **)v27 != (char *)v27 + 16 )
      operator delete(*(void **)v27);
    operator delete(v13, 0x20u);
  }
  if ( !a4 )
    return a1;
  sub_E59B60((void ***)&v27, "message");
  sub_100D880((__int64)&v24, a3, a4);
  v29 = 7;
  v15 = v24;
  v24 = 0;
  v30 = v15;
  v16 = v25;
  v25 = 0;
  v31 = v16;
  LODWORD(v16) = v26;
  v26 = 0;
  v32 = v16;
  if ( !(unsigned __int8)sub_E5E370(a1, (__int64)&v27, &v23) )
  {
    v20 = sub_100D5B0((__int64)a1, (__int64)&v27, v23, v17, v18, v19);
    v21 = v27;
    v27 = nullptr;
    v22 = *(void ***)v20;
    *(_QWORD *)v20 = v21;
    if ( v22 )
      sub_100CA80(v22);
    *(__m128i *)(v20 + 8) = _mm_loadu_si128(&v28);
    sub_2229580(v20 + 24, &v29);
  }
  sub_222B2A0(&v29);
  if ( v27 )
    sub_100CA80((void **)v27);
  sub_E5D2E0(&v24);
  return a1;
}
