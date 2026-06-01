_QWORD *__fastcall Z3_model_translate(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // r13
  _QWORD *v5; // rbx
  void *v6; // r15
  void *v7; // rax
  _OWORD *v8; // rax
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rax
  __int64 v14; // r14
  _DWORD *v15; // rdi
  void (**v18)(void); // rax
  int v19; // [rsp+0h] [rbp-A8h]
  void *v20; // [rsp+8h] [rbp-A0h] BYREF
  _OWORD v21[2]; // [rsp+10h] [rbp-98h] BYREF
  __int64 v22; // [rsp+30h] [rbp-78h]
  void *ptr; // [rsp+38h] [rbp-70h]
  __int64 v24; // [rsp+40h] [rbp-68h]
  int v25; // [rsp+48h] [rbp-60h]
  __int128 v26; // [rsp+50h] [rbp-58h]
  int v27; // [rsp+60h] [rbp-48h]

  v4 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v4 )
    sub_29B740();
  *(_DWORD *)(a1 + 1520) = 0;
  v5 = (_QWORD *)sub_186B270(0x20u);
  sub_2518F0((__int64)v5, a3);
  v6 = *(void **)(a1 + 232);
  v5[3] = 0;
  *v5 = &off_1C4CBA8;
  v7 = *(void **)(a3 + 232);
  v22 = 0;
  v20 = v7;
  v21[0] = _mm_loadh_ps((const double *)&v20);
  v21[1] = 0;
  v8 = (_OWORD *)sub_186B270(0x80u);
  ptr = v8;
  *v8 = 0;
  v8[1] = 0;
  v8[2] = 0;
  v8[3] = 0;
  v8[4] = 0;
  v8[5] = 0;
  v8[6] = 0;
  v8[7] = 0;
  v24 = 8;
  v25 = 0;
  v27 = 0;
  v26 = 0;
  if ( v20 != v6 )
  {
    sub_15DA640(DWORD2(v21[0]), v21[0], v9, v10, v11, v12, v19);
    sub_15D2280(*((_QWORD *)&v21[0] + 1), *(_QWORD *)&v21[0]);
  }
  v13 = sub_1377690(*(_QWORD *)(a2 + 24), v21);
  v14 = v13;
  if ( v13 )
    ++*(_DWORD *)(v13 + 16);
  v15 = (_DWORD *)v5[3];
  if ( v15 )
  {
    if ( v15[4]-- == 1 )
    {
      v18 = *(void (***)(void))v15;
      v20 = v15;
      (*v18)();
      sub_186B220(v20);
    }
  }
  v5[3] = v14;
  sub_24FBE0(a3, (__int64)v5);
  if ( v4 )
  {
    sub_2BB620(v5);
    sub_15CE760(v21);
    byte_1C7EBA0 = 1;
  }
  else
  {
    sub_15CE760(v21);
  }
  return v5;
}

