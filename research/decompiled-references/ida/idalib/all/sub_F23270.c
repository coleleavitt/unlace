__int64 __fastcall sub_F23270(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // rbx
  unsigned int v9; // r12d
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  _QWORD *v12; // rdi
  char v13; // cl
  unsigned __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  char v20; // al
  char v21; // si
  char v22; // cl
  char v23; // dl
  char v24; // al
  int v25; // esi
  int v26; // ecx
  int v27; // edx
  unsigned __int64 v28; // rdi
  char v29; // al
  char v30; // si
  char v31; // cl
  char v32; // dl
  char v33; // al
  int v34; // ecx
  int v35; // edx
  int v36; // r12d
  __int64 v37; // r13
  __int64 i; // rbx
  char v39; // al
  char v40; // si
  char v41; // cl
  char v42; // dl
  char v43; // al
  int v44; // ecx
  int v45; // edx
  _QWORD v46[6]; // [rsp+8h] [rbp-30h] BYREF

  v6 = *a1;
  v7 = (*a1 >> 1) & 3;
  if ( ((*a1 >> 1) & 3) != 0 )
  {
    if ( v7 == 3 )
    {
      if ( !v6 )
        BUG();
      v9 = 6;
      v28 = *(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF8LL) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v28 )
      {
        v29 = sub_E91240(v28, a2, 3, a4, a5, a6);
        v30 = v29 & 8;
        if ( (v29 & 8) != 0 )
          v30 = 16;
        v31 = v29 & 4;
        if ( (v29 & 4) != 0 )
          v31 = 12;
        v32 = v29 & 2;
        if ( (v29 & 2) != 0 )
          v32 = 2;
        v33 = v32 | v31 | v30 | v29 & 1;
        v34 = v33 & 0x10;
        if ( (v33 & 0x10) != 0 )
          v34 = 8;
        v35 = v33 & 0xC;
        if ( (v33 & 0xC) != 0 )
          v35 = 4;
        v36 = v33 & 2;
        if ( (v33 & 2) != 0 )
          v36 = 2;
        return v35 | v34 | v33 & 1 | v36 | 6u;
      }
      return v9;
    }
    if ( v7 == 2 )
    {
      if ( !v6 )
        BUG();
      v15 = v6 & 0xFFFFFFFFFFFFFFF8LL;
      v46[0] = *(_QWORD *)((v6 & 0xFFFFFFFFFFFFFFF8LL) + 16);
      v9 = sub_F23270(v46);
      if ( (*(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      {
        v20 = sub_E91240(*(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF8LL, a2, v16, v17, v18, v19);
        v21 = v20 & 8;
        if ( (v20 & 8) != 0 )
          v21 = 16;
        v22 = v20 & 4;
        if ( (v20 & 4) != 0 )
          v22 = 12;
        v23 = v20 & 2;
        if ( (v20 & 2) != 0 )
          v23 = 2;
        v24 = v23 | v22 | v21 | v20 & 1;
        v25 = v24 & 0x10;
        if ( (v24 & 0x10) != 0 )
          v25 = 8;
        v26 = v24 & 0xC;
        if ( (v24 & 0xC) != 0 )
          v26 = 4;
        v27 = v24 & 2;
        if ( (v24 & 2) != 0 )
          v27 = 2;
        v9 |= v27 | v26 | v25 | v24 & 1;
      }
      return v9;
    }
    v8 = v6 & 0xFFFFFFFFFFFFFFF8LL;
  }
  else
  {
    v8 = v6 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v6 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    {
      v9 = 0;
      v10 = sub_F22BD0(a1, 0);
      if ( (*(_BYTE *)(v10 + 28) & 0x7F) == 0x44 )
      {
        LOBYTE(v9) = (*(_BYTE *)(v10 + 80) & 2) != 0;
        v9 += 6;
      }
      v11 = *(_QWORD *)(v10 + 16);
      v12 = (_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF8LL);
      if ( (v11 & 4) != 0 )
        v12 = (_QWORD *)*v12;
      if ( v12 && (unsigned __int8)sub_B8E180((unsigned __int64)v12) )
        v9 |= 6u;
      return v9;
    }
  }
  v9 = 6;
  v13 = *(_BYTE *)v8 & 7;
  if ( v13 != 1 )
  {
    if ( v13 == 3 )
    {
      if ( v7 != 1 || !v6 || !v8 )
        BUG();
      v46[0] = *(_QWORD *)(v8 + 16);
      return (unsigned int)sub_F23270(v46);
    }
    else if ( v13 == 2 )
    {
      if ( !v6 || v7 != 1 || !v8 )
        BUG();
      v37 = v8 + 24;
      v46[0] = *(_QWORD *)(v8 + 16);
      v9 = sub_F23270(v46);
      for ( i = v8 + 24 + 24LL * (*(_WORD *)(v8 + 2) >> 1); i != v37; v9 |= v45 | v44 | v43 & 1 | 2 )
      {
        while ( 1 )
        {
          v39 = sub_F1D2B0(v37);
          v40 = v39 & 8;
          if ( (v39 & 8) != 0 )
            v40 = 16;
          v41 = v39 & 4;
          if ( (v39 & 4) != 0 )
            v41 = 12;
          v42 = v39 & 2;
          if ( (v39 & 2) != 0 )
            v42 = 2;
          v43 = v42 | v41 | v40 | v39 & 1;
          v44 = v43 & 0x10;
          if ( (v43 & 0x10) != 0 )
            v44 = 8;
          v45 = v43 & 0xC;
          if ( (v43 & 0xC) != 0 )
            v45 = 4;
          if ( (v43 & 2) != 0 )
            break;
          v37 += 24;
          v9 |= v45 | v44 | v43 & 1;
          if ( i == v37 )
            return v9;
        }
        v37 += 24;
      }
    }
    else
    {
      return 7;
    }
  }
  return v9;
}
