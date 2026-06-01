unsigned __int64 __fastcall sub_88A750(__int64 a1, char a2)
{
  bool v2; // zf
  void *v4; // rdi
  int v6; // eax
  char *v7; // rax
  __int64 v8; // rdi
  __int64 v9; // r8
  __int64 v10; // r9
  char *v11; // rdx
  __int64 v12; // r13
  __int64 v13; // rbp
  char *v14; // rax
  void *v15; // rdi
  void *v16; // [rsp+0h] [rbp-98h] BYREF
  __int128 v17; // [rsp+8h] [rbp-90h]
  void *v18; // [rsp+20h] [rbp-78h] BYREF
  __int128 v19; // [rsp+28h] [rbp-70h]
  void *ptr; // [rsp+40h] [rbp-58h] BYREF
  __int128 v21; // [rsp+48h] [rbp-50h]
  int v22; // [rsp+62h] [rbp-36h]
  __int16 v23; // [rsp+66h] [rbp-32h]
  unsigned __int64 v24; // [rsp+68h] [rbp-30h]

  v2 = *(_QWORD *)(a1 + 432) == 0;
  v24 = __readfsqword(0x28u);
  if ( !v2 )
  {
    if ( !*(_DWORD *)(a1 + 208) )
      goto LABEL_3;
    v6 = *(_DWORD *)(a1 + 200);
    v16 = nullptr;
    v18 = nullptr;
    v22 = v6;
    LOWORD(v6) = *(_WORD *)(a1 + 204);
    v17 = 0;
    v23 = v6;
    v19 = 0;
    v18 = (void *)qvector_reserve(&v18, 0, 1, 6);
    v7 = (char *)v18 + 6 * v19;
    *(_DWORD *)v7 = v22;
    *((_WORD *)v7 + 2) = v23;
    v8 = *(_QWORD *)(a1 + 432);
    *(_QWORD *)&v19 = v19 + 1;
    ptr = nullptr;
    v21 = 0;
    if ( (unsigned int)sub_7EF570(v8, (__int64)&v18, (__int64 *)&v16, (__int64)&ptr, v9, v10) )
      sub_365330();
    if ( ptr )
    {
      *(_QWORD *)&v21 = 0;
      qfree(ptr);
    }
    if ( v18 )
    {
      *(_QWORD *)&v19 = 0;
      qfree(v18);
    }
    v11 = (char *)v16;
    if ( !v16 )
    {
LABEL_3:
      if ( !a2 )
        goto LABEL_4;
      goto LABEL_20;
    }
    v12 = v17;
    if ( (_QWORD)v17 )
    {
      v13 = 0;
      do
      {
        v14 = &v11[32 * v13];
        v15 = *((void **)v14 + 1);
        if ( v15 )
        {
          *((_QWORD *)v14 + 2) = 0;
          qfree(v15);
          v11 = (char *)v16;
        }
        ++v13;
      }
      while ( v12 != v13 );
    }
    *(_QWORD *)&v17 = 0;
    qfree(v11);
    if ( a2 )
LABEL_20:
      sub_8894C0(a1);
  }
LABEL_4:
  v4 = *(void **)(a1 + 440);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 448) = 0;
    qfree(v4);
    *(_QWORD *)(a1 + 440) = 0;
    *(_QWORD *)(a1 + 456) = 0;
  }
  return v24 - __readfsqword(0x28u);
}

