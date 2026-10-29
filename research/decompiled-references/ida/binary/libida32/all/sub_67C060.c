unsigned __int64 __fastcall sub_67C060(_QWORD *a1, _DWORD *a2, void *a3, unsigned int a4)
{
  _DWORD *v4; // rbx
  __int64 v5; // rax
  int v6; // eax
  int v7; // ebp
  _DWORD *v8; // rdx
  int v9; // eax
  unsigned int v10; // r12d
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  __int64 fchunk; // rbx
  __int64 v16; // rax
  unsigned int v17; // ebx
  __int64 v18; // r15
  char v19; // dl
  char v20; // dl
  _QWORD *v21; // rbx
  void *v22; // rdi
  _DWORD *v24; // rax
  int v25; // [rsp+0h] [rbp-C8h]
  int v27; // [rsp+8h] [rbp-C0h]
  __int64 v28; // [rsp+10h] [rbp-B8h]
  unsigned int v29; // [rsp+14h] [rbp-B4h]
  int v30; // [rsp+18h] [rbp-B0h]
  int v31; // [rsp+20h] [rbp-A8h]
  int v32; // [rsp+28h] [rbp-A0h]
  __int64 v33; // [rsp+30h] [rbp-98h] BYREF
  __int64 func; // [rsp+38h] [rbp-90h] BYREF
  __int64 v35; // [rsp+40h] [rbp-88h] BYREF
  int v36; // [rsp+48h] [rbp-80h]
  void *s; // [rsp+50h] [rbp-78h] BYREF
  __int64 v38; // [rsp+58h] [rbp-70h]
  void *v39; // [rsp+60h] [rbp-68h]
  __int64 v40; // [rsp+68h] [rbp-60h]
  int v41; // [rsp+70h] [rbp-58h]
  __int64 v42; // [rsp+78h] [rbp-50h]
  __int64 v43; // [rsp+80h] [rbp-48h] BYREF
  unsigned __int64 v44; // [rsp+88h] [rbp-40h]

  v44 = __readfsqword(0x28u);
  v4 = sub_67BFA0(a1, a4);
  v5 = a1[2] + 8LL * a1[3];
  if ( v4 == (_DWORD *)v5 )
  {
    a2[1] = getinf(20);
    if ( !a1[3] )
    {
      *a2 = getinf(19);
      return v44 - __readfsqword(0x28u);
    }
    v8 = (_DWORD *)a1[2];
    v24 = v4 - 2;
    v7 = *(v4 - 1);
    v4 -= 4;
    if ( v8 == v24 )
      goto LABEL_34;
  }
  else
  {
    if ( (_DWORD *)v5 == v4 + 2 )
    {
      v7 = v4[1];
      v6 = getinf(20);
    }
    else
    {
      v6 = v4[3];
      v7 = v6;
    }
    a2[1] = v6;
    v8 = (_DWORD *)a1[2];
  }
  if ( v4 == v8 )
  {
LABEL_34:
    HIDWORD(v28) = *v8;
    goto LABEL_35;
  }
  v9 = *(v4 - 2);
  HIDWORD(v28) = v9;
  if ( v8 == v4 - 2 )
LABEL_35:
    v9 = getinf(19);
  *a2 = v9;
  v10 = (__PAIR64__(HIDWORD(v28), getinf(19)) - HIDWORD(v28)) >> 32;
  HIDWORD(s) = v7 + 1;
  LODWORD(s) = v10;
  rangeset_t_add((int)a3, (int)&s, v11, v12, v13, v14, v25, a3, v28, v30, v31, v32, v33);
  v38 = 1;
  s = &v43;
  v39 = nullptr;
  v40 = 0;
  v41 = 1065353216;
  v42 = 0;
  v43 = 0;
  do
  {
    fchunk = get_fchunk(v10);
    if ( !fchunk )
    {
      fchunk = get_next_fchunk(v10);
      if ( !fchunk )
        break;
    }
    if ( a2[1] < *(_DWORD *)fchunk )
      break;
    v10 = *(_DWORD *)(fchunk + 4);
    v33 = fchunk;
    if ( *(char *)(fchunk + 9) < 0 )
    {
      v35 = 0;
      func_parent_iterator_set(&v35, fchunk);
      v16 = v35;
      v17 = *(_DWORD *)fchunk;
      v36 = 0;
      if ( v35 )
      {
        if ( *(char *)(v35 + 9) >= 0 )
          goto LABEL_9;
        if ( *(int *)(v35 + 20) > 0 )
        {
          while ( 1 )
          {
            func = get_func(*(unsigned int *)(*(_QWORD *)(v16 + 24) + 4LL * v36));
            v18 = func;
            if ( func )
            {
              sub_678820((char **)&s, (unsigned __int64 *)&func);
              if ( v19 )
                sub_67A520(v27, v18);
            }
            v16 = get_fchunk(v17);
            v35 = v16;
            if ( v36 + 1 >= *(_DWORD *)(v16 + 20) )
              break;
            ++v36;
          }
        }
        if ( v16 )
LABEL_9:
          lock_func_range(v16, 0);
      }
LABEL_10:
      if ( a2[1] < v10 )
        break;
      continue;
    }
    sub_678820((char **)&s, (unsigned __int64 *)&v33);
    if ( !v20 )
      goto LABEL_10;
    sub_67A520(v27, fchunk);
    if ( a2[1] < v10 )
      break;
  }
  while ( v10 >= v29 );
  v21 = v39;
  if ( v39 )
  {
    do
    {
      v22 = v21;
      v21 = (_QWORD *)*v21;
      operator delete(v22, 0x10u);
    }
    while ( v21 );
  }
  memset(s, 0, 8 * v38);
  v40 = 0;
  v39 = nullptr;
  if ( s != &v43 )
    operator delete(s, 8 * v38);
  return v44 - __readfsqword(0x28u);
}

