unsigned __int64 __fastcall sub_B81F20(
        _QWORD *a1,
        __int64 a2,
        int a3,
        __int64 a4,
        int a5,
        int a6,
        const void *a7,
        __int64 a8)
{
  size_t v10; // rbp
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int16 v15; // ax
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rbx
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  _DWORD *v21; // rax
  __int64 v22; // rdi
  int v23; // edx
  __int64 v24; // rbx
  __int64 v25; // rax
  unsigned __int64 v26; // rdx
  _DWORD *v27; // rax
  __int64 v28; // rdi
  int v29; // edx
  _QWORD *v31; // rdi
  __int64 v32; // rbp
  unsigned __int64 v33; // rdx
  __int64 v34; // rax
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rax
  _QWORD *v37; // rdi
  __int64 v38; // rbp
  unsigned __int64 v39; // rdx
  __int64 v40; // rax
  unsigned __int64 v41; // rdx
  unsigned __int64 v42; // rax
  char v43; // al
  __int64 v46; // [rsp+18h] [rbp-40h]

  v10 = 8 * a8;
  v11 = sub_B6C590(72, a1, a2, 8 * a8);
  *(_QWORD *)v11 = off_2BD8B30;
  if ( a2
    && (v12 = sub_B68470(a2), v13 = *(_QWORD *)(v12 + 8) & 7LL, (*(_QWORD *)(v12 + 8) & 7) != 0)
    && (*(char *)(v12 + 29) >= 0 || (v46 = *(_QWORD *)(v12 + 8) & 7LL, v43 = sub_B688D0(v12), v13 = v46, v43)) )
  {
    v14 = v13;
  }
  else
  {
    v14 = 0;
  }
  *(_QWORD *)(v11 + 8) = v14;
  *(_DWORD *)(v11 + 24) = a3;
  *(_QWORD *)(v11 + 16) = a2 & 0xFFFFFFFFFFFFFFFBLL;
  *(_WORD *)(v11 + 28) = 24662;
  v15 = sub_B68380(86);
  *(_BYTE *)(v11 + 32) &= 0xF8u;
  *(_WORD *)(v11 + 30) = v15 & 0x3FFF | *(_WORD *)(v11 + 30) & 0xC000;
  if ( byte_2CAD3F0[0] )
    sub_B67B90(86);
  *(_BYTE *)(v11 + 64) &= ~1u;
  *(_QWORD *)(v11 + 40) = a4;
  *(_QWORD *)(v11 + 48) = 0;
  *(_QWORD *)v11 = &off_2BD9828;
  *(_DWORD *)(v11 + 56) = a5;
  *(_DWORD *)(v11 + 60) = a6;
  *(_DWORD *)(v11 + 64) = (2 * a8) | *(_DWORD *)(v11 + 64) & 1;
  if ( v10 )
    memmove((void *)(v11 + 72), a7, v10);
  if ( !a2 )
    BUG();
  v18 = *(_QWORD *)(a2 + 40);
  v19 = *(_QWORD *)(v18 + 96);
  v20 = v19 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v19 & 1) == 0 )
  {
    v31 = (_QWORD *)(v19 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v19 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
    {
      if ( (v19 & 2) == 0 )
        goto LABEL_15;
      v32 = v31[2295];
      v33 = v18 & 0xFFFFFFFFFFFFFFFBLL;
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
          v36 = sub_962430((__int64)(v31 + 294), 24, 24, 3, v16, v17);
          v35 = v36 & 0xFFFFFFFFFFFFFFFBLL;
        }
        *(_QWORD *)v36 = v32;
        v33 = v35 | 4;
        *(_DWORD *)(v36 + 8) = 0;
        *(_QWORD *)(v36 + 16) = v18;
      }
      v20 = v33 & 0xFFFFFFFFFFFFFFFELL;
      v19 = v20 | 1;
      *(_QWORD *)(v18 + 96) = v20 | 1;
    }
  }
  if ( v20 )
  {
    if ( (v20 & 4) != 0 )
    {
      v21 = (_DWORD *)(v19 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v21 )
      {
        v22 = *(_QWORD *)v21;
        v23 = *(_DWORD *)(*(_QWORD *)v21 + 12LL);
        if ( v21[2] != v23 )
        {
          v21[2] = v23;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 152LL))(v22, v18);
        }
      }
    }
  }
LABEL_15:
  *(_QWORD *)(v11 + 48) = *(_QWORD *)(*(_QWORD *)(a2 + 64) + 96LL);
  v24 = *(_QWORD *)(a2 + 40);
  v25 = *(_QWORD *)(v24 + 96);
  if ( (v25 & 1) != 0 )
  {
    v26 = v25 & 0xFFFFFFFFFFFFFFFELL;
  }
  else
  {
    v37 = (_QWORD *)(v25 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v25 & 0xFFFFFFFFFFFFFFFCLL) == 0 || (v25 & 2) == 0 )
      goto LABEL_22;
    v38 = v37[2295];
    v39 = v24 & 0xFFFFFFFFFFFFFFFBLL;
    if ( v38 )
    {
      v40 = v37[294];
      v37[304] += 24LL;
      v41 = (v40 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v37[295] >= v41 + 24 && v40 )
      {
        v37[294] = v41 + 24;
        v42 = (v40 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      }
      else
      {
        v42 = sub_962430((__int64)(v37 + 294), 24, 24, 3, v16, v17);
        v41 = v42 & 0xFFFFFFFFFFFFFFFBLL;
      }
      *(_QWORD *)v42 = v38;
      v39 = v41 | 4;
      *(_DWORD *)(v42 + 8) = 0;
      *(_QWORD *)(v42 + 16) = v24;
    }
    v26 = v39 & 0xFFFFFFFFFFFFFFFELL;
    v25 = v26 | 1;
    *(_QWORD *)(v24 + 96) = v26 | 1;
  }
  if ( v26 )
  {
    if ( (v26 & 4) != 0 )
    {
      v27 = (_DWORD *)(v25 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v27 )
      {
        v28 = *(_QWORD *)v27;
        v29 = *(_DWORD *)(*(_QWORD *)v27 + 12LL);
        if ( v27[2] != v29 )
        {
          v27[2] = v29;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v28 + 152LL))(v28, v24);
        }
      }
    }
  }
LABEL_22:
  *(_QWORD *)(*(_QWORD *)(a2 + 64) + 96LL) = v11;
  return v11;
}

