__int64 __fastcall sub_1DBA190(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  _QWORD *v7; // rax
  _QWORD *v8; // r13
  __int64 result; // rax
  _QWORD *v10; // r15
  __int64 v11; // rdx
  __int64 v12; // r13
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // rdx
  const __m128i *v18; // r13
  __m128i *v19; // rax
  __int64 *v20; // rax
  __int64 v21; // rax
  _DWORD *v22; // rcx
  _DWORD *v23; // rdx
  _DWORD *v24; // rax
  _QWORD *v25; // r14
  _QWORD *v26; // rax
  __int64 v27; // r15
  _QWORD *v28; // r13
  unsigned __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  _QWORD *v32; // rdi
  int v33; // eax
  __int64 v34; // rsi
  _DWORD *v35; // [rsp+8h] [rbp-60h]
  __int64 v36; // [rsp+8h] [rbp-60h]
  _QWORD v37[2]; // [rsp+10h] [rbp-58h] BYREF
  __int64 v38; // [rsp+20h] [rbp-48h]
  __int64 v39; // [rsp+28h] [rbp-40h]

  v7 = (_QWORD *)sub_B97230(a2);
  if ( v7 )
  {
    v8 = v7;
    if ( (*(_BYTE *)sub_BC3640(v7) & 4) != 0 )
      return 0;
    if ( a4 )
    {
      v10 = sub_BC1290((__int64 *)v8[7], *(_QWORD *)(a1 + 248));
      v12 = v11;
      v13 = 0;
      if ( a2 )
        v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2) & 0xFFFFFFFFFFFFFFFBLL;
      v37[0] = v13;
      v14 = *(unsigned int *)(a3 + 8);
      v37[1] = v10;
      v15 = *(unsigned int *)(a3 + 12);
      v16 = *(_QWORD *)a3;
      v17 = v14 + 1;
      v38 = v12;
      v18 = (const __m128i *)v37;
      v19 = (__m128i *)(v16 + 24 * v14);
      if ( v17 > v15 )
      {
        v34 = a3 + 16;
        if ( v16 > (unsigned __int64)v37 || v19 <= (__m128i *)v37 )
        {
          sub_2237220(a3, v34, v17, 24);
          v19 = (__m128i *)(*(_QWORD *)a3 + 24LL * *(unsigned int *)(a3 + 8));
        }
        else
        {
          sub_2237220(a3, v34, v17, 24);
          v18 = (const __m128i *)((char *)v37 + *(_QWORD *)a3 - v16);
          v19 = (__m128i *)(*(_QWORD *)a3 + 24LL * *(unsigned int *)(a3 + 8));
        }
      }
      *v19 = _mm_loadu_si128(v18);
      v19[1].m128i_i64[0] = v18[1].m128i_i64[0];
      ++*(_DWORD *)(a3 + 8);
    }
  }
  v20 = (__int64 *)sub_B97210(a2);
  if ( v20 && ((*v20 >> 1) & 3) == 1 )
    return 0;
  if ( (*(_WORD *)(a2 + 30) & 0x180) != 0 || sub_B97230(a2) && (*(_WORD *)(sub_B97230(a2) + 30) & 0x180) != 0 )
  {
    if ( a4 )
    {
      v33 = *(_BYTE *)(sub_B8DFE0(a2) + 8) & 0x7F;
      if ( v33 == 24 || !v33 )
      {
        v32 = (_QWORD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
        if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
          v32 = (_QWORD *)v32[1];
        return sub_B8C1B0((__int64)v32);
      }
    }
  }
  v21 = *(_QWORD *)(a2 + 128);
  if ( !v21 || (*(_BYTE *)(v21 + 10) & 0x20) == 0 )
    goto LABEL_32;
  result = sub_B970F0(a2);
  if ( result )
    return result;
  v22 = *(_DWORD **)(a1 + 11312);
  v23 = &v22[16 * (unsigned __int64)*(unsigned int *)(a1 + 11320)];
  if ( v22 == v23 )
    goto LABEL_32;
  if ( *(v23 - 16) != 26 )
  {
    v24 = v23 - 16;
    do
    {
      v23 = v24;
      if ( v22 == v24 )
        goto LABEL_32;
      v24 -= 16;
    }
    while ( *v24 != 26 );
  }
  v25 = *((_QWORD **)v23 - 6);
  v35 = v23;
  v26 = (_QWORD *)sub_BC3640(v25);
  v27 = *((_QWORD *)v35 - 4);
  v28 = (_QWORD *)(*v26 & 0xFFFFFFFFFFFFFFF8LL);
  v36 = (unsigned int)*(v35 - 6);
  if ( v28 )
  {
    while ( 1 )
    {
      v29 = *(_QWORD *)sub_BC3640(v28) & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v29 )
        break;
      v28 = (_QWORD *)v29;
    }
  }
  else
  {
    v28 = v25;
  }
  v38 = v27;
  v39 = v36;
  if ( !v25 || !a4 || (v30 = sub_B96F60(a2), !(unsigned __int8)sub_1DB8AC0(v30, (__int64)v28)) )
  {
LABEL_32:
    v32 = (_QWORD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
      v32 = (_QWORD *)*v32;
    return sub_B8C1B0((__int64)v32);
  }
  sub_1CB3AC0(a3, (__int64)v25, v38, v39, 0);
  v31 = v25[2];
  if ( (v31 & 4) != 0 )
    v32 = *(_QWORD **)(v31 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v32 = (_QWORD *)(v31 & 0xFFFFFFFFFFFFFFF8LL);
  return sub_B8C1B0((__int64)v32);
}
