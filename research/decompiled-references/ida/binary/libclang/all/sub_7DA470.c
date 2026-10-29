_QWORD *__fastcall sub_7DA470(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 i; // r13
  __int64 v12; // rdi
  __int64 v13; // rax
  _QWORD *v14; // rbx
  __int64 v15; // rbp
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  _QWORD *v18; // rax
  __int64 v19; // r12
  __int64 v20; // rdx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  __int64 v24; // rdi
  int v25; // eax
  void *ptr; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v27; // [rsp+18h] [rbp-C0h]
  _QWORD v28[23]; // [rsp+20h] [rbp-B8h] BYREF

  ptr = v28;
  v27 = 0x2000000000LL;
  v6 = sub_798D40(a1);
  v7 = a4[1];
  LODWORD(v27) = 2;
  v8 = v6;
  v9 = *a4;
  v28[0] = v7;
  v10 = v9 + 24 * v7;
  for ( i = v9; v10 != i; i += 24 )
  {
    v12 = i;
    sub_AFDA60(v12, &ptr, v8);
  }
  v13 = sub_25AC3A0(a2, &ptr, a3, off_47DA8D0);
  v14 = (_QWORD *)v13;
  if ( v13 )
  {
    v15 = *(_QWORD *)((*(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF8LL) + 112);
    v16 = *(_QWORD *)(v15 + 104);
    v17 = v16 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v16 & 1) == 0 )
    {
      if ( v17 <= 3 )
      {
        v14 = nullptr;
        goto LABEL_12;
      }
      v18 = (_QWORD *)(v16 & 0xFFFFFFFFFFFFFFFCLL);
      v14 = v18;
      if ( (v17 & 2) == 0 )
        goto LABEL_12;
      v19 = v18[2275];
      if ( v19 )
      {
        v20 = v18[274];
        v18[284] += 24LL;
        v21 = (v20 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v14[275] >= v21 + 24 && v20 )
          v14[274] = v21 + 24;
        else
          v21 = sub_7CF9B0((__int64)(v14 + 274), 24, 3);
        *(_QWORD *)v21 = v19;
        *(_DWORD *)(v21 + 8) = 0;
        *(_QWORD *)(v21 + 16) = v15;
        *(_QWORD *)(v15 + 104) = v21 | 5;
        v22 = v21 & 0xFFFFFFFFFFFFFFF8LL;
        v14 = (_QWORD *)v22;
LABEL_18:
        if ( v22 )
        {
          v24 = *v14;
          v25 = *(_DWORD *)(*v14 + 12LL);
          if ( *((_DWORD *)v14 + 2) != v25 )
          {
            *((_DWORD *)v14 + 2) = v25;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 144LL))(v24, v15);
          }
          v14 = (_QWORD *)v14[2];
        }
        goto LABEL_12;
      }
      v17 = v15 & 0xFFFFFFFFFFFFFFFALL;
      v16 = v15 & 0xFFFFFFFFFFFFFFFALL | 1;
      *(_QWORD *)(v15 + 104) = v16;
    }
    v22 = v16 & 0xFFFFFFFFFFFFFFF8LL;
    v14 = (_QWORD *)v22;
    if ( !v17 || (v17 & 4) == 0 )
      goto LABEL_12;
    goto LABEL_18;
  }
LABEL_12:
  if ( ptr != v28 )
    free(ptr);
  return v14;
}

