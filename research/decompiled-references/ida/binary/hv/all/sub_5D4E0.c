bool __fastcall sub_5D4E0(__int64 a1, __int64 a2, const char *a3, unsigned __int64 a4, __int64 a5, __int64 a6, int a7)
{
  int v9; // eax
  __int64 v11; // rax
  const char *v12; // rdx
  _QWORD *v13; // r14
  int v14; // eax
  __int64 v15; // rbp
  __int64 v16; // rbx
  size_t v17; // r12
  void *v18; // r12
  __int64 v19; // rbx
  _QWORD *v20; // r12
  void *v21; // rdi
  char *v22; // rdx
  __int64 v23; // r12
  __int64 i; // rbx
  char *v25; // rax
  void *v26; // rdi
  void *v27; // r15
  void *v28; // r12
  _UNKNOWN **v30; // [rsp+10h] [rbp-78h] BYREF
  char v31; // [rsp+18h] [rbp-70h] BYREF
  __int64 v32; // [rsp+20h] [rbp-68h]
  _QWORD *v33; // [rsp+28h] [rbp-60h]
  __int64 v34; // [rsp+30h] [rbp-58h]
  char *v35; // [rsp+38h] [rbp-50h]
  int v36; // [rsp+40h] [rbp-48h]
  unsigned __int64 v37; // [rsp+48h] [rbp-40h]

  v37 = __readfsqword(0x28u);
  if ( !(a5 | a4) )
    return 0;
  if ( a4 || (a7 & 0x80u) != 0 )
  {
    v31 = 0;
    v35 = &v31;
    v9 = a7;
    v32 = a2;
    LOBYTE(v9) = a7 & 0x7F;
    v33 = (_QWORD *)a4;
    v36 = v9;
    v34 = a6;
    v30 = &off_163180;
    return sub_5CF00((__int64)&v30, a3) == 0;
  }
  else
  {
    v11 = operator new(0x70u);
    v12 = haystack;
    v13 = (_QWORD *)v11;
    if ( *(_QWORD *)(a5 + 8) )
      v12 = *(const char **)a5;
    sub_5AA90(v11, a1, v12);
    v31 = 0;
    v35 = &v31;
    v14 = a7;
    v32 = a2;
    LOBYTE(v14) = a7 & 0x7F;
    v33 = v13;
    v36 = v14;
    v34 = a6;
    v30 = &off_163180;
    v15 = sub_5CF00((__int64)&v30, a3);
    if ( v13 )
    {
      v16 = v13[9];
      if ( (_QWORD *)v16 != v13 + 7 )
      {
        do
        {
          v17 = *(_QWORD *)(v16 + 40);
          if ( v17 )
          {
            v27 = (void *)sub_96030(*(_QWORD *)(v16 + 40));
            memcpy(v27, *(const void **)(v16 + 32), v17);
            v28 = *(void **)(v16 + 56);
            if ( v28 )
            {
              sub_59920(*(char ***)(v16 + 56));
              operator delete(v28, 0x50u);
            }
            if ( v27 )
              j__free(v27);
          }
          else
          {
            v18 = *(void **)(v16 + 56);
            if ( v18 )
            {
              sub_59920(*(char ***)(v16 + 56));
              operator delete(v18, 0x50u);
            }
          }
          v16 = std::_Rb_tree_increment();
        }
        while ( v13 + 7 != (_QWORD *)v16 );
      }
      v19 = v13[8];
      while ( v19 )
      {
        v20 = (_QWORD *)v19;
        sub_56ED0(*(_QWORD **)(v19 + 24));
        v21 = *(void **)(v19 + 32);
        v19 = *(_QWORD *)(v19 + 16);
        if ( v21 )
        {
          v20[5] = 0;
          j__free(v21);
        }
        operator delete(v20, 0x40u);
      }
      v22 = (char *)v13[3];
      if ( v22 )
      {
        v23 = v13[4];
        if ( v23 )
        {
          for ( i = 0; i != v23; ++i )
          {
            v25 = &v22[24 * i];
            v26 = *(void **)v25;
            if ( *(_QWORD *)v25 )
            {
              *((_QWORD *)v25 + 1) = 0;
              j__free(v26);
              v22 = (char *)v13[3];
            }
          }
        }
        v13[4] = 0;
        j__free(v22);
      }
      operator delete(v13, 0x70u);
    }
    return v15 == 0;
  }
}

