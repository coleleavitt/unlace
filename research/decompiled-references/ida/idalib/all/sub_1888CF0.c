__int64 __fastcall sub_1888CF0(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        char a5,
        __m128 *a6,
        __int64 a7)
{
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // rax
  _QWORD *v16; // r12
  _QWORD *v17; // rbx
  _QWORD *v18; // rdi
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  unsigned int v38; // [rsp+Ch] [rbp-64Ch]
  _BYTE *v39; // [rsp+10h] [rbp-648h] BYREF
  __int64 v40; // [rsp+18h] [rbp-640h]
  _BYTE v41[1520]; // [rsp+20h] [rbp-638h] BYREF
  __int64 v42; // [rsp+610h] [rbp-48h]

  v42 = a1;
  v38 = a4;
  v39 = v41;
  v40 = 0xA00000000LL;
  sub_1849060(a1 + 15760, (__int64)&v39);
  if ( a6 )
  {
    v15 = (unsigned __int64)sub_1887770(a7, a2, a6);
    if ( v15 )
      goto LABEL_3;
  }
  if ( a3 )
  {
    if ( a3 != 5 )
    {
      v15 = sub_18379F0(a1, a2, a3, v38, a5) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v15 )
      {
LABEL_3:
        LOBYTE(a3) = (*(_BYTE *)(v15 + 84) & 3) != 0;
        goto LABEL_4;
      }
      goto LABEL_14;
    }
    LOBYTE(v29) = sub_B9C260(a2);
    a3 = v29;
  }
  else
  {
    v20 = *(_QWORD *)(a2 + 104);
    sub_7052B0((__int64 *)(v20 + 96), v20, v11, v12, v13, v14);
    if ( (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 8LL) & 8) != 0 )
      goto LABEL_14;
    if ( !(unsigned __int8)sub_B9BFC0(a2, v20, v21, v22, v23, v24)
      || (sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v25, v26, v27, v28),
          (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 8LL) & 4) == 0) )
    {
      a3 = 0;
      goto LABEL_4;
    }
    if ( *(_BYTE *)(a2 + 73) >> 5 != 2
      || (sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v30, v31, v32, v33),
          *(char *)(*(_QWORD *)(a2 + 128) + 2LL) < 0)
      || (sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v34, v35, v36, v37),
          (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 2LL) & 0x10) == 0) )
    {
LABEL_14:
      a3 = 1;
      goto LABEL_4;
    }
    a3 = *(_BYTE *)(sub_B8C5D0(a2) + 1) >> 7;
  }
LABEL_4:
  sub_1849060(v42 + 15760, (__int64)&v39);
  v16 = v39;
  v17 = &v39[152 * (unsigned int)v40];
  if ( v39 != (_BYTE *)v17 )
  {
    do
    {
      while ( 1 )
      {
        v17 -= 19;
        v18 = (_QWORD *)v17[1];
        if ( v18 == v17 + 3 )
          break;
        free(v18);
        if ( v16 == v17 )
          goto LABEL_7;
      }
    }
    while ( v16 != v17 );
LABEL_7:
    v17 = v39;
  }
  if ( v17 != (_QWORD *)v41 )
    free(v17);
  return a3;
}
