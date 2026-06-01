__int64 __fastcall sub_5C2820(_QWORD *a1, __int64 a2, unsigned int a3, unsigned int a4, __int64 a5, int a6)
{
  int v7; // r14d
  __int64 v10; // rax
  __int64 (__fastcall *v11)(__int64); // rax
  unsigned int *v12; // rcx
  _QWORD **v13; // rdx
  unsigned int v14; // esi
  _QWORD *v15; // rax
  int *v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // rdx
  unsigned int v19; // ebp
  _QWORD **v20; // rbx
  void *v21; // rdi
  __int64 *v24; // [rsp+18h] [rbp-A0h] BYREF
  __int64 v25; // [rsp+20h] [rbp-98h] BYREF
  int v26; // [rsp+28h] [rbp-90h]
  unsigned int v27; // [rsp+2Ch] [rbp-8Ch]
  unsigned int v28; // [rsp+30h] [rbp-88h]
  unsigned int v29; // [rsp+38h] [rbp-80h]
  __int64 v30; // [rsp+40h] [rbp-78h] BYREF
  int v31; // [rsp+48h] [rbp-70h] BYREF
  void *v32; // [rsp+50h] [rbp-68h]
  int *v33; // [rsp+58h] [rbp-60h]
  int *v34; // [rsp+60h] [rbp-58h]
  __int64 v35; // [rsp+68h] [rbp-50h]
  unsigned __int64 v36; // [rsp+78h] [rbp-40h]

  v7 = 0;
  v36 = __readfsqword(0x28u);
  *(_DWORD *)(a2 + 56) |= 8u;
  v10 = *(_QWORD *)a2;
  v31 = 0;
  v11 = *(__int64 (__fastcall **)(__int64))(v10 + 56);
  v33 = &v31;
  v32 = nullptr;
  v34 = &v31;
  v35 = 0;
  if ( v11 != sub_5A9690 )
    goto LABEL_14;
LABEL_2:
  if ( v7 >= *(_DWORD *)(a2 + 72) )
  {
LABEL_15:
    v29 = a3;
    v25 = 0;
    v26 = -1;
    v27 = a3;
    v28 = a4;
    if ( a3 < a4 )
    {
      v19 = sub_5C1280(a1, a2, (__int64)&v25, &v30, 1, a6);
      if ( v25 )
      {
        lock_func_range(v25, 0);
        v13 = (_QWORD **)v32;
        goto LABEL_18;
      }
    }
    else
    {
      v19 = 0;
    }
    v13 = (_QWORD **)v32;
    goto LABEL_18;
  }
  while ( 1 )
  {
    v12 = (unsigned int *)(*(_QWORD *)(a2 + 64) + 56LL * v7);
    v13 = (_QWORD **)v32;
    v14 = *v12;
    v15 = v32;
    LODWORD(v25) = *v12;
    if ( a3 < v12[1] && v14 < a4 )
      break;
    v16 = &v31;
    if ( !v32 )
      goto LABEL_12;
    do
    {
      while ( 1 )
      {
        v17 = v15[2];
        v18 = v15[3];
        if ( *((_DWORD *)v15 + 8) < v14 )
          break;
        v16 = (int *)v15;
        v15 = (_QWORD *)v15[2];
        if ( !v17 )
          goto LABEL_10;
      }
      v15 = (_QWORD *)v15[3];
    }
    while ( v18 );
LABEL_10:
    if ( v16 == &v31 || v14 < v16[8] )
    {
LABEL_12:
      v24 = &v25;
      v16 = sub_5BC450(&v30, (__int64)v16, (_DWORD **)&v24);
    }
    v16[9] = v7++;
    v11 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL);
    if ( v11 == sub_5A9690 )
      goto LABEL_2;
LABEL_14:
    if ( v7 >= (int)v11(a2) )
      goto LABEL_15;
  }
  v19 = 0;
LABEL_18:
  v20 = v13;
  while ( v20 )
  {
    sub_5BCCE0(v20[3]);
    v21 = v20;
    v20 = (_QWORD **)v20[2];
    operator delete(v21, 0x28u);
  }
  return v19;
}

