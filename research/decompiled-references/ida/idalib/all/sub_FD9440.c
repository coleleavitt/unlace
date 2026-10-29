__int64 __fastcall sub_FD9440(__int64 a1, __int64 a2, char *a3, unsigned __int64 a4, char a5)
{
  size_t v7; // rbx
  unsigned int v8; // eax
  std::_V2 *v9; // rdi
  __int64 v10; // r9
  __int64 v11; // r15
  __int64 *v12; // r8
  _QWORD *v13; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // r13
  size_t v17; // rdx
  _BYTE *v18; // rcx
  unsigned int v19; // eax
  unsigned __int64 **v20; // rax
  unsigned __int64 *v21; // r15
  unsigned __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 *v27; // rax
  _BYTE *v28; // rax
  const void *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  unsigned int v33; // eax
  int v34; // eax
  __int64 *v35; // rbx
  __int64 v36; // r9
  unsigned int v37; // r8d
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // [rsp-8h] [rbp-D0h]
  __int64 v42; // [rsp+0h] [rbp-C8h]
  _QWORD *v43; // [rsp+8h] [rbp-C0h]
  __int64 *v44; // [rsp+8h] [rbp-C0h]
  __int64 *v45; // [rsp+8h] [rbp-C0h]
  unsigned int v47; // [rsp+14h] [rbp-B4h]
  unsigned int v48; // [rsp+14h] [rbp-B4h]
  __int64 v49; // [rsp+18h] [rbp-B0h]
  __int64 v50; // [rsp+18h] [rbp-B0h]
  __int64 *v51; // [rsp+28h] [rbp-A0h] BYREF
  void *v52; // [rsp+30h] [rbp-98h] BYREF
  size_t v53; // [rsp+38h] [rbp-90h]
  _BYTE v54[32]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v55; // [rsp+60h] [rbp-68h]
  int v56; // [rsp+78h] [rbp-50h]
  char v57; // [rsp+80h] [rbp-48h]

  v7 = a4;
  if ( a4 > 1 )
  {
    v30 = (const void *)sub_2289830(a3, a4, 0);
    if ( v7 != v31 || memcmp(a3, v30, v7) )
    {
      v7 = a4 - 1;
      if ( !(unsigned __int8)sub_228ACA0((unsigned int)a3[a4 - 1], 0) )
        v7 = a4;
    }
  }
  ++*(_DWORD *)(a2 + 780);
  v42 = a2 + 400;
  v52 = a3;
  v53 = v7;
  v8 = sub_2244B30(a3, v7);
  v9 = (std::_V2 *)(a2 + 400);
  v11 = (unsigned int)sub_2244CB0(a2 + 400, a3, v7, v8);
  v12 = (__int64 *)(*(_QWORD *)(a2 + 400) + 8 * v11);
  if ( *v12 )
  {
    if ( *v12 != -8 )
    {
      sub_FD8BA0(&v51, v12, 0);
      v13 = (_QWORD *)*v51;
      if ( (*(_BYTE *)(*v51 + 24) & 1) != 0 )
      {
        sub_2220500(&v52, *((unsigned int *)v13 + 2), v13[2]);
        v13 = v52;
        *(_BYTE *)(a1 + 8) |= 1u;
      }
      else
      {
        *(_BYTE *)(a1 + 8) &= ~1u;
      }
      *(_QWORD *)a1 = v13;
      return a1;
    }
    --*(_DWORD *)(a2 + 416);
  }
  v15 = *(_QWORD *)(a2 + 424);
  *(_QWORD *)(a2 + 504) += v7 + 33;
  v16 = (v15 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  v17 = v7 + 33 + v16;
  if ( *(_QWORD *)(a2 + 432) >= v17 && v15 )
  {
    *(_QWORD *)(a2 + 424) = v17;
  }
  else
  {
    v9 = (std::_V2 *)(a2 + 424);
    v45 = v12;
    v40 = sub_986170(a2 + 424, v7 + 33, v7 + 33, 3, (__int64)v12, v10);
    v12 = v45;
    v16 = v40;
  }
  v18 = (_BYTE *)(v16 + 32);
  if ( v7 )
  {
    v9 = (std::_V2 *)(v16 + 32);
    v44 = v12;
    v28 = memcpy((void *)(v16 + 32), a3, v7);
    v12 = v44;
    v18 = v28;
  }
  v18[v7] = 0;
  *(_BYTE *)(v16 + 24) |= 1u;
  *(_QWORD *)v16 = v7;
  *(_DWORD *)(v16 + 8) = 2;
  v43 = v12;
  *(_QWORD *)(v16 + 16) = std::_V2::generic_category(v9);
  *v43 = v16;
  ++*(_DWORD *)(a2 + 412);
  v19 = sub_22450D0(v42, (unsigned int)v11);
  sub_FD8BA0(&v51, (__int64 *)(*(_QWORD *)(a2 + 400) + 8LL * v19), 0);
  v20 = (unsigned __int64 **)v51;
  ++*(_DWORD *)(a2 + 788);
  v21 = *v20;
  v22 = **v20;
  v52 = v54;
  v53 = 0;
  v54[0] = 0;
  v55 = 0;
  v56 = 0;
  v57 = 0;
  v25 = (unsigned int)sub_FD7F10((_QWORD *)a2, v21 + 4, v22, (__int64)&v52, 0, 0);
  v26 = v23;
  if ( (_DWORD)v25 )
  {
    if ( a5 )
    {
      *((_BYTE *)v21 + 24) |= 1u;
      *((_DWORD *)v21 + 2) = v25;
      v21[2] = v23;
    }
    else
    {
      v49 = v23;
      v47 = v25;
      v33 = sub_2244B30(a3, v7);
      v34 = sub_2244E60(v42, a3, v7, v33);
      if ( v34 == -1 )
      {
        sub_FD8BA0(&v51, (__int64 *)(*(_QWORD *)(a2 + 400) + 8LL * *(unsigned int *)(a2 + 408)), 1);
        v35 = v51;
        v37 = v47;
        v36 = v49;
      }
      else
      {
        sub_FD8BA0(&v51, (__int64 *)(*(_QWORD *)(a2 + 400) + 8LL * v34), 1);
        v35 = v51;
        v36 = v49;
        v37 = v47;
      }
      v50 = v36;
      v48 = v37;
      sub_FD8BA0(&v51, (__int64 *)(*(_QWORD *)(a2 + 400) + 8LL * *(unsigned int *)(a2 + 408)), 1);
      LODWORD(v25) = v48;
      v26 = v50;
      if ( v35 != v51 )
      {
        sub_2244F90(v42, *v35, v38, v39, v48, v50);
        v26 = v50;
        LODWORD(v25) = v48;
      }
    }
    sub_2220500(&v51, (unsigned int)v25, v26);
    v27 = v51;
    *(_BYTE *)(a1 + 8) |= 1u;
    *(_QWORD *)a1 = v27;
  }
  else
  {
    v32 = *sub_FD8C20(a2, (__int64)&v52, v41, v24, v25, v23);
    *((_BYTE *)v21 + 24) &= ~1u;
    v21[1] = v32;
    *(_BYTE *)(a1 + 8) &= ~1u;
    *(_QWORD *)a1 = v21;
  }
  if ( v52 != v54 )
    operator delete(v52);
  return a1;
}
