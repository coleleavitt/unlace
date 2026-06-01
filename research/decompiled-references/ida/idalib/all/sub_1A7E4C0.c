__int64 __fastcall sub_1A7E4C0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v9; // rax
  void (*v10)(); // r8
  __int64 result; // rax
  __int64 v12; // rdi
  __int64 v13; // r13
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rsi
  __int64 v18; // rdi
  int v19; // edx
  __m128i *v20; // r14
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r13
  __int64 v26; // rax
  _DWORD *v27; // rdi
  unsigned int v28; // esi
  int v29; // r13d
  int v30; // eax
  _QWORD *v31; // rcx
  __int64 v32; // r14
  unsigned __int64 v33; // rdx
  __int64 v34; // rax
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // [rsp+8h] [rbp-40h]
  char v38; // [rsp+1Eh] [rbp-2Ah] BYREF

  if ( *(_DWORD *)(a1 + 184) == 2 )
  {
    v27 = *(_DWORD **)(a1 + 272);
    v28 = a2 & 0x7FFFFFFF;
    v29 = v27[130];
    if ( v28 < v27[119] || v28 >= v27[120] )
      v30 = sub_101D590((__int64)v27, v28);
    else
      v30 = v27[118];
    if ( v29 == v30 )
      goto LABEL_3;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 21LL) & 2) == 0 )
    goto LABEL_3;
  v12 = *(_QWORD *)(a1 + 248);
  v13 = *(_QWORD *)(*(_QWORD *)(v12 + 2264) + 80LL);
  v14 = *(_QWORD *)(v13 + 72);
  v15 = v14 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v14 & 1) != 0 )
    goto LABEL_8;
  v31 = (_QWORD *)(v14 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (v14 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
    goto LABEL_8;
  v17 = v14 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (v14 & 2) != 0 )
  {
    v32 = v31[2295];
    v33 = v13 & 0xFFFFFFFFFFFFFFFBLL;
    if ( v32 )
    {
      v34 = v31[294];
      v31[304] += 24LL;
      v35 = (v34 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v31[295] >= v35 + 24 && v34 )
      {
        v31[294] = v35 + 24;
        v36 = (v34 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      }
      else
      {
        v36 = sub_986170((__int64)(v31 + 294), 24, 24, 3, a5, a6);
        v35 = v36 & 0xFFFFFFFFFFFFFFFBLL;
      }
      *(_QWORD *)v36 = v32;
      v33 = v35 | 4;
      *(_DWORD *)(v36 + 8) = 0;
      *(_QWORD *)(v36 + 16) = v13;
    }
    v15 = v33 & 0xFFFFFFFFFFFFFFFELL;
    v14 = v15 | 1;
    *(_QWORD *)(v13 + 72) = v15 | 1;
LABEL_8:
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
            v37 = v16;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 152LL))(v18, v13);
            v16 = v37;
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
  v25 = sub_B7B060(v12, v17, a2, a3, a2);
  v26 = *(unsigned int *)(a1 + 10152);
  if ( (_DWORD)v26 )
    sub_A93DF0(*(_QWORD *)(a1 + 248), *(_QWORD *)(*(_QWORD *)(a1 + 10144) + 48 * v26 - 40), v25, v22, v23, v24);
  sub_B94AD0(v20, v25, v21, v22, v23, v24);
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 256) + 88LL))(*(_QWORD *)(a1 + 256), v25);
LABEL_3:
  v9 = sub_15F0FB0(a1);
  v10 = *(void (**)())(*(_QWORD *)v9 + 32LL);
  if ( v10 != nullsub_608 )
    ((void (__fastcall *)(__int64, __int64, __int64, _QWORD))v10)(v9, a3, 1, a2);
  sub_FF1730(a1 + 11128, a3, a2, 1, (__int64)nullsub_1204, (__int64)&v38, (char)nullsub_1205);
  result = *(_QWORD *)(a1 + 232);
  if ( *(_BYTE *)(result + 201) >> 5 )
    return sub_13C9950(
             *(__int64 **)(*(_QWORD *)(a1 + 240) + 104LL),
             *(_QWORD *)(result + 488),
             *(_QWORD *)(result + 496),
             a2,
             0,
             0);
  return result;
}
