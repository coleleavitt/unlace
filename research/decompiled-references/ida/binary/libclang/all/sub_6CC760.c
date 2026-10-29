__int64 __fastcall sub_6CC760(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // r13
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  _QWORD *v14; // r8
  _QWORD *v15; // r8
  __int64 v16; // rdx
  unsigned __int64 v17; // rax
  _QWORD *v18; // r8
  __int64 v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // [rsp+0h] [rbp-E8h]
  _QWORD *v22; // [rsp+0h] [rbp-E8h]
  __int64 v23; // [rsp+0h] [rbp-E8h]
  _QWORD *v24; // [rsp+8h] [rbp-E0h]
  __int64 v25; // [rsp+8h] [rbp-E0h]
  __int64 v26; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v27; // [rsp+18h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v29; // [rsp+30h] [rbp-B8h] BYREF
  int v30; // [rsp+38h] [rbp-B0h]
  __int64 v31; // [rsp+3Ch] [rbp-ACh]

  v3 = a1 + 115;
  v31 = a3;
  ptr[0] = &v29;
  v29 = a2;
  v30 = 0;
  ptr[1] = (void *)0x2000000005LL;
  v26 = 0;
  v5 = sub_25AC3A0(a1 + 115, ptr, &v26, off_47D0680);
  if ( v5 )
  {
    sub_B03920(&v27, v5);
    v6 = v27;
  }
  else
  {
    v8 = sub_6CB180((__int64)a1, a2);
    v9 = v8;
    if ( a2 == v8 )
    {
      v16 = a1[274];
      a1[284] += 32LL;
      v17 = (v16 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( a1[275] >= v17 + 32 && v16 )
      {
        a1[274] = v17 + 32;
        v18 = (_QWORD *)((v16 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      }
      else
      {
        v23 = v9;
        v20 = sub_6A76A0((__int64)(a1 + 274), 32, 3);
        v9 = v23;
        v18 = (_QWORD *)v20;
      }
      v18[2] = a3;
      *v18 = 0;
      v18[1] = v9 & 0xFFFFFFFFFFFFFFFBLL;
      v22 = v18;
      sub_B03920(v18 + 3, v18);
      v15 = v22;
    }
    else
    {
      v10 = sub_6CC760(a1, v8, a3, v8);
      v11 = a1[274];
      a1[284] += 32LL;
      v12 = v10;
      v13 = (v11 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( a1[275] >= v13 + 32 && v11 )
      {
        a1[274] = v13 + 32;
        v14 = (_QWORD *)((v11 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      }
      else
      {
        v25 = v12;
        v19 = sub_6A76A0((__int64)(a1 + 274), 32, 3);
        v12 = v25;
        v14 = (_QWORD *)v19;
      }
      v14[3] = v12;
      v14[1] = a2 & 0xFFFFFFFFFFFFFFFBLL;
      *v14 = 0;
      v14[2] = a3;
      v24 = v14;
      sub_25AC3A0(v3, ptr, &v26, off_47D0680);
      v15 = v24;
    }
    v21 = v15;
    sub_25AC200(v3, v15, v26, off_47D0680);
    sub_B03920(&v27, v21);
    v6 = v27;
  }
  if ( ptr[0] != &v29 )
    free(ptr[0]);
  return v6;
}

