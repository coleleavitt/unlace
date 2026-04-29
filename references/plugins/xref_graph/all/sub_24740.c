__int64 __fastcall sub_24740(QT::QGraphicsScene *this, __int64 a2, int a3)
{
  unsigned __int64 v3; // r9
  int v4; // eax
  unsigned int v5; // r13d
  volatile signed __int32 *v6; // rax
  __int64 *v7; // rbx
  __int64 *v8; // r12
  void *v10; // rbx
  void *v11[7]; // [rsp+0h] [rbp-38h] BYREF

  v3 = *((_QWORD *)this + 7);
  v11[1] = (void *)__readfsqword(0x28u);
  v11[0] = nullptr;
  v4 = sub_23960((__int64)this, (volatile signed __int32 **)v11, a2, a3, -1, v3);
  v5 = v4;
  if ( v4 != -1 )
    sub_1F8D0(
      (__int64)"Sticking to %d levels of depth to keep the graph size manageable.\nYou can add nodes manually.\n",
      v4);
  v6 = (volatile signed __int32 *)v11[0];
  if ( v11[0] )
  {
    v7 = *((__int64 **)v11[0] + 4);
    v8 = (__int64 *)((char *)v11[0] + 16);
    if ( v7 == (__int64 *)((char *)v11[0] + 16) )
      goto LABEL_13;
    do
    {
      sub_206A0(this, v7[4], v7[5]);
      v7 = (__int64 *)std::_Rb_tree_increment(v7);
    }
    while ( v8 != v7 );
    v6 = (volatile signed __int32 *)v11[0];
    if ( v11[0] )
    {
LABEL_13:
      if ( !_InterlockedSub(v6, 1u) )
      {
        v10 = v11[0];
        if ( v11[0] )
        {
          sub_1F600(*((_QWORD **)v11[0] + 3));
          operator delete(v10, 0x38u);
        }
      }
    }
  }
  return v5;
}
