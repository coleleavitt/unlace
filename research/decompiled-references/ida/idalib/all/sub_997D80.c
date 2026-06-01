__int64 __fastcall sub_997D80(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbp
  __int64 result; // rax
  __int16 v5; // ax
  int v6; // edx
  __int64 v7; // rdx
  void *v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rsi
  unsigned int v11; // ecx
  __int64 *v12; // rax
  __int64 v13; // r8
  int v14; // eax
  int v15; // r9d
  __int64 v16; // r8
  unsigned int v17; // ebp
  bool v18; // zf
  __int64 v19; // r9
  _DWORD *v20; // rax
  int v21; // ecx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  int v25; // esi
  __int64 v26; // rdx
  int v27; // r15d
  __int64 v28; // rdx
  void *v29; // rbp
  unsigned int v30; // r14d
  __int64 v31; // [rsp+8h] [rbp-F0h] BYREF
  void *v32; // [rsp+10h] [rbp-E8h] BYREF
  unsigned int v33; // [rsp+18h] [rbp-E0h]
  char v34; // [rsp+1Ch] [rbp-DCh]
  _QWORD v35[2]; // [rsp+20h] [rbp-D8h] BYREF
  unsigned int v36; // [rsp+30h] [rbp-C8h] BYREF
  char v37; // [rsp+34h] [rbp-C4h]
  void *v38; // [rsp+38h] [rbp-C0h]
  unsigned int v39; // [rsp+40h] [rbp-B8h]
  char v40; // [rsp+44h] [rbp-B4h]
  void *v41; // [rsp+70h] [rbp-88h] BYREF
  __int64 v42; // [rsp+78h] [rbp-80h]
  unsigned int v43; // [rsp+80h] [rbp-78h] BYREF
  char v44; // [rsp+84h] [rbp-74h]
  void *v45; // [rsp+88h] [rbp-70h]
  unsigned int v46; // [rsp+90h] [rbp-68h]
  char v47; // [rsp+94h] [rbp-64h]

  v2 = a1[41];
  v31 = a2;
  if ( !*(_BYTE *)(v2 + 56) )
    return 0xFFFFFFFFLL;
  v3 = a2;
  if ( ((*(_DWORD *)a2 >> 14) & 0xC) != 0 )
    return 0xFFFFFFFFLL;
  if ( ((*(_WORD *)a2 + 394) & 0x1FFu) > 1 )
    return sub_997350(a1, v3);
  v5 = (*(_WORD *)(a2 + 2) >> 3) & 0x3F;
  v6 = (*(_WORD *)(a2 + 2) >> 3) & 0x3F;
  if ( (unsigned int)(v6 - 19) <= 1 || (unsigned int)(v6 - 14) <= 1 )
  {
    v9 = *((unsigned int *)a1 + 96);
    v10 = a1[46];
    if ( !(_DWORD)v9 )
      goto LABEL_24;
    v11 = (v9 - 1) & (((unsigned int)v3 >> 9) ^ ((unsigned int)v3 >> 4));
    v12 = (__int64 *)(v10 + 16LL * v11);
    v13 = *v12;
    if ( v3 != *v12 )
    {
      v14 = 1;
      if ( v13 == -4096 )
        goto LABEL_24;
      while ( 1 )
      {
        v15 = v14 + 1;
        v11 = (v9 - 1) & (v14 + v11);
        v12 = (__int64 *)(v10 + 16LL * v11);
        v16 = *v12;
        if ( v3 == *v12 )
          break;
        v14 = v15;
        if ( v16 == -4096 )
          goto LABEL_24;
      }
    }
    if ( v12 != (__int64 *)(v10 + 16 * v9) )
      return *((unsigned int *)v12 + 2);
LABEL_24:
    v17 = sub_997350(a1, v3);
    v18 = (unsigned __int8)sub_994370(a1 + 46, &v31, v35) == 0;
    v20 = (_DWORD *)v35[0];
    if ( !v18 )
    {
LABEL_30:
      v20[2] = v17;
      return v17;
    }
    v21 = *((_DWORD *)a1 + 94);
    v41 = (void *)v35[0];
    v22 = (unsigned int)(v21 + 1);
    v23 = *((unsigned int *)a1 + 96);
    v24 = (unsigned int)(4 * v22);
    v25 = 2 * v23;
    if ( (unsigned int)v24 < 3 * (int)v23 )
    {
      if ( (int)v23 - *((_DWORD *)a1 + 95) - (int)v22 > (unsigned int)v23 >> 3 )
      {
LABEL_27:
        v18 = *(_QWORD *)v20 == -4096;
        *((_DWORD *)a1 + 94) = v22;
        if ( !v18 )
          --*((_DWORD *)a1 + 95);
        v26 = v31;
        v20[2] = -1;
        *(_QWORD *)v20 = v26;
        goto LABEL_30;
      }
      v25 = *((_DWORD *)a1 + 96);
    }
    sub_994A20(a1 + 46, v25, v22, v23, v24, v19);
    sub_994370(a1 + 46, &v31, &v41);
    LODWORD(v22) = *((_DWORD *)a1 + 94) + 1;
    v20 = v41;
    goto LABEL_27;
  }
  if ( (_BYTE)v5 != 2 && (_BYTE)v5 != 16 )
    return sub_997350(a1, v3);
  v37 &= ~1u;
  LOWORD(v35[0]) = 0;
  v7 = *a1;
  v35[1] = 0;
  v36 = 0;
  if ( !(unsigned __int8)sub_C3F220(*(_QWORD *)(a2 + 16), v35, v7, 0, 0) )
    goto LABEL_35;
  LODWORD(v42) = v39;
  if ( v39 <= 0x40 )
  {
    v8 = v38;
    v41 = v38;
    BYTE4(v42) = v40;
    goto LABEL_14;
  }
  sub_2205510(&v41);
  v27 = v42;
  v8 = v41;
  BYTE4(v42) = v40;
  if ( (unsigned int)v42 > 0x40 )
  {
    if ( (unsigned int)sub_2206780(&v41) == v27 )
    {
      result = 0;
      if ( v8 )
      {
        operator delete[](v8);
        result = 0;
      }
      goto LABEL_15;
    }
    if ( v8 )
      operator delete[](v8);
LABEL_35:
    v44 &= ~1u;
    v28 = *a1;
    LOWORD(v41) = 0;
    v42 = 0;
    v43 = 0;
    if ( !(unsigned __int8)sub_C3F220(*(_QWORD *)(a2 + 24), &v41, v28, 0, 0) )
    {
LABEL_39:
      if ( v43 > 1 )
        sub_A4F8E0(&v43);
      if ( v36 > 1 )
        sub_A4F8E0(&v36);
      v3 = v31;
      return sub_997350(a1, v3);
    }
    v33 = v46;
    if ( v46 > 0x40 )
    {
      sub_2205510(&v32);
      v30 = v33;
      v29 = v32;
      v34 = v47;
      if ( v33 > 0x40 )
      {
        if ( (unsigned int)sub_2206780(&v32) != v30 )
        {
          if ( v29 )
            operator delete[](v29);
          goto LABEL_39;
        }
        result = 0;
        if ( v29 )
        {
          operator delete[](v29);
          result = 0;
        }
        goto LABEL_52;
      }
    }
    else
    {
      v29 = v45;
      v32 = v45;
      v34 = v47;
    }
    if ( v29 )
      goto LABEL_39;
    result = 0;
LABEL_52:
    if ( v43 > 1 )
    {
      sub_A4F8E0(&v43);
      result = 0;
    }
    goto LABEL_15;
  }
LABEL_14:
  result = 0;
  if ( v8 )
    goto LABEL_35;
LABEL_15:
  if ( v36 > 1 )
  {
    sub_A4F8E0(&v36);
    return 0;
  }
  return result;
}
