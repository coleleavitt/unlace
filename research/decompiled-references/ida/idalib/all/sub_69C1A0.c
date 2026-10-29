unsigned __int64 __fastcall sub_69C1A0(_QWORD *a1, __int64 *a2, void *a3, unsigned __int64 a4)
{
  __int64 *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 *v8; // rdx
  __int64 v9; // rax
  void *v10; // r12
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  __int64 fchunk; // rbx
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // r15
  char v19; // dl
  char v20; // dl
  _QWORD *v21; // rbx
  void *v22; // rdi
  __int64 *v24; // rax
  int v25; // [rsp+0h] [rbp-C8h]
  int v27; // [rsp+8h] [rbp-C0h]
  __int64 v28; // [rsp+10h] [rbp-B8h]
  unsigned __int64 v29; // [rsp+10h] [rbp-B8h]
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
  v4 = sub_69C0D0(a1, a4);
  v5 = a1[2] + 16LL * a1[3];
  if ( v4 == (__int64 *)v5 )
  {
    a2[1] = getinf(20);
    if ( !a1[3] )
    {
      *a2 = getinf(19);
      return v44 - __readfsqword(0x28u);
    }
    v8 = (__int64 *)a1[2];
    v24 = v4 - 2;
    v7 = *(v4 - 1);
    v4 -= 4;
    if ( v8 == v24 )
      goto LABEL_34;
  }
  else
  {
    if ( (__int64 *)v5 == v4 + 2 )
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
    v8 = (__int64 *)a1[2];
  }
  if ( v4 == v8 )
  {
LABEL_34:
    v28 = *v8;
    goto LABEL_35;
  }
  v9 = *(v4 - 2);
  v28 = v9;
  if ( v8 == v4 - 2 )
LABEL_35:
    v9 = getinf(19);
  *a2 = v9;
  v10 = (void *)((__PAIR128__(v28, getinf(19)) - (unsigned __int64)v28) >> 64);
  v38 = v7 + 1;
  s = v10;
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
    if ( (unsigned __int64)a2[1] < *(_QWORD *)fchunk )
      break;
    v33 = fchunk;
    v10 = *(void **)(fchunk + 8);
    if ( *(char *)(fchunk + 17) < 0 )
    {
      v35 = 0;
      func_parent_iterator_set(&v35, fchunk);
      v16 = v35;
      v17 = *(_QWORD *)fchunk;
      v36 = 0;
      if ( v35 )
      {
        if ( *(char *)(v35 + 17) >= 0 )
          goto LABEL_9;
        if ( *(int *)(v35 + 32) > 0 )
        {
          while ( 1 )
          {
            func = get_func(*(_QWORD *)(*(_QWORD *)(v16 + 40) + 8LL * v36));
            v18 = func;
            if ( func )
            {
              sub_698670((char **)&s, (unsigned __int64 *)&func);
              if ( v19 )
                sub_69A460(v27, v18);
            }
            v16 = get_fchunk(v17);
            v35 = v16;
            if ( v36 + 1 >= *(_DWORD *)(v16 + 32) )
              break;
            ++v36;
          }
        }
        if ( v16 )
LABEL_9:
          lock_func_range(v16, 0);
      }
LABEL_10:
      if ( a2[1] < (unsigned __int64)v10 )
        break;
      continue;
    }
    sub_698670((char **)&s, (unsigned __int64 *)&v33);
    if ( !v20 )
      goto LABEL_10;
    sub_69A460(v27, fchunk);
    if ( a2[1] < (unsigned __int64)v10 )
      break;
  }
  while ( (unsigned __int64)v10 >= v29 );
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
