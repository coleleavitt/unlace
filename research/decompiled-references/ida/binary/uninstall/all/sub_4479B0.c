__int64 __fastcall sub_4479B0(__int64 *a1)
{
  __int64 v2; // r15
  int *v3; // r12
  _QWORD *v4; // rbx
  _QWORD *v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // rsi
  int v8; // r14d
  int v9; // eax
  bool v10; // zf
  __int64 v11; // rdi
  int v12; // eax
  int *v13; // rdi
  int v14; // eax
  __int64 v15; // rdx
  __int64 v17; // rbx
  int *v18; // rdi
  int v19; // eax
  int *v20; // rdi
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rbp
  __int64 v24; // rax
  _DWORD *v25; // r12
  _DWORD *v26; // rax
  __int64 v27; // rbx
  void *v28; // rax
  int v29; // eax
  int v30; // eax
  __int64 v31; // [rsp+0h] [rbp-48h] BYREF
  int v32; // [rsp+Ch] [rbp-3Ch] BYREF
  void *src; // [rsp+10h] [rbp-38h] BYREF

  v2 = *a1;
  sub_487510(a1);
  sub_487510(v2);
  if ( a1[2] )
  {
    while ( 1 )
    {
      v3 = (int *)sub_470170(0, a1[1]);
      v4 = (_QWORD *)a1[2];
      sub_46FD90(0, v3, &v32, &src);
      v5 = (_QWORD *)sub_40FB00(8 * (v32 + 2));
      memcpy(v5, src, 8LL * v32);
      v6 = v32;
      v5[v32] = *v4;
      v5[v6 + 1] = v4[1];
      sub_40BEE0(v2);
      v7 = (unsigned int)(v32 + 2);
      v8 = sub_409D20(v2, v7, v5, 0x20000);
      v9 = *v3 - 1;
      v10 = *v3 == 1;
      *v3 = v9;
      if ( v9 < 0 || v10 )
        sub_47B120(v3);
      v11 = *v4;
      v12 = *(_DWORD *)*v4 - 1;
      v10 = *(_DWORD *)*v4 == 1;
      *(_DWORD *)*v4 = v12;
      if ( v12 < 0 || v10 )
        sub_47B120(v11);
      v13 = (int *)v4[1];
      v14 = *v13 - 1;
      v10 = *v13 == 1;
      *v13 = v14;
      if ( v14 < 0 || v10 )
        sub_47B120(v13);
      a1[2] = v4[2];
      Tcl_Free((__int64)v4);
      Tcl_Free((__int64)v5);
      if ( v8 == 3 )
        break;
      if ( v8 == 1 && !(unsigned int)sub_458F10(v2, v7, v15) )
      {
        v23 = sub_45D780(8);
        if ( v23 )
        {
          v24 = sub_48C5F0(v2, 1);
          v31 = 0;
          v25 = (_DWORD *)v24;
          v26 = (_DWORD *)sub_496740(v2, 1);
          *v26 = 0;
          v27 = (__int64)v26;
          v28 = (void *)sub_40FB00(11);
          *(_QWORD *)(v27 + 8) = v28;
          qmemcpy(v28, "-errorinfo", 10);
          *(_BYTE *)(*(_QWORD *)(v27 + 8) + 10LL) = 0;
          ++*(_DWORD *)v27;
          *(_DWORD *)(v27 + 16) = 10;
          *(_QWORD *)(v27 + 24) = 0;
          sub_4406D0(0, (__int64)v25, v27, &v31);
          v29 = *(_DWORD *)v27 - 1;
          v10 = *(_DWORD *)v27 == 1;
          *(_DWORD *)v27 = v29;
          if ( v29 < 0 || v10 )
            sub_47B120(v27);
          sub_464DA0(v23, "error in background error handler:\n", 0xFFFFFFFFLL);
          if ( !v31 )
            sub_48B5D0(v2);
          sub_464CF0(v23);
          sub_464DA0(v23, "\n", 1);
          sub_4653C0(v23);
          v30 = *v25 - 1;
          v10 = *v25 == 1;
          *v25 = v30;
          if ( v30 < 0 || v10 )
            sub_47B120(v25);
        }
      }
      if ( !a1[2] )
        goto LABEL_11;
    }
    while ( 1 )
    {
      v22 = a1[2];
      if ( !v22 )
        break;
      v17 = a1[2];
      v18 = *(int **)v22;
      a1[2] = *(_QWORD *)(v22 + 16);
      v19 = *v18 - 1;
      v10 = *v18 == 1;
      *v18 = v19;
      if ( v19 < 0 || v10 )
        sub_47B120(v18);
      v20 = *(int **)(v17 + 8);
      v21 = *v20 - 1;
      v10 = *v20 == 1;
      *v20 = v21;
      if ( v21 < 0 || v10 )
        sub_47B120(v20);
      Tcl_Free(v17);
    }
  }
LABEL_11:
  a1[3] = 0;
  sub_4875D0(v2);
  return sub_4875D0(a1);
}

