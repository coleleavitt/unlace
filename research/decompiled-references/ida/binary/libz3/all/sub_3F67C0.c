__int64 __fastcall sub_3F67C0(_QWORD *a1, __int64 *a2)
{
  __int64 v3; // r14
  __int64 v4; // rax
  _QWORD *v5; // rax
  unsigned int *v6; // rbx
  int v7; // eax
  int v8; // r9d
  __int64 v9; // rsi
  __int64 v10; // r12
  __int64 v12; // r15
  int v13; // r8d
  __int64 v14; // rax
  _QWORD *v15; // r14
  _DWORD *v16; // r15
  int v17; // eax
  int v18; // edx
  __int64 v19; // rax
  __int64 v20; // r14
  int v21; // edx
  __int16 v22; // ax
  _DWORD *v23; // rax
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rsi
  __int64 v31; // rax
  _DWORD *v32; // rax
  _DWORD *v33; // rax
  _QWORD *v34; // [rsp+0h] [rbp-148h]
  _QWORD *v35; // [rsp+8h] [rbp-140h]
  __int64 v36; // [rsp+8h] [rbp-140h]
  __int64 v37; // [rsp+10h] [rbp-138h]
  __int64 v38; // [rsp+10h] [rbp-138h]
  __int64 v39; // [rsp+18h] [rbp-130h]
  unsigned int *v40; // [rsp+20h] [rbp-128h]
  __int64 *v41; // [rsp+28h] [rbp-120h]
  int v42; // [rsp+30h] [rbp-118h]
  unsigned int *v43; // [rsp+38h] [rbp-110h] BYREF
  __int64 v44; // [rsp+40h] [rbp-108h] BYREF
  void *v45; // [rsp+48h] [rbp-100h] BYREF
  __int64 v46; // [rsp+50h] [rbp-F8h] BYREF
  _DWORD *v47; // [rsp+58h] [rbp-F0h] BYREF
  __int64 v48; // [rsp+60h] [rbp-E8h] BYREF
  unsigned int *v49; // [rsp+68h] [rbp-E0h] BYREF
  __int64 v50; // [rsp+70h] [rbp-D8h] BYREF
  unsigned int *v51; // [rsp+78h] [rbp-D0h] BYREF
  __int64 v52; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v53; // [rsp+88h] [rbp-C0h]
  _QWORD v54[3]; // [rsp+90h] [rbp-B8h] BYREF
  void *v55; // [rsp+A8h] [rbp-A0h]
  __int64 v56; // [rsp+B8h] [rbp-90h]
  void *ptr; // [rsp+C0h] [rbp-88h]
  _BYTE v58[120]; // [rsp+D0h] [rbp-78h] BYREF

  sub_15B8F20(v58, *a1);
  v54[2] = 0;
  v55 = nullptr;
  v3 = *a2;
  v56 = 0;
  v54[0] = &off_1C62200;
  v4 = *a1;
  ptr = nullptr;
  v48 = v4;
  v49 = nullptr;
  v5 = (_QWORD *)sub_186B270(0x18u);
  v5[1] = v3;
  v6 = (unsigned int *)(v5 + 1);
  v34 = v54;
  *v5 = 0x100000002LL;
  v7 = 1;
  while ( 2 )
  {
    v37 = *(_QWORD *)&v6[2 * (v7 - 1)];
    if ( (unsigned __int8)sub_15D37A0(v34, v37) )
    {
      --*(v6 - 1);
      goto LABEL_4;
    }
    v12 = *a1;
    v13 = v37 + 32;
    v14 = *(unsigned int *)(v37 + 24);
    v50 = *a1;
    v14 *= 8;
    v35 = (_QWORD *)(v37 + 32 + v14);
    if ( !v14 )
    {
      --*(v6 - 1);
      v19 = sub_15DC610(
              v12,
              *(_QWORD *)(v37 + 16),
              0,
              0,
              v13,
              v8,
              (int)v34,
              (int)v35,
              v37,
              v39,
              0,
              (char)v41,
              v42,
              (int)v43,
              v44,
              v45);
      goto LABEL_27;
    }
    LOBYTE(v39) = 1;
    v15 = (_QWORD *)(v37 + 32);
    v40 = nullptr;
    v41 = &v52;
    do
    {
      while ( 1 )
      {
        v16 = (_DWORD *)*v15;
        if ( !*(_WORD *)(*v15 + 4LL) )
          break;
LABEL_17:
        if ( v35 == ++v15 )
          goto LABEL_23;
      }
      if ( (unsigned __int8)sub_15D37A0(v34, *v15) )
      {
        if ( (_BYTE)v39 )
        {
          v47 = nullptr;
          sub_15B97F0(v58, v16, &v47, &v52);
          v32 = v47;
          if ( v47 )
          {
            v16 = v47;
          }
          else
          {
            v47 = v16;
            v32 = v16;
          }
          ++v32[2];
          v45 = v16;
          v51 = v40;
          sub_3E6950(&v51, &v45);
          v40 = v51;
        }
        goto LABEL_17;
      }
      if ( !v6 || (v17 = *(v6 - 1), v17 == *(v6 - 2)) )
      {
        v43 = v6;
        sub_3A6B20(&v43);
        v6 = v43;
        v17 = *(v43 - 1);
      }
      LOBYTE(v39) = 0;
      ++v15;
      *(_QWORD *)&v6[2 * v17] = v16;
      *(v6 - 1) = v17 + 1;
    }
    while ( v35 != v15 );
LABEL_23:
    if ( (_BYTE)v39 )
    {
      --*(v6 - 1);
      v12 = *a1;
      if ( v40 )
        v18 = *(v40 - 1);
      else
        v18 = 0;
      v19 = sub_15DC610(
              v12,
              *(_QWORD *)(v37 + 16),
              v18,
              (int)v40,
              v13,
              v8,
              (int)v34,
              (int)v35,
              v37,
              v39,
              (int)v40,
              (char)&v52,
              v42,
              (int)v43,
              v44,
              v45);
LABEL_27:
      v20 = v19;
      v21 = *((_DWORD *)a1 + 2);
      v22 = *(_WORD *)(v38 + 4);
      if ( v20 )
      {
        ++*(_DWORD *)(v20 + 8);
        if ( !v22 )
        {
          v23 = *(_DWORD **)(*(_QWORD *)(v38 + 16) + 24LL);
          if ( v23 )
          {
            if ( v21 == *v23 && v23[1] == 1 )
              goto LABEL_32;
          }
        }
        goto LABEL_43;
      }
      if ( v22 || (v33 = *(_DWORD **)(*(_QWORD *)(v38 + 16) + 24LL)) == nullptr )
      {
        sub_15B9070(v58, v38, 0, 0);
        v52 = 0;
        goto LABEL_46;
      }
      if ( v21 != *v33 || v33[1] != 1 )
        goto LABEL_44;
LABEL_32:
      v24 = *(_QWORD *)v40;
      if ( a1[4] != *(_QWORD *)v40 )
      {
        if ( !(unsigned __int8)sub_15D37A0(a1 + 6, v24) )
          goto LABEL_43;
        v24 = a1[4];
      }
      v25 = sub_15D1F10(v24);
      v26 = 0xFFFFFFFF0LL;
      v27 = *(_QWORD *)(*(_QWORD *)(v25 + 24) + 8LL);
      if ( v27 )
        v26 = 16LL * (unsigned int)(*(_DWORD *)(v27 - 4) - 1);
      if ( *(_BYTE *)(v26 + v27 + 8) != 1 )
        sub_A8ADA((__int64)"std::get: wrong index for variant");
      v39 = *a1;
      v28 = sub_3EC0E0(*a1);
      v36 = v28;
      if ( v28 )
      {
        *(_DWORD *)(v28 + 8) += 2;
        v46 = v28;
      }
      else
      {
        v46 = 0;
      }
      sub_3E6540(a1 + 54, &v46);
      v29 = *a1;
      v30 = a1[3];
      v52 = 0;
      v53 = v29;
      sub_3FA320(a1 + 55, v30, v20, &v52, 1);
      sub_135F9B0(a1[3], *(_QWORD *)(v36 + 16), v52);
      v31 = sub_15E1B70(*a1);
      v47 = (_DWORD *)v31;
      if ( v31 )
        ++*(_DWORD *)(v31 + 8);
      sub_3E6950((unsigned int **)a1 + 50, &v47);
      ++*(_DWORD *)(v36 + 8);
      sub_3E5D20(v20, v12);
      sub_3E5D20(v52, v53);
      v20 = v36;
      sub_3E5D00(v36, v39);
LABEL_43:
      if ( v38 != v20 )
      {
LABEL_44:
        sub_15B9070(v58, v38, v20, 0);
        v52 = v20;
        if ( v20 )
          ++*(_DWORD *)(v20 + 8);
LABEL_46:
        sub_3E6950(&v49, &v52);
      }
      sub_15D0A90(v34, v38, 1);
      sub_3E5D20(v20, v12);
    }
    v51 = v40;
    sub_2334C0(&v50);
    if ( v6 )
    {
LABEL_4:
      v7 = *(v6 - 1);
      if ( !v7 )
        break;
      continue;
    }
    break;
  }
  v9 = *a2;
  v44 = 0;
  sub_15B97F0(v58, v9, &v44, &v50);
  v10 = v44;
  if ( v44 )
  {
    ++*(_DWORD *)(v44 + 8);
    sub_3E5D00(*a2, a2[1]);
    *a2 = v10;
  }
  sub_2334C0(&v48);
  if ( v6 )
    sub_186B220(v6 - 2);
  v54[0] = &off_1C62200;
  if ( ptr )
    sub_186B220(ptr);
  if ( v55 )
    sub_186B220(v55);
  return sub_15BA200(v58);
}

