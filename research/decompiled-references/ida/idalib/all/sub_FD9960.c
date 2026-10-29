void __fastcall sub_FD9960(__int64 a1, __int64 a2, __int64 a3)
{
  char *v3; // r13
  size_t v4; // rbp
  __int64 v5; // rax
  size_t v6; // rdx
  unsigned int v7; // eax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 *v10; // r15
  __int64 v11; // r12
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r15
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  unsigned __int64 v18; // r12
  size_t v19; // rdx
  unsigned int v20; // eax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // [rsp-8h] [rbp-C0h]
  unsigned int v24; // [rsp+Ch] [rbp-ACh]
  int v25; // [rsp+Ch] [rbp-ACh]
  __int64 *v26; // [rsp+18h] [rbp-A0h] BYREF
  void *v27; // [rsp+20h] [rbp-98h] BYREF
  size_t v28; // [rsp+28h] [rbp-90h]
  _BYTE v29[32]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v30; // [rsp+50h] [rbp-68h]
  int v31; // [rsp+68h] [rbp-50h]
  char v32; // [rsp+70h] [rbp-48h]

  v3 = ".";
  v4 = 1;
  v5 = sub_228A4B0(a2, a3, 0);
  if ( v6 )
  {
    v3 = (char *)v5;
    v4 = v6;
  }
  v27 = v3;
  v28 = v4;
  v7 = sub_2244B30(v3, v4);
  v8 = (unsigned int)sub_2244CB0(a1 + 400, v3, v4, v7);
  v10 = (__int64 *)(*(_QWORD *)(a1 + 400) + 8 * v8);
  if ( !*v10 )
  {
LABEL_14:
    v17 = *(_QWORD *)(a1 + 424);
    *(_QWORD *)(a1 + 504) += v4 + 33;
    v18 = (v17 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    v19 = v4 + 33 + v18;
    if ( *(_QWORD *)(a1 + 432) >= v19 && v17 )
    {
      *(_QWORD *)(a1 + 424) = v19;
    }
    else
    {
      v25 = v8;
      v22 = sub_986170(a1 + 424, v4 + 33, v4 + 33, 3, v8, v9);
      LODWORD(v8) = v25;
      v18 = v22;
    }
    v24 = v8;
    memcpy((void *)(v18 + 32), v3, v4);
    *(_BYTE *)(v18 + v4 + 32) = 0;
    *(_BYTE *)(v18 + 24) |= 1u;
    *(_QWORD *)v18 = v4;
    *(_DWORD *)(v18 + 8) = 2;
    *(_QWORD *)(v18 + 16) = std::_V2::generic_category((std::_V2 *)(v18 + 32));
    *v10 = v18;
    ++*(_DWORD *)(a1 + 412);
    v20 = sub_22450D0(a1 + 400, v24);
    sub_FD8BA0(&v26, (__int64 *)(*(_QWORD *)(a1 + 400) + 8LL * v20), 0);
    v11 = *v26;
    if ( (*(_BYTE *)(*v26 + 24) & 1) == 0 )
      return;
    goto LABEL_6;
  }
  if ( *v10 == -8 )
  {
    --*(_DWORD *)(a1 + 416);
    goto LABEL_14;
  }
  sub_FD8BA0(&v26, v10, 0);
  v11 = *v26;
  if ( (*(_BYTE *)(*v26 + 24) & 1) == 0 )
    return;
LABEL_6:
  v29[0] = 0;
  v32 = 0;
  v27 = v29;
  v28 = 0;
  v30 = 0;
  v31 = 0;
  if ( (unsigned int)sub_FD7F10((_QWORD *)a1, v3, v4, (__int64)&v27, 0, 0) )
  {
    v14 = *(_QWORD *)(a1 + 144);
    ++*(_QWORD *)(a1 + 224);
    if ( *(_QWORD *)(a1 + 152) >= (unsigned __int64)(v14 + 1) && v14 )
      *(_QWORD *)(a1 + 144) = v14 + 1;
    else
      v14 = sub_986170(a1 + 144, 1, 1, 0, v12, v13);
    *(_BYTE *)(v11 + 24) &= ~1u;
    v15 = *(unsigned int *)(a1 + 296);
    v16 = *(unsigned int *)(a1 + 300);
    *(_QWORD *)(v11 + 8) = v14;
    if ( v15 + 1 > v16 )
    {
      sub_2237220(a1 + 288, a1 + 304, v15 + 1, 8);
      v15 = *(unsigned int *)(a1 + 296);
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 288) + 8 * v15) = v14;
    ++*(_DWORD *)(a1 + 296);
  }
  else
  {
    v21 = *sub_FD8C20(a1, (__int64)&v27, 1, v23, v12, v13);
    *(_BYTE *)(v11 + 24) &= ~1u;
    *(_QWORD *)(v11 + 8) = v21;
  }
  sub_FD9960(a1, v3, v4);
  if ( v27 != v29 )
    operator delete(v27);
}
