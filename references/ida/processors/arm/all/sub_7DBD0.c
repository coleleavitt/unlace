bool __fastcall sub_7DBD0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 tinfo_size; // rax
  unsigned int v5; // r15d
  int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // r9
  __int64 v9; // rdx
  int v10; // r14d
  __int64 v11; // r8
  __int64 v12; // rsi
  int v13; // eax
  char v15; // al
  __int64 v16; // rbx
  int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  __int64 v20; // [rsp+0h] [rbp-58h]
  __int64 v21; // [rsp+8h] [rbp-50h]
  int v22; // [rsp+8h] [rbp-50h]
  unsigned int v23; // [rsp+8h] [rbp-50h]
  unsigned int v24; // [rsp+8h] [rbp-50h]
  __int64 v25; // [rsp+10h] [rbp-48h]

  tinfo_size = get_tinfo_size();
  if ( tinfo_size != -1 )
  {
    if ( tinfo_size )
    {
      v13 = sub_7D540(a1, a2, (_DWORD *)a3, 0);
      if ( v13 )
        return v13 == 1;
    }
    v5 = *(_DWORD *)(a1 + 88);
    v6 = *(_DWORD *)(a1 + 80);
    HIDWORD(v25) = 0;
    v20 = *(_QWORD *)(a1 + 56);
    get_tinfo_size();
    v9 = 0;
    v10 = -1;
    v11 = (unsigned int)(2 * v6);
    if ( (v6 & 0x40000000) == 0 )
    {
      if ( v6 > 0 )
      {
        if ( v5 > 0x10 )
        {
LABEL_6:
          if ( v5 == 176 || v5 == 256 )
            goto LABEL_22;
          goto LABEL_8;
        }
LABEL_32:
        v23 = v9;
        v18 = getinf(99);
        v9 = v23;
        v5 = v18;
        goto LABEL_6;
      }
      if ( v5 > 0x10 )
        goto LABEL_18;
      goto LABEL_35;
    }
    if ( v5 <= 0x10 )
    {
      HIDWORD(v21) = 0;
      v17 = getinf(99);
      v11 = (unsigned int)(2 * v6);
      if ( v17 == 176 || v17 == 256 )
      {
        if ( v6 > (int)v11 )
        {
LABEL_31:
          LODWORD(v9) = v11;
          goto LABEL_32;
        }
LABEL_34:
        LODWORD(v9) = v11;
LABEL_35:
        v24 = v9;
        v19 = getinf(99);
        v9 = v24;
        v5 = v19;
LABEL_18:
        if ( v5 == 176 || v5 == 256 )
          goto LABEL_25;
        goto LABEL_20;
      }
    }
    else if ( v5 == 176 || v5 == 256 )
    {
      if ( v6 > (int)v11 )
        v6 *= 2;
      v10 = v6 - 1;
      goto LABEL_23;
    }
    if ( (unsigned __int8)getinf_flag(67, 512, 0, v7, v11, v8, v20, __SPAIR64__(v11, 0), v25) )
    {
      v6 = v21;
      goto LABEL_23;
    }
    v11 = HIDWORD(v21);
    if ( v6 > SHIDWORD(v21) )
    {
      v9 = HIDWORD(v21);
      if ( v5 > 0x10 )
      {
LABEL_8:
        LODWORD(v21) = v9;
        v12 = 2;
        goto LABEL_21;
      }
      goto LABEL_31;
    }
    v9 = HIDWORD(v21);
    if ( v5 > 0x10 )
    {
LABEL_20:
      LODWORD(v21) = v9;
      v12 = 4;
LABEL_21:
      v15 = getinf_flag(67, v12, v9, v7, v11, v8, v20, v21, v25);
      LODWORD(v9) = v22;
      if ( v15 )
      {
LABEL_22:
        v10 = v9 - 1;
        v6 = v9;
LABEL_23:
        v16 = (v20 + v10) & -v6;
        *(_QWORD *)(a1 + 56) = v16;
        cleanup_argloc();
        *(_QWORD *)(a3 + 8) = v16;
        *(_DWORD *)a3 = 1;
        *(_QWORD *)(a1 + 56) += get_tinfo_size();
        return 1;
      }
LABEL_25:
      v10 = v6 - 1;
      goto LABEL_23;
    }
    goto LABEL_34;
  }
  return 0;
}
