__int64 __fastcall sub_40B720(__int64 a1, __int64 a2, int a3, _QWORD *a4, unsigned int a5)
{
  int v10; // r12d
  unsigned int v11; // r14d
  int v12; // eax
  bool v13; // zf
  __int64 v15; // rax
  _QWORD *v16; // r12
  const char *v17; // rax
  __int64 v18; // rdx
  unsigned int v19; // eax
  __int64 v20; // rdi
  int v21; // eax
  __int64 v22; // rax
  __int64 *v23; // rdi
  int *v24; // r12
  _DWORD *v25; // rax
  __int64 v26; // rdx
  _DWORD *v27; // rbx
  int v28; // eax
  __int64 v29; // rax
  _QWORD *v30; // rdx
  unsigned int v31; // esi
  int v32; // eax
  int *v33; // rdi
  int v34; // eax
  int v35; // esi
  __int64 v36; // rax
  const char *v37; // rax
  int *v38; // rdi
  int v39; // eax
  int v40; // [rsp+14h] [rbp-54h]
  __int64 v41; // [rsp+18h] [rbp-50h]
  __int64 v42; // [rsp+20h] [rbp-48h]
  unsigned int v43; // [rsp+28h] [rbp-40h] BYREF
  unsigned int v44; // [rsp+2Ch] [rbp-3Ch] BYREF
  _QWORD *v45; // [rsp+30h] [rbp-38h] BYREF

  ++*(_DWORD *)a2;
  if ( *(_UNKNOWN ***)(a2 + 24) == &off_655E20 && (!*(_QWORD *)(a2 + 8) || *(_DWORD *)(*(_QWORD *)(a2 + 32) + 12LL)) )
  {
    v24 = (int *)sub_470170(0, a2);
    v25 = (_DWORD *)sub_4495F0(a1, 72);
    v26 = *(_QWORD *)(a1 + 952);
    v27 = v25;
    *v25 = 1;
    v28 = 1;
    if ( v26 )
      v28 = *(_DWORD *)(v26 + 4) + 1;
    v27[1] = v28;
    v27[4] = 0;
    v29 = *(_QWORD *)(a1 + 160);
    *((_QWORD *)v27 + 7) = a2;
    ++*(_DWORD *)a2;
    *((_QWORD *)v27 + 4) = v26;
    *((_QWORD *)v27 + 1) = 0;
    *((_QWORD *)v27 + 5) = 0;
    *((_QWORD *)v27 + 3) = v29;
    sub_46FD90(0, v24, &v44, &v45);
    v30 = v45;
    v31 = v44;
    *(_QWORD *)(a1 + 952) = v27;
    v11 = sub_409D20(a1, v31, v30, a3);
    v32 = *v24 - 1;
    v13 = *v24 == 1;
    *v24 = v32;
    if ( v32 < 0 || v13 )
      sub_47B120(v24);
    *(_QWORD *)(a1 + 952) = *(_QWORD *)(*(_QWORD *)(a1 + 952) + 32LL);
    v33 = *((int **)v27 + 7);
    v34 = *v33 - 1;
    v13 = *v33 == 1;
    *v33 = v34;
    if ( v34 < 0 || v13 )
      sub_47B120(v33);
    sub_449510(a1, v27);
    goto LABEL_11;
  }
  if ( (a3 & 0x40000) == 0 )
  {
    v10 = *(_DWORD *)(a1 + 324) & 4;
    v42 = *(_QWORD *)(a1 + 168);
    if ( (a3 & 0x20000) != 0 )
      *(_QWORD *)(a1 + 168) = *(_QWORD *)(a1 + 192);
    v11 = sub_452B40(a1, a2, a4, a5);
    if ( !*(_DWORD *)(a1 + 152) )
    {
      if ( v11 == 2 )
        v11 = sub_488CA0(a1);
      if ( v10 == 0 && v11 > 1 )
      {
        v35 = v11;
        v11 = 1;
        sub_409C80(a1, v35);
        v36 = sub_47ACD0(a2, &v43);
        sub_479E00(a1, v36, v36, v43);
      }
    }
    *(_DWORD *)(a1 + 324) = 0;
    *(_QWORD *)(a1 + 168) = v42;
LABEL_11:
    v12 = *(_DWORD *)a2 - 1;
    v13 = *(_DWORD *)a2 == 1;
    *(_DWORD *)a2 = v12;
    if ( v12 >= 0 && !v13 )
      return v11;
    goto LABEL_28;
  }
  v41 = *(_QWORD *)(a1 + 1008);
  v15 = sub_47AE70(a2);
  if ( v15 )
  {
    *(_QWORD *)(a1 + 1008) = v15;
    sub_487510(v15);
  }
  else
  {
    *(_QWORD *)(a1 + 1008) = 0;
  }
  if ( a4 )
  {
    v40 = 0;
    v16 = (_QWORD *)sub_4495F0(a1, 72);
    *v16 = *a4;
    v16[1] = a4[1];
    v16[2] = a4[2];
    v16[3] = a4[3];
    v16[4] = a4[4];
    v16[5] = a4[5];
    v16[6] = a4[6];
    v16[7] = a4[7];
    v16[8] = a4[8];
    if ( *(_DWORD *)a4 == 2 )
    {
      sub_449C70(v16);
      v40 = 1;
    }
    v17 = (const char *)sub_47ACD0(a2, &v43);
    if ( *((_DWORD *)v16 + 4) > (signed int)a5
      && (v18 = v16[1], *(int *)(v18 + 4LL * (int)a5) >= 0)
      && *(_DWORD *)v16 == 4 )
    {
      *(_DWORD *)(a1 + 324) |= 8u;
      *(_QWORD *)(a1 + 960) = v16;
      v19 = sub_40AC30(a1, v17, v43, a3, *(_DWORD *)(v18 + 4LL * (int)a5), nullptr, (__int64)v17);
    }
    else
    {
      v19 = sub_40B700(a1, v17, v43, a3);
    }
    v11 = v19;
    if ( v40 )
    {
      if ( *(_DWORD *)v16 == 4 )
      {
        v38 = (int *)v16[5];
        v39 = *v38 - 1;
        v13 = *v38 == 1;
        *v38 = v39;
        if ( v39 < 0 || v13 )
          sub_47B120(v38);
      }
    }
    sub_449510(a1, v16);
  }
  else
  {
    v37 = (const char *)sub_47ACD0(a2, &v43);
    v11 = sub_40B700(a1, v37, v43, a3);
  }
  v20 = *(_QWORD *)(a1 + 1008);
  if ( v20 )
    sub_4875D0(v20);
  *(_QWORD *)(a1 + 1008) = v41;
  v21 = *(_DWORD *)a2 - 1;
  v13 = *(_DWORD *)a2 == 1;
  *(_DWORD *)a2 = v21;
  if ( v21 < 0 || v13 )
  {
LABEL_28:
    v22 = *(_QWORD *)(a2 + 24);
    if ( v22 && *(_QWORD *)(v22 + 8) )
    {
      sub_47B120(a2);
    }
    else
    {
      v23 = *(__int64 **)(a2 + 8);
      if ( v23 && v23 != off_656088 )
        Tcl_Free(v23);
      *(_DWORD *)(a2 + 16) = -1;
      sub_496830(a2);
    }
  }
  return v11;
}

