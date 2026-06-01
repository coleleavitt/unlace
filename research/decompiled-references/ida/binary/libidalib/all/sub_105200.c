__int64 __fastcall sub_105200(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  _QWORD *v3; // rax
  _QWORD *v4; // rbp
  TView *v5; // rbx
  unsigned int v6; // ebp
  __int128 v8; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  v2 = a2;
  v8 = 0;
  if ( !a2 )
    v2 = a1;
  v3 = (_QWORD *)operator new(0x10u);
  v3[1] = v2;
  v4 = v3;
  *v3 = a1;
  v5 = (TView *)operator new(0x60u);
  TMenuBox::TMenuBox(v5, &v8, v4, 0);
  *((_WORD *)v5 + 12) |= 0x300u;
  if ( TFileList::getKey((TFileList *)TProgram::application, (const char *)v5) )
  {
    v6 = TGroup::execView(TProgram::deskTop, v5);
    if ( v5 )
    {
      (*(void (__fastcall **)(TView *))(*(_QWORD *)v5 + 16LL))(v5);
      (*(void (__fastcall **)(TView *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  else
  {
    return (unsigned int)-1;
  }
  return v6;
}

