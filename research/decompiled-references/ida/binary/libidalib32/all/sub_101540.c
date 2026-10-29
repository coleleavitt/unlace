unsigned __int64 __fastcall sub_101540(__int64 a1)
{
  __int64 v1; // r12
  TView *v2; // rbp
  __int64 Extent; // rax
  int v4; // edx
  __int64 v6; // [rsp+10h] [rbp-58h] BYREF
  __int128 v7; // [rsp+18h] [rbp-50h]
  __int64 v8; // [rsp+28h] [rbp-40h]
  __int128 v9; // [rsp+30h] [rbp-38h]
  int v10; // [rsp+40h] [rbp-28h]
  unsigned __int64 v11; // [rsp+48h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  v10 = 4194308;
  v1 = TProgram::application;
  v7 = 0;
  v6 = 0;
  v9 = 0;
  v8 = 0;
  if ( TFileList::getKey((TFileList *)TProgram::application, *(const char **)(a1 + 56)) )
  {
    if ( !under_debugger )
      interr();
    BUG();
  }
  v2 = (TView *)operator new(0xB8u);
  Extent = TView::getExtent(TProgram::deskTop);
  sub_153F70(v2, Extent, v4, v6);
  (*(void (__fastcall **)(__int64, TView *, __int64 *))(*(_QWORD *)(v1 + 136) + 120LL))(v1 + 136, v2, &v6);
  if ( v8 )
  {
    *(_QWORD *)&v9 = 0;
    qfree();
  }
  if ( v6 )
  {
    *(_QWORD *)&v7 = 0;
    qfree();
  }
  return v11 - __readfsqword(0x28u);
}

