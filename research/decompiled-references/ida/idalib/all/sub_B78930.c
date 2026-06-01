void __fastcall sub_B78930(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 *v11; // rsi
  unsigned int v12; // eax
  unsigned __int64 v13; // rdx
  unsigned __int16 v14; // bp
  unsigned int v15; // ebx
  __int16 v16; // bp
  unsigned int v17; // edx
  unsigned int v18; // r14d
  unsigned int v19; // r14d
  void *v20; // rax
  __int64 v21; // rax
  void *v22; // rax
  bool v23; // cc
  unsigned int v24; // eax
  unsigned __int64 v25; // rdx
  void *v26; // rdx
  unsigned int v27; // ebx
  void *v28; // rbp
  unsigned int v29; // edx
  void *v30; // rax
  __int64 v31; // rax
  void *v32; // rax
  __int64 v33; // rdi
  __int64 v34; // rsi
  void *v35; // [rsp+10h] [rbp-58h] BYREF
  unsigned int v36; // [rsp+18h] [rbp-50h]
  void *v37; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v38; // [rsp+28h] [rbp-40h]

  v8 = sub_B8C330(a1);
  v10 = *(_QWORD *)(a1 + 128);
  v11 = (__int64 *)(v10 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v10 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    if ( (v10 & 4) != 0 )
    {
      v33 = *v11;
      v34 = *(_QWORD *)(*v11 & 0xFFFFFFFFFFFFFFF0LL);
      v6 = *(_QWORD *)(v34 + 8) & 7LL | (*(__int64 *)(v34 + 8) >> 3) & 1;
      if ( v6 )
        v11 = (__int64 *)(sub_F64F00(v33) & 0xFFFFFFFFFFFFFFF0LL);
      else
        v11 = (__int64 *)(v34 & 0xFFFFFFFFFFFFFFF0LL);
    }
    else
    {
      v11 = (__int64 *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
    }
  }
  v12 = sub_AAC1F0(v8, (__int64)v11, v6, v7, v9);
  v13 = *(_QWORD *)(a1 + 72);
  v14 = *(_WORD *)(a1 + 74);
  v15 = v12;
  v36 = v12;
  v16 = v14 >> 7;
  v17 = (unsigned __int8)(v13 >> 31);
  if ( v17 )
  {
    v18 = (unsigned __int8)v16 + 1;
    if ( v18 < v17 )
      v18 = v17;
    v19 = v18 - 1;
    if ( v12 > 0x40 )
    {
      sub_2205470(&v35, 1, 0);
      v15 = v36;
      v38 = v36;
      if ( v36 > 0x40 )
      {
        sub_2205510(&v37);
        v15 = v38;
        if ( v38 > 0x40 )
        {
          sub_220A130(&v37, v19);
          goto LABEL_15;
        }
LABEL_10:
        v21 = 0;
        if ( v15 != v19 )
          v21 = (_QWORD)v37 << v19;
        v22 = (void *)((0xFFFFFFFFFFFFFFFFLL >> -(char)v15) & v21);
        if ( !v15 )
          v22 = nullptr;
        v37 = v22;
LABEL_15:
        if ( *(_DWORD *)(a2 + 8) > 0x40u && *(_QWORD *)a2 )
          operator delete[](*(void **)a2);
        v23 = v36 <= 0x40;
        *(_QWORD *)a2 = v37;
        v24 = v38;
        *(_DWORD *)(a2 + 8) = v38;
        if ( !v23 && v35 )
        {
          operator delete[](v35);
          v24 = *(_DWORD *)(a2 + 8);
        }
        v38 = v24;
        if ( v24 > 0x40 )
        {
          sub_2205510(&v37);
          v24 = v38;
          if ( v38 > 0x40 )
          {
            sub_2205FC0(&v37, a2);
LABEL_26:
            sub_2205900(&v37);
            v23 = *(_DWORD *)(a3 + 8) <= 0x40u;
            v27 = v38;
            v38 = 0;
            v28 = v37;
            if ( v23 || !*(_QWORD *)a3 )
            {
              *(_QWORD *)a3 = v37;
              *(_DWORD *)(a3 + 8) = v27;
            }
            else
            {
              operator delete[](*(void **)a3);
              v23 = v38 <= 0x40;
              *(_QWORD *)a3 = v28;
              *(_DWORD *)(a3 + 8) = v27;
              if ( !v23 )
              {
                if ( v37 )
                  operator delete[](v37);
              }
            }
            return;
          }
          v25 = (unsigned __int64)v37;
        }
        else
        {
          v25 = *(_QWORD *)a2;
        }
        v26 = (void *)((0xFFFFFFFFFFFFFFFFLL >> -(char)v24) & ~v25);
        if ( !v24 )
          v26 = nullptr;
        v37 = v26;
        goto LABEL_26;
      }
      v20 = v35;
    }
    else
    {
      v35 = &dword_0 + 1;
      v38 = v12;
      v20 = &dword_0 + 1;
    }
    v37 = v20;
    goto LABEL_10;
  }
  if ( v12 <= 0x40 )
  {
    v35 = &dword_0 + 1;
    v29 = v12;
    v38 = v12;
    v30 = &dword_0 + 1;
LABEL_33:
    v37 = v30;
LABEL_34:
    v31 = 0;
    if ( (unsigned __int8)v16 != v29 )
      v31 = (_QWORD)v37 << v16;
    v32 = (void *)((0xFFFFFFFFFFFFFFFFLL >> -(char)v29) & v31);
    if ( !v29 )
      v32 = nullptr;
    v37 = v32;
    goto LABEL_39;
  }
  sub_2205470(&v35, 1, 0);
  v29 = v36;
  v38 = v36;
  if ( v36 <= 0x40 )
  {
    v30 = v35;
    goto LABEL_33;
  }
  sub_2205510(&v37);
  v29 = v38;
  if ( v38 <= 0x40 )
    goto LABEL_34;
  sub_220A130(&v37, (unsigned __int8)v16);
LABEL_39:
  if ( *(_DWORD *)(a2 + 8) > 0x40u && *(_QWORD *)a2 )
    operator delete[](*(void **)a2);
  v23 = v36 <= 0x40;
  *(_QWORD *)a2 = v37;
  *(_DWORD *)(a2 + 8) = v38;
  if ( !v23 && v35 )
    operator delete[](v35);
  v38 = v15;
  if ( v15 > 0x40 )
    sub_2205470(&v37, 0, 0);
  else
    v37 = nullptr;
  if ( *(_DWORD *)(a3 + 8) > 0x40u && *(_QWORD *)a3 )
    operator delete[](*(void **)a3);
  *(_QWORD *)a3 = v37;
  *(_DWORD *)(a3 + 8) = v38;
}
