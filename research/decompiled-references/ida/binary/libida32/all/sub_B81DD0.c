__int64 __fastcall sub_B81DD0(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rbp
  __int64 v7; // r12
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  _DWORD *v10; // rax
  __int64 v11; // rdi
  int v12; // edx
  __int64 v13; // rbx
  _QWORD *v15; // rdi
  __int64 v16; // r13
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rax

  v2 = sub_B68470(a1 + 64);
  v3 = sub_B685F0(v2);
  v6 = *(_QWORD *)(a1 + 104);
  v7 = *(_QWORD *)(v3 + 18360);
  v8 = *(_QWORD *)(v6 + 96);
  if ( (v8 & 1) != 0 )
  {
    v9 = v8 & 0xFFFFFFFFFFFFFFFELL;
  }
  else
  {
    v15 = (_QWORD *)(v8 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v8 & 0xFFFFFFFFFFFFFFFCLL) == 0 || (v8 & 2) == 0 )
      goto LABEL_8;
    v16 = v15[2295];
    v17 = v6 & 0xFFFFFFFFFFFFFFFBLL;
    if ( v16 )
    {
      v18 = v15[294];
      v15[304] += 24LL;
      v19 = (v18 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v15[295] >= v19 + 24 && v18 )
      {
        v15[294] = v19 + 24;
        v20 = (v18 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      }
      else
      {
        v20 = sub_962430((__int64)(v15 + 294), 24, 24, 3, v4, v5);
        v19 = v20 & 0xFFFFFFFFFFFFFFFBLL;
      }
      *(_QWORD *)v20 = v16;
      v17 = v19 | 4;
      *(_DWORD *)(v20 + 8) = 0;
      *(_QWORD *)(v20 + 16) = v6;
    }
    v9 = v17 & 0xFFFFFFFFFFFFFFFELL;
    v8 = v9 | 1;
    *(_QWORD *)(v6 + 96) = v9 | 1;
  }
  if ( v9 )
  {
    if ( (v9 & 4) != 0 )
    {
      v10 = (_DWORD *)(v8 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v10 )
      {
        v11 = *(_QWORD *)v10;
        v12 = *(_DWORD *)(*(_QWORD *)v10 + 12LL);
        if ( v10[2] != v12 )
        {
          v10[2] = v12;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 152LL))(v11, v6);
        }
      }
    }
  }
LABEL_8:
  v13 = *(_QWORD *)(a1 + 128);
  if ( (*(_BYTE *)(v13 + 96) & 1) != 0 )
    *(_QWORD *)(v13 + 96) = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 16LL))(
                              v7,
                              *(_QWORD *)(v13 + 96) >> 1);
  return *(_QWORD *)(v13 + 96);
}

