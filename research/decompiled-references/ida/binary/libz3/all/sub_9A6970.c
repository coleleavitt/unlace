__int64 __fastcall sub_9A6970(__int64 a1, __int64 a2, int **a3)
{
  int *v3; // rcx
  int *v4; // rbp
  int *v5; // r15
  void *v6; // rdi
  int v7; // edx
  void *v8; // r14
  void *v10; // rdi
  void *v11; // rdi
  int v12; // edx
  bool v13; // dl
  void *v14; // [rsp+0h] [rbp-68h]
  void *v15; // [rsp+0h] [rbp-68h]
  bool v16; // [rsp+Fh] [rbp-59h]
  int v17; // [rsp+10h] [rbp-58h] BYREF
  char v18; // [rsp+14h] [rbp-54h]
  __int64 v19; // [rsp+18h] [rbp-50h]
  int v20; // [rsp+20h] [rbp-48h] BYREF
  char v21; // [rsp+24h] [rbp-44h]
  __int64 v22; // [rsp+28h] [rbp-40h]

  v3 = *a3;
  if ( *a3 )
  {
    v4 = &v3[10 * *(v3 - 1)];
    if ( v3 != v4 )
    {
      v5 = *a3;
      while ( v5[8] == -1 )
      {
LABEL_15:
        v5 += 10;
        if ( v4 == v5 )
          return std::__ostream_insert<char,std::char_traits<char>>();
      }
      if ( (v5[1] & 1) != 0 )
        goto LABEL_38;
      if ( *v5 == 1 )
      {
        if ( (v5[5] & 1) != 0 )
          goto LABEL_9;
        if ( v5[4] == 1 )
          goto LABEL_36;
        goto LABEL_19;
      }
      if ( *v5 != -1 )
      {
LABEL_38:
        if ( (v5[5] & 1) != 0 )
          goto LABEL_9;
        if ( v5[4] == 1 )
        {
          v18 &= 0xFCu;
          v11 = qword_1C7F2C0;
          v21 &= 0xFCu;
          v17 = 0;
          v19 = 0;
          v20 = 1;
          v22 = 0;
          if ( (v5[1] & 1) != 0 )
            sub_182C690(qword_1C7F2C0, &v17, v5);
          else
            v17 = *v5;
          if ( (v5[5] & 1) != 0 )
          {
            sub_182C690(v11, &v20, v5 + 4);
          }
          else
          {
            v12 = v5[4];
            v21 &= ~1u;
            v20 = v12;
          }
          if ( (v18 & 1) != 0 )
          {
            v15 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v17);
            sub_182CBA0(v15, &v20);
            v13 = (v5[5] & 1) == 0;
          }
          else
          {
            v14 = qword_1C7F2C0;
            v16 = (v21 & 1) == 0;
            sub_182CBA0(qword_1C7F2C0, &v17);
            sub_182CBA0(v14, &v20);
            if ( v16 )
            {
LABEL_14:
              std::__ostream_insert<char,std::char_traits<char>>();
              goto LABEL_15;
            }
            v13 = (v5[5] & 1) == 0;
          }
          if ( !v13 )
          {
LABEL_9:
            v18 &= 0xFCu;
            v6 = qword_1C7F2C0;
            v21 &= 0xFCu;
            v17 = 0;
            v19 = 0;
            v20 = 1;
            v22 = 0;
            if ( (v5[1] & 1) != 0 )
              sub_182C690(qword_1C7F2C0, &v17, v5);
            else
              v17 = *v5;
            if ( (v5[5] & 1) != 0 )
            {
              sub_182C690(v6, &v20, v5 + 4);
            }
            else
            {
              v7 = v5[4];
              v21 &= ~1u;
              v20 = v7;
            }
            v8 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v17);
            sub_182CBA0(v8, &v20);
            goto LABEL_14;
          }
        }
      }
      else
      {
        if ( (v5[5] & 1) != 0 )
          goto LABEL_9;
        if ( v5[4] == 1 )
        {
LABEL_36:
          std::operator<<<std::char_traits<char>>();
          goto LABEL_15;
        }
      }
LABEL_19:
      if ( v5[4] == 1 )
      {
        v18 &= 0xFCu;
        v21 &= 0xFCu;
        v17 = 0;
        v19 = 0;
        v20 = 1;
        v22 = 0;
        sub_27B950((__int64)qword_1C7F2C0, (__int64)&v17, v5);
        v10 = qword_1C7F2C0;
        if ( (v18 & 1) != 0 || (v21 & 1) != 0 )
        {
          sub_182CBA0(qword_1C7F2C0, &v17);
          sub_182CBA0(v10, &v20);
          std::__ostream_insert<char,std::char_traits<char>>();
          goto LABEL_15;
        }
        sub_182CBA0(qword_1C7F2C0, &v17);
        sub_182CBA0(v10, &v20);
      }
      goto LABEL_9;
    }
  }
  return std::__ostream_insert<char,std::char_traits<char>>();
}

