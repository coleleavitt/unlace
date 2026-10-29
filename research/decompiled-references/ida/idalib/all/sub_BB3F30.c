void __fastcall sub_BB3F30(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rcx
  unsigned __int64 v6; // r8
  __int64 v7; // r9
  __int64 *v8; // r12
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // edx
  size_t v13; // rcx
  __int64 v14; // rbp
  __int64 v15; // rbx
  _BYTE *v16; // rbx
  _BYTE *v17; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  size_t v20; // rcx
  __int64 v21; // rax
  _BYTE *v22; // rdx
  __int64 v23; // rdi
  _BYTE *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  int v29; // r9d
  int v30; // r10d
  __int64 v31; // rdi
  _BYTE *v32; // rax
  __int64 v33; // rax
  unsigned __int64 v34; // [rsp+0h] [rbp-98h]
  __int64 v35; // [rsp+0h] [rbp-98h]
  __int64 v36; // [rsp+0h] [rbp-98h]
  unsigned __int64 v37; // [rsp+0h] [rbp-98h]
  size_t v38; // [rsp+8h] [rbp-90h]
  size_t v39; // [rsp+8h] [rbp-90h]
  __int64 *v40; // [rsp+10h] [rbp-88h]
  void *v41; // [rsp+20h] [rbp-78h] BYREF
  size_t v42; // [rsp+28h] [rbp-70h]
  __int64 v43; // [rsp+30h] [rbp-68h] BYREF
  void *v44[2]; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v45[72]; // [rsp+50h] [rbp-48h] BYREF

  v3 = *a1;
  if ( (*(_BYTE *)(a2 + 58) & 2) != 0 )
  {
    sub_995540(v3, "- ");
    v4 = *(_QWORD *)(a2 + 80);
    if ( (v4 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      goto LABEL_3;
  }
  else
  {
    sub_995540(v3, "+ ");
    v4 = *(_QWORD *)(a2 + 80);
    if ( (v4 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      goto LABEL_3;
  }
  v33 = sub_B8C330(a2);
  sub_BB3D10(a1, v33, (*(_QWORD *)(a2 + 56) >> 26) & 0x7F, v4);
LABEL_3:
  v44[0] = *(void **)(a2 + 40);
  sub_FDEB80(&v41, v44);
  v8 = *(__int64 **)(a2 + 96);
  v9 = *(unsigned int *)(a2 + 104);
  v40 = &v8[v9];
  if ( &v8[v9] != v8 )
  {
    v6 = 0;
    do
    {
      v13 = v42;
      v14 = *v8;
      v15 = -1;
      if ( v42 > v6 )
      {
        v16 = v41;
        v38 = v42;
        v34 = v6;
        v17 = memchr((char *)v41 + v6, 58, v42 - v6);
        v6 = v34;
        v13 = v38;
        if ( v17 )
          v15 = v17 - v16;
        else
          v15 = -1;
      }
      v18 = *a1;
      v19 = v15 - v6;
      if ( v6 )
      {
        v39 = v6;
        v37 = v15 - v6;
        sub_995540(*a1, " ");
        v13 = v42;
        v6 = v39;
        v18 = *a1;
        v19 = v37;
        if ( v42 < v39 )
          std::__throw_out_of_range_fmt(
            "%s: __pos (which is %zu) > this->size() (which is %zu)",
            "basic_string::substr",
            v39,
            v42);
      }
      v20 = v13 - v6;
      v35 = v18;
      v44[0] = v45;
      if ( v20 > v19 )
        v20 = v19;
      sub_BB28B0(v44, (_BYTE *)v41 + v6, (__int64)v41 + v6 + v20);
      v21 = sub_227BF10(v35, v44[0], v44[1]);
      v22 = *(_BYTE **)(v21 + 32);
      if ( (unsigned __int64)v22 >= *(_QWORD *)(v21 + 24) )
      {
        sub_227BA10(v21, 58);
      }
      else
      {
        *(_QWORD *)(v21 + 32) = v22 + 1;
        *v22 = 58;
      }
      if ( v44[0] != v45 )
        operator delete(v44[0]);
      v36 = *(_QWORD *)(v14 + 48);
      if ( (*(_BYTE *)(v14 + 97) & 0x10) != 0 )
      {
        v10 = sub_B8C330(a2);
        v11 = v36;
        v12 = (*(_DWORD *)(v14 + 96) >> 13) & 0x7F;
      }
      else
      {
        v10 = sub_B8C330(a2);
        v11 = v36;
        LOBYTE(v12) = 0;
      }
      ++v8;
      sub_BB3D10(a1, v10, v12, v11);
      sub_B72CF0(v14, *a1);
      v6 = v15 + 1;
    }
    while ( v40 != v8 );
    v9 = *(unsigned int *)(a2 + 104);
  }
  if ( !(v9 * 8) )
    sub_227BF10(*a1, v41, v42);
  if ( (*(_BYTE *)(a2 + 58) & 4) != 0 )
    sub_995540(*a1, ", ...");
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
    sub_BB26A0((const char **)a1, a2, 0, v5, v6, v7);
  if ( (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL))(a2) && *((char *)a1 + 11) >= 0 )
  {
    v23 = *a1;
    v24 = *(_BYTE **)(*a1 + 32);
    if ( (unsigned __int64)v24 >= *(_QWORD *)(*a1 + 24) )
    {
      sub_227BA10(v23, 32);
    }
    else
    {
      *(_QWORD *)(v23 + 32) = v24 + 1;
      *v24 = 32;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL))(a2);
    v28 = sub_BB28A0(a2, "\n", v25, v26, v27, a1[3]);
    sub_F07C00(v30, *a1, 0, (_DWORD)a1 + 8, *((_DWORD *)a1 + 8), v29, (__int64)"\n", v28);
  }
  else if ( (*((_BYTE *)a1 + 12) & 1) != 0 )
  {
    v31 = *a1;
    v32 = *(_BYTE **)(*a1 + 32);
    if ( (unsigned __int64)v32 >= *(_QWORD *)(*a1 + 24) )
    {
      sub_227BA10(v31, 59);
    }
    else
    {
      *(_QWORD *)(v31 + 32) = v32 + 1;
      *v32 = 59;
    }
  }
  if ( v41 != &v43 )
    operator delete(v41);
}
