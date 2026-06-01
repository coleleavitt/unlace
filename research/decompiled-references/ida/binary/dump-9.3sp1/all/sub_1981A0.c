__int64 __fastcall sub_1981A0(_QWORD *a1, __int64 *a2, int a3)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v7; // rdx
  __int64 v8; // rsi
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rax
  unsigned int v15; // r14d
  int v16; // r15d
  __int64 v17; // rdx
  __int64 v18; // rax
  _QWORD *v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rsi
  int v22; // r10d
  _BYTE *v23; // rdi
  _QWORD *v24; // rax
  __int64 *v25; // rax
  int v26; // eax
  _BYTE *v28; // rax
  __int64 v29; // [rsp-10h] [rbp-90h]
  int v30; // [rsp+4h] [rbp-7Ch]
  __int64 v31; // [rsp+8h] [rbp-78h]
  __int64 v32[2]; // [rsp+10h] [rbp-70h] BYREF
  __int64 v33[2]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v34; // [rsp+30h] [rbp-50h]
  __int128 v35; // [rsp+38h] [rbp-48h]
  unsigned __int64 v36; // [rsp+48h] [rbp-38h]

  v36 = __readfsqword(0x28u);
  v31 = *a2;
  if ( !*a2 )
    sub_195160();
  v4 = a1[1];
  v5 = a3;
  v33[0] = 0;
  v7 = *(_QWORD *)(v4 + 1504);
  v8 = *(_QWORD *)(v4 + 1440) + v5;
  v35 = 0;
  v9 = a2[9] + v8;
  v33[1] = 0;
  v10 = *(int *)(v7 + 80);
  v34 = 0;
  sub_122B20(v33, v9, v10);
  v13 = sub_670E0((_QWORD *)a1[1], v9, v11, v12);
  v14 = a1[2];
  v32[0] = 0;
  v32[1] = 0;
  v15 = sub_6FC30(v13, v32, *(_DWORD *)(v31 + 72), *(_DWORD *)(v14 + 72));
  qfree(v32[0]);
  if ( !(_BYTE)v15 )
    goto LABEL_19;
  v16 = *(_DWORD *)(a1[2] + 72LL);
  if ( v16 == *(_DWORD *)(v31 + 72) )
    v17 = *(_QWORD *)(a1[3] + 16LL);
  else
    v17 = *(_QWORD *)(v31 + 56);
  v30 = *(_DWORD *)(v31 + 72);
  v18 = sub_129150(v31, v33, v17, 0, 0, 0, 0x101u);
  v21 = v29;
  v22 = v30;
  v23 = (_BYTE *)v18;
  if ( !v18 )
    goto LABEL_11;
  v19 = (_QWORD *)a2[12];
  v24 = &v19[a2[13]];
  if ( v19 != v24 )
  {
    while ( v23 != (_BYTE *)*v19 )
    {
      if ( v24 == ++v19 )
        goto LABEL_17;
    }
    if ( v24 != v19 )
      goto LABEL_11;
  }
LABEL_17:
  v21 = 1;
  v28 = sub_120380(v23, 1);
  if ( !v28 || (v22 = v30, v28[64] != 8) || (unsigned int)(*(_DWORD *)(*((_QWORD *)v28 + 9) + 284LL) - 23) > 2 )
  {
LABEL_19:
    v15 = 0;
    goto LABEL_13;
  }
LABEL_11:
  if ( v16 != v22 )
  {
    v25 = (__int64 *)sub_670E0((_QWORD *)a1[1], v21, (__int64)v19, v20);
    LOBYTE(v26) = sub_17C4E0(v25, (__int64)v33, *(_DWORD *)(v31 + 72), *(_DWORD *)(a1[2] + 72LL), 0, a1[3], 1u, 0);
    v15 = v26 ^ 1;
  }
LABEL_13:
  if ( v34 )
  {
    *(_QWORD *)&v35 = 0;
    qfree(v34);
  }
  qfree(v33[0]);
  return v15;
}
