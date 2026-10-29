char __fastcall sub_41F3B0(char *a1, char *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rax
  char *v6; // rbp
  char *v7; // rbx
  __int64 v8; // r15
  char *v9; // r12
  __int64 v10; // r14
  char *v11; // rbp
  __int64 v12; // rax
  bool v13; // zf
  bool v14; // r15
  bool v15; // r14
  char *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r15
  char *v19; // r13
  __int64 v20; // r14
  char *v21; // rbp
  __int64 v22; // rax
  __int64 v24; // [rsp+8h] [rbp-90h]
  __int64 v26; // [rsp+18h] [rbp-80h]
  __int64 v28; // [rsp+28h] [rbp-70h]
  char *v29; // [rsp+28h] [rbp-70h]
  __int64 v30; // [rsp+30h] [rbp-68h]
  __int64 v31; // [rsp+38h] [rbp-60h]
  __int64 v32; // [rsp+38h] [rbp-60h]
  char v34[16]; // [rsp+4Fh] [rbp-49h] BYREF
  _BYTE v35[57]; // [rsp+5Fh] [rbp-39h] BYREF

  v26 = a4;
  LOBYTE(v5) = a4 == 0 || a5 == 0;
  v24 = a5;
  if ( !(_BYTE)v5 )
  {
    while ( v24 + v26 != 2 )
    {
      if ( v26 <= v24 )
      {
        v6 = &a2[8 * (v24 / 2)];
        v32 = v24 / 2;
        v30 = v24 / 2;
        v7 = a1;
        v18 = (a2 - a1) >> 3;
        if ( a2 - a1 <= 0 )
        {
          v28 = 0;
          v15 = 0;
        }
        else
        {
          v19 = a1;
          while ( 1 )
          {
            while ( 1 )
            {
              v20 = v18 >> 1;
              v21 = &v19[8 * (v18 >> 1)];
              if ( (unsigned __int8)sub_422720(v35, *(_QWORD *)&a2[8 * (v24 / 2)], *(_QWORD *)v21) )
                break;
              v19 = v21 + 8;
              v18 = v18 - v20 - 1;
              if ( v18 <= 0 )
                goto LABEL_22;
            }
            if ( !v20 )
              break;
            v18 >>= 1;
          }
LABEL_22:
          v6 = &a2[8 * (v24 / 2)];
          v7 = v19;
          v22 = (v19 - a1) >> 3;
          v13 = v26 == v22;
          v26 -= v22;
          v28 = v22;
          v15 = v13;
        }
        v13 = v24 == v32;
        v24 -= v32;
        v14 = v13;
      }
      else
      {
        v6 = a2;
        v31 = v26 / 2;
        v7 = &a1[8 * (v26 / 2)];
        v28 = v26 / 2;
        v8 = (a3 - (__int64)a2) >> 3;
        if ( a3 - (__int64)a2 <= 0 )
        {
          v30 = 0;
          v14 = 0;
        }
        else
        {
          v9 = a2;
          while ( 1 )
          {
            while ( 1 )
            {
              v10 = v8 >> 1;
              v11 = &v9[8 * (v8 >> 1)];
              if ( !(unsigned __int8)sub_422720(v35, *(_QWORD *)v11, *(_QWORD *)&a1[8 * (v26 / 2)]) )
                break;
              v9 = v11 + 8;
              v8 = v8 - v10 - 1;
              if ( v8 <= 0 )
                goto LABEL_8;
            }
            if ( !v10 )
              break;
            v8 >>= 1;
          }
LABEL_8:
          v6 = v9;
          v7 = &a1[8 * (v26 / 2)];
          v12 = (v9 - a2) >> 3;
          v13 = v24 == v12;
          v24 -= v12;
          v30 = v12;
          v14 = v13;
        }
        v13 = v26 == v31;
        v26 -= v31;
        v15 = v13;
      }
      v16 = sub_3FD1D0(v7, a2, v6);
      v17 = v28;
      v29 = v16;
      LOBYTE(v5) = sub_41F3B0(a1, v7, v16, v17, v30);
      if ( v15 || v14 )
        return v5;
      a2 = v6;
      a1 = v29;
    }
    LOBYTE(v5) = sub_422720(v34, *(_QWORD *)a2, *(_QWORD *)a1);
    if ( (_BYTE)v5 )
    {
      v5 = *(_QWORD *)a1;
      *(_QWORD *)a1 = *(_QWORD *)a2;
      *(_QWORD *)a2 = v5;
    }
  }
  return v5;
}

