__int64 __fastcall sub_8F2440(__int64 a1)
{
  __int64 *v2; // rbx
  __int64 *v3; // r12
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rsi
  int v8; // edx
  __int64 v9; // rdi
  bool v10; // zf
  _QWORD *v11; // rbx
  _QWORD *v12; // r12
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 result; // rax
  __int64 v17; // rbx
  unsigned __int64 v18; // r14
  _OWORD *v19; // rax
  _OWORD *v20; // rax
  _OWORD *v21; // rax
  _OWORD *v22; // rax
  __int64 v23; // rax

  v2 = *(__int64 **)(a1 + 8688);
  if ( v2 )
  {
    v3 = &v2[*((unsigned int *)v2 - 1)];
    while ( v3 != v2 )
    {
      v4 = *v2++;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 144LL))(v4);
    }
  }
  sub_953030(*(_QWORD *)(a1 + 7472));
  v5 = *(_QWORD *)(a1 + 10312);
  if ( v5 )
    *(_DWORD *)(v5 - 4) = 0;
  v6 = *(_QWORD *)(a1 + 112);
  v7 = *(_QWORD *)(a1 + 9008);
  *(_OWORD *)(a1 + 10324) = 0;
  v8 = *(_DWORD *)(v6 + 604);
  *(_DWORD *)(a1 + 10352) = 1;
  *(_QWORD *)(a1 + 10360) = 0;
  *(_DWORD *)(a1 + 10344) = v8;
  *(_DWORD *)(a1 + 10348) = v8;
  LODWORD(v6) = *(_DWORD *)(v6 + 652);
  *(_DWORD *)(a1 + 10308) = 0;
  *(_DWORD *)(a1 + 10368) = v6;
  if ( v7 )
  {
    v9 = *(_QWORD *)(a1 + 9016);
    v10 = (*(_DWORD *)(v7 + 8))-- == 1;
    if ( v10 )
      sub_15D7BC0(v9, v7);
  }
  v11 = *(_QWORD **)(a1 + 9376);
  *(_QWORD *)(a1 + 9008) = 0;
  if ( v11 )
  {
    v12 = &v11[*((unsigned int *)v11 - 1)];
    if ( v11 >= v12 )
      goto LABEL_17;
    do
    {
      while ( 1 )
      {
        v13 = *v11;
        if ( *v11 )
        {
          v14 = *(_QWORD *)(a1 + 9368);
          v10 = (*(_DWORD *)(v13 + 8))-- == 1;
          if ( v10 )
            break;
        }
        if ( ++v11 >= v12 )
          goto LABEL_16;
      }
      sub_15D7BC0(v14, v13);
      ++v11;
    }
    while ( v11 < v12 );
LABEL_16:
    v11 = *(_QWORD **)(a1 + 9376);
    if ( v11 )
LABEL_17:
      *((_DWORD *)v11 - 1) = 0;
  }
  sub_958C20(a1 + 9080);
  v15 = *(_QWORD *)(a1 + 8952);
  *(_DWORD *)(a1 + 8608) = 0;
  *(_BYTE *)(a1 + 8976) = 0;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 56LL))(v15);
  result = *(_QWORD *)(a1 + 104);
  *(_DWORD *)(a1 + 7528) = 0;
  *(_DWORD *)(a1 + 8632) = 0;
  if ( *(_BYTE *)(result + 921) )
  {
    result = *(_QWORD *)(a1 + 8672);
    if ( !result || *(_DWORD *)(result - 4) <= 6u || !*(_QWORD *)(result + 48) )
    {
      v17 = sub_186B270(0x190u);
      sub_966710(v17, a1, 6);
      *(_QWORD *)v17 = off_1C6F538;
      *(_OWORD *)(v17 + 56) = 0;
      sub_180C0A0(v17 + 72);
      v18 = *(_QWORD *)(a1 + 104);
      *(_QWORD *)(v17 + 144) = 0;
      *(__m128i *)(v17 + 112) = _mm_unpacklo_epi64((__m128i)v18, (__m128i)(unsigned __int64)(v17 + 56));
      *(__m128i *)(v17 + 128) = _mm_unpacklo_epi64((__m128i)v18, (__m128i)v18);
      v19 = (_OWORD *)sub_186B270(0x80u);
      *(_QWORD *)(v17 + 152) = v19;
      *(_DWORD *)(v17 + 168) = 0;
      *(_QWORD *)(v17 + 160) = 8;
      *(_DWORD *)(v17 + 176) = 0;
      *(_QWORD *)(v17 + 184) = v18;
      *(_QWORD *)(v17 + 192) = 0;
      *v19 = 0;
      v19[1] = 0;
      v19[2] = 0;
      v19[3] = 0;
      v19[4] = 0;
      v19[5] = 0;
      v19[6] = 0;
      v19[7] = 0;
      v20 = (_OWORD *)sub_186B270(0x80u);
      *(_QWORD *)(v17 + 200) = v20;
      *(_QWORD *)(v17 + 208) = 8;
      *(_DWORD *)(v17 + 216) = 0;
      *v20 = 0;
      v20[1] = 0;
      v20[2] = 0;
      v20[3] = 0;
      v20[4] = 0;
      v20[5] = 0;
      v20[6] = 0;
      v20[7] = 0;
      v21 = (_OWORD *)sub_186B270(0x100u);
      *(_QWORD *)(v17 + 224) = v21;
      *v21 = 0;
      v21[1] = 0;
      v21[2] = 0;
      v21[3] = 0;
      v21[4] = 0;
      v21[5] = 0;
      v21[6] = 0;
      v21[7] = 0;
      v21[8] = 0;
      v21[9] = 0;
      v21[10] = 0;
      v21[11] = 0;
      v21[12] = 0;
      v21[13] = 0;
      v21[14] = 0;
      v21[15] = 0;
      *(_QWORD *)(v17 + 232) = 8;
      *(_DWORD *)(v17 + 240) = 0;
      *(_QWORD *)(v17 + 248) = v18;
      *(_QWORD *)(v17 + 256) = 0;
      *(_DWORD *)(v17 + 264) = 0;
      *(_QWORD *)(v17 + 272) = &off_1C62200;
      *(_QWORD *)(v17 + 288) = 0;
      *(_QWORD *)(v17 + 296) = 0;
      *(_QWORD *)(v17 + 312) = 0;
      *(_QWORD *)(v17 + 320) = 0;
      *(_QWORD *)(v17 + 328) = v18;
      *(_QWORD *)(v17 + 336) = 0;
      *(_DWORD *)(v17 + 344) = 0;
      v22 = (_OWORD *)sub_186B270(0x40u);
      *(_QWORD *)(v17 + 352) = v22;
      *v22 = 0;
      v22[1] = 0;
      v22[2] = 0;
      v22[3] = 0;
      v23 = *(_QWORD *)(a1 + 104);
      *(_QWORD *)(v17 + 360) = 8;
      *(_DWORD *)(v17 + 368) = 0;
      *(_QWORD *)(v17 + 376) = 0;
      *(_QWORD *)(v17 + 384) = v23;
      *(_DWORD *)(v17 + 392) = 0;
      *(_BYTE *)(v17 + 396) = 1;
      return sub_8F1E10(a1, (unsigned int *)v17);
    }
  }
  return result;
}

