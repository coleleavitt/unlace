unsigned __int64 __fastcall sub_144A60(__int64 a1, unsigned __int16 a2)
{
  THelpFile *v2; // r12
  unsigned __int16 v3; // bp
  __int64 Extent; // rax
  __int64 v5; // rdx
  TView *v6; // rbx
  _QWORD v8[3]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  v2 = (THelpFile *)operator new(0x28u);
  THelpFile::THelpFile(v2, nullptr);
  v3 = a2;
  if ( a2 == 1 )
    v3 = 1145;
  Extent = TView::getExtent(TProgram::deskTop);
  v8[1] = v5;
  v8[0] = Extent;
  v6 = (TView *)operator new(0xB0u);
  THelpWindow::THelpWindow(v6, v8, v2, v3);
  if ( TFileList::getKey((TFileList *)TProgram::application, (const char *)v6) )
  {
    TGroup::execView((TGroup *)(a1 + 8), v6);
    if ( v6 )
    {
      (*(void (__fastcall **)(TView *))(*(_QWORD *)v6 + 16LL))(v6);
      (*(void (__fastcall **)(TView *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  return v9 - __readfsqword(0x28u);
}

