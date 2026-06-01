TGroup *__fastcall sub_141050(__int64 a1, TView *a2, __int64 a3)
{
  unsigned __int64 v4; // r13
  unsigned __int64 v6; // r13
  TView *v7; // rbx
  TGroup *v8; // r13
  TGroup *v9; // rdi
  __int64 v10; // rdi
  const void *v12; // r15
  void *v13; // rdi
  const void *v14; // r14
  __int64 v15; // rdx
  __int64 Extent; // [rsp+0h] [rbp-88h] BYREF
  __int64 v17; // [rsp+8h] [rbp-80h]
  char *v18; // [rsp+10h] [rbp-78h]
  __int128 v19; // [rsp+18h] [rbp-70h]
  void *dest; // [rsp+28h] [rbp-60h]
  __int128 v21; // [rsp+30h] [rbp-58h]
  int v22; // [rsp+40h] [rbp-48h]
  unsigned __int64 v23; // [rsp+48h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  v22 = 0;
  v18 = nullptr;
  dest = nullptr;
  v19 = 0;
  v21 = 0;
  if ( a3 )
  {
    v4 = *(_QWORD *)(a3 + 8);
    if ( v4 >= 2 )
    {
      v14 = *(const void **)a3;
      v18 = (char *)qvector_reserve();
      *(_QWORD *)&v19 = v4;
      memmove(v18, v14, v4 - 1);
      v18[v4 - 1] = 0;
    }
    v6 = *(_QWORD *)(a3 + 32);
    if ( v6 > 1 )
    {
      v12 = *(const void **)(a3 + 24);
      v13 = dest;
      if ( *((_QWORD *)&v21 + 1) < v6 )
      {
        dest = (void *)qvector_reserve();
        v13 = dest;
      }
      *(_QWORD *)&v21 = v6;
      memmove(v13, v12, v6 - 1);
      *((char *)dest + v6 - 1) = 0;
    }
    else
    {
      *(_QWORD *)&v21 = 0;
    }
    v22 = *(_DWORD *)(a3 + 48);
  }
  if ( callui(7, 0x1DA11B00000000LL, 0, 0, 0, &callui, Extent, v17, v18, v19) <= 0
    && TFileList::getKey((TFileList *)TProgram::application, (const char *)a2) )
  {
    if ( a2 )
    {
      v7 = a2;
      while ( !(unsigned __int8)sub_144A20(v7) )
      {
        v7 = *((TView **)v7 + 7);
        if ( !v7 )
          goto LABEL_26;
      }
      v8 = v7;
      v9 = TProgram::deskTop;
    }
    else
    {
LABEL_26:
      if ( (unsigned __int64)v21 > 1 )
      {
        v8 = (TGroup *)operator new(0xC0u);
        Extent = TView::getExtent(TProgram::deskTop);
        v17 = v15;
        TWindowInit::TWindowInit((char *)v8 + 184, TWindow::initFrame);
        sub_144880(v8, &off_232A70, &Extent, dest);
        *((_QWORD *)v8 + 22) = a2;
        *(_QWORD *)v8 = &off_2392B8;
        TGroup::insert(v8, a2);
        v9 = TProgram::deskTop;
        v7 = v8;
        if ( !v8 )
          v7 = a2;
      }
      else
      {
        v7 = a2;
        v8 = nullptr;
        v9 = TProgram::deskTop;
      }
    }
    TGroup::insert(v9, v7);
    v10 = message(a2, 0x100u, 0x13ECu, nullptr);
    if ( v10 )
      sub_1882D0(v10, 1);
    sub_1758E0(a1 + 136, a2, 1);
  }
  else
  {
    v8 = nullptr;
  }
  if ( dest )
  {
    *(_QWORD *)&v21 = 0;
    qfree();
  }
  if ( v18 )
  {
    *(_QWORD *)&v19 = 0;
    qfree();
  }
  return v8;
}

