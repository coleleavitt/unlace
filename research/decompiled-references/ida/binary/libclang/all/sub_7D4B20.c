__int64 __fastcall sub_7D4B20(__int64 a1, __int64 a2)
{
  __int64 (*v3)(); // rax
  __int64 v4; // rbp
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 *v7; // rbx
  __int64 *v8; // r13
  __int64 v9; // r14
  unsigned __int64 v10; // rdi
  __int64 (*v11)(void); // rax
  __int64 v12; // rbp
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rdx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rbp
  _QWORD *v23; // rax
  __int64 v24; // rcx
  unsigned __int64 v25; // rsi
  unsigned __int64 v26; // rax
  char v27; // dl
  _QWORD *v28; // rax
  __int64 v29; // r12
  __int64 v30; // rdx
  unsigned __int64 v31; // rax
  char v32; // dl
  __int64 v33; // rdi
  int v34; // eax
  __int64 v35; // rdi
  int v36; // eax

  v3 = *(__int64 (**)())(*(_QWORD *)a2 + 32LL);
  if ( v3 == sub_6A41B0 )
    v4 = sub_777E10(a2);
  else
    v4 = ((__int64 (__fastcall *)(__int64))v3)(a2);
  v5 = *(_QWORD *)(sub_798D40(a1) + 18200);
  if ( v5 )
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v5 + 80LL))(v5, *(_QWORD *)(a1 + 72), 1);
  v6 = *(_QWORD *)(a1 + 80);
  if ( !v6 )
    v6 = sub_7D0C20(a1);
  v7 = *(__int64 **)(v6 + 120);
  v8 = &v7[*(unsigned int *)(v6 + 128)];
  while ( v8 != v7 )
  {
    v9 = *v7;
    v10 = *(_QWORD *)(*(_QWORD *)(*v7 + 104) + 192LL) & 0xFFFFFFFFFFFFFFF8LL;
    v11 = *(__int64 (**)(void))(*(_QWORD *)v10 + 32LL);
    if ( v11 == sub_6A41B0 )
    {
      if ( sub_777E10(v10) == v4 )
        goto LABEL_13;
    }
    else if ( v11() == v4 )
    {
LABEL_13:
      v12 = *(_QWORD *)(v9 + 104);
      v13 = *(_QWORD *)(v12 + 96);
      v14 = v13 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v13 & 1) != 0 )
      {
LABEL_14:
        v15 = v13 & 0xFFFFFFFFFFFFFFF8LL;
        v16 = v15;
        if ( !v14 )
          goto LABEL_16;
        goto LABEL_15;
      }
      if ( v14 <= 3 )
        goto LABEL_26;
      v28 = (_QWORD *)(v13 & 0xFFFFFFFFFFFFFFFCLL);
      v16 = (__int64)v28;
      if ( (v14 & 2) != 0 )
      {
        v29 = v28[2275];
        if ( !v29 )
        {
          v14 = v12 & 0xFFFFFFFFFFFFFFFALL;
          v13 = v12 & 0xFFFFFFFFFFFFFFFALL | 1;
          *(_QWORD *)(v12 + 96) = v13;
          goto LABEL_14;
        }
        v30 = v28[274];
        v28[284] += 24LL;
        v31 = (v30 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( *(_QWORD *)(v16 + 2200) >= v31 + 24 && v30 )
          *(_QWORD *)(v16 + 2192) = v31 + 24;
        else
          v31 = sub_7CF9B0(v16 + 2192, 24, 3);
        *(_QWORD *)v31 = v29;
        *(_DWORD *)(v31 + 8) = 0;
        *(_QWORD *)(v31 + 16) = v12;
        *(_QWORD *)(v12 + 96) = v31 | 5;
        v32 = v31;
        v15 = v31 & 0xFFFFFFFFFFFFFFF8LL;
        v16 = v15;
        LOBYTE(v14) = v32 & 0xFA | 4;
LABEL_15:
        if ( (v14 & 4) != 0 && v15 )
        {
          v33 = *(_QWORD *)v16;
          v34 = *(_DWORD *)(*(_QWORD *)v16 + 12LL);
          if ( *(_DWORD *)(v16 + 8) != v34 )
          {
            *(_DWORD *)(v16 + 8) = v34;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v33 + 144LL))(v33, v12);
          }
          v16 = *(_QWORD *)(v16 + 16);
        }
        goto LABEL_16;
      }
      while ( 1 )
      {
LABEL_16:
        if ( !sub_782740(v16) )
          return v16;
        v17 = *(_QWORD *)(v16 + 96);
        if ( (v17 & 1) != 0 || (v18 = v17 >> 1, (v17 & 2) != 0) )
        {
LABEL_26:
          v16 = 0;
          continue;
        }
        if ( (v17 & 1) != 0 )
        {
          v19 = v17 & 0xFFFFFFFFFFFFFFF8LL;
          v20 = *(_QWORD *)(v16 + 96) & 0xFFFFFFFFFFFFFFFELL;
          v21 = v19;
        }
        else
        {
          if ( (v17 & 0xFFFFFFFFFFFFFFFELL) <= 3 )
            goto LABEL_26;
          v23 = (_QWORD *)(v17 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v18 & 1) == 0 )
          {
            v16 = (__int64)v23;
            continue;
          }
          v21 = v23[2275];
          if ( v21 )
          {
            v24 = v23[274];
            v23[284] += 24LL;
            v25 = ((v24 + 7) & 0xFFFFFFFFFFFFFFF8LL) + 24;
            if ( v23[275] >= v25 && v24 )
            {
              v23[274] = v25;
              v26 = (v24 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            }
            else
            {
              v26 = sub_7CF9B0((__int64)(v23 + 274), 24, 3);
            }
            *(_QWORD *)v26 = v21;
            *(_DWORD *)(v26 + 8) = 0;
            *(_QWORD *)(v26 + 16) = v16;
            *(_QWORD *)(v16 + 96) = v26 | 5;
            v27 = v26;
            v19 = v26 & 0xFFFFFFFFFFFFFFF8LL;
            v21 = v19;
            LOBYTE(v20) = v27 & 0xFA | 4;
          }
          else
          {
            *(_QWORD *)(v16 + 96) = v16 & 0xFFFFFFFFFFFFFFFALL | 1;
            LOBYTE(v20) = v16 & 0xFA;
            if ( (v16 & 0xFFFFFFFFFFFFFFFALL) == 0 )
              goto LABEL_23;
            v19 = v16 & 0xFFFFFFFFFFFFFFF8LL;
            v21 = v16 & 0xFFFFFFFFFFFFFFF8LL;
          }
        }
        if ( (v20 & 4) == 0 || !v19 )
        {
LABEL_23:
          v16 = v21;
          continue;
        }
        v35 = *(_QWORD *)v21;
        v36 = *(_DWORD *)(*(_QWORD *)v21 + 12LL);
        if ( *(_DWORD *)(v21 + 8) != v36 )
        {
          *(_DWORD *)(v21 + 8) = v36;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v35 + 144LL))(v35, v16);
        }
        v16 = *(_QWORD *)(v21 + 16);
      }
    }
    ++v7;
  }
  return 0;
}

