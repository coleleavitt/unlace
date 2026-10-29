__int64 __fastcall sub_187660(TView *this, int *a2, __int64 a3, __int16 a4)
{
  __int64 v6; // rax
  int v7; // ebx
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  TView *v12; // rdi
  int v14; // ebx
  int v15; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v16; // [rsp+8h] [rbp-30h]

  v6 = *(_QWORD *)this;
  v7 = *a2;
  v16 = __readfsqword(0x28u);
  (*(void (__fastcall **)(TView *, _QWORD))(v6 + 192))(this, 0);
  v15 = qustrlen() + 8;
  TGroup::forEach(this, (void (*)(TView *, void *))sub_183B30, &v15);
  TView::growTo(this, v15 + 2, a4 + 3);
  sub_186DE0(this, a3, a2[1]);
  TGroup::selectNext(this, 0);
  v9 = *((_QWORD *)this + 29);
  v10 = v7;
  *((_WORD *)this + 12) |= 0x300u;
  if ( v7 >= v9 )
  {
LABEL_7:
    v14 = v7 - v9;
    if ( *((_DWORD *)this + 116) <= v14 )
      goto LABEL_6;
    v12 = *((TView **)this + v14 + 54);
  }
  else
  {
    v11 = *((_QWORD *)this + 28);
    while ( 1 )
    {
      v12 = *(TView **)(v11 + 8 * v10);
      if ( v12 )
        break;
      v10 = ++v7;
      if ( v7 >= v9 )
        goto LABEL_7;
    }
  }
  TView::select(v12);
LABEL_6:
  *((_DWORD *)this + 84) = 1;
  return 1;
}

