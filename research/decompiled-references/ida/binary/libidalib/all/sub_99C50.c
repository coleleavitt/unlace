unsigned __int64 __fastcall sub_99C50(TView *this)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 v3; // r13
  unsigned __int16 Color; // ax
  unsigned __int16 v5; // r12
  unsigned int v6; // ebx
  unsigned __int64 v7; // rcx
  __int16 v8; // dx
  _QWORD *v9; // rax
  unsigned __int64 v10; // rax
  __int64 v11; // r15
  _BYTE *v12; // rax
  __int16 v13; // si
  _BYTE *v15; // [rsp+10h] [rbp-488h]
  __int64 v16; // [rsp+28h] [rbp-470h] BYREF
  _BYTE v17[1024]; // [rsp+30h] [rbp-468h] BYREF
  _BYTE v18[40]; // [rsp+430h] [rbp-68h] BYREF
  unsigned __int64 v19; // [rsp+458h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  v1 = *((_QWORD *)this + 19);
  if ( !*(_BYTE *)(v1 + 248) )
  {
    v2 = *(_QWORD *)(v1 + 240);
    if ( v2 )
    {
      v3 = *(_QWORD *)(v2 + 856);
      if ( v3 )
      {
        Color = TView::getColor(this, 0x101u);
        if ( *((int *)this + 5) > 0 )
        {
          v5 = Color;
          v6 = 0;
          do
          {
            TDrawBuffer::moveChar((TDrawBuffer *)v17, 0, 0x20u, v5, *((_WORD *)this + 8) - 1);
            TDrawBuffer::moveChar((TDrawBuffer *)v17, *((_WORD *)this + 8) - 1, 0x7Cu, v5, *((_WORD *)this + 8) - 1);
            v9 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v3 + 104LL))(v3, 0, v6);
            if ( *v9
              && (*(_BYTE *)(*((_QWORD *)this + 19) + 508LL) & 1) == 0
              && (unsigned __int8)sub_99BB0((__int64)this, &v16, v9) )
            {
              v10 = btoa64();
              v7 = *((int *)this + 4);
              if ( v10 < v7 && v10 )
              {
                v11 = 0;
                v12 = &v18[v10];
                do
                {
                  v13 = -2 - v11;
                  v15 = v12;
                  ++v11;
                  TDrawBuffer::moveChar((TDrawBuffer *)v17, v7 + v13, (char)*(v12 - 1), v5, 1u);
                  LODWORD(v7) = *((_DWORD *)this + 4);
                  v12 = v15 - 1;
                }
                while ( v18 != v15 - 1 );
              }
            }
            else
            {
              LODWORD(v7) = *((_DWORD *)this + 4);
            }
            v8 = v6++;
            TView::writeLine(this, 0, v8, v7, 1, v17);
          }
          while ( *((_DWORD *)this + 5) > (signed int)v6 );
        }
      }
    }
  }
  return v19 - __readfsqword(0x28u);
}

