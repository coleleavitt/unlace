__int64 __fastcall sub_17FC20(const char *a1)
{
  const char *v1; // rbx
  QT::QWidget *v2; // rbp
  size_t v3; // rax
  void **p_ptr; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // r8
  int v9; // r12d
  __int64 v10; // rbp
  bool v11; // al
  __int64 v13; // [rsp+0h] [rbp-58h] BYREF
  __int128 v14; // [rsp+8h] [rbp-50h]
  void *ptr; // [rsp+20h] [rbp-38h] BYREF
  __int64 *v16; // [rsp+28h] [rbp-30h]
  __int64 v17; // [rsp+30h] [rbp-28h]
  unsigned __int64 v18; // [rsp+38h] [rbp-20h]

  v18 = __readfsqword(0x28u);
  if ( !a1 )
    return 0;
  v13 = 0;
  v14 = 0;
  v1 = sub_17C8E0(&v13, a1, 0);
  v2 = qword_8CD8B8;
  v3 = 0;
  if ( v1 )
    v3 = strlen(v1);
  QT::QString::fromUtf8(&ptr, v3, v1);
  p_ptr = &ptr;
  v7 = sub_4C6D30(v2, &ptr);
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    free(ptr);
  if ( v7 )
  {
    p_ptr = nullptr;
    v7 = sub_4CD6B0(v7, 0);
    if ( !(unsigned __int8)sub_47B440(v7) )
    {
      p_ptr = (void **)QT::QCoreApplication::self;
      if ( QT::QCoreApplication::self )
      {
        p_ptr = (void **)(QT::QCoreApplication::self + 2);
        sub_480540(&ptr, QT::QCoreApplication::self + 2, v7);
        if ( v17 )
        {
          v9 = 0;
          v10 = 0;
          if ( v17 <= 0 )
            goto LABEL_26;
          do
          {
            if ( (unsigned __int8)sub_1F41C0(v16[v10]) )
            {
              v7 = v16[v10];
              v11 = v7 == 0;
            }
            else
            {
              v11 = 1;
              v7 = 0;
            }
            v10 = ++v9;
          }
          while ( v9 < v17 && v11 );
          if ( !v7 )
LABEL_26:
            v7 = *v16;
        }
        if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
          free(ptr);
      }
    }
  }
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree(v13, p_ptr, v5, v6, v8);
  }
  return v7;
}
