__int64 __fastcall sub_412AC0(__int64 ***a1, __int64 *a2, int *a3)
{
  __int64 v3; // r13
  __int64 **v4; // rbp
  __int64 *v5; // r14
  __int64 *v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // r12
  unsigned __int64 v11; // r11
  char v12; // bl
  __int64 v13; // rsi
  _BOOL8 v14; // r15
  unsigned __int64 v15; // r12
  unsigned __int64 v16; // r15
  char v17; // r9
  __int64 v18; // r10
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r11
  __int64 v22; // r14
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 *v28; // rax
  __int64 v29; // rdx
  __int64 *v30; // rdi
  bool v31; // zf
  __int64 *v32; // rbx
  unsigned __int64 v33; // rdx
  __int64 v34; // r9
  __int64 v35; // rcx
  __int64 v36; // rdi
  __int64 v37; // rax
  __int64 v38; // r10
  __int64 v39; // rdx
  __int64 v40; // rax
  int v41; // ecx
  int v42; // ecx
  unsigned __int8 v43; // al
  int v44; // ecx
  int v45; // ecx
  unsigned __int8 v46; // al
  __int64 v47; // [rsp+0h] [rbp-68h]
  __int64 v48; // [rsp+0h] [rbp-68h]
  __int64 v49; // [rsp+10h] [rbp-58h] BYREF
  __int64 v50; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v51[9]; // [rsp+20h] [rbp-48h] BYREF

  v3 = *a2;
  v51[1] = __readfsqword(0x28u);
  v4 = *a1;
  v5 = **a1;
  v6 = (*a1)[4];
  v7 = *v5;
  v8 = *v5 + 56 * v3;
  v9 = *(_QWORD *)(v8 + 48);
  if ( ((unsigned __int64)v6 & v9) == 0 )
    return 0;
  v10 = *a3;
  v11 = v5[1];
  v12 = *((_BYTE *)v4 + 16);
  v13 = v9 & *v4[1];
  v14 = (_DWORD)v10 != 1;
  v15 = v3 + v10;
  v16 = v3 + v14;
  if ( v16 >= v11 )
    goto LABEL_17;
  if ( v6 == (__int64 *)-1LL )
  {
    if ( (*((_BYTE *)v5 + 52) & 7) != 0 )
    {
      v17 = *((_BYTE *)v4 + 16);
      v41 = 1 << ((*((_BYTE *)v5 + 52) & 7) - 1);
    }
    else
    {
      v47 = *v5 + 56 * v3;
      v43 = getinf(61);
      v7 = *v5;
      v11 = v5[1];
      v17 = *((_BYTE *)v4 + 16);
      v41 = v43;
      v8 = v47;
    }
    v42 = 8 * v41;
    if ( v42 > 63 )
    {
      v19 = v13;
      v18 = v13;
    }
    else
    {
      v18 = v13 & ((1LL << v42) - 1);
      v19 = v13 | -(1LL << v42);
    }
  }
  else
  {
    v17 = *((_BYTE *)v4 + 16);
    v18 = v13 & (unsigned __int64)v6;
    v19 = v13 | ~(unsigned __int64)v6;
  }
  if ( v11 < v15 )
    v20 = 56 * v11;
  else
    v20 = 56 * v15;
  v21 = v7 + v20;
  v22 = 56 * v16;
  v23 = v7 + 56 * v16;
  if ( v20 == 56 * v16 )
  {
    if ( !v17 )
    {
      v6 = v4[4];
      v9 = *(_QWORD *)(v8 + 48);
      goto LABEL_17;
    }
LABEL_15:
    v6 = v4[4];
    if ( !v13 || (v32 = *v4, v33 = (*v4)[1], v16 >= v33) )
    {
      v9 = *(_QWORD *)(v8 + 48);
      goto LABEL_17;
    }
    if ( v6 == (__int64 *)-1LL )
    {
      if ( (*((_BYTE *)v32 + 52) & 7) != 0 )
      {
        v44 = 1 << ((*((_BYTE *)v32 + 52) & 7) - 1);
      }
      else
      {
        v48 = v8;
        v46 = getinf(61);
        v33 = v32[1];
        v8 = v48;
        v44 = v46;
      }
      v45 = 8 * v44;
      if ( v45 > 63 )
      {
        v35 = v13;
        v34 = v13;
      }
      else
      {
        v34 = v13 & ((1LL << v45) - 1);
        v35 = v13 | -(1LL << v45);
      }
    }
    else
    {
      v34 = (unsigned __int64)v6 & v13;
      v35 = v13 | ~(unsigned __int64)v6;
    }
    v36 = *v32;
    if ( v33 >= v15 )
      v37 = 56 * v15;
    else
      v37 = 56 * v33;
    v38 = v36 + v37;
    v39 = v36 + v22;
    if ( v22 == v37 )
    {
      v9 = *(_QWORD *)(v8 + 48);
      v6 = v4[4];
      goto LABEL_17;
    }
    while ( 1 )
    {
      v40 = *(_QWORD *)(v39 + 48);
      if ( v40 == v35 || v40 == v34 )
        break;
      v39 += 56;
      if ( v38 == v39 )
        goto LABEL_37;
    }
    v27 = 0x6DB6DB6DB6DB6DB7LL * ((v39 - v36) >> 3);
  }
  else
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v24 = *(_QWORD *)(v23 + 48);
        if ( v24 == v18 || v24 == v19 )
          break;
        v23 += 56;
        if ( v21 == v23 )
          goto LABEL_14;
      }
      if ( !v12 )
        break;
      v23 += 56;
      --v12;
      if ( v21 == v23 )
      {
LABEL_14:
        if ( v17 )
          goto LABEL_15;
LABEL_37:
        v9 = *(_QWORD *)(v8 + 48);
        goto LABEL_38;
      }
    }
    v26 = v23 - v7;
    v27 = 0x6DB6DB6DB6DB6DB7LL * (v26 >> 3);
    if ( v17 && v26 < 0 )
      goto LABEL_15;
  }
  v9 = *(_QWORD *)(v8 + 48);
  if ( v27 >= 0 )
  {
    v3 = v27;
    goto LABEL_24;
  }
LABEL_38:
  v6 = v4[4];
LABEL_17:
  if ( ((unsigned __int64)v6 & (v9 ^ v13)) != 0 || v3 < 0 )
    return 0;
LABEL_24:
  *v4[1] &= ~v9;
  v28 = v4[3];
  v29 = *(_QWORD *)(v8 + 48);
  v30 = *v4;
  v49 = v3;
  v31 = v28[2] == 0;
  v50 = v13;
  v51[0] = v29;
  if ( v31 )
    std::__throw_bad_function_call();
  return ((__int64 (__fastcall *)(__int64 *, __int64 *, __int64 *, __int64 *, _QWORD *))v28[3])(
           v28,
           v30,
           &v49,
           &v50,
           v51);
}
