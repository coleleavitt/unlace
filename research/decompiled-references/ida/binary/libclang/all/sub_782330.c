void __fastcall sub_782330(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rsi
  __int64 v8; // r13
  _QWORD *v9; // rdx
  __int64 v10; // rax
  unsigned int v11; // r13d
  unsigned __int64 v12; // rax
  unsigned __int16 v13; // bx
  unsigned int v14; // ebx
  unsigned int v15; // eax
  unsigned int v16; // ebx
  unsigned int v17; // ebx
  void *v18; // rax
  __int64 v19; // rdx
  void *v20; // rax
  bool v21; // cc
  unsigned int v22; // eax
  unsigned __int64 v23; // rdx
  void *v24; // rdx
  unsigned int v25; // ebx
  void *v26; // rbp
  unsigned int v27; // edx
  void *v28; // rax
  __int64 v29; // rsi
  void *v30; // rax
  unsigned int v31; // eax
  void *v32; // [rsp+0h] [rbp-58h] BYREF
  unsigned int v33; // [rsp+8h] [rbp-50h]
  void *v34; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v35; // [rsp+18h] [rbp-40h]

  v5 = sub_798D40(a1);
  v6 = *(_QWORD *)(a1 + 128);
  v7 = 0;
  v8 = v5;
  if ( v6 > 7 )
  {
    if ( (v6 & 4) != 0 )
    {
      v9 = (_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF8LL);
      v7 = *(_QWORD *)(*v9 & 0xFFFFFFFFFFFFFFF0LL);
      v10 = *(_QWORD *)(v7 + 8);
      if ( (v10 & 7) != 0 || (v7 &= 0xFFFFFFFFFFFFFFF0LL, (v10 & 8) != 0) )
        v7 = sub_B0CF30(*v9, v7) & 0xFFFFFFFFFFFFFFF0LL;
    }
    else
    {
      v7 = v6 & 0xFFFFFFFFFFFFFFF0LL;
    }
  }
  v11 = sub_70B280(v8, v7);
  v12 = *(_QWORD *)(a1 + 72);
  v13 = *(_WORD *)(a1 + 74);
  v33 = v11;
  v14 = (unsigned __int8)(v13 >> 7);
  v15 = (unsigned __int8)(v12 >> 31);
  if ( v15 )
  {
    v16 = v14 + 1;
    if ( v16 < v15 )
      v16 = v15;
    v17 = v16 - 1;
    if ( v11 > 0x40 )
    {
      sub_2585A50(&v32, 1, 0);
      v11 = v33;
      v35 = v33;
      if ( v33 > 0x40 )
      {
        sub_2585B30(&v34);
        v11 = v35;
        if ( v35 > 0x40 )
        {
          sub_258CCA0(&v34, v17);
          goto LABEL_16;
        }
LABEL_11:
        v19 = 0;
        if ( v17 != v11 )
          v19 = (_QWORD)v34 << v17;
        v20 = (void *)(v19 & (0xFFFFFFFFFFFFFFFFLL >> -(char)v11));
        if ( !v11 )
          v20 = nullptr;
        v34 = v20;
LABEL_16:
        if ( *(_DWORD *)(a2 + 8) > 0x40u && *(_QWORD *)a2 )
          operator delete[](*(void **)a2);
        v21 = v33 <= 0x40;
        *(_QWORD *)a2 = v34;
        v22 = v35;
        v35 = 0;
        *(_DWORD *)(a2 + 8) = v22;
        if ( !v21 && v32 )
        {
          operator delete[](v32);
          v22 = *(_DWORD *)(a2 + 8);
        }
        v35 = v22;
        if ( v22 > 0x40 )
        {
          sub_2585B30(&v34);
          v22 = v35;
          if ( v35 > 0x40 )
          {
            sub_25869C0(&v34, a2);
LABEL_27:
            sub_25860D0(&v34);
            v21 = *(_DWORD *)(a3 + 8) <= 0x40u;
            v25 = v35;
            v35 = 0;
            v26 = v34;
            if ( v21 || !*(_QWORD *)a3 )
            {
              *(_QWORD *)a3 = v34;
              *(_DWORD *)(a3 + 8) = v25;
            }
            else
            {
              operator delete[](*(void **)a3);
              v21 = v35 <= 0x40;
              *(_QWORD *)a3 = v26;
              *(_DWORD *)(a3 + 8) = v25;
              if ( !v21 )
              {
                if ( v34 )
                  operator delete[](v34);
              }
            }
            return;
          }
          v23 = (unsigned __int64)v34;
        }
        else
        {
          v23 = *(_QWORD *)a2;
        }
        v24 = (void *)((0xFFFFFFFFFFFFFFFFLL >> -(char)v22) & ~v23);
        if ( !v22 )
          v24 = nullptr;
        v34 = v24;
        goto LABEL_27;
      }
      v18 = v32;
    }
    else
    {
      v32 = &dword_0 + 1;
      v18 = &dword_0 + 1;
      v35 = v11;
    }
    v34 = v18;
    goto LABEL_11;
  }
  if ( v11 <= 0x40 )
  {
    v32 = &dword_0 + 1;
    v27 = v11;
    v28 = &dword_0 + 1;
    v35 = v11;
LABEL_34:
    v34 = v28;
LABEL_35:
    v29 = 0;
    if ( v14 != v27 )
      v29 = (_QWORD)v34 << v14;
    v30 = (void *)(v29 & (0xFFFFFFFFFFFFFFFFLL >> -(char)v27));
    if ( !v27 )
      v30 = nullptr;
    v34 = v30;
    goto LABEL_40;
  }
  sub_2585A50(&v32, 1, 0);
  v27 = v33;
  v35 = v33;
  if ( v33 <= 0x40 )
  {
    v28 = v32;
    goto LABEL_34;
  }
  sub_2585B30(&v34);
  v27 = v35;
  if ( v35 <= 0x40 )
    goto LABEL_35;
  sub_258CCA0(&v34, v14);
LABEL_40:
  if ( *(_DWORD *)(a2 + 8) > 0x40u && *(_QWORD *)a2 )
    operator delete[](*(void **)a2);
  v21 = v33 <= 0x40;
  *(_QWORD *)a2 = v34;
  v31 = v35;
  v35 = 0;
  *(_DWORD *)(a2 + 8) = v31;
  if ( !v21 && v32 )
    operator delete[](v32);
  v35 = v11;
  if ( v11 > 0x40 )
    sub_2585A50(&v34, 0, 0);
  else
    v34 = nullptr;
  if ( *(_DWORD *)(a3 + 8) > 0x40u && *(_QWORD *)a3 )
    operator delete[](*(void **)a3);
  *(_QWORD *)a3 = v34;
  *(_DWORD *)(a3 + 8) = v35;
}

