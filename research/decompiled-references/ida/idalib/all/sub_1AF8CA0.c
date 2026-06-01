// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall sub_1AF8CA0(__int64 *a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  _QWORD *v10; // rax
  _QWORD *v11; // r15
  unsigned __int64 v12; // rax
  __int64 v13; // r13
  __int64 v14; // r8
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rsi
  __int64 v19; // rdi
  int v20; // edx
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r13
  __int64 result; // rax
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rsi
  __int64 v30; // rcx
  __int64 v31; // rsi
  _QWORD *v32; // rdi
  __int64 v33; // r9
  unsigned __int64 v34; // rdx
  __int64 v35; // rax
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // [rsp+0h] [rbp-48h]
  __int64 v39; // [rsp+0h] [rbp-48h]
  __int64 v40; // [rsp+8h] [rbp-40h]

  v10 = (_QWORD *)sub_168B6C0((__int64)a1);
  v11 = sub_A81910(v10, a3, a4);
  v12 = 0;
  if ( (a5 & 7) == 0 )
    v12 = a5 & 0xFFFFFFFFFFFFFFF8LL;
  v13 = v12;
  v14 = *(_QWORD *)(*(_QWORD *)(sub_168B6C0((__int64)a1) + 2264) + 80LL);
  v15 = *(_QWORD *)(v14 + 72);
  if ( (v15 & 1) != 0 )
  {
    v16 = v15 & 0xFFFFFFFFFFFFFFFELL;
    goto LABEL_5;
  }
  v32 = (_QWORD *)(v15 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (v15 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
  {
    v18 = 0;
    goto LABEL_13;
  }
  v18 = v15 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (v15 & 2) != 0 )
  {
    v33 = v32[2295];
    v34 = v14 & 0xFFFFFFFFFFFFFFFBLL;
    if ( v33 )
    {
      v35 = v32[294];
      v32[304] += 24LL;
      v36 = (v35 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v32[295] >= v36 + 24 && v35 )
      {
        v32[294] = v36 + 24;
        v37 = (v35 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      }
      else
      {
        v40 = v33;
        v39 = v14;
        v37 = sub_986170((__int64)(v32 + 294), 24, 24, 3, v14, v33);
        v33 = v40;
        v14 = v39;
        v36 = v37 & 0xFFFFFFFFFFFFFFFBLL;
      }
      *(_QWORD *)v37 = v33;
      v34 = v36 | 4;
      *(_DWORD *)(v37 + 8) = 0;
      *(_QWORD *)(v37 + 16) = v14;
    }
    v16 = v34 & 0xFFFFFFFFFFFFFFFELL;
    v15 = v16 | 1;
    *(_QWORD *)(v14 + 72) = v16 | 1;
LABEL_5:
    v17 = v15 & 0xFFFFFFFFFFFFFFF8LL;
    v18 = v17;
    if ( v16 && (v16 & 4) != 0 )
    {
      v18 = 0;
      if ( !v17 )
        goto LABEL_13;
      v19 = *(_QWORD *)v17;
      v20 = *(_DWORD *)(*(_QWORD *)v17 + 12LL);
      if ( *(_DWORD *)(v17 + 8) != v20 )
      {
        *(_DWORD *)(v17 + 8) = v20;
        v38 = v17;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 152LL))(v19, v14);
        v17 = v38;
      }
      v18 = *(_QWORD *)(v17 + 16);
    }
  }
  if ( v18 )
    v18 += 40LL;
LABEL_13:
  v21 = sub_168B6C0((__int64)a1);
  v24 = sub_B731A0(v21, v18, a4, a4, v13, a3, (__int64)v11, 0);
  if ( a2 )
    sub_17B7670(*a1, v24, a2, 0, v22, v23);
  result = sub_1AE9760(*a1, v24, a3, a4);
  v26 = a1[1];
  v27 = *(unsigned int *)(v26 + 344);
  if ( !(_DWORD)v27
    || (v28 = *(_QWORD *)(v26 + 336) + 6776 * v27 - 6776, *(_QWORD *)(v28 + 6768) != *(_QWORD *)(v26 + 328))
    || (v29 = *(unsigned int *)(v28 + 8), v30 = *(unsigned int *)(v26 + 27504), (unsigned int)v29 <= (unsigned int)v30)
    || (v31 = v29 - v30) == 0 )
  {
    elf_gnu_hash_indexes[107] = result;
    BUG();
  }
  *(_QWORD *)(*(_QWORD *)v28 + 1688 * (v31 - 1) + 1536) = result;
  return result;
}
