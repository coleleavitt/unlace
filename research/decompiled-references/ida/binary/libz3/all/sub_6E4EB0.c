__int64 __fastcall sub_6E4EB0(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rax
  __int64 v5; // rbp
  int v6; // r13d
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // ecx
  int v18; // r8d
  __int64 v19; // r9
  int v20; // edx
  int v21; // r10d
  __int64 v22; // r13
  int v23; // edx
  int v24; // ecx
  int v25; // r8d
  int v26; // r9d
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 result; // rax
  __int64 v30; // rax
  __int64 v31; // [rsp+8h] [rbp-70h]
  __int64 v32; // [rsp+18h] [rbp-60h]
  int v33; // [rsp+18h] [rbp-60h]
  __int64 v34; // [rsp+20h] [rbp-58h]
  __int64 v35; // [rsp+28h] [rbp-50h]
  __int64 v36; // [rsp+30h] [rbp-48h] BYREF
  __int64 v37; // [rsp+38h] [rbp-40h]

  v4 = *(_QWORD *)(a2 + 8);
  v5 = *(_QWORD *)(a1 + 8);
  if ( !v4 || (v6 = *(_DWORD *)(v4 - 4)) == 0 )
  {
    v12 = *(_QWORD *)(*(_QWORD *)v5 + 864LL);
    goto LABEL_11;
  }
  v8 = *(_QWORD *)(a1 + 8);
  v31 = *(_QWORD *)(v4 + 8LL * (unsigned int)(v6 - 1));
  if ( (v6 & 1) != 0 )
  {
    v30 = sub_6E1010(v8, *(_QWORD *)(v4 + 8LL * (unsigned int)(v6 - 1)));
    v11 = a2;
    v12 = v30;
    if ( v6 == 1 )
      goto LABEL_11;
  }
  else
  {
    v9 = sub_6E0F30(v8);
    v10 = sub_6E1010(v5, v9);
    v11 = a2;
    v12 = v10;
  }
  v13 = *(_QWORD *)(a1 + 8);
  v14 = (unsigned int)(v6 - 2);
  v35 = v11;
  v32 = *(_QWORD *)(*(_QWORD *)(v11 + 8) + 8 * v14);
  if ( (((_BYTE)v6 - 1) & 1) != 0 )
  {
    v16 = sub_6E1010(v13, *(_QWORD *)(*(_QWORD *)(v11 + 8) + 8 * v14));
    v21 = v32;
    v20 = v6 - 2;
    v19 = v35;
  }
  else
  {
    v15 = sub_6E0F30(v13);
    v16 = sub_6E1010(v13, v15);
    v19 = v35;
    v20 = v6 - 2;
    v21 = v32;
  }
  v22 = v16;
  v33 = v21;
  if ( v20 )
  {
    v34 = sub_6E42F0(a1, v19, v20);
    v36 = sub_6E15B0(v13, v33, v23, v24, v25, v26);
    v37 = v34;
    v27 = sub_6E3580(v13, 2, &v36);
    v36 = v22;
    v37 = v27;
    v22 = sub_6E1880(v13, 2, &v36);
  }
  v36 = sub_6E15B0(v5, v31, v20, v17, v18, v19);
  v37 = v22;
  v28 = sub_6E3580(v5, 2, &v36);
  v36 = v12;
  v37 = v28;
  v12 = sub_6E1880(v5, 2, &v36);
LABEL_11:
  if ( v12 )
    ++*(_DWORD *)(v12 + 8);
  result = sub_6DE2A0(*a3, a3[1]);
  *a3 = v12;
  return result;
}

