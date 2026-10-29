__int64 __fastcall dyld4::Loader::Loader(
        __int64 this,
        const dyld4::Loader::InitialOptions *a2,
        __int16 a3,
        int a4,
        __int16 a5)
{
  __int16 v5; // w8
  __int16 v6; // w8
  __int16 v7; // w8
  __int16 v8; // w8
  __int16 v9; // w8
  __int16 v10; // w8
  __int16 v11; // w8
  __int16 v12; // w8
  __int16 v13; // w8

  *(_DWORD *)this = 1815378276;
  v5 = *(_WORD *)(this + 4) & 0xFFFE | a3;
  *(_WORD *)(this + 4) = v5;
  v6 = v5 & 0xFFFD | (2 * (*(_BYTE *)a2 & 0x7F));
  *(_WORD *)(this + 4) = v6;
  v7 = v6 & 0xFFFB | (4 * (*((_BYTE *)a2 + 1) & 0x3F));
  *(_WORD *)(this + 4) = v7;
  v8 = v7 & 0xFFF7 | (8 * (*((_BYTE *)a2 + 2) & 0x1F));
  *(_WORD *)(this + 4) = v8;
  v9 = v8 & 0xFFEF | (16 * (*((_BYTE *)a2 + 3) & 0xF));
  *(_WORD *)(this + 4) = v9;
  v10 = v9 & 0xFFDF | (32 * (*((_BYTE *)a2 + 4) & 7));
  *(_WORD *)(this + 4) = v10;
  v11 = v10 & 0xFFBF | ((*((_BYTE *)a2 + 5) & 3) << 6);
  *(_WORD *)(this + 4) = v11;
  v12 = v11 & 0xFF7F | ((*((_BYTE *)a2 + 6) & 1) << 7);
  *(_WORD *)(this + 4) = v12;
  *(_WORD *)(this + 4) = v12 & 0x80FF | (*((unsigned __int8 *)a2 + 7) << 8);
  if ( a4 )
    v13 = 0x8000;
  else
    v13 = 0;
  *(_WORD *)(this + 6) = v13 | a5;
  return this;
}
