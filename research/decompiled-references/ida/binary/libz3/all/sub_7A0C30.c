__int64 __fastcall sub_7A0C30(__int64 a1, __int64 a2, int a3, int *a4)
{
  int *v5; // rbx
  int *v6; // r13
  __int64 v7; // r14
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // r15
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  bool v18; // zf
  __int64 v20; // r15
  __int64 v21; // r8
  int v22; // eax
  int v23; // r8d
  int v24; // r9d
  __int64 v25; // rax
  int *v26; // [rsp+0h] [rbp-58h]
  __int64 v27; // [rsp+8h] [rbp-50h]
  int v28; // [rsp+10h] [rbp-48h]
  int v29[2]; // [rsp+18h] [rbp-40h] BYREF
  int v30; // [rsp+20h] [rbp-38h]
  char v31; // [rsp+28h] [rbp-30h]
  int v32; // [rsp+30h] [rbp-28h]
  int v33; // [rsp+38h] [rbp-20h]
  int v34; // [rsp+40h] [rbp-18h]
  void *v35; // [rsp+48h] [rbp-10h]

  v27 = *(_QWORD *)(a1 + 144);
  if ( a3 )
  {
    v5 = a4;
    v26 = v29;
    v6 = &a4[a3];
    v7 = 0;
    do
    {
      while ( 1 )
      {
        v11 = *v5;
        v12 = *(_QWORD *)(a1 + 2328);
        v13 = (unsigned int)*v5 >> 1;
        if ( !v12 || (unsigned int)v13 >= *(_DWORD *)(v12 - 4) || (v14 = *(_QWORD *)(v12 + 8 * v13)) == 0 )
        {
          v20 = *(_QWORD *)(a1 + 144);
          v21 = *(_QWORD *)(v20 + 840);
          *(_QWORD *)v29 = 8 * v13 + 1;
          v22 = sub_15E3510(v20, v26, 0, 0, v21, 0);
          v25 = sub_15DC610(v20, v22, 0, 0, v23, v24, (int)v26, v27, v28, v29[0], v30, v31, v32, v33, v34, v35);
          v14 = v25;
          if ( v25 )
            ++*(_DWORD *)(v25 + 8);
          if ( v7 )
          {
            v18 = (*(_DWORD *)(v7 + 8))-- == 1;
            if ( v18 )
              sub_15D7BC0(v27, v7);
          }
          v11 = *v5;
          v7 = v14;
        }
        if ( (v11 & 1) == 0 )
          break;
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_168BF80(a1 + 2432, a2, v14, v8, v9, v10, (_DWORD)v26, v27);
        std::__ostream_insert<char,std::char_traits<char>>();
        if ( ++v5 == v6 )
          goto LABEL_9;
      }
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_168BF80(a1 + 2432, a2, v14, v15, v16, v17, (_DWORD)v26, v27);
      ++v5;
    }
    while ( v5 != v6 );
LABEL_9:
    if ( v7 )
    {
      v18 = (*(_DWORD *)(v7 + 8))-- == 1;
      if ( v18 )
        sub_15D7BC0(v27, v7);
    }
  }
  return a2;
}

