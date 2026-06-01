__int16 __fastcall sub_8E70(_QWORD *a1, __int64 a2, __int64 *a3)
{
  __int64 v5; // r8
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rsi
  __int64 v9; // rdi
  unsigned int v10; // edx
  __int64 v11; // rax
  __int64 v12; // rbx
  unsigned __int64 v13; // r13
  __int64 v14; // rbx
  unsigned __int64 v15; // rax
  void *v16; // rcx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rbx
  __int64 v19; // rsi
  __int64 v20; // rax

  v5 = *a1;
  a1[5] = 0;
  v6 = *(unsigned __int16 *)(v5 + 57);
  v7 = (unsigned int)(v6 - 472);
  if ( (unsigned __int16)(v6 - 472) > 7u )
  {
    LOWORD(v6) = v6 - 487;
    if ( (unsigned __int16)v6 > 0x10u )
      return v6;
    v16 = &loc_10101;
    if ( !_bittest64((const __int64 *)&v16, v6) )
      return v6;
  }
  else
  {
    v6 = 161;
    if ( !_bittest64((const __int64 *)&v6, v7) )
      return v6;
  }
  v8 = a3[1];
  if ( v8 )
  {
    v9 = *a3;
    v6 = 0;
    v10 = 0;
    while ( 1 )
    {
      v11 = v9 + 76 * v6;
      if ( (*(_BYTE *)(v11 + 73) & 0x20) != 0 )
      {
        v12 = *(_QWORD *)(v11 + 40);
        if ( v12 )
          break;
      }
      v6 = ++v10;
      if ( v10 >= v8 )
        return v6;
    }
    v13 = *(_QWORD *)(v11 + 32);
    qlseek(*(_QWORD *)(v5 + 8), *(_QWORD *)(v5 + 16) + (int)v12, 0);
    v14 = *(_QWORD *)(*a1 + 16LL) + (unsigned int)v12;
    if ( v14 == -1 )
      v14 = qlseek(a2, 0, 1);
    v15 = qlsize(a2) - v14;
    if ( ((v15 | v14) & 0x8000000000000000LL) != 0LL )
    {
      LODWORD(v15) = 0;
      goto LABEL_13;
    }
    if ( v15 < v13 )
LABEL_13:
      sub_6000((__int64)"%s is incorrect, maximum possible value is %u%s", "Debug table", v15, "");
    v17 = a1[5];
    v18 = v13 + 2;
    if ( v17 < v13 + 2 )
    {
      v19 = a1[4];
      if ( a1[6] < v18 )
      {
        v20 = qvector_reserve(a1 + 4, v19, v13 + 2, 1);
        a1[4] = v20;
        v19 = v20;
        v17 = a1[5];
      }
      memset((void *)(v19 + v17), 0, v18 - v17);
      a1[5] = v18;
    }
    else if ( v18 != v17 )
    {
      a1[5] = v18;
    }
    *(_BYTE *)(a1[4] + v13 + 1) = 0;
    lread(a2, a1[4], v13);
    v6 = (unsigned __int64)&unk_23419;
    if ( a1[5] | v13 )
      v6 = v13 + a1[4];
    *(_BYTE *)v6 = 0;
  }
  return v6;
}

