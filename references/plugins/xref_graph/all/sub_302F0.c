void __fastcall sub_302F0(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r13
  void *v5[4]; // [rsp+0h] [rbp-68h] BYREF
  void *ptr[9]; // [rsp+20h] [rbp-48h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      **(double **)(a2 + 32) = (double)**(int **)(a4 + 8) / 100.0 * (*(double *)(a2 + 24) - *(double *)(a2 + 16))
                             + *(double *)(a2 + 16);
      v4 = *(_QWORD *)(a2 + 40);
      QT::QString::fromUtf8(v5, 2, "%1");
      QT::QString::arg(ptr, v5, 0, 103, 0xFFFFFFFFLL, 32, **(double **)(a2 + 32));
      QT::QLabel::setText(v4, ptr);
      if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
      if ( v5[0] )
      {
        if ( !_InterlockedSub((volatile signed __int32 *)v5[0], 1u) )
          free(v5[0]);
      }
    }
  }
  else if ( a2 )
  {
    operator delete((void *)a2, 0x30u);
  }
}
