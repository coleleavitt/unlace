__int64 __fastcall sub_4F7C20(_QWORD *a1, unsigned int a2, unsigned int a3)
{
  __int64 v5; // rax
  _DWORD *v6; // r9
  unsigned int *v7; // rax
  __int64 v8; // r9
  char v9; // r11
  unsigned int *v10; // rbx
  unsigned int *v11; // r10
  __int64 v12; // rsi
  __int64 v13; // rdx
  char *v14; // r14
  __int64 v16; // rax
  char *v17; // r14
  unsigned int *v18; // r14
  unsigned int v19; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v20; // [rsp+4h] [rbp-34h]
  unsigned __int64 v21; // [rsp+8h] [rbp-30h]

  v5 = a1[3];
  v6 = (_DWORD *)a1[2];
  v21 = __readfsqword(0x28u);
  v7 = sub_4F5910(v6, (__int64)&v6[2 * v5], a2);
  v10 = v7;
  if ( v7 != v11 && *v7 == a2 )
  {
    if ( v9 )
    {
      v17 = (char *)v7 - v8;
      v19 = a2;
      v20 = a3;
      sub_4F6210(((__int64)v7 - v8) >> 3, v7, &v19, 0x7Au);
      v18 = (unsigned int *)&v17[a1[2]];
      *v18 = a2;
      v18[1] = a3;
    }
    return 0;
  }
  else
  {
    v19 = a2;
    v20 = a3;
    sub_4F6210(((__int64)v7 - v8) >> 3, &v19, nullptr, 0x7Bu);
    v12 = a1[2];
    v13 = a1[3];
    v14 = (char *)v10 - v12;
    if ( a1[4] < (unsigned __int64)(v13 + 1) )
    {
      v16 = qvector_reserve(a1 + 2, v12, v13 + 1, 8);
      v13 = a1[3];
      a1[2] = v16;
      v10 = (unsigned int *)&v14[v16];
    }
    memmove(v10 + 2, v10, 8 * v13 - (_QWORD)v14);
    *v10 = a2;
    v10[1] = a3;
    ++a1[3];
    return 1;
  }
}

