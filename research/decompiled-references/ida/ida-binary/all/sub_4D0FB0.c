unsigned __int64 __fastcall sub_4D0FB0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  int *v7; // rbx
  unsigned __int64 v8; // rax
  int *v9; // rsi
  __int64 v10; // r12
  int v12; // [rsp+Ch] [rbp-4Ch] BYREF
  void *ptr[2]; // [rsp+10h] [rbp-48h] BYREF
  int *v14; // [rsp+20h] [rbp-38h]
  unsigned __int64 v15; // [rsp+28h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  v6 = a1[12];
  if ( v6 > 0 )
  {
    v7 = (int *)a1[11];
    if ( !v7 )
      v7 = (int *)&QT::QByteArray::_empty;
    v8 = (unsigned __int64)v6 >> 2;
    v14 = nullptr;
    *(_OWORD *)ptr = 0;
    if ( (int)v8 > 0 )
    {
      v9 = nullptr;
      v10 = (__int64)&v7[(unsigned int)(v8 - 1) + 1];
      while ( 1 )
      {
        v12 = *v7;
        sub_2EDC10((int **)ptr, v9, &v12, a4, a5, a6);
        if ( !ptr[0] || *(int *)ptr[0] > 1 )
          sub_187120((__int64)ptr, 0, 0, 0, a5, a6);
        if ( ++v7 == (int *)v10 )
          break;
        v9 = v14;
      }
    }
    QT::QSplitter::setSizes(a1[13], ptr);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
  }
  return v15 - __readfsqword(0x28u);
}
