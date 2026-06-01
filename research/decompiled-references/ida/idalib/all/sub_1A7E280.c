unsigned __int64 __fastcall sub_1A7E280(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned __int64 result; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  char v9; // dl
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // r13
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rsi
  __int64 v18; // rdi
  int v19; // edx
  __m128i *v20; // r14
  __int64 v21; // r13
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  void (*v27)(); // r8
  _QWORD *v28; // rcx
  __int64 v29; // r14
  unsigned __int64 v30; // rdx
  __int64 v31; // rax
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rax
  __int64 v34; // [rsp-10h] [rbp-58h]
  unsigned __int64 v35; // [rsp+8h] [rbp-40h]
  char v36; // [rsp+1Eh] [rbp-2Ah] BYREF

  result = sub_1DBADC0(a1);
  if ( v9 )
    return result;
  result = *(_QWORD *)(a1 + 232);
  if ( (*(_BYTE *)(result + 22) & 0x20) == 0 )
    return result;
  if ( a3 )
  {
    v10 = *(_QWORD *)(a1 + 11128);
    v11 = *(unsigned int *)(a3 + 416);
    result = (*(_QWORD *)(a1 + 11136) - v10) >> 2;
    if ( v11 < result )
    {
      if ( *(_DWORD *)(v10 + 4 * v11) )
        return result;
    }
  }
  v12 = *(_QWORD *)(a1 + 248);
  v13 = *(_QWORD *)(*(_QWORD *)(v12 + 2264) + 80LL);
  v14 = *(_QWORD *)(v13 + 72);
  v15 = v14 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v14 & 1) != 0 )
    goto LABEL_7;
  v28 = (_QWORD *)(v14 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (v14 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
    goto LABEL_7;
  v17 = v14 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (v14 & 2) != 0 )
  {
    v29 = v28[2295];
    v30 = v13 & 0xFFFFFFFFFFFFFFFBLL;
    if ( v29 )
    {
      v31 = v28[294];
      v28[304] += 24LL;
      v32 = (v31 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v28[295] >= v32 + 24 && v31 )
      {
        v28[294] = v32 + 24;
        v33 = (v31 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      }
      else
      {
        v33 = sub_986170((__int64)(v28 + 294), 24, 24, 3, v7, v8);
        v32 = v33 & 0xFFFFFFFFFFFFFFFBLL;
      }
      *(_QWORD *)v33 = v29;
      v30 = v32 | 4;
      *(_DWORD *)(v33 + 8) = 0;
      *(_QWORD *)(v33 + 16) = v13;
    }
    v15 = v30 & 0xFFFFFFFFFFFFFFFELL;
    v14 = v15 | 1;
    *(_QWORD *)(v13 + 72) = v15 | 1;
LABEL_7:
    v16 = v14 & 0xFFFFFFFFFFFFFFF8LL;
    v17 = v16;
    if ( v15 )
    {
      if ( (v15 & 4) != 0 )
      {
        v17 = 0;
        if ( v16 )
        {
          v18 = *(_QWORD *)v16;
          v19 = *(_DWORD *)(*(_QWORD *)v16 + 12LL);
          if ( *(_DWORD *)(v16 + 8) != v19 )
          {
            *(_DWORD *)(v16 + 8) = v19;
            v35 = v16;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 152LL))(v18, v13);
            v16 = v35;
          }
          v17 = *(_QWORD *)(v16 + 16);
        }
      }
    }
    v12 = *(_QWORD *)(a1 + 248);
  }
  v20 = (__m128i *)(v17 + 40);
  if ( v17 )
    v17 += 40LL;
  v21 = sub_B7B060(v12, v17, a2, a3, a2);
  sub_B94AD0(v20, v21, v22, v23, v24, v25);
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 256) + 88LL))(*(_QWORD *)(a1 + 256), v21);
  v26 = sub_15F0FB0(a1);
  v27 = *(void (**)())(*(_QWORD *)v26 + 32LL);
  if ( v27 != nullsub_608 )
    ((void (__fastcall *)(__int64, __int64, __int64, _QWORD))v27)(v26, a3, 1, a2);
  sub_FF1730(a1 + 11128, a3, a2, 1, (__int64)nullsub_1204, (__int64)&v36, (char)nullsub_1205);
  return v34;
}
