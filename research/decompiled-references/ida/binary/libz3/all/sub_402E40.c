__int64 __fastcall sub_402E40(_QWORD *a1)
{
  __int64 v1; // r15
  int v2; // r9d
  int v3; // eax
  int v4; // r8d
  int v5; // r9d
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 v8; // r15
  int v9; // eax
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // rax
  __int64 v13; // r15
  __int64 v14; // rax
  int v15; // edx
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // r12
  __int64 v20; // rax
  __int64 v21; // r13
  int v23; // [rsp-8h] [rbp-218h]
  int v24; // [rsp+0h] [rbp-210h]
  int v25; // [rsp+0h] [rbp-210h]
  int v26; // [rsp+0h] [rbp-210h]
  int v27; // [rsp+0h] [rbp-210h]
  int v28; // [rsp+8h] [rbp-208h]
  int v29; // [rsp+8h] [rbp-208h]
  char v30; // [rsp+8h] [rbp-208h]
  __int64 v31; // [rsp+10h] [rbp-200h]
  int v32; // [rsp+10h] [rbp-200h]
  int v33; // [rsp+10h] [rbp-200h]
  __int64 v34; // [rsp+10h] [rbp-200h]
  int v35[2]; // [rsp+18h] [rbp-1F8h]
  int v36; // [rsp+18h] [rbp-1F8h]
  int v37; // [rsp+18h] [rbp-1F8h]
  __int64 v38; // [rsp+18h] [rbp-1F8h]
  int v39; // [rsp+20h] [rbp-1F0h]
  int v40; // [rsp+20h] [rbp-1F0h]
  int v41; // [rsp+20h] [rbp-1F0h]
  int v42; // [rsp+28h] [rbp-1E8h] BYREF
  void *v43; // [rsp+30h] [rbp-1E0h] BYREF
  int v44; // [rsp+38h] [rbp-1D8h]
  __int64 v45; // [rsp+40h] [rbp-1D0h] BYREF
  void *v46; // [rsp+48h] [rbp-1C8h]
  int v47[4]; // [rsp+50h] [rbp-1C0h] BYREF
  int v48; // [rsp+60h] [rbp-1B0h] BYREF
  int v49[16]; // [rsp+68h] [rbp-1A8h] BYREF
  void *v50; // [rsp+A8h] [rbp-168h]
  int v51; // [rsp+B0h] [rbp-160h]
  __int64 v52; // [rsp+B8h] [rbp-158h]

  v31 = a1[1];
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v47);
  sub_39A600((__int64)&v48, *(const char **)(a1[3] + 16LL));
  std::__ostream_insert<char,std::char_traits<char>>();
  std::stringbuf::str(&v43, v49);
  *(_QWORD *)v35 = a1[1];
  v1 = *(_QWORD *)(*(_QWORD *)v35 + 840LL);
  sub_180C5A0(&v42, v43);
  v2 = v1;
  LODWORD(v1) = v35[0];
  v3 = sub_15E3D10(
         v35[0],
         (int)&v42,
         (int)&qword_18D6CD0,
         0,
         0,
         v2,
         1,
         v23,
         v24,
         (int)&v43,
         v31,
         v35[0],
         v39,
         v42,
         (char)v43,
         v44,
         v45,
         (int)v46,
         v47[0],
         v47[2],
         v48,
         v49[0],
         v49[2],
         v49[4],
         v49[6],
         v49[8],
         v49[10],
         v49[12],
         v49[14],
         v50,
         v51,
         v52);
  v6 = sub_15DC610(v1, v3, 0, 0, v4, v5, v25, v28, v32, v36, v40, v42, (int)v43, v44, v45, v46);
  v7 = v6;
  if ( v6 )
    ++*(_DWORD *)(v6 + 8);
  v8 = a1[1];
  v9 = sub_420A00(*a1, *(_QWORD *)(v6 + 16));
  v12 = sub_15DC610(v8, v9, 0, 0, v10, v11, v26, v29, v33, v37, v41, v42, (int)v43, v44, v45, v46);
  v38 = v12;
  if ( v12 )
    ++*(_DWORD *)(v12 + 8);
  sub_3FCDD0(v7, v34);
  v13 = a1[1];
  v14 = sub_15E1BF0(v13);
  v19 = v14;
  if ( v14 )
    ++*(_DWORD *)(v14 + 8);
  sub_428900(a1[15], v14, v15, v16, v17, v18, v27, v30);
  v20 = sub_15E1A70(a1[1]);
  v21 = v20;
  if ( v20 )
    ++*(_DWORD *)(v20 + 8);
  sub_3FCDD0(a1[37], a1[38]);
  a1[37] = v21;
  sub_3FCDF0(v19, v13);
  if ( v43 != &v45 )
    operator delete(v43, v45 + 1);
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream();
  sub_3FCDD0(v38, v34);
  return v21;
}

