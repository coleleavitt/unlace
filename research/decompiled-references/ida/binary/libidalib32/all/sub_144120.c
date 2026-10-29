unsigned __int64 __fastcall sub_144120(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r8
  _BYTE *v5; // rax
  __int64 v7; // rsi
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rsi
  unsigned __int64 v13; // [rsp+8h] [rbp-20h]

  LODWORD(v4) = 0;
  v5 = byte_252EF0;
  v13 = __readfsqword(0x28u);
  while ( 1 )
  {
    v7 = (int)v4;
    v4 = (unsigned int)(v4 + 1);
    if ( !*v5 )
      break;
    ++v5;
    if ( (_DWORD)v4 == 9 )
    {
      v4 = 0;
      goto LABEL_5;
    }
  }
  byte_252EF0[v7] = 1;
LABEL_5:
  TWindow::TWindow(a1, a2 + 1, a3, a4, v4);
  v8 = *a2;
  v9 = *((_QWORD *)&xmmword_252F08 + 1);
  *(_WORD *)(a1 + 26) |= 0xFF1Fu;
  *(_QWORD *)a1 = v8;
  v10 = xmmword_252F08;
  *(_BYTE *)(a1 + 168) = 0;
  v11 = qword_252F00;
  if ( v9 < v10 + 1 )
  {
    qword_252F00 = qvector_reserve();
    v11 = qword_252F00;
    v10 = xmmword_252F08;
  }
  *(_QWORD *)(v11 + 8 * v10) = a1;
  *(_QWORD *)&xmmword_252F08 = xmmword_252F08 + 1;
  return v13 - __readfsqword(0x28u);
}

