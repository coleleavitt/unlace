__int64 __fastcall sub_6B75A0(__int64 *a1, char a2, __int64 *p_ptr)
{
  __int64 v4; // rdx
  bool v5; // zf
  const char *v6; // rax
  int *v7; // r12
  int *v8; // rax
  void **v9; // r13
  __int64 v10; // r15
  void **v11; // rbx
  __int64 v12; // rbp
  void *v13; // rdi
  char *v14; // rdx
  __int64 v15; // rbp
  __int64 v16; // rbx
  char *v17; // rax
  void *v18; // rdi
  unsigned __int8 v20; // [rsp+7h] [rbp-129h]
  void *ptr; // [rsp+8h] [rbp-128h] BYREF
  __int128 v22; // [rsp+10h] [rbp-120h]
  __int64 *v23; // [rsp+28h] [rbp-108h] BYREF
  void *v24; // [rsp+30h] [rbp-100h]
  __int128 v25; // [rsp+38h] [rbp-F8h]
  const char *v26; // [rsp+48h] [rbp-E8h]
  char v27; // [rsp+50h] [rbp-E0h]
  bool v28; // [rsp+51h] [rbp-DFh]
  _BYTE v29[144]; // [rsp+58h] [rbp-D8h] BYREF
  int v30; // [rsp+E8h] [rbp-48h] BYREF
  unsigned __int64 v31; // [rsp+F0h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  v4 = *a1;
  v24 = nullptr;
  v27 = a2 & 1;
  v25 = 0;
  v5 = *(_QWORD *)(v4 + 8) == 0;
  v28 = (a2 & 4) != 0;
  v6 = haystack;
  v23 = a1;
  if ( !v5 )
    v6 = *(const char **)v4;
  v26 = v6;
  v20 = sub_6B6250(&v23);
  if ( v20 != 1 && (a2 & 4) == 0 )
  {
    ptr = nullptr;
    v7 = &v30;
    v22 = 0;
    v8 = (int *)v29;
    do
    {
      *(_QWORD *)v8 = 0;
      v8 += 6;
      *((_OWORD *)v8 - 1) = 0;
    }
    while ( v8 != &v30 );
    if ( !p_ptr )
      p_ptr = (__int64 *)&ptr;
    v30 = 0;
    sub_6B4290((__int64)&v23, (__int64)v29, p_ptr, 5);
    do
    {
      v9 = *((void ***)v7 - 3);
      v7 -= 6;
      if ( v9 )
      {
        v10 = *((_QWORD *)v7 + 1);
        v11 = v9;
        v12 = 0;
        if ( v10 )
        {
          do
          {
            v13 = *v11;
            if ( *v11 )
            {
              v11[1] = nullptr;
              qfree(v13);
            }
            ++v12;
            v11 += 3;
          }
          while ( v10 != v12 );
        }
        qfree(v9);
      }
    }
    while ( v7 != (int *)v29 );
    if ( ptr )
    {
      *(_QWORD *)&v22 = 0;
      qfree(ptr);
    }
  }
  v14 = (char *)v24;
  if ( v24 )
  {
    v15 = v25;
    if ( (_QWORD)v25 )
    {
      v16 = 0;
      do
      {
        v17 = &v14[24 * v16];
        v18 = *(void **)v17;
        if ( *(_QWORD *)v17 )
        {
          *((_QWORD *)v17 + 1) = 0;
          qfree(v18);
          v14 = (char *)v24;
        }
        ++v16;
      }
      while ( v15 != v16 );
    }
    *(_QWORD *)&v25 = 0;
    qfree(v14);
  }
  return v20;
}
