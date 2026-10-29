unsigned __int64 __fastcall sub_1749D0(_QWORD *a1, __int16 *a2)
{
  __int16 v3; // ax
  __int64 v5; // rax
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rax
  __int16 v11[6]; // [rsp+Ch] [rbp-2Ch] BYREF
  unsigned __int64 v12; // [rsp+18h] [rbp-20h]

  v3 = *a2;
  v12 = __readfsqword(0x28u);
  if ( v3 == 16 )
  {
    v7 = (__int64)(a2 + 4);
    sub_19CD20(v11, v7);
    v8 = sub_10A9E0(v11[0], v7);
    if ( v8 )
    {
      *a2 = 256;
      v9 = *(unsigned __int16 *)(v8 + 168);
      a2[4] = v9;
      *((_QWORD *)a2 + 2) = *((_QWORD *)TProgram::deskTop + 9);
      goto LABEL_8;
    }
    v3 = *a2;
  }
  if ( v3 != 256 )
    goto LABEL_3;
  v9 = (unsigned __int16)a2[4];
LABEL_8:
  v10 = sub_19BD30(v9);
  if ( v10 && (*(_BYTE *)(v10 + 114) & 0x20) != 0 )
    a2[4] = *(_WORD *)(v10 + 172);
LABEL_3:
  TWindow::handleEvent();
  (*(void (__fastcall **)(_QWORD *, __int16 *))(*a1 + 120LL))(a1, a2);
  v5 = (*(__int64 (__fastcall **)(_QWORD *))(a1[17] + 80LL))(a1 + 17);
  if ( *(_QWORD *)(v5 + 8) )
  {
    *(_QWORD *)(v5 + 8) = 0;
    sub_19C290(7, 0, 0);
  }
  return v12 - __readfsqword(0x28u);
}

