void __fastcall sub_10C9530(__int64 a1, __int64 a2)
{
  unsigned int v2; // r15d
  __int64 v3; // r12
  __int64 v4; // rax
  __int64 v5; // r14
  _DWORD *v6; // rbp
  __int64 v7; // rdx
  int v8; // r8d
  __int64 v9; // r14
  __int64 v10; // rbp
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  void **v13; // r12
  void **v14; // rbp
  bool v15; // zf
  __int64 v16; // r12
  int v17; // r14d
  __int64 v18; // rbp
  int v19; // r12d
  __int64 v20; // rbx
  __int64 v21; // rbp
  int v22; // [rsp+24h] [rbp-13Ch]
  int v23; // [rsp+24h] [rbp-13Ch]
  __int64 v24; // [rsp+30h] [rbp-130h]
  __int64 v25; // [rsp+50h] [rbp-110h] BYREF
  void *v26; // [rsp+58h] [rbp-108h] BYREF
  __int64 v27; // [rsp+60h] [rbp-100h]
  _BYTE v28[32]; // [rsp+68h] [rbp-F8h] BYREF
  void *v29; // [rsp+88h] [rbp-D8h] BYREF
  __int64 v30; // [rsp+90h] [rbp-D0h]
  _BYTE v31[24]; // [rsp+98h] [rbp-C8h] BYREF
  void *v32; // [rsp+B0h] [rbp-B0h]
  __int64 v33; // [rsp+B8h] [rbp-A8h]
  _BYTE v34[24]; // [rsp+C0h] [rbp-A0h] BYREF
  void *v35; // [rsp+D8h] [rbp-88h]
  __int64 v36; // [rsp+E0h] [rbp-80h]
  _BYTE v37[24]; // [rsp+E8h] [rbp-78h] BYREF
  void *ptr; // [rsp+100h] [rbp-60h]
  __int64 v39; // [rsp+108h] [rbp-58h]
  _BYTE v40[80]; // [rsp+110h] [rbp-50h] BYREF

  if ( *(_DWORD *)(a1 + 192) )
  {
    v2 = 0;
    v3 = *(_QWORD *)(a1 + 184);
    v24 = v3 + 40LL * *(unsigned int *)(a1 + 192);
    v26 = v28;
    v27 = 0x300000000LL;
    do
    {
      while ( 1 )
      {
        v4 = sub_10B8FF0(*(_QWORD *)(a1 + 48), 0x159u);
        v5 = *(_QWORD *)(a1 + 8);
        v22 = v4 == 0 ? 60 : 44;
        v6 = (_DWORD *)operator new(0x58u);
        sub_10AEB00((__int64)v6, v3, v22);
        v29 = v6;
        sub_10C7210(v5 + 88, (__int64 *)&v29);
        if ( v29 )
          (*(void (__fastcall **)(void *))(*(_QWORD *)v29 + 8LL))(v29);
        v7 = *(_QWORD *)(a1 + 72);
        v29 = v31;
        v8 = *(_DWORD *)(a1 + 64);
        v32 = v34;
        v30 = 0x300000000LL;
        v33 = 0x300000000LL;
        v36 = 0x300000000LL;
        v39 = 0x300000000LL;
        ptr = v40;
        v35 = v37;
        sub_10AE5F0((__int64)&v29, (__int64)v6, **(_QWORD **)(a1 + 16), *(_QWORD *)(v7 + 8LL * v2), v8);
        v9 = *(_QWORD *)(a1 + 8);
        v23 = v6[3];
        v10 = operator new(0x88u);
        sub_10AFA70(v10, (__int64)&v29, v23);
        v25 = v10;
        sub_10C7210(v9 + 88, &v25);
        if ( v25 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25);
        v11 = (unsigned int)v27;
        v12 = (unsigned int)v27 + 1LL;
        if ( v12 > HIDWORD(v27) )
        {
          sub_22134E0(&v26, v28, v12, 8);
          v11 = (unsigned int)v27;
        }
        ++v2;
        *((_QWORD *)v26 + v11) = v10;
        LODWORD(v27) = v27 + 1;
        if ( ptr != v40 )
          free(ptr);
        if ( v35 != v37 )
          free(v35);
        if ( v32 != v34 )
          free(v32);
        if ( v29 == v31 )
          break;
        free(v29);
        v3 += 40;
        if ( v24 == v3 )
          goto LABEL_17;
      }
      v3 += 40;
    }
    while ( v24 != v3 );
LABEL_17:
    v13 = *(void ***)(a1 + 184);
    v14 = &v13[5 * *(unsigned int *)(a1 + 192)];
    while ( v13 != v14 )
    {
      while ( 1 )
      {
        v14 -= 5;
        if ( *v14 == v14 + 2 )
          break;
        free(*v14);
        if ( v13 == v14 )
          goto LABEL_21;
      }
    }
LABEL_21:
    *(_DWORD *)(a1 + 192) = 0;
    if ( sub_10B8FF0(*(_QWORD *)(a1 + 48), 0x159u) )
    {
      sub_10BC1E0(a2, v26, (_BYTE *)v26 + 8 * (unsigned int)v27);
LABEL_34:
      if ( v26 != v28 )
        free(v26);
      return;
    }
    v15 = *(_BYTE *)(a1 + 69) == 0;
    v32 = v34;
    v29 = v31;
    v35 = v37;
    v30 = 0x300000000LL;
    v33 = 0x300000000LL;
    v36 = 0x300000000LL;
    ptr = v40;
    v39 = 0x300000000LL;
    if ( v15 )
    {
      v16 = *(_QWORD *)(a1 + 8);
      v17 = 58;
    }
    else
    {
      if ( *(_BYTE *)(a1 + 521) && !*(_BYTE *)(a1 + 520) )
      {
        sub_10BC1E0(a2, v26, (_BYTE *)v26 + 8 * (unsigned int)v27);
LABEL_30:
        sub_10B76C0((__int64)&v29);
        goto LABEL_34;
      }
      v16 = *(_QWORD *)(a1 + 8);
      v17 = 64;
    }
    v18 = operator new(0x58u);
    sub_10AEB00(v18, (__int64)&v26, v17);
    v25 = v18;
    sub_10C7210(v16 + 88, &v25);
    if ( v25 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25);
    sub_10AE5F0((__int64)&v29, v18, **(_QWORD **)(a1 + 16), 0, *(_DWORD *)(a1 + 64));
    v19 = *(_DWORD *)(v18 + 12);
    v20 = *(_QWORD *)(a1 + 8);
    v21 = operator new(0x88u);
    sub_10AFA70(v21, (__int64)&v29, v19);
    v25 = v21;
    sub_10C7210(v20 + 88, &v25);
    if ( v25 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25);
    sub_10B8770(a2, v21);
    goto LABEL_30;
  }
}

