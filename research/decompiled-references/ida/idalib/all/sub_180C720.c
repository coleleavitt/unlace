__int64 __fastcall sub_180C720(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  unsigned int *v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rdx
  unsigned int *v17; // rax
  __int64 v18; // rdx
  unsigned int v19; // ebp
  unsigned int v20; // eax
  unsigned int v21; // edx
  int v22; // r10d
  int v23; // ecx
  unsigned int v25; // r10d
  unsigned int v26; // r13d
  unsigned int v27; // edi
  __int64 v28; // rax
  __int64 *v29; // rsi
  __int64 v30; // r12
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 *v33; // rsi
  __int64 v34; // r13
  unsigned int v35; // edx
  unsigned int v36; // esi
  unsigned int v37; // r9d
  unsigned int v38; // ecx
  __int64 v39; // rax
  __int64 v40; // r12
  __int64 v41; // rax
  unsigned int v42; // r8d
  unsigned int v43; // esi
  unsigned int v44; // edi
  unsigned int v45; // ecx
  __int64 v46; // [rsp+0h] [rbp-128h] BYREF
  __int64 v47; // [rsp+8h] [rbp-120h]
  int v48; // [rsp+18h] [rbp-110h] BYREF
  int v49; // [rsp+1Ch] [rbp-10Ch] BYREF
  unsigned int *v50; // [rsp+20h] [rbp-108h] BYREF
  __int64 v51; // [rsp+28h] [rbp-100h]
  void *v52[2]; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v53; // [rsp+40h] [rbp-E8h] BYREF
  void *v54[2]; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v55; // [rsp+60h] [rbp-C8h] BYREF
  _BYTE v56[184]; // [rsp+70h] [rbp-B8h] BYREF

  v13 = *(unsigned int **)(a3 + 16);
  v46 = a4;
  v14 = *v13;
  v47 = a5;
  v15 = sub_B8FAD0((__int64)(v13 + 4), v14);
  v51 = v16;
  v50 = (unsigned int *)v15;
  if ( !v16 )
  {
    v17 = *(unsigned int **)(a3 + 16);
    v18 = *v17;
    v50 = v17 + 4;
    v51 = v18;
  }
  v19 = HIDWORD(v46) & 0x7FFFFFFF;
  if ( !(((unsigned int)v47 | HIDWORD(v46)) & 0x7FFFFFFF | (unsigned int)v46 | HIDWORD(v47) & 0x7FFFFFFF) )
    goto LABEL_4;
  if ( (unsigned int)a7 | HIDWORD(a8) & 0x7FFFFFFF | (HIDWORD(a7) | (unsigned int)a8) & 0x7FFFFFFF )
  {
    if ( (unsigned int)v46 > (unsigned int)a7
      || (v25 = HIDWORD(a7) & 0x7FFFFFFF, v26 = v47 & 0x7FFFFFFF, v27 = a8 & 0x7FFFFFFF, (_DWORD)v46 == (_DWORD)a7)
      && (v19 > v25
       || v19 == v25 && (v26 > v27 || v26 == v27 && (HIDWORD(v47) & 0x7FFFFFFFu) > (HIDWORD(a8) & 0x7FFFFFFFu))) )
    {
      sub_168B9F0((__int64)v56, (__int64 *)(a1 + 8), a2, 0x19D6u, 0);
      v49 = 1;
      v31 = sub_1587D10((__int64)v56, &v49);
      v29 = &a7;
      v30 = sub_1682BA0(v31, (__int64)&v50);
      goto LABEL_27;
    }
  }
  if ( !((unsigned int)v46 | v19) )
  {
LABEL_4:
    if ( ((HIDWORD(v47) | (unsigned int)v47) & 0x7FFFFFFF) == 0 )
      goto LABEL_5;
  }
  v22 = HIDWORD(a10);
  v23 = HIDWORD(a9) | a10;
  if ( !((HIDWORD(a9) | (unsigned int)a10) & 0x7FFFFFFF | (unsigned int)a9 | HIDWORD(a10) & 0x7FFFFFFF) )
  {
    v20 = a7;
    if ( (_DWORD)a7 )
      goto LABEL_8;
    goto LABEL_21;
  }
  if ( (unsigned int)v46 > (unsigned int)a9
    || (v35 = v47 & 0x7FFFFFFF,
        v36 = HIDWORD(v46) & 0x7FFFFFFF,
        v37 = HIDWORD(a9) & 0x7FFFFFFF,
        v38 = a10 & 0x7FFFFFFF,
        (_DWORD)v46 == (_DWORD)a9)
    && (v36 > v37
     || v36 == v37 && (v35 > v38 || (HIDWORD(v47) & 0x7FFFFFFFu) > (HIDWORD(a10) & 0x7FFFFFFFu) && v35 == v38)) )
  {
    sub_168B9F0((__int64)v56, (__int64 *)(a1 + 8), a2, 0x19D6u, 0);
    v49 = 2;
    v28 = sub_1587D10((__int64)v56, &v49);
    v29 = &a9;
    v30 = sub_1682BA0(v28, (__int64)&v50);
LABEL_27:
    sub_2257830(v54, v29);
    v32 = sub_1682AF0(v30, (__int64)v54);
    v48 = 0;
    v33 = &v46;
    v34 = sub_1587D10(v32, &v48);
    goto LABEL_28;
  }
LABEL_5:
  v20 = a7;
  if ( !(_DWORD)a7 )
  {
LABEL_21:
    if ( ((HIDWORD(a8) | (unsigned int)a8 | HIDWORD(a7)) & 0x7FFFFFFF) == 0 )
      return 0;
    v20 = a9;
    if ( (_DWORD)a9 )
      return 0;
    goto LABEL_7;
  }
  v21 = a9;
  if ( !(_DWORD)a9 )
  {
LABEL_7:
    v22 = HIDWORD(a10);
    v23 = HIDWORD(a9) | a10;
LABEL_8:
    if ( ((v22 | v23) & 0x7FFFFFFF) == 0 )
      return 0;
    v21 = 0;
  }
  if ( v21 >= v20 )
  {
    v42 = a8 & 0x7FFFFFFF;
    v43 = HIDWORD(a7) & 0x7FFFFFFF;
    v44 = a10 & 0x7FFFFFFF;
    v45 = HIDWORD(a9) & 0x7FFFFFFF;
    if ( v21 != v20 )
      return 0;
    if ( v43 <= v45 )
    {
      if ( v43 != v45 )
        return 0;
      if ( v42 <= v44 )
      {
        if ( (HIDWORD(a8) & 0x7FFFFFFFu) <= (HIDWORD(a10) & 0x7FFFFFFFu) )
          return 0;
        if ( v42 != v44 )
          return 0;
      }
    }
  }
  sub_168B9F0((__int64)v56, (__int64 *)(a1 + 8), a2, 0x19D6u, 0);
  v49 = 2;
  v39 = sub_1587D10((__int64)v56, &v49);
  v40 = sub_1682BA0(v39, (__int64)&v50);
  sub_2257830(v54, &a9);
  v41 = sub_1682AF0(v40, (__int64)v54);
  v48 = 1;
  v33 = &a7;
  v34 = sub_1587D10(v41, &v48);
LABEL_28:
  sub_2257830(v52, v33);
  sub_1682AF0(v34, (__int64)v52);
  if ( v52[0] != &v53 )
    operator delete(v52[0]);
  if ( v54[0] != &v55 )
    operator delete(v54[0]);
  sub_15F7200(v56);
  return 1;
}
