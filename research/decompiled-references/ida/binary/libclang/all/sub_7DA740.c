__int64 __fastcall sub_7DA740(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 i; // r13
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rbp
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  _QWORD *v18; // rax
  __int64 v19; // r12
  __int64 v20; // rdx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rbp
  __int64 v29; // rdi
  int v30; // eax
  _QWORD *v31; // rax
  __int64 v32; // rcx
  unsigned __int64 v33; // rsi
  unsigned __int64 v34; // rax
  char v35; // dl
  __int64 v36; // rdi
  int v37; // eax
  void *ptr; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v39; // [rsp+18h] [rbp-C0h]
  _QWORD v40[23]; // [rsp+20h] [rbp-B8h] BYREF

  ptr = v40;
  v39 = 0x2000000000LL;
  v6 = sub_798D40(a1);
  v7 = a4[1];
  LODWORD(v39) = 2;
  v8 = v6;
  v9 = *a4;
  v40[0] = v7;
  v10 = v9 + 24 * v7;
  for ( i = v9; v10 != i; i += 24 )
  {
    v12 = i;
    sub_AFDA60(v12, &ptr, v8);
  }
  v13 = sub_25AC3A0(a2, &ptr, a3, &off_47DA8B0);
  v14 = v13;
  if ( !v13 )
    goto LABEL_20;
  v15 = *(_QWORD *)(v13 - 40);
  v16 = *(_QWORD *)(v15 + 96);
  v17 = v16 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v16 & 1) != 0 )
  {
LABEL_24:
    v22 = v16 & 0xFFFFFFFFFFFFFFF8LL;
    v14 = v22;
    if ( !v17 || (v17 & 4) == 0 )
      goto LABEL_12;
    goto LABEL_26;
  }
  if ( v17 <= 3 )
  {
LABEL_30:
    v14 = 0;
    goto LABEL_12;
  }
  v18 = (_QWORD *)(v16 & 0xFFFFFFFFFFFFFFFCLL);
  v14 = (__int64)v18;
  if ( (v17 & 2) == 0 )
    goto LABEL_12;
  v19 = v18[2275];
  if ( !v19 )
  {
    v17 = v15 & 0xFFFFFFFFFFFFFFFALL;
    v16 = v15 & 0xFFFFFFFFFFFFFFFALL | 1;
    *(_QWORD *)(v15 + 96) = v16;
    goto LABEL_24;
  }
  v20 = v18[274];
  v18[284] += 24LL;
  v21 = (v20 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( *(_QWORD *)(v14 + 2200) >= v21 + 24 && v20 )
    *(_QWORD *)(v14 + 2192) = v21 + 24;
  else
    v21 = sub_7CF9B0(v14 + 2192, 24, 3);
  *(_QWORD *)v21 = v19;
  *(_DWORD *)(v21 + 8) = 0;
  *(_QWORD *)(v21 + 16) = v15;
  *(_QWORD *)(v15 + 96) = v21 | 5;
  v22 = v21 & 0xFFFFFFFFFFFFFFF8LL;
  v14 = v22;
LABEL_26:
  if ( v22 )
  {
    v29 = *(_QWORD *)v14;
    v30 = *(_DWORD *)(*(_QWORD *)v14 + 12LL);
    if ( *(_DWORD *)(v14 + 8) != v30 )
    {
      *(_DWORD *)(v14 + 8) = v30;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v29 + 144LL))(v29, v15);
    }
    v14 = *(_QWORD *)(v14 + 16);
  }
LABEL_12:
  if ( sub_782740(v14) )
  {
    do
    {
      v23 = *(_QWORD *)(v14 + 96);
      if ( (v23 & 1) != 0 )
        goto LABEL_30;
      v24 = v23 >> 1;
      if ( (v23 & 2) != 0 )
        goto LABEL_30;
      if ( (v23 & 1) != 0 )
      {
        v25 = v23 & 0xFFFFFFFFFFFFFFF8LL;
        v26 = *(_QWORD *)(v14 + 96) & 0xFFFFFFFFFFFFFFFELL;
        v27 = v25;
      }
      else
      {
        if ( (v23 & 0xFFFFFFFFFFFFFFFELL) <= 3 )
          goto LABEL_30;
        v31 = (_QWORD *)(v23 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v24 & 1) == 0 )
        {
          v14 = (__int64)v31;
          goto LABEL_12;
        }
        v27 = v31[2275];
        if ( v27 )
        {
          v32 = v31[274];
          v31[284] += 24LL;
          v33 = ((v32 + 7) & 0xFFFFFFFFFFFFFFF8LL) + 24;
          if ( v31[275] >= v33 && v32 )
          {
            v31[274] = v33;
            v34 = (v32 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          }
          else
          {
            v34 = sub_7CF9B0((__int64)(v31 + 274), 24, 3);
          }
          *(_QWORD *)v34 = v27;
          *(_DWORD *)(v34 + 8) = 0;
          *(_QWORD *)(v34 + 16) = v14;
          *(_QWORD *)(v14 + 96) = v34 | 5;
          v35 = v34;
          v25 = v34 & 0xFFFFFFFFFFFFFFF8LL;
          v27 = v25;
          LOBYTE(v26) = v35 & 0xFA | 4;
        }
        else
        {
          *(_QWORD *)(v14 + 96) = v14 & 0xFFFFFFFFFFFFFFFALL | 1;
          LOBYTE(v26) = v14 & 0xFA;
          if ( (v14 & 0xFFFFFFFFFFFFFFFALL) == 0 )
            goto LABEL_19;
          v25 = v14 & 0xFFFFFFFFFFFFFFF8LL;
          v27 = v14 & 0xFFFFFFFFFFFFFFF8LL;
        }
      }
      if ( (v26 & 4) != 0 && v25 )
      {
        v36 = *(_QWORD *)v27;
        v37 = *(_DWORD *)(*(_QWORD *)v27 + 12LL);
        if ( *(_DWORD *)(v27 + 8) != v37 )
        {
          *(_DWORD *)(v27 + 8) = v37;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v36 + 144LL))(v36, v14);
        }
        v14 = *(_QWORD *)(v27 + 16);
        goto LABEL_12;
      }
LABEL_19:
      v14 = v27;
    }
    while ( sub_782740(v27) );
  }
LABEL_20:
  if ( ptr != v40 )
    free(ptr);
  return v14;
}

