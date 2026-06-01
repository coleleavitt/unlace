unsigned __int64 __fastcall sub_514A60(__int64 a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, __m128d a5)
{
  unsigned int v6; // esi
  unsigned int v8; // ebx
  int v9; // r13d
  int v10; // r14d
  __int64 v11; // rax
  QT::QTextLayout *v12; // rdi
  int v13; // eax
  void *v14; // rdx
  int v15; // r15d
  int v16; // eax
  int v18; // [rsp+4h] [rbp-74h]
  void *ptr[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v22; // [rsp+30h] [rbp-48h]
  unsigned __int64 v23; // [rsp+38h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a1 + 112) == -1 || (v6 = *(_DWORD *)(a1 + 116), v6 == -1) )
  {
    v18 = 0;
    v9 = 0;
    v10 = 0;
  }
  else
  {
    if ( (*(_BYTE *)(a1 + 96) & 1) != 0 )
    {
      sub_5149B0(a1 + 40);
      *(_DWORD *)(a1 + 96) &= ~1u;
      sub_5135F0(*(QT::QAbstractScrollArea **)(a1 + 80), *(_DWORD *)(a1 + 88), *(_DWORD *)(a1 + 92), a5);
      v6 = *(_DWORD *)(a1 + 116);
    }
    v8 = 0;
    v9 = 0;
    v10 = 0;
    v18 = 0;
    do
    {
      if ( (unsigned __int64)v8 < *(_QWORD *)(a1 + 64) )
      {
        v11 = *(_QWORD *)(a1 + 56) + 48LL * v8;
        if ( v11 )
        {
          v12 = *(QT::QTextLayout **)(v11 + 24);
          if ( v6 == v8 )
          {
            v13 = QT::QTextLayout::lineForTextPosition(v12, *(_DWORD *)(a1 + 112));
            LODWORD(ptr[0]) = v13;
            ptr[1] = v14;
            if ( v14 )
            {
              v15 = *(_DWORD *)(a1 + 112);
              v10 += v13;
              v16 = QT::QTextLine::textStart((QT::QTextLine *)ptr);
              v9 += *(_DWORD *)(a1 + 112);
              v18 = v15 - v16;
            }
          }
          else
          {
            v10 += QT::QTextLayout::lineCount(v12);
            QT::QTextLayout::text((QT::QTextLayout *)ptr);
            v9 += v22 + 1;
            if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
              free(ptr[0]);
          }
        }
      }
      v6 = *(_DWORD *)(a1 + 116);
      ++v8;
    }
    while ( v6 >= v8 );
  }
  if ( a2 )
    *a2 = v18;
  if ( a3 )
    *a3 = v10;
  if ( a4 )
    *a4 = v9;
  return v23 - __readfsqword(0x28u);
}
