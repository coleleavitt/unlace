__int64 __fastcall sub_C17430(__int64 a1, void ***a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  bool v6; // zf
  _BYTE *v7; // rax
  __int64 v8; // r13
  __int64 v9; // rax
  void *v10; // rbx
  void **v11; // rax
  void *v12; // rdx
  void **v13; // r13
  void **v14; // rbp
  __int64 v16; // r12
  char v17; // al
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  unsigned int v21; // eax
  void **v22; // rbx
  void **v23; // rbp
  char v24; // al
  bool v25; // cc
  unsigned int v26; // edx
  void *v27; // rdx
  void *v28; // rcx
  void *v29; // [rsp+0h] [rbp-68h] BYREF
  unsigned int v30; // [rsp+8h] [rbp-60h]
  char v31; // [rsp+Ch] [rbp-5Ch]
  void *v32; // [rsp+10h] [rbp-58h] BYREF
  unsigned int v33; // [rsp+18h] [rbp-50h]
  char v34; // [rsp+1Ch] [rbp-4Ch]
  void *v35; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v36; // [rsp+28h] [rbp-40h]

  v4 = *(_QWORD *)(*(_QWORD *)(a3 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v4 + 16) != 14 )
    v4 = sub_F63050(*(_QWORD *)(*(_QWORD *)(a3 + 8) & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4);
  v5 = *(_QWORD *)(v4 + 32);
  v6 = (unsigned __int8)sub_F58100(*(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF0LL)) == 0;
  v7 = *a2;
  if ( !v6 )
  {
    *v7 = 0;
    v8 = sub_A62D20(*(_QWORD **)(*(_QWORD *)a1 + 16LL), v5);
    v9 = sub_21F90D0();
    v10 = (void *)v9;
    if ( v8 == v9 )
    {
      sub_21FFC40(&v35, v9, 0);
      if ( v35 != v10 )
        goto LABEL_6;
    }
    else
    {
      sub_21FD1F0(&v35, v8, 0);
      if ( v35 != v10 )
      {
LABEL_6:
        sub_21FB9A0(&v35, 0);
        goto LABEL_7;
      }
    }
    sub_2200250(&v35, 0);
LABEL_7:
    v11 = *a2;
    v12 = v35;
    v13 = *a2 + 5;
    if ( *v13 == v10 )
    {
      if ( v10 == v35 )
      {
        sub_21FFEF0(*a2 + 5, &v35);
        v11 = *a2;
        v12 = v35;
        goto LABEL_10;
      }
    }
    else if ( v10 != v35 )
    {
      sub_21F9550(*a2 + 5, &v35);
      v11 = *a2;
      v12 = v35;
      goto LABEL_10;
    }
    if ( v13 != &v35 )
    {
      sub_9955A0(*a2 + 5);
      if ( v10 != v35 )
      {
        sub_21F97A0(v13, &v35);
        v12 = v35;
        v14 = *a2 + 8;
        if ( *v14 != v10 )
        {
LABEL_11:
          if ( v10 != v12 )
          {
            sub_21F9550(v14, &v35);
LABEL_13:
            sub_9955A0(&v35);
            return 1;
          }
          goto LABEL_20;
        }
LABEL_19:
        if ( v10 == v12 )
        {
          sub_21FFEF0(v14, &v35);
          goto LABEL_13;
        }
LABEL_20:
        if ( v14 != &v35 )
        {
          sub_9955A0(v14);
          if ( v10 == v35 )
            sub_21FFE60(v14, &v35);
          else
            sub_21F97A0(v14, &v35);
        }
        goto LABEL_13;
      }
      sub_21FFE60(v13, &v35);
      v11 = *a2;
      v12 = v35;
    }
LABEL_10:
    v14 = v11 + 8;
    if ( v11[8] != v10 )
      goto LABEL_11;
    goto LABEL_19;
  }
  *v7 = 1;
  v16 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  v17 = sub_F65240(*(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF0LL));
  v33 = 64;
  v32 = nullptr;
  v34 = v17 ^ 1;
  v21 = sub_AAC1F0(v16, v5, v18, v19, v20);
  if ( v21 == 64 )
  {
    v30 = 64;
    v29 = v32;
    v31 = v34;
  }
  else
  {
    if ( v34 )
    {
      sub_2206D90(&v35, &v32, v21);
      v31 = 1;
    }
    else
    {
      sub_2206DE0(&v35, &v32, v21);
      v31 = 0;
    }
    v30 = v36;
    v29 = v35;
    if ( v33 > 0x40 && v32 )
      operator delete[](v32);
  }
  v22 = *a2;
  if ( *((_DWORD *)*a2 + 4) <= 0x40u && v30 <= 0x40 )
  {
    v27 = v29;
    *((_DWORD *)v22 + 4) = v30;
    v23 = v22;
    v22[1] = v27;
  }
  else
  {
    sub_22056A0(*a2 + 1, &v29);
    v23 = *a2;
  }
  v24 = v31;
  v25 = *((_DWORD *)v23 + 8) <= 0x40u;
  *((_BYTE *)v22 + 20) = v31;
  if ( v25 && (v26 = v30, v30 <= 0x40) )
  {
    v28 = v29;
    *((_BYTE *)v23 + 36) = v24;
    *((_DWORD *)v23 + 8) = v26;
    v23[3] = v28;
    return 1;
  }
  else
  {
    sub_22056A0(v23 + 3, &v29);
    v25 = v30 <= 0x40;
    *((_BYTE *)v23 + 36) = v31;
    if ( v25 || !v29 )
      return 1;
    operator delete[](v29);
    return 1;
  }
}
