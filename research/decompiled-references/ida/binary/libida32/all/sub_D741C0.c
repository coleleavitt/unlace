void **__fastcall sub_D741C0(_QWORD *a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // r13
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rsi
  __int64 v11; // rax
  void **result; // rax
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rsi
  unsigned int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rbx
  unsigned int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rbx
  __int64 v24; // r12
  __int64 v25; // rax
  unsigned int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rbx
  unsigned int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rbx
  unsigned int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rbx
  unsigned int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rbx
  unsigned int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rbx
  __int64 v41; // r13
  unsigned __int64 v42; // r12
  unsigned __int64 v43; // rsi
  __int64 v44; // rax
  __int64 v45; // rsi
  __int64 v46; // rax

  if ( a3 == 9 )
  {
    v8 = *(unsigned int *)(a4 + 8);
    v9 = 0;
    v10 = (unsigned __int64)(v8 + 63) >> 6;
    if ( v10 != 1 )
    {
      v16 = a1[71];
      v17 = 8 * v10;
      a1[81] += v17;
      v9 = (v16 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( a1[72] >= v17 + v9 && v16 )
        a1[71] = v17 + v9;
      else
        v9 = sub_962430((__int64)(a1 + 71), v17, v17, 3, a5, a6);
    }
    v11 = sub_CEA4F0(a2);
    *(_QWORD *)v11 = v9;
    *(_DWORD *)(v11 + 8) = v8;
    result = (void **)sub_CEA4F0(a2);
    v13 = *(unsigned int *)(a4 + 8);
    v14 = *(_QWORD *)a4;
    if ( (unsigned int)v13 <= 0x40 )
    {
      v15 = 0;
      if ( (_DWORD)v13 )
        v15 = v14 << (64 - (unsigned __int8)v13) >> (64 - (unsigned __int8)v13);
      *result = (void *)v15;
      return result;
    }
    return (void **)memcpy(*result, (const void *)v14, 8 * ((unsigned __int64)(v13 + 63) >> 6));
  }
  if ( a3 == 8 )
  {
    v41 = *(unsigned int *)(a4 + 8);
    v42 = 0;
    v43 = (unsigned __int64)(v41 + 63) >> 6;
    if ( v43 != 1 )
    {
      v44 = a1[71];
      v45 = 8 * v43;
      a1[81] += v45;
      v42 = (v44 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( a1[72] >= v45 + v42 && v44 )
        a1[71] = v45 + v42;
      else
        v42 = sub_962430((__int64)(a1 + 71), v45, v45, 3, a5, a6);
    }
    v46 = sub_CEA4A0(a2);
    *(_QWORD *)v46 = v42;
    *(_DWORD *)(v46 + 8) = v41;
    result = (void **)sub_CEA4A0(a2);
    v13 = *(unsigned int *)(a4 + 8);
    v14 = *(_QWORD *)a4;
    if ( (unsigned int)v13 <= 0x40 )
    {
      *result = (void *)v14;
      return result;
    }
    return (void **)memcpy(*result, (const void *)v14, 8 * ((unsigned __int64)(v13 + 63) >> 6));
  }
  switch ( a3 )
  {
    case 0:
      v21 = *(_DWORD *)(a4 + 8);
      v22 = *(_QWORD *)a4;
      if ( *(_BYTE *)(a4 + 12) )
      {
        v23 = *(_QWORD *)a4;
        if ( v21 > 0x40 )
          v23 = *(_QWORD *)v22;
      }
      else if ( v21 > 0x40 )
      {
        LOBYTE(v23) = *(_BYTE *)v22;
      }
      else
      {
        LOBYTE(v23) = 0;
        if ( v21 )
          v23 = v22 << (64 - (unsigned __int8)v21) >> (64 - (unsigned __int8)v21);
      }
      result = (void **)sub_CE8890(a2);
      *(_BYTE *)result = v23;
      return result;
    case 1:
      v29 = *(_DWORD *)(a4 + 8);
      v30 = *(_QWORD *)a4;
      if ( *(_BYTE *)(a4 + 12) )
      {
        v31 = *(_QWORD *)a4;
        if ( v29 > 0x40 )
          v31 = *(_QWORD *)v30;
      }
      else if ( v29 > 0x40 )
      {
        LOBYTE(v31) = *(_BYTE *)v30;
      }
      else
      {
        LOBYTE(v31) = 0;
        if ( v29 )
          v31 = v30 << (64 - (unsigned __int8)v29) >> (64 - (unsigned __int8)v29);
      }
      result = (void **)sub_CE8AA0(a2);
      *(_BYTE *)result = v31;
      return result;
    case 2:
      v32 = *(_DWORD *)(a4 + 8);
      v33 = *(_QWORD *)a4;
      if ( *(_BYTE *)(a4 + 12) )
      {
        v34 = *(_QWORD *)a4;
        if ( v32 > 0x40 )
          v34 = *(_QWORD *)v33;
      }
      else if ( v32 > 0x40 )
      {
        LOWORD(v34) = *(_WORD *)v33;
      }
      else
      {
        LOWORD(v34) = 0;
        if ( v32 )
          v34 = v33 << (64 - (unsigned __int8)v32) >> (64 - (unsigned __int8)v32);
      }
      result = (void **)sub_CE8E90(a2);
      *(_WORD *)result = v34;
      return result;
    case 3:
      v35 = *(_DWORD *)(a4 + 8);
      v36 = *(_QWORD *)a4;
      if ( *(_BYTE *)(a4 + 12) )
      {
        v37 = *(_QWORD *)a4;
        if ( v35 > 0x40 )
          v37 = *(_QWORD *)v36;
      }
      else if ( v35 > 0x40 )
      {
        LOWORD(v37) = *(_WORD *)v36;
      }
      else
      {
        LOWORD(v37) = 0;
        if ( v35 )
          v37 = v36 << (64 - (unsigned __int8)v35) >> (64 - (unsigned __int8)v35);
      }
      result = (void **)sub_CE90A0(a2);
      *(_WORD *)result = v37;
      return result;
    case 4:
      v38 = *(_DWORD *)(a4 + 8);
      v39 = *(_QWORD *)a4;
      if ( *(_BYTE *)(a4 + 12) )
      {
        v40 = *(_QWORD *)a4;
        if ( v38 > 0x40 )
          v40 = *(_QWORD *)v39;
      }
      else if ( v38 > 0x40 )
      {
        LODWORD(v40) = *(_DWORD *)v39;
      }
      else
      {
        LODWORD(v40) = 0;
        if ( v38 )
          v40 = v39 << (64 - (unsigned __int8)v38) >> (64 - (unsigned __int8)v38);
      }
      result = (void **)sub_CE9490(a2);
      *(_DWORD *)result = v40;
      return result;
    case 5:
      LODWORD(v24) = *(_DWORD *)(a4 + 8);
      v25 = *(_QWORD *)a4;
      if ( *(_BYTE *)(a4 + 12) )
      {
        if ( (unsigned int)v24 <= 0x40 )
          v24 = *(_QWORD *)a4;
        else
          v24 = *(_QWORD *)v25;
      }
      else if ( (unsigned int)v24 > 0x40 )
      {
        LODWORD(v24) = *(_DWORD *)v25;
      }
      else if ( (_DWORD)v24 )
      {
        v24 = v25 << (64 - (unsigned __int8)v24) >> (64 - (unsigned __int8)v24);
      }
      result = (void **)sub_CE96A0(a2);
      *(_DWORD *)result = v24;
      return result;
    case 6:
      v26 = *(_DWORD *)(a4 + 8);
      v27 = *(_QWORD *)a4;
      if ( *(_BYTE *)(a4 + 12) )
      {
        v28 = *(_QWORD *)a4;
        if ( v26 <= 0x40 )
          goto LABEL_71;
        goto LABEL_70;
      }
      if ( v26 > 0x40 )
      {
LABEL_70:
        v28 = *(_QWORD *)v27;
        goto LABEL_71;
      }
      v28 = 0;
      if ( v26 )
        v28 = v27 << (64 - (unsigned __int8)v26) >> (64 - (unsigned __int8)v26);
LABEL_71:
      result = (void **)sub_CE9C80(a2);
      *result = (void *)v28;
      return result;
    case 7:
      v18 = *(_DWORD *)(a4 + 8);
      v19 = *(_QWORD *)a4;
      if ( *(_BYTE *)(a4 + 12) )
      {
        v20 = *(_QWORD *)a4;
        if ( v18 <= 0x40 )
        {
LABEL_65:
          result = (void **)sub_CE9E90(a2);
          *result = (void *)v20;
          return result;
        }
      }
      else if ( v18 <= 0x40 )
      {
        v20 = 0;
        if ( v18 )
          v20 = v19 << (64 - (unsigned __int8)v18) >> (64 - (unsigned __int8)v18);
        goto LABEL_65;
      }
      v20 = *(_QWORD *)v19;
      goto LABEL_65;
  }
}

