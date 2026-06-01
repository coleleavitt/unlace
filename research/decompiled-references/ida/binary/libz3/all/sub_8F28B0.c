__int64 (__fastcall *__fastcall sub_8F28B0(__int64 a1, unsigned int a2, __int64 a3, unsigned __int8 a4))()
{
  char **exception; // rbp
  _QWORD *v9; // rdi
  __int64 v10; // rax
  unsigned int *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  int v14; // esi
  __int64 v15; // rsi
  char v16; // di
  bool v17; // sf
  __int64 v18; // rdi
  __int64 (__fastcall *result)(); // rax
  double v20; // xmm0_8
  unsigned int v21; // edx
  _QWORD *v22; // rdi
  __int64 v23; // rax
  unsigned int *v24; // rax
  unsigned int v25; // r14d
  size_t v26; // rsi
  unsigned int *v27; // rax
  __int64 v28; // rax
  unsigned int v29; // r14d
  size_t v30; // rsi
  unsigned int *v31; // rax
  __int64 v32; // rax
  _QWORD *v33; // rax
  _QWORD *v34; // rax
  __int64 v35[9]; // [rsp+0h] [rbp-48h] BYREF

  v9 = *(_QWORD **)(a1 + 8920);
  if ( v9 )
  {
    v10 = *((unsigned int *)v9 - 1);
    if ( (_DWORD)v10 == *((_DWORD *)v9 - 2) )
    {
      v25 = (unsigned int)(3 * v10 + 1) >> 1;
      v26 = 4 * v25 + 8;
      if ( 4 * (int)v10 + 8 >= (unsigned int)v26 || (unsigned int)v10 >= v25 )
        goto LABEL_34;
      v27 = (unsigned int *)sub_186B300(v9 - 1, v26);
      v9 = v27 + 2;
      *v27 = v25;
      v28 = v27[1];
      *(_QWORD *)(a1 + 8920) = v9;
      v11 = (unsigned int *)v9 + v28;
    }
    else
    {
      v11 = (unsigned int *)v9 + v10;
    }
  }
  else
  {
    v33 = (_QWORD *)sub_186B270(0x10u);
    v9 = v33 + 1;
    *v33 = 2;
    *(_QWORD *)(a1 + 8920) = v33 + 1;
    v11 = (unsigned int *)(v33 + 1);
  }
  v12 = *(_QWORD *)(a1 + 8848);
  *v11 = a2;
  ++*((_DWORD *)v9 - 1);
  *(_BYTE *)(v12 + a2) = 1;
  *(_BYTE *)(*(_QWORD *)(a1 + 8848) + (a2 ^ 1)) = -1;
  v13 = *(_QWORD *)(a1 + 8872) + 16LL * (a2 >> 1);
  LODWORD(v12) = *(_DWORD *)(v13 + 8);
  v14 = *(_DWORD *)(a1 + 9464) & 0xFFFFFF;
  *(_QWORD *)v13 = a3;
  *(_DWORD *)(v13 + 8) = v14 | v12 & 0xFF000000;
  v15 = *(_QWORD *)(a1 + 112);
  if ( *(_BYTE *)(v15 + 616) )
  {
    v16 = *(_BYTE *)(v13 + 11);
    if ( (v16 & 4) != 0 )
    {
      v20 = *(double *)(a1 + 10360) * *(double *)(v15 + 624);
      *(double *)(a1 + 10360) = v20;
      if ( !a4 && ((v16 & 8) != 0) == (a2 & 1) )
        *(double *)(a1 + 10360) = 1.0 - *(double *)(v15 + 624) + v20;
    }
  }
  v17 = *(char *)(v13 + 14) < 0;
  *(_BYTE *)(v13 + 11) = *(_BYTE *)(v13 + 11) & 0xF3 | (8 * !(a2 & 1) + 4);
  if ( v17 )
  {
    v21 = *(_DWORD *)(*(_QWORD *)(a1 + 112) + 476LL);
    if ( v21 > *(_DWORD *)(a1 + 184) )
      v21 = *(_DWORD *)(a1 + 184);
    if ( !v21
      || v21 == 1 && *(char *)(v13 + 11) >= 0
      || (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 7488) + 56LL))(
           *(_QWORD *)(a1 + 7488),
           *(_QWORD *)(*(_QWORD *)(a1 + 8840) + 8LL * (a2 >> 1))) )
    {
      v22 = *(_QWORD **)(a1 + 9024);
      if ( !v22 )
      {
        v34 = (_QWORD *)sub_186B270(0x10u);
        v22 = v34 + 1;
        *v34 = 2;
        *(_QWORD *)(a1 + 9024) = v34 + 1;
        v24 = (unsigned int *)(v34 + 1);
        goto LABEL_22;
      }
      v23 = *((unsigned int *)v22 - 1);
      if ( (_DWORD)v23 != *((_DWORD *)v22 - 2) )
      {
        v24 = (unsigned int *)v22 + v23;
LABEL_22:
        *v24 = a2;
        ++*((_DWORD *)v22 - 1);
        goto LABEL_7;
      }
      v29 = (unsigned int)(3 * v23 + 1) >> 1;
      v30 = 4 * v29 + 8;
      if ( 4 * (int)v23 + 8 < (unsigned int)v30 && (unsigned int)v23 < v29 )
      {
        v31 = (unsigned int *)sub_186B300(v22 - 1, v30);
        v22 = v31 + 2;
        *v31 = v29;
        v32 = v31[1];
        *(_QWORD *)(a1 + 9024) = v22;
        v24 = (unsigned int *)v22 + v32;
        goto LABEL_22;
      }
LABEL_34:
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_8E4EB0(v35, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v35);
      sub_233E40((__int64)v35);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
  }
LABEL_7:
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 104) + 912LL) )
    sub_AA7FA0(a1, a2, a3, a4);
  v18 = *(_QWORD *)(a1 + 8952);
  result = *(__int64 (__fastcall **)())(*(_QWORD *)v18 + 32LL);
  if ( result != nullsub_548 )
    return (__int64 (__fastcall *)())((__int64 (__fastcall *)(__int64, _QWORD))result)(v18, a2);
  return result;
}

