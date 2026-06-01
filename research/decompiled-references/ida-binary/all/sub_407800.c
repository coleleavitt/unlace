void __fastcall sub_407800(__int64 a1)
{
  void *v1; // rbp
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  bool v6; // r14
  __int64 v7; // rax
  void **v8; // rbx
  __int64 v9; // r12
  __m128i ptr; // [rsp+0h] [rbp-58h] BYREF
  __int64 v11; // [rsp+10h] [rbp-48h]
  unsigned __int64 v12; // [rsp+18h] [rbp-40h]

  v12 = __readfsqword(0x28u);
  ++*(_DWORD *)(a1 + 456);
  sub_404D90(&ptr, *(_QWORD *)(a1 + 136));
  *(_BYTE *)(a1 + 448) = 1;
  v1 = (void *)ptr.m128i_i64[0];
  sub_3FEC60(*(__m128i **)(a1 + 120), &ptr, v2, v3, v4, v5);
  if ( !*(_BYTE *)(a1 + 464) )
    QT::QTreeView::resizeColumnToContents(*(QT::QTreeView **)(a1 + 104), 0);
  ++*(_DWORD *)(a1 + 452);
  v6 = 0;
  if ( *(_QWORD *)(a1 + 352) )
    v6 = *(_QWORD *)(a1 + 376) != 0;
  v7 = operator new(0x30u);
  *(_DWORD *)v7 = 1;
  *(_QWORD *)(v7 + 16) = a1;
  *(_QWORD *)(v7 + 8) = &sub_4081B0;
  *(_QWORD *)(v7 + 24) = a1 + 456;
  *(_QWORD *)(v7 + 32) = a1 + 452;
  *(_BYTE *)(v7 + 40) = v6;
  QT::QTimer::singleShotImpl(50000000, 0, 0);
  if ( v1 && !_InterlockedSub((volatile signed __int32 *)v1, 1u) )
  {
    v8 = (void **)ptr.m128i_i64[1];
    v9 = ptr.m128i_i64[1] + 32 * v11;
    if ( ptr.m128i_i64[1] != v9 )
    {
      do
      {
        if ( *v8 )
        {
          if ( !_InterlockedSub((volatile signed __int32 *)*v8, 1u) )
            free(*v8);
        }
        v8 += 4;
      }
      while ( (void **)v9 != v8 );
    }
    free(v1);
  }
}
