unsigned __int64 __fastcall sub_DDFB0(TView *this)
{
  unsigned __int16 Color; // bp
  char v3; // al
  unsigned __int8 v4; // al
  int v5; // esi
  __int64 v6; // rdi
  int v7; // r8d
  __int64 v8; // r13
  char *v9; // rsi
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r14
  const char *p_s; // r14
  unsigned __int64 v14; // r13
  size_t v15; // r15
  __int64 v16; // r14
  size_t v17; // r8
  char *v18; // rsi
  char *v19; // rdx
  size_t v21; // rax
  __int64 v22; // r13
  size_t v23; // r15
  size_t v24; // r8
  char *v25; // rsi
  size_t v26; // rdx
  size_t v27; // [rsp+0h] [rbp-898h]
  size_t v28; // [rsp+0h] [rbp-898h]
  size_t v29; // [rsp+8h] [rbp-890h]
  char *v30; // [rsp+10h] [rbp-888h] BYREF
  __int128 v31; // [rsp+18h] [rbp-880h]
  void *src; // [rsp+30h] [rbp-868h] BYREF
  __int128 v33; // [rsp+38h] [rbp-860h]
  _BYTE v34[1024]; // [rsp+50h] [rbp-848h] BYREF
  char v35; // [rsp+450h] [rbp-448h] BYREF
  char s; // [rsp+451h] [rbp-447h] BYREF
  unsigned __int64 v37; // [rsp+858h] [rbp-40h]

  v37 = __readfsqword(0x28u);
  v30 = nullptr;
  Color = TView::getColor(this, 1u);
  v31 = 0;
  sub_94440((__int64 *)&v30);
  v3 = *((_BYTE *)this + 140);
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 <= 2u )
      Color = word_1D4B3C[v4];
    v5 = *((_DWORD *)this + 32);
    if ( *((_DWORD *)this + 24) == -3 )
      Color = 121;
    if ( v5 >= 0 && v5 < (unsigned __int64)xmmword_2524F8 )
    {
      v6 = qword_2524F0 + 56LL * v5;
      if ( v6 )
      {
        if ( (unsigned __int8)sub_C72E0(v6) == 1 && v7 != -3 )
        {
          if ( (int)sub_C7350(v6) > 7 )
          {
            get_default_radix();
            p_s = &v35;
            b2a64();
            goto LABEL_35;
          }
          get_default_radix();
          b2a32();
          v8 = v31;
          v9 = v30;
          v10 = v31 - 1;
          if ( (__int64)v31 - 1 <= 1 )
          {
            if ( v30 )
            {
              *(_QWORD *)&v31 = 0;
              qfree();
              v8 = v31;
              v9 = nullptr;
              v12 = 2;
              v30 = nullptr;
              *((_QWORD *)&v31 + 1) = 0;
              if ( !(_QWORD)v31 )
                goto LABEL_40;
              v11 = 0;
LABEL_17:
              v12 = v8-- + 1;
LABEL_18:
              if ( v11 >= v12 )
              {
LABEL_19:
                *(_QWORD *)&v31 = v12;
                p_s = &s;
                v9[v8] = 32;
                v30[v8 + 1] = 0;
LABEL_35:
                v21 = strlen(p_s);
                v22 = v31;
                v23 = v21;
                v24 = v21;
                if ( (_QWORD)v31 )
                {
                  v22 = v31 - 1;
                  v24 = v21 + v31 - 1;
                }
                v25 = v30;
                v26 = v24 + 1;
                if ( *((_QWORD *)&v31 + 1) < v24 + 1 )
                {
                  v29 = v24;
                  v27 = v24 + 1;
                  v30 = (char *)qvector_reserve();
                  v24 = v29;
                  v25 = v30;
                  v26 = v27;
                }
                *(_QWORD *)&v31 = v26;
                v25[v24] = 0;
                memmove(&v30[v22], p_s, v23);
                goto LABEL_29;
              }
LABEL_40:
              v30 = (char *)qvector_reserve();
              v9 = v30;
              goto LABEL_19;
            }
          }
          else
          {
            if ( *((_QWORD *)&v31 + 1) < v10 )
            {
              v30 = (char *)qvector_reserve();
              v9 = v30;
            }
            *(_QWORD *)&v31 = v10;
            v9[v8 - 2] = 0;
            v8 = v31;
            v9 = v30;
          }
          v11 = *((_QWORD *)&v31 + 1);
          v12 = 2;
          if ( !v8 )
            goto LABEL_18;
          goto LABEL_17;
        }
        v33 = 0;
        src = nullptr;
        sub_DCE10((__int64 *)&src, (__int64)this + 96, v5);
        v14 = v33;
        if ( (_QWORD)v33 )
        {
          v15 = v33 - 1;
          if ( (_QWORD)v33 != 1 )
          {
            v16 = v31;
            v17 = v33 - 1;
            if ( (_QWORD)v31 )
            {
              v16 = v31 - 1;
              v17 = v15 + v31 - 1;
              v14 = v33 + v31 - 1;
            }
            v18 = v30;
            if ( *((_QWORD *)&v31 + 1) < v14 )
            {
              v28 = v17;
              v30 = (char *)qvector_reserve();
              v17 = v28;
              v18 = v30;
            }
            *(_QWORD *)&v31 = v14;
            v18[v17] = 0;
            memcpy(&v30[v16], src, v15);
          }
        }
        if ( src )
        {
          *(_QWORD *)&v33 = 0;
          qfree();
        }
      }
    }
  }
LABEL_29:
  TDrawBuffer::moveChar((TDrawBuffer *)v34, 0, 0x20u, Color, *((_WORD *)this + 8));
  v19 = (char *)s1;
  if ( (_QWORD)v31 )
    v19 = v30;
  TDrawBuffer::moveStr((TDrawBuffer *)v34, 0, v19, Color);
  TView::writeLine(this, 0, 0, *((_WORD *)this + 8), 1, v34);
  if ( v30 )
  {
    *(_QWORD *)&v31 = 0;
    qfree();
  }
  return v37 - __readfsqword(0x28u);
}

