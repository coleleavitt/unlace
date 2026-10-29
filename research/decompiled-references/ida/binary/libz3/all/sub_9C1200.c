void __fastcall sub_9C1200(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // r13
  int **v4; // rax
  int *v5; // rcx
  int *v6; // r14
  int *v7; // r15
  void *v8; // rdi
  int v9; // eax
  void *v10; // rbx
  void *v11; // rdi
  int v12; // eax
  void *v13; // [rsp+0h] [rbp-B8h]
  void *v14; // [rsp+8h] [rbp-B0h]
  void *v15; // [rsp+8h] [rbp-B0h]
  bool v16; // [rsp+17h] [rbp-A1h]
  __int64 v17; // [rsp+18h] [rbp-A0h]
  void *v19[2]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v20; // [rsp+50h] [rbp-68h] BYREF
  int v21; // [rsp+60h] [rbp-58h] BYREF
  char v22; // [rsp+64h] [rbp-54h]
  __int64 v23; // [rsp+68h] [rbp-50h]
  int v24; // [rsp+70h] [rbp-48h] BYREF
  char v25; // [rsp+74h] [rbp-44h]
  __int64 v26; // [rsp+78h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 632);
  if ( v1 )
  {
    v2 = *(unsigned int *)(v1 - 4);
    if ( (_DWORD)v2 )
    {
      v3 = 0;
      v17 = 24 * v2;
      while ( 1 )
      {
        v4 = (int **)(v3 + v1);
        if ( *((_DWORD *)v4 + 3) != -1 )
        {
          v5 = *v4;
          if ( *v4 )
          {
            v6 = &v5[10 * *(v5 - 1)];
            if ( v6 != v5 )
              break;
          }
        }
LABEL_4:
        v3 += 24;
        if ( v17 == v3 )
          return;
        v1 = *(_QWORD *)(a1 + 632);
      }
      v7 = *v4;
      while ( 1 )
      {
        if ( v7[8] != -1 )
        {
          v22 &= 0xFCu;
          v25 &= 0xFCu;
          v21 = 0;
          v11 = qword_1C7F2C0;
          v23 = 0;
          v24 = 1;
          v26 = 0;
          if ( (v7[1] & 1) != 0 )
          {
            v13 = qword_1C7F2C0;
            sub_182C690(qword_1C7F2C0, &v21, v7);
            v11 = v13;
          }
          else
          {
            v21 = *v7;
          }
          if ( (v7[5] & 1) != 0 )
          {
            sub_182C690(v11, &v24, v7 + 4);
          }
          else
          {
            v12 = v7[4];
            v25 &= ~1u;
            v24 = v12;
          }
          if ( (v22 & 1) != 0 )
          {
            v14 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v21);
            sub_182CBA0(v14, &v24);
LABEL_11:
            v22 &= 0xFCu;
            v8 = qword_1C7F2C0;
            v25 &= 0xFCu;
            v21 = 0;
            v23 = 0;
            v24 = 1;
            v26 = 0;
            if ( (v7[1] & 1) != 0 )
            {
              sub_182C690(qword_1C7F2C0, &v21, v7);
              if ( (v7[5] & 1) != 0 )
                goto LABEL_30;
LABEL_13:
              v9 = v7[4];
              v25 &= ~1u;
              v24 = v9;
            }
            else
            {
              v21 = *v7;
              if ( (v7[5] & 1) == 0 )
                goto LABEL_13;
LABEL_30:
              sub_182C690(v8, &v24, v7 + 4);
            }
            sub_1850940(v19, qword_1C7F2C0, &v21);
            v10 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v21);
            sub_182CBA0(v10, &v24);
            if ( v19[1] > &dword_30 )
            {
              std::__ostream_insert<char,std::char_traits<char>>();
              std::__ostream_insert<char,std::char_traits<char>>();
            }
            if ( v19[0] != &v20 )
              operator delete(v19[0], v20 + 1);
            goto LABEL_18;
          }
          v15 = qword_1C7F2C0;
          v16 = (v25 & 1) == 0;
          sub_182CBA0(qword_1C7F2C0, &v21);
          sub_182CBA0(v15, &v24);
          if ( !v16 )
            goto LABEL_11;
        }
LABEL_18:
        v7 += 10;
        if ( v6 == v7 )
          goto LABEL_4;
      }
    }
  }
}

