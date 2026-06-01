__int64 __fastcall sub_C4EAA0(__int64 *a1, __int64 a2, __int64 *a3)
{
  int *v5; // rax
  unsigned int v6; // ebp
  void *v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r12
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // rdi
  __int64 v17; // r15
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rsi
  __int64 v21; // rdi
  bool v22; // zf
  void *v23; // rbx
  void *v24; // rbx
  void *v26; // [rsp+10h] [rbp-B8h]
  unsigned int v27; // [rsp+1Ch] [rbp-ACh]
  __int64 v28; // [rsp+20h] [rbp-A8h]
  __int64 v29; // [rsp+28h] [rbp-A0h]
  _QWORD v30[2]; // [rsp+30h] [rbp-98h] BYREF
  _QWORD v31[2]; // [rsp+40h] [rbp-88h] BYREF
  int v32; // [rsp+50h] [rbp-78h] BYREF
  char v33; // [rsp+54h] [rbp-74h]
  __int64 v34; // [rsp+58h] [rbp-70h]
  int v35; // [rsp+60h] [rbp-68h] BYREF
  char v36; // [rsp+64h] [rbp-64h]
  __int64 v37; // [rsp+68h] [rbp-60h]
  __int64 v38; // [rsp+70h] [rbp-58h] BYREF
  __int64 v39; // [rsp+78h] [rbp-50h]
  __int64 v40; // [rsp+80h] [rbp-48h] BYREF
  __int64 v41; // [rsp+88h] [rbp-40h]

  v30[0] = 0;
  v30[1] = 0;
  v31[0] = 1;
  v31[1] = 0;
  v5 = *(int **)(*(_QWORD *)(sub_15D1F10(a2) + 24) + 8LL);
  if ( *((_BYTE *)v5 + 8) )
    sub_A8ADA((__int64)"std::get: wrong index for variant");
  v6 = *v5;
  v38 = 2;
  v27 = v6;
  v39 = 0;
  v40 = 1;
  v41 = 0;
  sub_182CBA0(qword_1C7F2C0, &v40);
  v33 &= 0xFCu;
  BYTE4(v40) &= ~1u;
  v36 &= 0xFCu;
  LODWORD(v40) = 1;
  v32 = 0;
  v34 = 0;
  v35 = 1;
  v37 = 0;
  sub_184BE60(qword_1C7F2C0, &v38, v6, &v32);
  v7 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v38);
  sub_182CBA0(v7, &v40);
  v28 = *a1;
  sub_16747F0(a1 + 3, a2);
  v8 = sub_15E1A70(a1[1]);
  v9 = v8;
  if ( v8 )
    ++*(_DWORD *)(v8 + 8);
  v10 = *a1;
  v38 = 0;
  v39 = 0;
  v29 = v10;
  v40 = 1;
  v41 = 0;
  sub_182CBA0(qword_1C7F2C0, &v40);
  LODWORD(v40) = 1;
  BYTE4(v40) &= ~1u;
  sub_1674520(a1 + 3, &v38, v27);
  v11 = sub_15E1B70(a1[4]);
  v12 = v11;
  if ( v11 )
    ++*(_DWORD *)(v11 + 8);
  v26 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v38);
  sub_182CBA0(v26, &v40);
  v16 = a1[2];
  v17 = *a1;
  if ( !v16 )
  {
    sub_16669E0(a1 + 1);
    v16 = a1[2];
  }
  sub_166A700(v16, (unsigned int)&v32, 0, v13, v14, v15);
  sub_15E1B70(a1[1]);
  v18 = sub_15E1BF0(v17);
  v19 = v18;
  if ( v18 )
    ++*(_DWORD *)(v18 + 8);
  v20 = *a3;
  if ( *a3 )
  {
    v21 = a3[1];
    v22 = (*(_DWORD *)(v20 + 8))-- == 1;
    if ( v22 )
      sub_15D7BC0(v21, v20);
  }
  *a3 = v19;
  if ( v12 )
  {
    v22 = (*(_DWORD *)(v12 + 8))-- == 1;
    if ( v22 )
      sub_15D7BC0(v29, v12);
  }
  if ( v9 )
  {
    v22 = (*(_DWORD *)(v9 + 8))-- == 1;
    if ( v22 )
      sub_15D7BC0(v28, v9);
  }
  v23 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v32);
  sub_182CBA0(v23, &v35);
  v24 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v30);
  return sub_182CBA0(v24, v31);
}

