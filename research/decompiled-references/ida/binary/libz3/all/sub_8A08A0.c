void __fastcall sub_8A08A0(_QWORD *a1, char a2, unsigned int a3, unsigned int a4, unsigned __int64 a5)
{
  __int64 v7; // r12
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // r13
  _DWORD *v11; // rax
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  bool v15; // r12
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // r15
  __int64 v19; // rax
  __int64 v20; // r12
  __int64 v21; // rax
  __int64 v22; // r14
  unsigned int v23; // eax
  __int64 v24; // rsi
  __int64 v25; // rdi
  unsigned int v26; // eax
  __int64 v27; // rcx
  char v28; // al
  int v29; // [rsp-8h] [rbp-98h]
  __int64 v30; // [rsp+0h] [rbp-90h]
  __int64 v31; // [rsp+8h] [rbp-88h]
  int v32; // [rsp+10h] [rbp-80h]
  char v33; // [rsp+14h] [rbp-7Ch]
  unsigned __int64 v34; // [rsp+18h] [rbp-78h]
  __int64 v35; // [rsp+20h] [rbp-70h]
  __int64 v36; // [rsp+38h] [rbp-58h] BYREF
  _QWORD v37[10]; // [rsp+40h] [rbp-50h] BYREF

  v33 = a2;
  v34 = a5;
  v37[0] = 0;
  v37[1] = 0;
  v37[2] = 1;
  v37[3] = 0;
  v7 = (unsigned int)sub_89B090((__int64)a1, 1, a3, (__int64)v37);
  if ( (_DWORD)v7 == (unsigned int)sub_89B090((__int64)a1, 0, a4, (__int64)v37) )
  {
    if ( (LODWORD(v37[0]) == 0) != a2 )
    {
      sub_8A06F0((__int64)a1);
      v8 = a1[2];
      v36 = v34 | 3;
      sub_8E8670(v8, &v36, 4294967294LL);
    }
  }
  else
  {
    v31 = a1[3];
    v30 = **(_QWORD **)(a1[4] + 8 * v7);
    v9 = sub_15E1B70(a1[10]);
    v10 = v9;
    if ( v9 )
      ++*(_DWORD *)(v9 + 8);
    v11 = *(_DWORD **)(sub_15D1F10(v9) + 24);
    if ( v11 )
    {
      v15 = 0;
      if ( *v11 == 5 )
        v15 = v11[1] == 1;
    }
    else
    {
      v15 = 0;
    }
    v16 = a1[11];
    if ( !v16 )
    {
      sub_16669E0(a1 + 10);
      v16 = a1[11];
    }
    v17 = sub_166A700(v16, (unsigned int)v37, v15, v12, v13, v14);
    v18 = v17;
    if ( v17 )
      ++*(_DWORD *)(v17 + 8);
    v19 = sub_15E1B70(a1[3]);
    v20 = v19;
    if ( v19 )
      ++*(_DWORD *)(v19 + 8);
    v35 = a1[3];
    if ( *(_QWORD *)(v35 + 912) )
    {
      sub_15E1B70(a1[10]);
      sub_15E1B70(v35);
      v21 = sub_15E1B70(v35);
      v22 = v21;
      if ( v21 )
        ++*(_DWORD *)(v21 + 8);
      v36 = 0;
      sub_966750((int)a1, v21, -1, 0, 0, -1, (__int64)&v36, v29, v30, v31, v32, (void *)v34);
      if ( v36 )
        sub_186B220((void *)(v36 - 8));
      sub_892C90(v22, v35);
    }
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64, _QWORD))(*a1 + 16LL))(a1, v20, 0) )
    {
      sub_1872CE0("");
      sub_1873130(114, 1044);
    }
    if ( *(_QWORD *)(a1[3] + 912LL) )
      std::operator<<<std::char_traits<char>>();
    v23 = sub_B645B0(a1[2], v20);
    v24 = v23;
    v25 = a1[2];
    v26 = v23 ^ 1;
    if ( !v33 )
      v24 = v26;
    v27 = *(_QWORD *)(v25 + 8848);
    v36 = v34 | 3;
    v28 = *(_BYTE *)(v27 + (unsigned int)v24);
    if ( v28 == -1 )
    {
      sub_8E8670(v25, &v36, (unsigned int)v24 ^ 1);
    }
    else if ( !v28 )
    {
      sub_8F28B0(v25, v24, v34 | 3, 0);
    }
    sub_892C90(v18, v31);
    sub_892C90(v10, v31);
    sub_892C90(v20, v31);
  }
  sub_25A130((char *)v37);
}

