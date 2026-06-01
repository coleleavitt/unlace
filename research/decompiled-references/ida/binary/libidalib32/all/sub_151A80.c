unsigned __int64 __fastcall sub_151A80(TView *this)
{
  unsigned __int16 Color; // bp
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rdx
  int v6; // r8d
  __int64 v7; // r13
  char *v8; // rdx
  char *v10; // rdi
  char *v11; // rax
  unsigned __int64 v12; // r14
  char *v13; // [rsp+0h] [rbp-458h] BYREF
  __int128 v14; // [rsp+8h] [rbp-450h]
  _BYTE v15[1032]; // [rsp+20h] [rbp-438h] BYREF
  unsigned __int64 v16; // [rsp+428h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  v13 = nullptr;
  Color = TView::getColor(this, 1u);
  v3 = *((_QWORD *)this + 9);
  v14 = 0;
  v4 = sub_15CFF0(v3 + 440);
  (***(void (__fastcall ****)(_QWORD, char **, _QWORD))(v4 + 40))(
    *(_QWORD *)(v4 + 40),
    &v13,
    *(_QWORD *)(*((_QWORD *)this + 9) + 752LL));
  v5 = v14;
  v6 = *((_DWORD *)this + 4);
  if ( (_QWORD)v14 )
  {
    v7 = v6;
    if ( v6 < (unsigned __int64)(v14 - 1) )
    {
      v10 = v13;
      v11 = v13;
      if ( v6 )
      {
        v12 = v6 + 1LL;
        if ( (unsigned __int64)v14 < v12 )
        {
          if ( *((_QWORD *)&v14 + 1) < v12 )
          {
            v11 = (char *)qvector_reserve();
            v13 = v11;
            v5 = v14;
          }
          memset(&v11[v5], 0, v12 - v5);
          *(_QWORD *)&v14 = v7 + 1;
          v10 = v13;
        }
        else if ( (_QWORD)v14 != v6 + 1LL )
        {
          *(_QWORD *)&v14 = v6 + 1LL;
        }
        v10[v7] = 0;
        v6 = *((_DWORD *)this + 4);
      }
      else if ( v13 )
      {
        *(_QWORD *)&v14 = 0;
        qfree();
        v13 = nullptr;
        v6 = *((_DWORD *)this + 4);
        *((_QWORD *)&v14 + 1) = 0;
      }
      else
      {
        LOWORD(v6) = 0;
      }
    }
  }
  TDrawBuffer::moveChar((TDrawBuffer *)v15, 0, 0x20u, Color, v6);
  v8 = (char *)s1;
  if ( (_QWORD)v14 )
    v8 = v13;
  TDrawBuffer::moveStr((TDrawBuffer *)v15, 0, v8, Color);
  TView::writeLine(this, 0, 0, *((_WORD *)this + 8), 1, v15);
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree();
  }
  return v16 - __readfsqword(0x28u);
}

