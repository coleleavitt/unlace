unsigned __int64 __fastcall sub_20E7D0(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  size_t v5; // rax
  size_t v8; // rax
  __int64 *v9; // rax
  __int64 v10; // r14
  __int64 v11; // r13
  __int64 v12; // rdx
  void *v13; // rbp
  __int64 v14; // rsi
  const char *v15; // rsi
  double v16; // xmm0_8
  size_t v17; // rbp
  void *v18; // rbx
  __int64 v19; // [rsp+8h] [rbp-C0h]
  __int64 v21; // [rsp+18h] [rbp-B0h]
  __int64 v22; // [rsp+20h] [rbp-A8h]
  size_t n; // [rsp+28h] [rbp-A0h]
  _BYTE v24[3]; // [rsp+85h] [rbp-43h] BYREF
  _QWORD v25[8]; // [rsp+88h] [rbp-40h] BYREF

  v25[0] = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a2 + 24);
  if ( v3 && (v4 = *(_QWORD *)(v3 + 8)) != 0 )
  {
    v8 = pack_dw(v24, v25, (unsigned __int16)v4) - (_QWORD)v24;
    if ( v8 )
      sub_20BED0(a3, v24, v8);
    v9 = *(__int64 **)(a2 + 24);
    v10 = -1;
    v19 = -1;
    v11 = *v9;
    if ( 80 * v9[1] )
    {
      do
      {
        v17 = *(_QWORD *)(v11 + 24);
        v16 = 0.0;
        v18 = nullptr;
        v22 = v10;
        v10 = *(_QWORD *)v11;
        v21 = v19;
        v19 = *(_QWORD *)(v11 + 8);
        if ( v17 )
        {
          v18 = (void *)qalloc_or_throw(v17);
          memcpy(v18, *(const void **)(v11 + 16), v17);
        }
        v12 = *(_QWORD *)(v11 + 48);
        v13 = nullptr;
        if ( v12 )
        {
          n = *(_QWORD *)(v11 + 48);
          v13 = (void *)qalloc_or_throw(v12);
          memcpy(v13, *(const void **)(v11 + 40), n);
        }
        v14 = *(_QWORD *)(*(_QWORD *)(a1 + 120) + 16LL);
        if ( v21 == -1 || v22 == -1 )
        {
          sub_20C660(a3, v10 & v14);
          v15 = (const char *)(*(_QWORD *)(*(_QWORD *)(a1 + 120) + 16LL) & v19);
          sub_20C660(a3, (__int64)v15);
        }
        else
        {
          sub_20C660(a3, (v10 - v22) & v14);
          v15 = (const char *)(*(_QWORD *)(*(_QWORD *)(a1 + 120) + 16LL) & (v19 - v21));
          sub_20C660(a3, (__int64)v15);
        }
        if ( v13 )
          v16 = qfree(v13, v15);
        if ( v18 )
          qfree(v18, v15, v16);
        v11 += 80;
      }
      while ( v11 != **(_QWORD **)(a2 + 24) + 80LL * *(_QWORD *)(*(_QWORD *)(a2 + 24) + 8LL) );
    }
  }
  else
  {
    v5 = pack_dw(v24, v25, 0) - (_QWORD)v24;
    if ( v5 )
      sub_20BED0(a3, v24, v5);
  }
  return v25[0] - __readfsqword(0x28u);
}
