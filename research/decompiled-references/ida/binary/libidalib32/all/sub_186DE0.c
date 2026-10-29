unsigned __int64 __fastcall sub_186DE0(TView *this, __int64 a2, int a3)
{
  int v3; // r15d
  __int64 v4; // r12
  _BYTE *v5; // rax
  int v6; // r13d
  int utf8_char; // eax
  _BYTE *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r13
  __int64 v12; // rcx
  int v13; // eax
  int v14; // edx
  int v15; // eax
  int v16; // r12d
  __int64 i; // rbp
  __int64 v18; // rax
  int v20; // [rsp+8h] [rbp-60h]
  _BYTE *v22; // [rsp+10h] [rbp-58h] BYREF
  int v23; // [rsp+18h] [rbp-50h]
  int v24; // [rsp+1Ch] [rbp-4Ch]
  unsigned __int64 v25; // [rsp+28h] [rbp-40h]

  v3 = 0;
  v4 = 0;
  v25 = __readfsqword(0x28u);
  *((_DWORD *)this + 116) = 0;
  do
  {
    v5 = *(_BYTE **)(a2 + 8 * v4);
    if ( v5 )
    {
      v22 = *(_BYTE **)(a2 + 8 * v4);
      if ( *v5 )
      {
        v6 = 0;
        do
        {
          utf8_char = get_utf8_char();
          v8 = v22;
          if ( utf8_char == -1 )
          {
            ++v22;
            utf8_char = (unsigned __int8)*v8++;
          }
          v6 += utf8_char != 126;
        }
        while ( *v8 );
        v20 = v6 + 4;
      }
      else
      {
        v20 = 4;
      }
      v9 = operator new(0x58u);
      v10 = *(_QWORD *)(a2 + 8 * v4);
      v11 = v9;
      v22 = nullptr;
      v12 = (unsigned __int16)asc_1D76F0[v4];
      v24 = 2;
      v23 = v20;
      TButton::TButton(v9, &v22, v10, v12, a3 == (_DWORD)v4);
      v13 = *((_DWORD *)this + 116);
      *((_QWORD *)this + v13 + 54) = v11;
      v14 = *(_DWORD *)(v11 + 16);
      *((_DWORD *)this + 116) = v13 + 1;
      v3 += v14 + 2;
    }
    ++v4;
  }
  while ( v4 != 4 );
  v15 = *((_DWORD *)this + 4);
  if ( v15 < v3 + 1 )
  {
    TView::growTo(this, v3 + 1, *((_WORD *)this + 10));
    v15 = *((_DWORD *)this + 4);
  }
  v16 = (v15 - v3) / 2;
  if ( !v16 )
    v16 = 1;
  for ( i = 0; *((_DWORD *)this + 116) > (int)i; v16 += *(_DWORD *)(v18 + 16) + 2 )
  {
    TGroup::insert(this, *((TView **)this + i + 54));
    TView::moveTo(*((TView **)this + i + 54), v16, *((_WORD *)this + 10) - 3);
    v18 = *((_QWORD *)this + i++ + 54);
  }
  return v25 - __readfsqword(0x28u);
}

