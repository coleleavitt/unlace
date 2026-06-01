__int64 __fastcall sub_18CBA0(__int64 a1, int a2, unsigned __int8 a3)
{
  TView *v4; // rax
  TView *v5; // rbx
  TView *v6; // rdi
  TView *v7; // r14
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // r15d
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v14[9]; // [rsp+0h] [rbp-48h] BYREF

  v14[1] = __readfsqword(0x28u);
  v4 = (TView *)sub_184EF0(a1, a2, nullptr, v14);
  if ( !v4 )
    return 0;
  v5 = v4;
  v6 = v4;
  v7 = *(TView **)(*((_QWORD *)v4 + 7) + 72LL);
  v8 = *(_QWORD *)v4;
  TInputLine::disableReselect = 1;
  (*(void (__fastcall **)(TView *, __int64, _QWORD))(v8 + 168))(v6, 1, a3);
  v9 = v14[0];
  if ( v14[0] && *(_QWORD *)(v14[0] + 16) )
  {
    v10 = 0;
    v11 = 0;
    do
    {
      ++v10;
      v12 = *(_QWORD *)(*(_QWORD *)(v9 + 8) + 8 * v11);
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v12 + 168LL))(v12, 1, a3);
      v9 = v14[0];
      v11 = v10;
    }
    while ( (unsigned __int64)v10 < *(_QWORD *)(v14[0] + 16) );
  }
  if ( v5 != v7 || a3 )
    TView::select(v7);
  TInputLine::disableReselect = 0;
  return 1;
}

