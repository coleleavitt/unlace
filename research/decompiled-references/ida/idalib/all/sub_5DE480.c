__int64 __fastcall sub_5DE480(_QWORD *a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4, __int64 a5, int a6)
{
  int v7; // r14d
  __int64 v10; // rax
  __int64 (__fastcall *v11)(__int64); // rax
  _QWORD **v12; // rcx
  unsigned __int64 *v13; // rdx
  unsigned __int64 v14; // rsi
  int *v15; // rax
  int *v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // rdx
  unsigned int v19; // ebp
  _QWORD **v20; // rbx
  void *v21; // rdi
  unsigned __int64 v24; // [rsp+18h] [rbp-B0h] BYREF
  int v25[2]; // [rsp+20h] [rbp-A8h] BYREF
  int v26; // [rsp+28h] [rbp-A0h]
  int v27[2]; // [rsp+30h] [rbp-98h]
  int v28[2]; // [rsp+38h] [rbp-90h]
  int v29[2]; // [rsp+40h] [rbp-88h]
  __int64 v30; // [rsp+50h] [rbp-78h] BYREF
  int v31; // [rsp+58h] [rbp-70h] BYREF
  void *v32; // [rsp+60h] [rbp-68h]
  int *v33; // [rsp+68h] [rbp-60h]
  int *v34; // [rsp+70h] [rbp-58h]
  __int64 v35; // [rsp+78h] [rbp-50h]
  unsigned __int64 v36; // [rsp+88h] [rbp-40h]

  v7 = 0;
  v36 = __readfsqword(0x28u);
  *(_DWORD *)(a2 + 64) |= 8u;
  v10 = *(_QWORD *)a2;
  v31 = 0;
  v11 = *(__int64 (__fastcall **)(__int64))(v10 + 56);
  v33 = &v31;
  v32 = nullptr;
  v34 = &v31;
  v35 = 0;
  if ( v11 != sub_5C3F10 )
    goto LABEL_14;
LABEL_2:
  if ( v7 >= *(_DWORD *)(a2 + 80) )
  {
LABEL_15:
    *(_QWORD *)v29 = a3;
    *(_QWORD *)v25 = 0;
    v26 = -1;
    *(_QWORD *)v27 = a3;
    *(_QWORD *)v28 = a4;
    if ( a3 < a4 )
    {
      v19 = sub_5DCEC0(a1, a2, (__int64)v25, &v30, 1, a6);
      if ( *(_QWORD *)v25 )
      {
        lock_func_range(*(_QWORD *)v25, 0);
        v12 = (_QWORD **)v32;
        goto LABEL_18;
      }
    }
    else
    {
      v19 = 0;
    }
    v12 = (_QWORD **)v32;
    goto LABEL_18;
  }
  while ( 1 )
  {
    v12 = (_QWORD **)v32;
    v13 = (unsigned __int64 *)(*(_QWORD *)(a2 + 72) + ((__int64)v7 << 6));
    v14 = *v13;
    v15 = (int *)v32;
    v24 = *v13;
    if ( a3 < v13[1] && v14 < a4 )
      break;
    v16 = &v31;
    if ( !v32 )
      goto LABEL_12;
    do
    {
      while ( 1 )
      {
        v17 = *((_QWORD *)v15 + 2);
        v18 = *((_QWORD *)v15 + 3);
        if ( *((_QWORD *)v15 + 4) < v14 )
          break;
        v16 = v15;
        v15 = *((int **)v15 + 2);
        if ( !v17 )
          goto LABEL_10;
      }
      v15 = *((int **)v15 + 3);
    }
    while ( v18 );
LABEL_10:
    if ( v16 == &v31 || v14 < *((_QWORD *)v16 + 4) )
    {
LABEL_12:
      *(_QWORD *)v25 = &v24;
      v16 = (int *)sub_5D7C40(&v30, v16, (unsigned __int64 **)v25);
    }
    v16[10] = v7++;
    v11 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL);
    if ( v11 == sub_5C3F10 )
      goto LABEL_2;
LABEL_14:
    if ( v7 >= (int)v11(a2) )
      goto LABEL_15;
  }
  v19 = 0;
LABEL_18:
  v20 = v12;
  while ( v20 )
  {
    sub_5D8770(v20[3]);
    v21 = v20;
    v20 = (_QWORD **)v20[2];
    operator delete(v21, 0x30u);
  }
  return v19;
}
