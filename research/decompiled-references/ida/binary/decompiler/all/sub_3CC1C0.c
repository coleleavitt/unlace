_QWORD *__fastcall sub_3CC1C0(_QWORD *a1, int a2, int a3, int a4)
{
  int v4; // r15d
  _QWORD *v5; // rbx
  unsigned int v6; // eax
  char *v7; // rax
  int v8; // edx
  _QWORD **v9; // rax
  _QWORD *v10; // rbp
  __int64 v11; // rdi
  volatile signed __int32 *v12; // rdi
  bool v13; // zf
  const char *v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v20; // [rsp+0h] [rbp-C8h]
  __int64 v21; // [rsp+0h] [rbp-C8h]
  __int64 v22; // [rsp+0h] [rbp-C8h]
  __int64 v23; // [rsp+0h] [rbp-C8h]
  __int64 v24; // [rsp+0h] [rbp-C8h]
  __int64 v25; // [rsp+0h] [rbp-C8h]
  __int64 v26; // [rsp+0h] [rbp-C8h]
  __int64 v27; // [rsp+0h] [rbp-C8h]
  __int64 v28; // [rsp+0h] [rbp-C8h]
  __int64 v29; // [rsp+0h] [rbp-C8h]
  __int64 v30; // [rsp+0h] [rbp-C8h]
  __int64 v31; // [rsp+0h] [rbp-C8h]
  __int64 v32; // [rsp+8h] [rbp-C0h]
  __int64 v33; // [rsp+8h] [rbp-C0h]
  __int64 v34; // [rsp+8h] [rbp-C0h]
  __int64 v35; // [rsp+8h] [rbp-C0h]
  __int64 v36; // [rsp+8h] [rbp-C0h]
  __int64 v37; // [rsp+8h] [rbp-C0h]
  __int64 v38; // [rsp+8h] [rbp-C0h]
  __int64 v39; // [rsp+8h] [rbp-C0h]
  __int64 v40; // [rsp+8h] [rbp-C0h]
  __int64 v41; // [rsp+8h] [rbp-C0h]
  __int64 v42; // [rsp+8h] [rbp-C0h]
  __int64 v43; // [rsp+8h] [rbp-C0h]
  __int128 v45; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v46; // [rsp+20h] [rbp-A8h]
  __int64 v47; // [rsp+28h] [rbp-A0h]
  int v48; // [rsp+30h] [rbp-98h]
  _QWORD v49[5]; // [rsp+40h] [rbp-88h] BYREF
  __int128 v50; // [rsp+68h] [rbp-60h]
  __int128 v51; // [rsp+78h] [rbp-50h]
  unsigned __int64 v52; // [rsp+88h] [rbp-40h]

  v4 = a4;
  v52 = __readfsqword(0x28u);
  if ( !a4 )
    v4 = dword_4ED70C++;
  netnode_check();
  v49[0] = (unsigned int)dword_4ED70C;
  netnode_supset();
  v5 = (_QWORD *)operator new(0x60u);
  v6 = sub_3C9140(a1, a3);
  sub_3CB3A0((__int64)v5, (__int64)a1, v6, v4);
  v7 = (char *)&unk_4328C0;
  while ( 1 )
  {
    v8 = *(_DWORD *)v7;
    if ( *(_DWORD *)v7 >= a2 )
      break;
    v7 += 4;
    if ( "$ mbui.view_id" == v7 )
    {
      v8 = 1;
      break;
    }
  }
  *((_DWORD *)v5 + 14) = v8;
  v9 = (_QWORD **)(a1[109] + 8LL * *((unsigned int *)v5 + 2));
  v10 = *v9;
  *v9 = v5;
  if ( v10 )
  {
    v11 = v10[10];
    *v10 = 0;
    v10[11] = 0;
    if ( v11 )
      qfree();
    v12 = (volatile signed __int32 *)v10[9];
    if ( v12 )
      sub_3CB2E0(v12);
    if ( v10[2] )
    {
      v10[3] = 0;
      qfree();
    }
    operator delete(v10, 0x60u);
  }
  v13 = v5[3] == 0;
  *(_QWORD *)((char *)&v49[1] + 4) = 3;
  v49[0] = off_4E8410;
  v14 = s1;
  *(_QWORD *)((char *)&v49[3] + 4) = 0x4900000000LL;
  v50 = -1;
  v51 = -1;
  *(_QWORD *)((char *)&v49[2] + 4) = 0;
  v46 = 0;
  v47 = 0xFFFFFFFFLL;
  v48 = 1;
  v45 = 0;
  if ( !v13 )
    v14 = (const char *)v5[2];
  v15 = callui(148, v14, v49, v49, v49, &v45, v5, &unk_4E8720, v5, 0);
  *v5 = v15;
  ((void (__fastcall *)(__int64, __int64, __int64, __int64, __int64, __int64))callui)(77, v15, 7, v16, v17, v18);
  callui(131, *v5, 0, "mv:LowerMicro", 0, 0, v20, v32, v45, *((_QWORD *)&v45 + 1));
  callui(131, *v5, 0, "mv:RaiseMicro", 0, 0, v21, v33, v45, *((_QWORD *)&v45 + 1));
  callui(131, *v5, 0, "mv:JmpXref", 0, 0, v22, v34, v45, *((_QWORD *)&v45 + 1));
  callui(131, *v5, 0, 0, 0, 0, v23, v35, v45, *((_QWORD *)&v45 + 1));
  callui(131, *v5, 0, "mv:EditBlockCmt", 0, 0, v24, v36, v45, *((_QWORD *)&v45 + 1));
  callui(131, *v5, 0, "mv:EditCmt", 0, 0, v25, v37, v45, *((_QWORD *)&v45 + 1));
  callui(131, *v5, 0, 0, 0, 0, v26, v38, v45, *((_QWORD *)&v45 + 1));
  callui(131, *v5, 0, "mv:InsertInsn", 0, 0, v27, v39, v45, *((_QWORD *)&v45 + 1));
  callui(131, *v5, 0, "mv:DeleteInsn", 0, 0, v28, v40, v45, *((_QWORD *)&v45 + 1));
  callui(131, *v5, 0, 0, 0, 0, v29, v41, v45, *((_QWORD *)&v45 + 1));
  callui(131, *v5, 0, "mv:Refresh", 0, 0, v30, v42, v45, *((_QWORD *)&v45 + 1));
  callui(131, *v5, 0, "MoveFunctionToFolder", 0, 0, v31, v43, v45, *((_QWORD *)&v45 + 1));
  return v5;
}
