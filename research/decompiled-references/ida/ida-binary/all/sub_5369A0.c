__int64 __fastcall sub_5369A0(const char *a1, QT::QAction *a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  QT::QAction *v6; // rbx
  __int64 v8; // rax
  void *v9; // r12
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // ebp
  void **v14; // rbx
  __int64 v15; // r13
  __int128 v17; // [rsp+0h] [rbp-68h] BYREF
  __m128i ptr; // [rsp+10h] [rbp-58h] BYREF
  __int64 v19; // [rsp+20h] [rbp-48h]
  unsigned __int64 v20; // [rsp+28h] [rbp-40h]

  v6 = a2;
  v20 = __readfsqword(0x28u);
  if ( a2 )
  {
    if ( *(_BYTE *)a2 && (*(_BYTE *)a2 != 45 || *((_BYTE *)a2 + 1)) )
    {
      v8 = sub_534430((const char *)a2);
      if ( !v8 )
        return 0;
      v6 = *(QT::QAction **)(v8 + 192);
      if ( !v6 )
        return 0;
    }
    else
    {
      v6 = nullptr;
    }
  }
  v17 = 0;
  sub_536580(&ptr, a1, (a3 & 0x40000) != 0, a4, a5, a6);
  v9 = (void *)ptr.m128i_i64[0];
  v13 = sub_535E60((QT::QWidget **)&v17, &ptr, 1u, v10, v11, v12);
  if ( (_BYTE)v13 )
  {
    if ( v6 )
      v13 = sub_533EC0((QT::QMenu **)&v17, v6, a3);
    else
      v13 = sub_533EC0((QT::QMenu **)&v17, nullptr, a3);
  }
  if ( v9 && !_InterlockedSub((volatile signed __int32 *)v9, 1u) )
  {
    v14 = (void **)ptr.m128i_i64[1];
    v15 = ptr.m128i_i64[1] + 24 * v19;
    if ( ptr.m128i_i64[1] != v15 )
    {
      do
      {
        if ( *v14 && !_InterlockedSub((volatile signed __int32 *)*v14, 1u) )
          free(*v14);
        v14 += 3;
      }
      while ( (void **)v15 != v14 );
    }
    free(v9);
  }
  return v13;
}
