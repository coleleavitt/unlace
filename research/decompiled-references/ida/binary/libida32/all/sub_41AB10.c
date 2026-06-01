unsigned __int64 __fastcall sub_41AB10(__int64 a1, __int64 a2, __int64 *a3)
{
  _QWORD *v6; // rax
  __int64 i; // rax
  __int64 v8; // rbp
  _QWORD *v9; // rdi
  unsigned int v10; // eax
  int v11; // r8d
  int v12; // r9d
  char *v13; // rdi
  int v14; // r15d
  const char *v15; // rcx
  const char *v16; // rdx
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // rax
  char v21; // [rsp+0h] [rbp-D8h]
  int v22; // [rsp+1Ch] [rbp-BCh] BYREF
  void *ptr; // [rsp+20h] [rbp-B8h] BYREF
  __int128 v24; // [rsp+28h] [rbp-B0h]
  _QWORD *v25; // [rsp+40h] [rbp-98h]
  __int64 v26; // [rsp+48h] [rbp-90h] BYREF
  _OWORD v27[4]; // [rsp+50h] [rbp-88h] BYREF
  unsigned __int64 v28; // [rsp+98h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  netnode_check(&v22, "$ desktops", 0, 0);
  if ( v22 != -1 )
  {
    v6 = *(_QWORD **)(a2 + 1480);
    v26 = 0;
    memset(v27, 0, sizeof(v27));
    v25 = v6;
    sub_6141A0(*v6, 26, &v26, 8);
    ptr = nullptr;
    v24 = 0;
    for ( i = sub_79C160(&v22, a2, &ptr, 72); i > 0; i = sub_79C1D0(&v22, a2, &ptr, v15, 72) )
    {
      v16 = haystack;
      if ( (_QWORD)v24 )
        v16 = (const char *)ptr;
      v17 = sub_79C090(&v22, a2, v16, 72);
      v18 = a3[1];
      v14 = v17;
      v19 = *a3;
      if ( a3[2] < (unsigned __int64)(v18 + 1) )
      {
        v20 = qvector_reserve(a3, v19, v18 + 1, 24);
        *a3 = v20;
        v18 = a3[1];
        v19 = v20;
      }
      v8 = v19 + 24 * v18;
      *(_QWORD *)v8 = 0;
      v9 = v25;
      *(_OWORD *)(v8 + 8) = 0;
      ++a3[1];
      v10 = sub_3B9110(v9, v14);
      v13 = (char *)v27;
      if ( v10 >= (unsigned int)v26 && v10 < HIDWORD(v26) )
      {
        LOBYTE(v27[0]) = 43;
        v14 -= v26;
        v13 = (char *)v27 + 1;
      }
      qsnprintf((int)v13, 63, (int)"%a", v14, v11, v12, v21);
      sub_3573A0((char **)v8);
      v15 = haystack;
      if ( (_QWORD)v24 )
        v15 = (const char *)ptr;
    }
    if ( ptr )
    {
      *(_QWORD *)&v24 = 0;
      qfree(ptr);
    }
  }
  return v28 - __readfsqword(0x28u);
}

