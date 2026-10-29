__int64 __fastcall sub_8999A0(
        _DWORD *a1,
        const __m128i *a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v11; // r12
  unsigned int v12; // r15d
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  int v15; // r13d
  __int64 v16; // rcx
  __int64 v17; // r12
  unsigned int v18; // esi
  __int64 v19; // rdx
  __int64 v20; // r13
  __int64 result; // rax
  __int64 v22; // [rsp+8h] [rbp-50h]
  __int64 v23; // [rsp+8h] [rbp-50h]
  __int64 v24; // [rsp+10h] [rbp-48h]
  unsigned __int64 v25; // [rsp+18h] [rbp-40h]

  v11 = *(_QWORD *)(a6 + 32);
  v12 = *(_DWORD *)(a6 + 320);
  v13 = *(unsigned int *)(v11 + 192);
  v14 = *(unsigned int *)(v11 + 196);
  v15 = *(_DWORD *)(v11 + 208) + 1;
  *(_DWORD *)(v11 + 208) = v15;
  if ( v14 < v13 + 1 )
  {
    v25 = a4;
    v24 = a3;
    v23 = a5;
    sub_25D6060(v11 + 184, v11 + 200, v13 + 1, 4);
    a4 = v25;
    a3 = v24;
    v13 = *(unsigned int *)(v11 + 192);
    a5 = v23;
  }
  v22 = a5;
  *(_DWORD *)(*(_QWORD *)(v11 + 184) + 4 * v13) = v15;
  ++*(_DWORD *)(v11 + 192);
  v16 = *(_QWORD *)(a6 + 32);
  v17 = a5;
  v18 = *(_DWORD *)(v16 + 176);
  v19 = (unsigned int)(*(_DWORD *)(v16 + 208) + 1);
  *(_DWORD *)(v16 + 208) = v19;
  v20 = (v19 << 32) | v18;
  if ( (unsigned __int8)sub_899300(a3, a4, v19, a6, a5, 0) && (unsigned __int8)sub_896000(a1, a2, v17, v20, v22, a6, a7) )
  {
    result = sub_8934C0(a6, 1, v12);
  }
  else
  {
    if ( v12 != -1 )
      sub_8934C0(a6, 0, v12);
    result = 0;
  }
  --*(_DWORD *)(*(_QWORD *)(a6 + 32) + 192LL);
  return result;
}

