__int64 __fastcall sub_5149B0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // r14
  __int64 v4; // rbx
  int v5; // ebp
  int v6; // eax
  const QT::QFont *v7; // r12
  int v8; // esi
  __int64 v9; // rax
  __int64 result; // rax

  v1 = QT::QAbstractScrollArea::viewport(*(QT::QAbstractScrollArea **)(a1 + 40));
  v2 = *(_QWORD *)(a1 + 24);
  v3 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 48) = 0;
  v4 = v3 + 48 * v2;
  v5 = *(_DWORD *)(*(_QWORD *)(v1 + 32) + 28LL) + 1 - *(_DWORD *)(*(_QWORD *)(v1 + 32) + 20LL);
  v6 = *(_DWORD *)(a1 + 56) | 2;
  v7 = (const QT::QFont *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 32LL) + 56LL);
  *(_DWORD *)(a1 + 56) = v6;
  if ( v3 != v4 )
  {
    v8 = 0;
    do
    {
      v9 = sub_514600(v3, v8, v7, v5);
      v8 = *(_DWORD *)(a1 + 48) + HIDWORD(v9);
      *(_DWORD *)(a1 + 48) = v8;
      if ( *(_DWORD *)(a1 + 52) < (unsigned int)v9 )
        *(_DWORD *)(a1 + 52) = v9;
      v3 += 48;
    }
    while ( v4 != v3 );
    v6 = *(_DWORD *)(a1 + 56);
  }
  result = v6 & 0xFFFFFFFD;
  *(_DWORD *)(a1 + 56) = result;
  return result;
}
