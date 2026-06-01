__int64 __fastcall sub_141D90(__int64 a1, __int16 *a2)
{
  __int16 v2; // ax
  unsigned int v4; // r12d
  __int64 v5; // rax
  __int16 v6; // ax
  __int64 v7; // rax
  int v8; // edx
  int v9; // rdx^4
  const char *v10; // rsi
  __int64 Extent; // rax
  int v12; // edx
  int v13; // rdx^4
  const char *v14; // [rsp+0h] [rbp-38h] BYREF
  __int128 v15; // [rsp+8h] [rbp-30h]
  unsigned __int64 v16; // [rsp+18h] [rbp-20h]

  v2 = *a2;
  v16 = __readfsqword(0x28u);
  if ( v2 == 16 )
  {
    if ( sub_19D270((unsigned __int16)a2[4]) )
    {
      v15 = 0;
      v14 = nullptr;
      if ( !(unsigned __int8)call_idc_func() )
      {
        v10 = s1;
        if ( (_QWORD)v15 )
          v10 = v14;
        sub_92200((__int64)"%s", v10);
      }
      return v16 - __readfsqword(0x28u);
    }
    TScreen::makeBeep(nullptr);
  }
  else
  {
    if ( v2 != 256 )
      return v16 - __readfsqword(0x28u);
    v4 = (unsigned __int16)a2[4];
    v5 = sub_19BD30((unsigned __int16)a2[4]);
    if ( !v5
      || *(int *)(v5 + 120) > 3
      || (*(_BYTE *)(v5 + 114) & 0x20) != 0
      || !(unsigned int)sub_153220(0, v5, v4) && unk_254269 )
    {
      v6 = a2[4];
      if ( v6 == 20 )
      {
        Extent = TView::getExtent(TProgram::deskTop);
        LODWORD(v15) = v12;
        v14 = (const char *)Extent;
        DWORD1(v15) = v13 - 2;
        TDeskTop::tile(TProgram::deskTop, &v14);
      }
      else if ( v6 == 21 )
      {
        v7 = TView::getExtent(TProgram::deskTop);
        LODWORD(v15) = v8;
        v14 = (const char *)v7;
        DWORD1(v15) = v9 - 2;
        TDeskTop::cascade(TProgram::deskTop, &v14);
      }
      else
      {
        if ( v6 != unk_24F08E )
          return v16 - __readfsqword(0x28u);
        call_system();
      }
    }
  }
  return TView::clearEvent(a1 + 8, a2);
}

