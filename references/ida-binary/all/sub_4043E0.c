unsigned __int64 __fastcall sub_4043E0(void **a1, __int64 a2, void **a3)
{
  void **v3; // r9
  unsigned __int64 v5; // rdi
  void **v6; // rbp
  void **v7; // r8
  void **v8; // rax
  void **v9; // rsi
  void *v10; // rcx
  void *v11; // rcx
  void *v12; // rcx
  void **v13; // rdx
  void **v14; // rax
  void *v15; // rsi
  void *v16; // rcx
  void *v17; // rsi
  void *v18; // rcx
  void *v19; // rsi
  void *v20; // rcx
  volatile signed __int32 *v21; // rax
  volatile signed __int32 ***v22; // rdx
  __int64 v23; // rbx
  void **v24; // rax
  __int64 v25; // rbx
  volatile signed __int32 *v26; // rcx
  unsigned __int64 v28; // [rsp+8h] [rbp-40h] BYREF
  volatile signed __int32 ***v29; // [rsp+10h] [rbp-38h]
  void **v30; // [rsp+18h] [rbp-30h] BYREF
  void **v31; // [rsp+20h] [rbp-28h]
  unsigned __int64 v32; // [rsp+28h] [rbp-20h]

  v3 = a3;
  v5 = (unsigned __int64)&a3[4 * a2];
  v28 = (unsigned __int64)a3;
  v32 = __readfsqword(0x28u);
  v30 = a3;
  v29 = (volatile signed __int32 ***)&v28;
  if ( (unsigned __int64)a1 >= v5 )
  {
    if ( (void **)v5 == a3 )
      return v32 - __readfsqword(0x28u);
    v6 = a1;
    v7 = &a3[4 * a2];
  }
  else
  {
    v6 = &a3[4 * a2];
    v7 = a1;
    if ( a3 == a1 )
    {
      v31 = a1;
LABEL_6:
      v13 = v7;
      v14 = a1;
      do
      {
        v15 = *v14;
        v16 = *v13;
        v14 += 4;
        v13 += 4;
        *(v13 - 4) = v15;
        v17 = *(v14 - 3);
        *(v14 - 4) = v16;
        v18 = *(v13 - 3);
        *(v13 - 3) = v17;
        v19 = *(v14 - 2);
        *(v14 - 3) = v18;
        v20 = *(v13 - 2);
        *(v13 - 2) = v19;
        *(v14 - 2) = v20;
        *((_BYTE *)v13 - 8) = *((_BYTE *)v14 - 8);
        *((_BYTE *)v13 - 7) = *((_BYTE *)v14 - 7);
        *((_DWORD *)v13 - 1) = *((_DWORD *)v14 - 1);
      }
      while ( v14 != (void **)((char *)a1 + v5 - (_QWORD)v7) );
      v28 = v5;
      a1 = (void **)((char *)a1 + v5 - (char *)v7);
      goto LABEL_9;
    }
  }
  v8 = a1;
  v9 = (void **)((char *)a1 + (char *)v7 - (char *)a3);
  do
  {
    v10 = *v8;
    *v8 = nullptr;
    v8 += 4;
    a3 += 4;
    *(a3 - 4) = v10;
    v11 = *(v8 - 3);
    *(v8 - 3) = nullptr;
    *(a3 - 3) = v11;
    v12 = *(v8 - 2);
    *(v8 - 2) = nullptr;
    *(a3 - 2) = v12;
    *((_WORD *)a3 - 4) = *((_WORD *)v8 - 4);
    *((_DWORD *)a3 - 1) = *((_DWORD *)v8 - 1);
  }
  while ( v8 != v9 );
  v28 = (unsigned __int64)v7;
  v31 = v7;
  a1 = (void **)((char *)v7 + (char *)a1 - (char *)v3);
  if ( (void **)v5 != v7 )
    goto LABEL_6;
LABEL_9:
  v29 = (volatile signed __int32 ***)&v30;
  if ( a1 != v6 )
  {
    do
    {
      v21 = (volatile signed __int32 *)*(a1 - 4);
      a1 -= 4;
      if ( v21 && !_InterlockedSub(v21, 1u) )
        free(*a1);
    }
    while ( a1 != v6 );
    v22 = v29;
    v23 = 1;
    v24 = (void **)*v29;
    if ( *v29 >= (volatile signed __int32 **)v30 )
    {
      if ( v30 == v24 )
        return v32 - __readfsqword(0x28u);
      v23 = -1;
    }
    v25 = 4 * v23;
    do
    {
      *v22 = (volatile signed __int32 **)&v24[v25];
      v22 = v29;
      v24 = (void **)*v29;
      v26 = **v29;
      if ( v26 )
      {
        if ( !_InterlockedSub(v26, 1u) )
          free(*v24);
        v22 = v29;
        v24 = (void **)*v29;
      }
    }
    while ( v24 != v30 );
  }
  return v32 - __readfsqword(0x28u);
}
