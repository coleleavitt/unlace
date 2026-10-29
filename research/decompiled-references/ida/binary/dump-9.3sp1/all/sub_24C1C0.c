_QWORD *__fastcall sub_24C1C0(__int64 a1, __int64 a2, unsigned int a3, __int64 *a4)
{
  int v7; // r13d
  __int64 v8; // r14
  __int64 v9; // rcx
  char *v10; // rdi
  __int64 *v11; // rcx
  __int64 *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  _QWORD *v19; // r13
  __int64 *v21; // rsi
  char v22; // al
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  int tinfo_property; // eax
  __int64 v29; // r13
  unsigned int v30; // eax
  __int64 v32; // [rsp+8h] [rbp-70h]
  __int64 v33; // [rsp+10h] [rbp-68h]
  __int64 *v34; // [rsp+18h] [rbp-60h]
  int v35; // [rsp+20h] [rbp-58h]
  __int64 v36; // [rsp+28h] [rbp-50h] BYREF
  __int64 v37; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v38; // [rsp+38h] [rbp-40h]
  int v39; // [rsp+40h] [rbp-38h]
  int v40; // [rsp+48h] [rbp-30h]
  int v41; // [rsp+50h] [rbp-28h]
  int v42; // [rsp+58h] [rbp-20h]
  __int64 v43; // [rsp+60h] [rbp-18h]

  v38 = __readfsqword(0x28u);
  v7 = sub_255000(a3, a2);
  if ( v7 == 1 )
  {
    v36 = 0;
    copy_tinfo_t();
  }
  else
  {
    sub_32C270(&v36, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), *(unsigned int *)(a2 + 36));
  }
  v8 = sub_249AF0(a1, *(__int64 **)(a2 + 24), a2 + 32, a4, &v36, 0);
  if ( v7 == 1 && (unsigned int)get_tinfo_property() != 1 )
    v8 = sub_244E70(v8, (__int64)a4, v26, v27);
  v9 = sub_254FC0(v8);
  v10 = (char *)(a2 + 48);
  if ( a3 - 22 > 1
    || (v33 = v9,
        v21 = &v37,
        v34 = &v37,
        v32 = a2 + 48,
        v22 = sub_11FD80(v10, &v37, 0),
        v10 = (char *)(a2 + 48),
        v9 = v33,
        !v22)
    || v37 )
  {
    if ( *(_BYTE *)(a2 + 48) == 2 && (unsigned int)(*(_DWORD *)(v9 + 8) - 19) <= 2 )
    {
LABEL_14:
      v11 = (__int64 *)(v8 + 48);
LABEL_7:
      v12 = *(__int64 **)(a2 + 24);
      v13 = sub_249AF0(a1, v12, (__int64)v10, v11, &v36, 0);
      v15 = v13;
      if ( v7 == 1 )
      {
        v12 = (_QWORD *)(&word_2 + 1);
        v32 = v13;
        tinfo_property = get_tinfo_property();
        v15 = v32;
        if ( tinfo_property != 1 )
        {
          v12 = a4;
          v15 = sub_244E70(v32, (__int64)a4, v32, v14);
        }
      }
      a4 = (__int64 *)v15;
      v16 = j__qalloc_or_throw(64, (__int64)v12, v15, v14);
      *(_DWORD *)(v16 + 8) = a3;
      v19 = (_QWORD *)v16;
      *(_QWORD *)v16 = -1;
      *(_QWORD *)(v16 + 12) = -1;
      *(_QWORD *)(v16 + 24) = v8;
      *(_QWORD *)(v16 + 32) = a4;
      *(_QWORD *)(v16 + 40) = 0;
      *(_QWORD *)(v16 + 48) = 0;
      *(_DWORD *)(v16 + 56) = 0;
      goto LABEL_9;
    }
LABEL_6:
    v11 = a4;
    goto LABEL_7;
  }
  v23 = *(_DWORD *)(v33 + 8);
  v24 = (unsigned int)(v23 - 35);
  if ( (unsigned int)v24 > 1 )
  {
    if ( v23 != 21 )
      goto LABEL_20;
    if ( *(_BYTE *)(a2 + 48) == 2 )
      goto LABEL_14;
    goto LABEL_6;
  }
  v29 = *(_QWORD *)(v33 + 24);
  if ( *(_DWORD *)(v29 + 8) == 61 || (v29 = *(_QWORD *)(v33 + 32), *(_DWORD *)(v29 + 8) == 61) )
  {
    if ( v29 )
    {
      if ( v23 != 35
        || (v21 = *(__int64 **)(a1 + 328),
            (unsigned __int8)sub_240BD0(v29, (__int64)v21, *(_QWORD *)(a1 + 176), v33, v17)) )
      {
        v30 = sub_255000(a3, v21);
        sub_281A80(v29, *(_QWORD *)(a1 + 328), v30, 0);
      }
      goto LABEL_29;
    }
  }
  if ( v23 == 36 )
  {
LABEL_29:
    v19 = (_QWORD *)v8;
LABEL_9:
    sub_2495A0(
      (__int64)v19,
      *(_QWORD *)(a1 + 328),
      a3,
      v9,
      v17,
      v18,
      (__int64)a4,
      v32,
      v33,
      (int)v34,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
    goto LABEL_10;
  }
LABEL_20:
  if ( a3 == 22 )
  {
    v25 = j__qalloc_or_throw(64, (__int64)&v37, v24, v33);
    *(_QWORD *)(v25 + 24) = v8;
    v19 = (_QWORD *)v25;
    *(_QWORD *)v25 = -1;
    *(_DWORD *)(v25 + 8) = 49;
    *(_QWORD *)(v25 + 12) = -1;
    *(_QWORD *)(v25 + 32) = 0;
    *(_QWORD *)(v25 + 40) = 0;
    *(_QWORD *)(v25 + 48) = 0;
    *(_DWORD *)(v25 + 56) = 0;
    v37 = 8;
    copy_tinfo_t();
    clear_tinfo_t();
  }
  else
  {
    v19 = (_QWORD *)v8;
  }
LABEL_10:
  if ( *v19 == -1 )
    *v19 = *(_QWORD *)(a2 + 24);
  clear_tinfo_t();
  return v19;
}
