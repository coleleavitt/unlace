__int64 __fastcall sub_49F700(_BYTE *a1, unsigned int a2, _QWORD *a3, __int64 a4, __int64 *a5)
{
  __int64 v8; // r14
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdi
  bool v12; // zf
  void *v13; // rbx
  __int64 result; // rax
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // r12
  void *v18; // rbp
  __int64 v19; // rsi
  __int64 *v20; // rbx
  unsigned __int64 v21; // rbp
  __int64 v22; // rsi
  __int64 v23; // rdi
  __int64 v24; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v25; // [rsp+8h] [rbp-C0h]
  __int64 v26; // [rsp+10h] [rbp-B8h] BYREF
  int v27; // [rsp+18h] [rbp-B0h]
  int v28; // [rsp+20h] [rbp-A8h]
  __int64 v29; // [rsp+28h] [rbp-A0h]
  unsigned __int64 v30; // [rsp+30h] [rbp-98h]
  __int64 v31; // [rsp+38h] [rbp-90h]
  _DWORD v32[4]; // [rsp+40h] [rbp-88h] BYREF
  _DWORD v33[4]; // [rsp+50h] [rbp-78h] BYREF
  __int64 v34; // [rsp+60h] [rbp-68h]
  __int64 v35; // [rsp+68h] [rbp-60h]
  __int64 v36; // [rsp+70h] [rbp-58h]
  __int64 v37; // [rsp+78h] [rbp-50h]
  char *v38; // [rsp+80h] [rbp-48h]
  __int64 v39; // [rsp+88h] [rbp-40h]

  sub_B1F240(&v26, a5[1]);
  LOBYTE(v34) = *a1;
  if ( a2 )
  {
    v8 = a4 + 32LL * a2;
    do
    {
      sub_B211C0(&v26, a4, *a3);
      a4 += 32;
      ++a3;
    }
    while ( v8 != a4 );
  }
  sub_B221E0(
    (unsigned int)&v24,
    (unsigned int)&v26,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32[0],
    v32[2],
    v33[0],
    v33[2],
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  v10 = v24;
  v24 = *a5;
  v9 = v24;
  *a5 = v10;
  if ( v9 )
  {
    v11 = v25;
    v12 = (*(_DWORD *)(v9 + 8))-- == 1;
    if ( v12 )
      sub_15D7BC0(v11, v9);
  }
  if ( v39 )
    sub_186B220((void *)(v39 - 8));
  if ( v38 )
    sub_186B220(v38 - 8);
  if ( v37 )
    sub_186B220((void *)(v37 - 8));
  if ( v36 )
    sub_186B220((void *)(v36 - 8));
  if ( v35 )
    sub_186B220((void *)(v35 - 8));
  v13 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v32);
  result = sub_182CBA0(v13, v33);
  v15 = v31;
  if ( v31 )
  {
    v16 = *(unsigned int *)(v31 - 4);
    if ( (_DWORD)v16 )
    {
      v17 = v31 + 32 * v16;
      do
      {
        v18 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v15);
        v19 = v15 + 16;
        v15 += 32;
        sub_182CBA0(v18, v19);
      }
      while ( v15 != v17 );
      v15 = v31;
    }
    result = sub_186B220((void *)(v15 - 8));
  }
  v20 = (__int64 *)v30;
  if ( v30 )
  {
    result = *(unsigned int *)(v30 - 4);
    v21 = v30 + 8 * result;
    if ( v30 >= v21 )
      return sub_186B220(v20 - 1);
    do
    {
      while ( 1 )
      {
        v22 = *v20;
        if ( *v20 )
        {
          v23 = v29;
          v12 = (*(_DWORD *)(v22 + 8))-- == 1;
          if ( v12 )
            break;
        }
        if ( (unsigned __int64)++v20 >= v21 )
          goto LABEL_30;
      }
      result = sub_15D7BC0(v23, v22);
      ++v20;
    }
    while ( (unsigned __int64)v20 < v21 );
LABEL_30:
    v20 = (__int64 *)v30;
    if ( v30 )
      return sub_186B220(v20 - 1);
  }
  return result;
}

