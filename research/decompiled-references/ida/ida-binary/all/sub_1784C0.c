__int64 __fastcall sub_1784C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int8 a5)
{
  bool v5; // zf
  QT::QTextLayout *v7; // rdi
  __int64 v8; // rdx
  int v9; // ebx
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  QT::QTextLayout *v13; // r14
  int v14; // [rsp+10h] [rbp-48h] BYREF
  __int64 v15; // [rsp+18h] [rbp-40h]
  unsigned __int64 v16; // [rsp+28h] [rbp-30h]

  v5 = *(_BYTE *)(a2 + 264) == 0;
  v16 = __readfsqword(0x28u);
  if ( v5 )
  {
    sub_177E20(a2 + 48, a2, a4, *(_QWORD *)(a1 + 16));
    v7 = *(QT::QTextLayout **)(a2 + 96);
    *(_BYTE *)(a2 + 264) = 1;
    if ( v7 )
      goto LABEL_3;
  }
  else
  {
    v7 = *(QT::QTextLayout **)(a2 + 96);
    if ( v7 )
      goto LABEL_3;
  }
  v13 = (QT::QTextLayout *)operator new(8u);
  QT::QTextLayout::QTextLayout(v13);
  *(_QWORD *)(a2 + 96) = v13;
  QT::QTextLayout::setCacheEnabled(v13, 1);
  v7 = *(QT::QTextLayout **)(a2 + 96);
LABEL_3:
  v14 = QT::QTextLayout::lineAt(v7, 0);
  v15 = v8;
  v9 = QT::QTextLine::xToCursor(&v14, a5);
  if ( v9 >= 0 )
  {
    v10 = *(_QWORD *)(a2 + 136);
    if ( v10 )
    {
      v11 = *(_QWORD *)(a2 + 128);
      if ( v9 >= v10 )
        v9 += *(_DWORD *)(v11 + 4 * v10 - 4) + 1 - v10;
      else
        v9 = *(_DWORD *)(v11 + 4LL * v9);
    }
    else
    {
      v9 = 0;
    }
  }
  QT::QTextLine::naturalTextWidth((QT::QTextLine *)&v14);
  return (unsigned int)v9;
}
