unsigned __int64 __fastcall sub_8AE0D0(__int64 a1, char a2)
{
  bool v2; // zf
  void *v4; // rdi
  int v6; // eax
  char *v7; // rax
  __int64 v8; // rdi
  char *v9; // rdx
  __int64 v10; // r13
  __int64 v11; // rbp
  char *v12; // rax
  void *v13; // rdi
  void *v14; // [rsp+0h] [rbp-98h] BYREF
  __int128 v15; // [rsp+8h] [rbp-90h]
  void *v16; // [rsp+20h] [rbp-78h] BYREF
  __int128 v17; // [rsp+28h] [rbp-70h]
  void *ptr; // [rsp+40h] [rbp-58h] BYREF
  __int128 v19; // [rsp+48h] [rbp-50h]
  int v20; // [rsp+62h] [rbp-36h]
  __int16 v21; // [rsp+66h] [rbp-32h]
  unsigned __int64 v22; // [rsp+68h] [rbp-30h]

  v2 = *(_QWORD *)(a1 + 432) == 0;
  v22 = __readfsqword(0x28u);
  if ( !v2 )
  {
    if ( !*(_DWORD *)(a1 + 208) )
      goto LABEL_3;
    v6 = *(_DWORD *)(a1 + 200);
    v14 = nullptr;
    v16 = nullptr;
    v20 = v6;
    LOWORD(v6) = *(_WORD *)(a1 + 204);
    v15 = 0;
    v21 = v6;
    v17 = 0;
    v16 = (void *)qvector_reserve(&v16, 0, 1, 6);
    v7 = (char *)v16 + 6 * v17;
    *(_DWORD *)v7 = v20;
    *((_WORD *)v7 + 2) = v21;
    v8 = *(_QWORD *)(a1 + 432);
    *(_QWORD *)&v17 = v17 + 1;
    ptr = nullptr;
    v19 = 0;
    if ( (unsigned int)sub_812730(v8, (__int64)&v16, (__int64 *)&v14, (__int64)&ptr) )
      sub_368890();
    if ( ptr )
    {
      *(_QWORD *)&v19 = 0;
      qfree(ptr);
    }
    if ( v16 )
    {
      *(_QWORD *)&v17 = 0;
      qfree(v16);
    }
    v9 = (char *)v14;
    if ( !v14 )
    {
LABEL_3:
      if ( !a2 )
        goto LABEL_4;
      goto LABEL_20;
    }
    v10 = v15;
    if ( (_QWORD)v15 )
    {
      v11 = 0;
      do
      {
        v12 = &v9[32 * v11];
        v13 = *((void **)v12 + 1);
        if ( v13 )
        {
          *((_QWORD *)v12 + 2) = 0;
          qfree(v13);
          v9 = (char *)v14;
        }
        ++v11;
      }
      while ( v10 != v11 );
    }
    *(_QWORD *)&v15 = 0;
    qfree(v9);
    if ( a2 )
LABEL_20:
      sub_8ACE30(a1);
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
  return v22 - __readfsqword(0x28u);
}
