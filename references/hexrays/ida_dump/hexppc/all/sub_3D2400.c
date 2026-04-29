__int64 *__fastcall sub_3D2400(_QWORD *a1, int a2, int a3, int a4)
{
  int v4; // r15d
  __int64 *v5; // rbx
  int v6; // eax
  char *v7; // rax
  int v8; // edx
  __int64 **v9; // rax
  __int64 *v10; // rbp
  __int64 v11; // rdi
  volatile signed __int32 *v12; // rdi
  __int64 v13; // rdi
  bool v14; // zf
  const char *v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
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
  __int64 v32; // [rsp+0h] [rbp-C8h]
  __int64 v33; // [rsp+0h] [rbp-C8h]
  __int64 v34; // [rsp+0h] [rbp-C8h]
  __int64 v35; // [rsp+0h] [rbp-C8h]
  __int64 v36; // [rsp+0h] [rbp-C8h]
  __int64 v37; // [rsp+0h] [rbp-C8h]
  __int64 v38; // [rsp+0h] [rbp-C8h]
  __int64 v39; // [rsp+0h] [rbp-C8h]
  __int64 v40; // [rsp+0h] [rbp-C8h]
  __int64 v41; // [rsp+0h] [rbp-C8h]
  __int64 v42; // [rsp+0h] [rbp-C8h]
  __int64 v43; // [rsp+0h] [rbp-C8h]
  __int64 v44; // [rsp+0h] [rbp-C8h]
  __int64 v45; // [rsp+0h] [rbp-C8h]
  __int64 v46; // [rsp+8h] [rbp-C0h]
  __int64 v47; // [rsp+8h] [rbp-C0h]
  __int64 v48; // [rsp+8h] [rbp-C0h]
  __int64 v49; // [rsp+8h] [rbp-C0h]
  __int64 v50; // [rsp+8h] [rbp-C0h]
  __int64 v51; // [rsp+8h] [rbp-C0h]
  __int64 v52; // [rsp+8h] [rbp-C0h]
  __int64 v53; // [rsp+8h] [rbp-C0h]
  __int64 v54; // [rsp+8h] [rbp-C0h]
  __int64 v55; // [rsp+8h] [rbp-C0h]
  __int64 v56; // [rsp+8h] [rbp-C0h]
  __int64 v57; // [rsp+8h] [rbp-C0h]
  __int64 v58; // [rsp+8h] [rbp-C0h]
  __int64 v59; // [rsp+8h] [rbp-C0h]
  __int64 v60; // [rsp+8h] [rbp-C0h]
  __int64 v61; // [rsp+8h] [rbp-C0h]
  __int64 v62; // [rsp+8h] [rbp-C0h]
  __int64 v63; // [rsp+8h] [rbp-C0h]
  __int64 v64; // [rsp+8h] [rbp-C0h]
  __int64 v65; // [rsp+8h] [rbp-C0h]
  __int64 v66; // [rsp+8h] [rbp-C0h]
  __int64 v67; // [rsp+8h] [rbp-C0h]
  __int64 v68; // [rsp+8h] [rbp-C0h]
  __int64 v69; // [rsp+8h] [rbp-C0h]
  __int64 v70; // [rsp+8h] [rbp-C0h]
  __int128 v72; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v73; // [rsp+20h] [rbp-A8h]
  __int64 v74; // [rsp+28h] [rbp-A0h]
  int v75; // [rsp+30h] [rbp-98h]
  _QWORD v76[5]; // [rsp+40h] [rbp-88h] BYREF
  __int128 v77; // [rsp+68h] [rbp-60h]
  __int128 v78; // [rsp+78h] [rbp-50h]
  unsigned __int64 v79; // [rsp+88h] [rbp-40h]

  v4 = a4;
  v79 = __readfsqword(0x28u);
  if ( !a4 )
    v4 = dword_4DB944++;
  netnode_check(&v72, "$ mbui.view_id", 0, 1);
  v76[0] = (unsigned int)dword_4DB944;
  netnode_supset(v72, 0, v76, 8, 65);
  v5 = (__int64 *)operator new(0x60u);
  v6 = sub_3CF200(a1, a3);
  sub_3D15E0((__int64)v5, (__int64)a1, v6, v4);
  v7 = (char *)&unk_41EB80;
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
  v9 = (__int64 **)(a1[261] + 8LL * *((unsigned int *)v5 + 2));
  v10 = *v9;
  *v9 = v5;
  if ( v10 )
  {
    v11 = v10[10];
    *v10 = 0;
    v10[11] = 0;
    if ( v11 )
      qfree(v11);
    v12 = (volatile signed __int32 *)v10[9];
    if ( v12 )
      sub_3D1560(v12);
    v13 = v10[2];
    if ( v13 )
    {
      v10[3] = 0;
      qfree(v13);
    }
    operator delete(v10, 0x60u);
  }
  v14 = v5[3] == 0;
  *(_QWORD *)((char *)&v76[1] + 4) = 3;
  v76[0] = off_4D61B0;
  v15 = s1;
  *(_QWORD *)((char *)&v76[3] + 4) = 0x4900000000LL;
  v77 = -1;
  v78 = -1;
  *(_QWORD *)((char *)&v76[2] + 4) = 0;
  v73 = 0;
  v74 = 0xFFFFFFFFLL;
  v75 = 1;
  v72 = 0;
  if ( !v14 )
    v15 = (const char *)v5[2];
  v16 = callui(148, v15, v76, v76, v76, &v72, v5, &unk_4D6740, v5, 0);
  *v5 = v16;
  ((void (__fastcall *)(__int64, __int64, __int64, __int64, __int64, __int64))callui)(77, v16, 7, v17, v18, v19);
  callui(131, *v5, 0, "mv:LowerMicro", 0, 0, v21, v46, v72, *((_QWORD *)&v72 + 1));
  callui(131, *v5, 0, "mv:RaiseMicro", 0, 0, v22, v47, v72, *((_QWORD *)&v72 + 1));
  callui(131, *v5, 0, "mv:HighestMicro", 0, 0, v23, v48, v72, *((_QWORD *)&v72 + 1));
  callui(131, *v5, 0, "mv:JmpXref", 0, 0, v24, v49, v72, *((_QWORD *)&v72 + 1));
  callui(131, *v5, 0, "mv:JmpXrefFrom", 0, 0, v25, v50, v72, *((_QWORD *)&v72 + 1));
  callui(131, *v5, 0, 0, 0, 0, v26, v51, v72, *((_QWORD *)&v72 + 1));
  callui(131, *v5, 0, "mv:EditBlockCmt", 0, 0, v27, v52, v72, *((_QWORD *)&v72 + 1));
  callui(131, *v5, 0, "mv:EditCmt", 0, 0, v28, v53, v72, *((_QWORD *)&v72 + 1));
  callui(131, *v5, 0, 0, 0, 0, v29, v54, v72, *((_QWORD *)&v72 + 1));
  callui(131, *v5, 0, "mv:InsertInsn", 0, 0, v30, v55, v72, *((_QWORD *)&v72 + 1));
  callui(131, *v5, 0, "mv:DeleteInsn", 0, 0, v31, v56, v72, *((_QWORD *)&v72 + 1));
  callui(131, *v5, 0, 0, 0, 0, v32, v57, v72, *((_QWORD *)&v72 + 1));
  callui(131, *v5, 0, "mv:StructuralAna", 0, 0, v33, v58, v72, *((_QWORD *)&v72 + 1));
  callui(131, *v5, 0, "mv:DisplayChains", 0, 0, v34, v59, v72, *((_QWORD *)&v72 + 1));
  callui(131, *v5, 0, "mv:DisplayVdTypes", 0, 0, v35, v60, v72, *((_QWORD *)&v72 + 1));
  callui(131, *v5, 0, "mv:DisplayMCGraph", 0, 0, v36, v61, v72, *((_QWORD *)&v72 + 1));
  callui(131, *v5, 0, "mv:DisplayCTree", 0, 0, v37, v62, v72, *((_QWORD *)&v72 + 1));
  callui(131, *v5, 0, 0, 0, 0, v38, v63, v72, *((_QWORD *)&v72 + 1));
  callui(131, *v5, 0, "mv:ToggleViewShort", 0, 0, v39, v64, v72, *((_QWORD *)&v72 + 1));
  callui(131, *v5, 0, "mv:ToggleDisplayNumorig", 0, 0, v40, v65, v72, *((_QWORD *)&v72 + 1));
  callui(131, *v5, 0, "mv:ToggleDisplayValnums", 0, 0, v41, v66, v72, *((_QWORD *)&v72 + 1));
  callui(131, *v5, 0, "mv:ToggleDisplayEA", 0, 0, v42, v67, v72, *((_QWORD *)&v72 + 1));
  callui(131, *v5, 0, 0, 0, 0, v43, v68, v72, *((_QWORD *)&v72 + 1));
  callui(131, *v5, 0, "mv:Refresh", 0, 0, v44, v69, v72, *((_QWORD *)&v72 + 1));
  callui(131, *v5, 0, "MoveFunctionToFolder", 0, 0, v45, v70, v72, *((_QWORD *)&v72 + 1));
  return v5;
}
