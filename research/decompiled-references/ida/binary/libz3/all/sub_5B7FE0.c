_QWORD *__fastcall sub_5B7FE0(_QWORD *a1, _DWORD **a2)
{
  _BYTE *v2; // r8
  _DWORD *v4; // rbp
  _BYTE *v5; // r13
  size_t v6; // r15
  __int64 v7; // rax
  __int64 v8; // r12
  char v9; // cl
  unsigned __int64 v10; // r14
  __int64 v11; // r14
  unsigned __int64 v12; // rdi
  _BYTE *v13; // rax
  _BYTE *v14; // r9
  __int64 v15; // rax
  _DWORD *v17; // [rsp+0h] [rbp-58h]
  _BYTE *v18; // [rsp+8h] [rbp-50h]
  _BYTE *v19; // [rsp+8h] [rbp-50h]
  _BYTE *v20; // [rsp+8h] [rbp-50h]
  _BYTE *v21; // [rsp+8h] [rbp-50h]
  char v22; // [rsp+10h] [rbp-48h]
  char v23; // [rsp+10h] [rbp-48h]
  char v24; // [rsp+10h] [rbp-48h]
  _BYTE *v25; // [rsp+10h] [rbp-48h]
  char v26; // [rsp+1Fh] [rbp-39h]

  v2 = a1 + 2;
  *((_BYTE *)a1 + 16) = 0;
  v4 = *a2;
  *a1 = a1 + 2;
  a1[1] = 0;
  if ( v4 )
  {
    v17 = &v4[*(v4 - 1)];
    if ( v17 != v4 )
    {
      v5 = a1 + 2;
      v6 = 0;
      while ( 1 )
      {
        v8 = v6 + 1;
        v9 = 4 * (*v4 != 1) + 98;
        if ( v2 == v5 )
        {
          if ( v6 != 15 )
            goto LABEL_4;
          v24 = 4 * (*v4 != 1) + 98;
          v20 = v2;
          v15 = operator new(0x1Fu);
          v14 = (_BYTE *)*a1;
          v2 = v20;
          v5 = (_BYTE *)v15;
          v11 = 30;
          v9 = v24;
        }
        else
        {
          v10 = a1[2];
          if ( v10 >= v8 )
            goto LABEL_4;
          if ( v8 < 0 )
            std::__throw_length_error("basic_string::_M_create");
          v11 = 2 * v10;
          if ( v8 < (unsigned __int64)v11 )
          {
            if ( v11 < 0 )
LABEL_23:
              std::__throw_bad_alloc();
            v12 = v11 + 1;
          }
          else
          {
            v12 = v6 + 2;
            if ( (__int64)(v6 + 2) < 0 )
              goto LABEL_23;
            v11 = v6 + 1;
          }
          v22 = 4 * (*v4 != 1) + 98;
          v18 = v2;
          v13 = (_BYTE *)operator new(v12);
          v14 = (_BYTE *)*a1;
          v2 = v18;
          v5 = v13;
          v9 = v22;
          if ( !v6 )
            goto LABEL_13;
          if ( v6 == 1 )
          {
            *v13 = *v14;
            goto LABEL_13;
          }
        }
        v26 = v9;
        v25 = v2;
        v21 = v14;
        memcpy(v5, v14, v6);
        v9 = v26;
        v2 = v25;
        v14 = v21;
LABEL_13:
        if ( v2 != v14 )
        {
          v23 = v9;
          v19 = v2;
          operator delete(v14, a1[2] + 1LL);
          v9 = v23;
          v2 = v19;
        }
        *a1 = v5;
        a1[2] = v11;
LABEL_4:
        v5[v6] = v9;
        v7 = *a1;
        ++v4;
        a1[1] = v8;
        *(_BYTE *)(v7 + v8) = 0;
        if ( v4 == v17 )
          return a1;
        v6 = a1[1];
        v5 = (_BYTE *)*a1;
      }
    }
  }
  return a1;
}

