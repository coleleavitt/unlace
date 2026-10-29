void __fastcall sub_21298A0(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax
  _QWORD *v4; // rbp
  __int64 v5; // r12
  unsigned int v6; // r14d
  unsigned int v7; // r13d
  unsigned int v8; // eax
  void (__fastcall *v9)(__int64, __int64); // rax
  _BYTE *v10; // rsi
  __int64 v11; // rdx
  int v12; // ebp
  int v13; // ecx
  void (__fastcall *v14)(__int64, __int64); // rax
  __int64 *v15; // r12
  __int64 *v16; // rbx
  __int64 *v17; // rdi
  __int64 v18; // [rsp+8h] [rbp-1D0h]
  void *v19; // [rsp+10h] [rbp-1C8h] BYREF
  __int64 v20; // [rsp+18h] [rbp-1C0h]
  _BYTE v21[16]; // [rsp+20h] [rbp-1B8h] BYREF
  _BYTE v22[16]; // [rsp+30h] [rbp-1A8h] BYREF
  void *v23; // [rsp+40h] [rbp-198h]
  __int64 v24; // [rsp+50h] [rbp-188h] BYREF
  void *v25; // [rsp+70h] [rbp-168h]
  __int64 v26; // [rsp+80h] [rbp-158h] BYREF
  void *v27; // [rsp+90h] [rbp-148h]
  __int64 v28; // [rsp+A0h] [rbp-138h] BYREF
  void *v29; // [rsp+B0h] [rbp-128h]
  __int64 *v30; // [rsp+C8h] [rbp-110h]
  unsigned int v31; // [rsp+D0h] [rbp-108h]
  __int64 v32; // [rsp+D8h] [rbp-100h] BYREF

  v3 = sub_227D6D0(a1, a2);
  v4 = *(_QWORD **)a1;
  v5 = *(_QWORD *)(a1 + 8);
  v18 = v3;
  v6 = sub_2239B50(*(_QWORD *)a1, v5);
  v7 = sub_2239B50(a2[4], a2[62]);
  v8 = sub_2239B50(v4, v5);
  if ( !a2[31] && v8 > 1 )
    sub_223BB70(v4, *(_QWORD *)(*v4 + 24LL * (v8 - 1) + 16), v18);
  if ( a2[61] && v6 == v7 )
  {
    v10 = (_BYTE *)a2[59];
    v11 = (__int64)&v10[a2[60]];
    v19 = v21;
    sub_21297E0(&v19, v10, v11);
    v12 = sub_223B700(v4, v5, v6);
    v13 = v12 - sub_223B700(a2[4], a2[62], v7);
    sub_223AE20(
      (unsigned int)v22,
      *(_QWORD *)a1,
      *(_QWORD *)(a1 + 8),
      (_DWORD)v19,
      v20,
      v13 + a2[61] - 1,
      *(_DWORD *)(a1 + 52),
      *(_DWORD *)(a1 + 56),
      *(_QWORD *)(a1 + 64),
      *(_QWORD *)(a1 + 72),
      *(_QWORD *)(a1 + 96),
      *(_QWORD *)(a1 + 104),
      *(_QWORD *)(a1 + 128),
      (__int64)(*(_QWORD *)(a1 + 136) - *(_QWORD *)(a1 + 128)) >> 3,
      0,
      0);
    v14 = (void (__fastcall *)(__int64, __int64))a2[31];
    if ( v14 )
      v14(a1, a2[32]);
    else
      sub_21006D0(a2[2], (__int64)v22);
    v15 = v30;
    v16 = &v30[6 * v31];
    if ( v30 != v16 )
    {
      do
      {
        while ( 1 )
        {
          v16 -= 6;
          v17 = (__int64 *)v16[2];
          if ( v17 == v16 + 4 )
            break;
          operator delete(v17);
          if ( v15 == v16 )
            goto LABEL_14;
        }
      }
      while ( v15 != v16 );
LABEL_14:
      v16 = v30;
    }
    if ( v16 != &v32 )
      free(v16);
    if ( v29 )
      operator delete(v29);
    if ( v27 != &v28 )
      operator delete(v27);
    if ( v25 != &v26 )
      operator delete(v25);
    if ( v23 != &v24 )
      operator delete(v23);
    if ( v19 != v21 )
      operator delete(v19);
  }
  else
  {
    v9 = (void (__fastcall *)(__int64, __int64))a2[31];
    if ( v9 )
      v9(a1, a2[32]);
    else
      sub_21006D0(a2[2], a1);
  }
}
