unsigned __int64 __fastcall sub_1443B0(TView *this)
{
  int i; // r13d
  int v3; // esi
  unsigned int *v4; // rax
  int v5; // edx
  unsigned __int8 *v6; // rdi
  int v7; // ecx
  int v8; // edx
  __int16 v9; // dx
  unsigned __int16 Color; // [rsp+Ch] [rbp-84Ch]
  _BYTE v12[1024]; // [rsp+10h] [rbp-848h] BYREF
  unsigned int v13[80]; // [rsp+410h] [rbp-448h] BYREF
  _BYTE v14[712]; // [rsp+550h] [rbp-308h] BYREF
  unsigned __int64 v15; // [rsp+818h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  if ( unk_252DE0 )
    TProgram::appPalette = unk_252DE0 - 1;
  Color = TView::getColor(this, 1u);
  TDrawBuffer::moveChar((TDrawBuffer *)v12, 0x50u, 0x9296E2u, Color, 0xAFu);
  if ( *((int *)this + 5) > 0 )
  {
    for ( i = 0; *((_DWORD *)this + 5) > i; ++i )
    {
      v3 = 0;
      v4 = v13;
      v5 = 0;
      v6 = (unsigned __int8 *)&unk_1D71A0 + 10 * (i % 23);
      do
      {
        if ( v3 )
          goto LABEL_8;
        v8 = *v6;
        if ( (v8 & 0x80u) == 0 )
        {
          *v4++ = 9672418;
          v5 = 2 * v8;
          if ( v14 == (_BYTE *)v4 )
            break;
          goto LABEL_7;
        }
        *v4++ = 9606882;
        v5 = 2 * v8;
        if ( v14 == (_BYTE *)v4 )
          break;
LABEL_7:
        ++v6;
        v3 = 7;
LABEL_8:
        v7 = (char)v5;
        ++v4;
        --v3;
        v5 *= 2;
        v7 >>= 31;
        LOWORD(v7) = 0;
        *(v4 - 1) = v7 + 9672418;
      }
      while ( v4 != (unsigned int *)v14 );
      TDrawBuffer::moveBuf((TDrawBuffer *)v12, 0, v13, Color, 0x50u);
      v9 = i;
      TView::writeLine(this, 0, v9, *((_WORD *)this + 8), 1, v12);
    }
  }
  return v15 - __readfsqword(0x28u);
}

