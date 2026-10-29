unsigned __int64 __fastcall sub_154C20(TView *this, __int64 a2, int a3)
{
  int v5; // r15d
  unsigned __int8 v6; // al
  unsigned __int16 Color; // r14
  int v8; // r12d
  char *v10; // rdx
  int v11; // ecx
  char *v12; // rbx
  int v13; // r14d
  int v14; // r8d
  unsigned __int8 *v15; // r15
  int utf8_char; // eax
  unsigned __int8 *v17; // rsi
  int v18; // edx
  int v19; // r8d
  int v20; // ecx
  int v21; // edi
  int v22; // eax
  int v23; // eax
  int v24; // edi
  __int64 v25; // rdi
  __int64 v26; // r8
  __int64 v27; // rsi
  char *v28; // rbx
  __int64 v29; // rdx
  int v30; // eax
  int v31; // edx
  int v32; // eax
  _QWORD *v33; // [rsp+0h] [rbp-4B8h]
  char v34; // [rsp+8h] [rbp-4B0h]
  char v35; // [rsp+2Fh] [rbp-489h] BYREF
  void *src; // [rsp+30h] [rbp-488h]
  int v37; // [rsp+38h] [rbp-480h] BYREF
  char v38; // [rsp+3Ch] [rbp-47Ch]
  __int64 v39; // [rsp+40h] [rbp-478h] BYREF
  __int128 v40; // [rsp+48h] [rbp-470h]
  __int64 v41; // [rsp+58h] [rbp-460h]
  __int128 v42; // [rsp+60h] [rbp-458h]
  _BYTE v43[4]; // [rsp+70h] [rbp-448h] BYREF
  char v44; // [rsp+74h] [rbp-444h] BYREF
  unsigned __int64 v45; // [rsp+478h] [rbp-40h]

  v45 = __readfsqword(0x28u);
  v5 = *(__int16 *)(sub_15D8F0((char *)this + 440) + 30);
  v6 = (*(__int64 (__fastcall **)(TView *, __int64))(*(_QWORD *)this + 672LL))(this, a2);
  if ( *(_WORD *)&byte_24F140[6] )
  {
    Color = v6;
    if ( !v6 )
      Color = (unsigned __int8)sub_8FB50((__int64)this, 1u);
  }
  else
  {
    Color = TView::getColor(this, 6u);
  }
  v8 = Color;
  TDrawBuffer::moveChar((TDrawBuffer *)v43, 0, 0x20u, Color, *((_WORD *)this + 8));
  if ( a2 && *((_DWORD *)this + 5) > a3 )
  {
    v38 = 0;
    v37 = -1;
    v33 = (_QWORD *)sub_90BB0(a2, (__int64)&v35, (__int64)this);
    v33[10] = 0;
    v33[13] = 0;
    (*(void (__fastcall **)(TView *, __int64, char *, int *, bool))(*(_QWORD *)this + 640LL))(
      this,
      a2,
      &v35,
      &v37,
      v5 == a3);
    v39 = 0;
    v41 = 0;
    v40 = 0;
    v42 = 0;
    sub_1548C0((__int64)this, &v39, (__int64)v33, Color);
    v10 = (char *)s1;
    if ( v33[7] )
      v10 = (char *)v33[6];
    src = v10;
    skip_utf8();
    v11 = *((_DWORD *)this + 4);
    v34 = TScreen::useUTF8;
    if ( v11 <= 0 )
    {
LABEL_39:
      v25 = v41;
    }
    else
    {
      v12 = &v44;
      v13 = 0;
      while ( 1 )
      {
        v15 = (unsigned __int8 *)src;
        if ( !*(_BYTE *)src )
          break;
        utf8_char = get_utf8_char();
        v17 = (unsigned __int8 *)src;
        if ( utf8_char == -1 )
        {
          v17 = (unsigned __int8 *)src + 1;
          src = (char *)src + 1;
        }
        v18 = v13 + *(_DWORD *)(*((_QWORD *)this + 121) + 72LL);
        v19 = *(_DWORD *)(v39 + 4LL * v18);
        if ( v19 == -1 )
          v19 = v8;
        if ( *(_DWORD *)(v41 + 4LL * v18) != -1 )
          v19 = *(_DWORD *)(v41 + 4LL * v18) & 0xF0 | v19 & 0xF;
        if ( v34 )
        {
          if ( v15 >= v17 )
          {
            v24 = 0;
          }
          else
          {
            v20 = 0;
            v21 = 0;
            do
            {
              v22 = *v15++;
              v23 = v22 << v20;
              v20 += 8;
              v21 |= v23;
            }
            while ( v15 != v17 );
            v24 = v21 << 8;
          }
          v14 = v24 | (v19 << 8 >> 8);
        }
        else
        {
          v14 = ((unsigned __int8)sub_153310(v15, v17 - v15) << 8) | (v19 << 8 >> 8);
        }
        v11 = *((_DWORD *)this + 4);
        ++v13;
        *((_DWORD *)v12 - 1) = v14;
        v12 += 4;
        if ( v11 <= v13 )
          goto LABEL_39;
      }
      v25 = v41;
      if ( v11 > v13 )
      {
        v26 = *((_QWORD *)this + 121);
        v27 = v39;
        v28 = v12 - 4;
        do
        {
          v29 = v13 + *(_DWORD *)(v26 + 72);
          v30 = *(_DWORD *)(v27 + 4 * v29);
          if ( v30 )
          {
            v31 = *(_DWORD *)(v25 + 4 * v29);
            if ( v31 != -1 )
              v30 = v31 & 0xF0 | v30 & 0xF;
            v28 += 4;
            v32 = v30 << 8 >> 8;
            BYTE1(v32) |= 0x20u;
            *((_DWORD *)v28 - 1) = v32;
          }
          ++v13;
        }
        while ( v13 != v11 );
      }
    }
    if ( v25 )
    {
      *(_QWORD *)&v42 = 0;
      qfree();
    }
    if ( v39 )
    {
      *(_QWORD *)&v40 = 0;
      qfree();
    }
  }
  TView::writeLine(this, 0, a3, *((_WORD *)this + 8), 1, v43);
  return v45 - __readfsqword(0x28u);
}

