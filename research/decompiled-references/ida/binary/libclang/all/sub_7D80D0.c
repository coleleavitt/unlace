_QWORD *__fastcall sub_7D80D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rdi
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  _QWORD *v15; // rdx
  _QWORD *v16; // r9
  __int64 v17; // r8
  __int64 v18; // rdx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdx
  __int64 v21; // rdi
  int v22; // eax
  void *v23; // rdi
  __int64 *v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rsi
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rbx
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // rbp
  __int64 v37; // rdx
  unsigned __int64 v38; // rax
  char v39; // dl
  __int64 v40; // rdi
  int v41; // eax
  _QWORD *v43; // [rsp+8h] [rbp-F0h]
  _QWORD *v44; // [rsp+8h] [rbp-F0h]
  unsigned __int64 v47; // [rsp+20h] [rbp-D8h]
  _QWORD *v48; // [rsp+20h] [rbp-D8h]
  __int64 v49; // [rsp+20h] [rbp-D8h]
  __int64 v50; // [rsp+28h] [rbp-D0h]
  void *ptr; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v52; // [rsp+38h] [rbp-C0h]
  _BYTE v53[184]; // [rsp+40h] [rbp-B8h] BYREF

  v7 = *(_QWORD *)(sub_798D40(a1) + 18200);
  if ( v7 )
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v7 + 80LL))(v7, *(_QWORD *)(a1 + 72), 1);
  v8 = *(_QWORD *)(a1 + 80);
  if ( !v8 )
    v8 = sub_7D0C20(a1);
  ptr = v53;
  v52 = 0x2000000000LL;
  v9 = sub_798D40(a1);
  sub_7D3A00((__int64)&ptr, a2, a3, a4, v9);
  v10 = v8 + 104;
  v11 = sub_25AC3A0(v10, &ptr, a5, &off_47DA8F0);
  if ( !v11 )
    goto LABEL_26;
  v12 = *(_QWORD *)(v11 - 24);
  v13 = *(_QWORD *)(v12 + 72);
  v14 = v13 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v13 & 1) == 0 )
  {
    if ( v14 <= 3 )
      goto LABEL_26;
    v15 = (_QWORD *)(v13 & 0xFFFFFFFFFFFFFFFCLL);
    v16 = v15;
    if ( (v14 & 2) == 0 )
      goto LABEL_36;
    v17 = v15[2275];
    if ( v17 )
    {
      v15[284] += 24LL;
      v18 = v15[274];
      v19 = (v18 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v16[275] >= v19 + 24 && v18 )
      {
        v16[274] = v19 + 24;
      }
      else
      {
        v50 = v17;
        v49 = v12;
        v19 = sub_7CF9B0((__int64)(v16 + 274), 24, 3);
        v17 = v50;
        v12 = v49;
      }
      *(_QWORD *)v19 = v17;
      *(_DWORD *)(v19 + 8) = 0;
      *(_QWORD *)(v19 + 16) = v12;
      *(_QWORD *)(v12 + 72) = v19 | 5;
      v20 = v19 & 0xFFFFFFFFFFFFFFF8LL;
      goto LABEL_14;
    }
    v14 = v12 & 0xFFFFFFFFFFFFFFFALL;
    v13 = v12 & 0xFFFFFFFFFFFFFFFALL | 1;
    *(_QWORD *)(v12 + 72) = v13;
  }
  if ( !v14 )
    goto LABEL_26;
  v20 = v13 & 0xFFFFFFFFFFFFFFF8LL;
  v16 = (_QWORD *)v20;
  if ( (v14 & 4) != 0 )
  {
LABEL_14:
    if ( v20 )
    {
      v21 = *(_QWORD *)v20;
      v22 = *(_DWORD *)(*(_QWORD *)v20 + 12LL);
      if ( *(_DWORD *)(v20 + 8) != v22 )
      {
        *(_DWORD *)(v20 + 8) = v22;
        v47 = v20;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 144LL))(v21, v12);
        v20 = v47;
      }
      v16 = *(_QWORD **)(v20 + 16);
      v23 = ptr;
      if ( ptr != v53 )
        goto LABEL_18;
      goto LABEL_19;
    }
LABEL_26:
    if ( ptr != v53 )
      free(ptr);
    goto LABEL_28;
  }
  v23 = ptr;
  if ( ptr != v53 )
  {
LABEL_18:
    v48 = v16;
    free(v23);
    v16 = v48;
  }
LABEL_19:
  if ( v16 )
    return v16;
LABEL_28:
  v25 = *(__int64 **)(sub_798D40(a1) + 18200);
  if ( !v25 )
    return nullptr;
  v26 = *v25;
  v27 = *(_QWORD *)(a1 + 72);
  if ( !(a4
       ? (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(v26 + 80))(v25, v27, 0)
       : (*(unsigned __int8 (__fastcall **)(__int64 *, __int64, __int64, __int64))(v26 + 88))(v25, v27, a2, a3)) )
    return nullptr;
  ptr = v53;
  v52 = 0x2000000000LL;
  v29 = sub_798D40(a1);
  sub_7D3A00((__int64)&ptr, a2, a3, a4, v29);
  v30 = sub_25AC3A0(v10, &ptr, a5, &off_47DA8F0);
  v16 = (_QWORD *)v30;
  if ( !v30 )
    goto LABEL_36;
  v31 = *(_QWORD *)(v30 - 24);
  v32 = *(_QWORD *)(v31 + 72);
  v33 = v32 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v32 & 1) == 0 )
  {
    if ( v33 <= 3 )
    {
      v16 = nullptr;
      goto LABEL_36;
    }
    v35 = (_QWORD *)(v32 & 0xFFFFFFFFFFFFFFFCLL);
    v16 = v35;
    if ( (v33 & 2) == 0 )
      goto LABEL_36;
    v36 = v35[2275];
    if ( v36 )
    {
      v37 = v35[274];
      v35[284] += 24LL;
      v38 = (v37 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v16[275] >= v38 + 24 && v37 )
        v16[274] = v38 + 24;
      else
        v38 = sub_7CF9B0((__int64)(v16 + 274), 24, 3);
      *(_QWORD *)v38 = v36;
      *(_DWORD *)(v38 + 8) = 0;
      *(_QWORD *)(v38 + 16) = v31;
      *(_QWORD *)(v31 + 72) = v38 | 5;
      v39 = v38;
      v34 = v38 & 0xFFFFFFFFFFFFFFF8LL;
      v16 = (_QWORD *)v34;
      LOBYTE(v33) = v39 & 0xFA | 4;
LABEL_35:
      if ( (v33 & 4) != 0 && v34 )
      {
        v40 = *v16;
        v41 = *(_DWORD *)(*v16 + 12LL);
        if ( *((_DWORD *)v16 + 2) != v41 )
        {
          *((_DWORD *)v16 + 2) = v41;
          v44 = v16;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v40 + 144LL))(v40, v31);
          v16 = v44;
        }
        v16 = (_QWORD *)v16[2];
      }
      goto LABEL_36;
    }
    v33 = v31 & 0xFFFFFFFFFFFFFFFALL;
    v32 = v31 & 0xFFFFFFFFFFFFFFFALL | 1;
    *(_QWORD *)(v31 + 72) = v32;
  }
  v34 = v32 & 0xFFFFFFFFFFFFFFF8LL;
  v16 = (_QWORD *)v34;
  if ( v33 )
    goto LABEL_35;
LABEL_36:
  if ( ptr != v53 )
  {
    v43 = v16;
    free(ptr);
    return v43;
  }
  return v16;
}

