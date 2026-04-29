_QWORD *__fastcall sub_247940(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4)
{
  int v6; // r13d
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // rcx
  char *v10; // rdi
  _QWORD *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD *v17; // r13
  char v19; // al
  int v20; // eax
  __int64 v21; // rax
  int tinfo_property; // eax
  __int64 v23; // r13
  unsigned int v24; // eax
  __int64 v26; // [rsp+8h] [rbp-70h]
  __int64 v27; // [rsp+10h] [rbp-68h]
  __int64 *v28; // [rsp+18h] [rbp-60h]
  int v29; // [rsp+20h] [rbp-58h]
  __int64 v30; // [rsp+28h] [rbp-50h] BYREF
  __int64 v31; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v32; // [rsp+38h] [rbp-40h]
  int v33; // [rsp+40h] [rbp-38h]
  int v34; // [rsp+48h] [rbp-30h]
  int v35; // [rsp+50h] [rbp-28h]
  int v36; // [rsp+58h] [rbp-20h]
  __int64 v37; // [rsp+60h] [rbp-18h]

  v32 = __readfsqword(0x28u);
  v6 = sub_250780(a3);
  if ( v6 == 1 )
  {
    v30 = 0;
    copy_tinfo_t(&v30, a4);
  }
  else
  {
    sub_327340(&v30, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), *(unsigned int *)(a2 + 36));
  }
  v7 = sub_245270(a1, *(__int64 **)(a2 + 24), a2 + 32, a4, &v30, 0);
  v8 = v7;
  if ( v6 == 1 && (unsigned int)get_tinfo_property(*(_QWORD *)(v7 + 48), 3) != 1 )
    v8 = sub_2405F0(v8, a4);
  v9 = sub_250740(v8);
  v10 = (char *)(a2 + 48);
  if ( a3 - 22 > 1
    || (v27 = v9, v28 = &v31, v26 = a2 + 48, v19 = sub_11BB80(v10, &v31, 0), v10 = (char *)(a2 + 48), v9 = v27, !v19)
    || v31 )
  {
    if ( *(_BYTE *)(a2 + 48) == 2 && (unsigned int)(*(_DWORD *)(v9 + 8) - 19) <= 2 )
    {
LABEL_14:
      v11 = (_QWORD *)(v8 + 48);
LABEL_7:
      v12 = sub_245270(a1, *(__int64 **)(a2 + 24), (__int64)v10, v11, &v30, 0);
      v13 = v12;
      if ( v6 == 1 )
      {
        v26 = v12;
        tinfo_property = get_tinfo_property(*(_QWORD *)(v12 + 48), 3);
        v13 = v26;
        if ( tinfo_property != 1 )
          v13 = sub_2405F0(v26, a4);
      }
      a4 = (_QWORD *)v13;
      v14 = j__qalloc_or_throw(64);
      *(_DWORD *)(v14 + 8) = a3;
      v17 = (_QWORD *)v14;
      *(_QWORD *)v14 = -1;
      *(_QWORD *)(v14 + 12) = -1;
      *(_QWORD *)(v14 + 24) = v8;
      *(_QWORD *)(v14 + 32) = a4;
      *(_QWORD *)(v14 + 40) = 0;
      *(_QWORD *)(v14 + 48) = 0;
      *(_DWORD *)(v14 + 56) = 0;
      goto LABEL_9;
    }
LABEL_6:
    v11 = a4;
    goto LABEL_7;
  }
  v20 = *(_DWORD *)(v27 + 8);
  if ( (unsigned int)(v20 - 35) > 1 )
  {
    if ( v20 != 21 )
      goto LABEL_20;
    if ( *(_BYTE *)(a2 + 48) == 2 )
      goto LABEL_14;
    goto LABEL_6;
  }
  v23 = *(_QWORD *)(v27 + 24);
  if ( *(_DWORD *)(v23 + 8) == 61 || (v23 = *(_QWORD *)(v27 + 32), *(_DWORD *)(v23 + 8) == 61) )
  {
    if ( v23 )
    {
      if ( v20 != 35 || (unsigned __int8)sub_23C350(v23, *(_QWORD *)(a1 + 328), *(_QWORD *)(a1 + 176), v27, v15) )
      {
        v24 = sub_250780(a3);
        sub_27D200(v23, *(_QWORD *)(a1 + 328), v24, 0);
      }
      goto LABEL_29;
    }
  }
  if ( v20 == 36 )
  {
LABEL_29:
    v17 = (_QWORD *)v8;
LABEL_9:
    sub_244D20(
      (__int64)v17,
      *(_QWORD *)(a1 + 328),
      a3,
      v9,
      v15,
      v16,
      (__int64)a4,
      v26,
      v27,
      (int)v28,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
    goto LABEL_10;
  }
LABEL_20:
  if ( a3 == 22 )
  {
    v21 = j__qalloc_or_throw(64);
    *(_QWORD *)(v21 + 24) = v8;
    v17 = (_QWORD *)v21;
    *(_QWORD *)v21 = -1;
    *(_DWORD *)(v21 + 8) = 49;
    *(_QWORD *)(v21 + 12) = -1;
    *(_QWORD *)(v21 + 32) = 0;
    *(_QWORD *)(v21 + 40) = 0;
    *(_QWORD *)(v21 + 48) = 0;
    *(_DWORD *)(v21 + 56) = 0;
    v31 = 8;
    copy_tinfo_t(v21 + 48, &v31);
    clear_tinfo_t(&v31);
  }
  else
  {
    v17 = (_QWORD *)v8;
  }
LABEL_10:
  if ( *v17 == -1 )
    *v17 = *(_QWORD *)(a2 + 24);
  clear_tinfo_t(&v30);
  return v17;
}
