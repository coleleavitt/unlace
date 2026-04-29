void __fastcall sub_30190(int a1, __int64 a2)
{
  __int64 v2; // r13
  void *v3[4]; // [rsp+0h] [rbp-68h] BYREF
  void *ptr[9]; // [rsp+20h] [rbp-48h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      QT::QAbstractSlider::setSliderPosition(
        *(QT::QAbstractSlider **)(a2 + 40),
        (int)((**(double **)(a2 + 32) - *(double *)(a2 + 16)) / (*(double *)(a2 + 24) - *(double *)(a2 + 16)) * 100.0));
      v2 = *(_QWORD *)(a2 + 48);
      QT::QString::fromUtf8(v3, 2, "%1");
      QT::QString::arg(ptr, v3, 0, 103, 0xFFFFFFFFLL, 32, **(double **)(a2 + 32));
      QT::QLabel::setText(v2, ptr);
      if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
      if ( v3[0] )
      {
        if ( !_InterlockedSub((volatile signed __int32 *)v3[0], 1u) )
          free(v3[0]);
      }
    }
  }
  else if ( a2 )
  {
    operator delete((void *)a2, 0x38u);
  }
}
