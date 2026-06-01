__int64 __fastcall sub_14FD5D0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __m128i a5, __m128 a6)
{
  unsigned int v7; // r13d
  __int64 v8; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  char v12; // al
  _DWORD *v13; // rax
  int v14; // eax
  __int64 v15; // rdi
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int16 v18; // bx
  char v19; // al
  char v20; // r15
  const char *v21; // r14
  int v22; // ebx
  __int64 v23; // r12
  _QWORD *v24; // rax
  _BYTE *v25; // rdi
  _BYTE *v26; // rax
  unsigned __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  int v34; // eax
  __int64 *v35; // rdi
  unsigned int v36; // r15d
  char *v37; // r12
  __int64 v38; // rax
  int v39; // eax
  __int64 *v40; // rdi
  __int64 v41; // rax
  __int64 v42; // rbx
  __int64 *v43; // rdi
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  size_t v49; // rdx
  __int64 v50; // [rsp+8h] [rbp-F0h] BYREF
  void *src; // [rsp+10h] [rbp-E8h]
  size_t n; // [rsp+18h] [rbp-E0h]
  _QWORD v53[2]; // [rsp+20h] [rbp-D8h] BYREF
  int v54; // [rsp+30h] [rbp-C8h] BYREF
  int v55; // [rsp+34h] [rbp-C4h]
  char v56; // [rsp+38h] [rbp-C0h]
  __int64 v57; // [rsp+3Ch] [rbp-BCh]
  char v58; // [rsp+44h] [rbp-B4h]
  void *dest; // [rsp+48h] [rbp-B0h]
  __m128 v60; // [rsp+50h] [rbp-A8h] BYREF
  char v61; // [rsp+68h] [rbp-90h]
  unsigned __int8 *v62[17]; // [rsp+70h] [rbp-88h] BYREF

  v7 = *(unsigned __int16 *)(a1 + 32);
  if ( (_WORD)v7 == 22 )
  {
    v31 = sub_14FB680(a1, a2, a5);
    return sub_14BFE70(a1, v31, a5);
  }
  if ( (unsigned __int16)v7 > 0x16u )
  {
    if ( (_WORD)v7 != 122 )
    {
      if ( (unsigned __int16)v7 <= 0x7Au )
      {
        if ( (_WORD)v7 != 33 && (_WORD)v7 != 36 )
        {
          if ( (_WORD)v7 == 24 )
          {
            v10 = sub_14F8060(a1, a2, a5);
            return sub_14BFE70(a1, v10, a5);
          }
          goto LABEL_21;
        }
        v34 = *(_DWORD *)(a1 + 16);
        v35 = *(__int64 **)(a1 + 8);
        *(_DWORD *)(a1 + 40) = v34;
        sub_14634E0(v35, (int *)(a1 + 16));
        v36 = *(_DWORD *)(a1 + 40);
        if ( *(_WORD *)(a1 + 32) == 7 )
        {
          v42 = sub_18F1880(*(_QWORD *)(a1 + 96), a1 + 16, 0);
          if ( v42 == 1 )
            return 1;
          v43 = *(__int64 **)(a1 + 8);
          *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
          sub_14634E0(v43, (int *)(a1 + 16));
          v44 = sub_19258C0(
                  *(_QWORD *)(a1 + 96),
                  *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL),
                  v36,
                  v7,
                  v42 & 0xFFFFFFFFFFFFFFFELL,
                  0);
          if ( v44 == 1 )
          {
            return 1;
          }
          else
          {
            v45 = sub_19D7B40(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 736LL), a2, v44 & 0xFFFFFFFFFFFFFFFELL);
            return sub_14BFE70(a1, v45, a5);
          }
        }
        else
        {
          v37 = "+";
          if ( (_WORD)v7 != 33 )
            v37 = "-";
          sub_1564840(v62, a1, a1 + 16, 1755);
          sub_AE9DF0(v62, (__int64)v37, 1u);
          sub_AEA040((__int64)v62);
          return 1;
        }
      }
      if ( (_WORD)v7 == 135 )
      {
LABEL_61:
        v39 = *(_DWORD *)(a1 + 16);
        v40 = *(__int64 **)(a1 + 8);
        *(_DWORD *)(a1 + 40) = v39;
        sub_14634E0(v40, (int *)(a1 + 16));
        v41 = sub_19D7E60(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 736LL), a2, *(unsigned int *)(a1 + 40), 0);
        return sub_14BFE70(a1, v41, a5);
      }
      if ( (_WORD)v7 != 149 )
      {
        if ( (_WORD)v7 != 123 )
        {
LABEL_21:
          v12 = sub_141A630(*(unsigned __int16 *)(a1 + 32));
          if ( (_WORD)v7 == 1 )
            goto LABEL_49;
          if ( v12 )
            goto LABEL_49;
          v13 = *(_DWORD **)(a1 + 24);
          if ( !v13 )
            goto LABEL_49;
          v14 = *v13 >> 9;
          if ( (unsigned __int16)v14 <= 0x1Au )
          {
            if ( (_WORD)v14 == 10 )
            {
              v47 = sub_14FB980(a1, a2);
              return sub_14BFE70(a1, v47, a5);
            }
            if ( (unsigned __int16)v14 <= 0xAu )
            {
              if ( (_WORD)v14 == 4 )
              {
                v46 = sub_14FB800(a1, a2, a5, a6);
                return sub_14BFE70(a1, v46, a5);
              }
            }
            else
            {
              if ( (_WORD)v14 == 12 )
              {
                v48 = sub_14FD160(a1, a2);
                return sub_14BFE70(a1, v48, a5);
              }
              if ( (_WORD)v14 == 26 )
                return sub_14BAB20(a1, a2);
            }
          }
          v15 = *(_QWORD *)(a1 + 8);
          v16 = *(_QWORD *)(v15 + 2944);
          v17 = v16 >= *(unsigned int *)(v15 + 2912) ? sub_14180A0(v15, 1u) : *(_QWORD *)(v15 + 2904) + 24 * v16;
          if ( *(_WORD *)(v17 + 16) != 24 || *(_DWORD *)(a1 + 2036) != a2 )
            goto LABEL_49;
          v18 = *(_WORD *)(a1 + 32);
          v19 = sub_141A630(v18);
          if ( v18 == 1 || v19 )
            BUG();
          v20 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + 16LL);
          if ( v20 == 116 )
          {
            v21 = "try";
          }
          else
          {
            if ( v20 != 102 )
            {
              v21 = "autoreleasepool";
              if ( v20 == 97 )
                goto LABEL_34;
LABEL_49:
              sub_1564820(v62, a1, a2, 1909);
              sub_AEA040((__int64)v62);
              return 1;
            }
            v21 = "finally";
          }
LABEL_34:
          v22 = *(_DWORD *)(a1 + 16);
          sub_1564820(v62, a1, a2, 1909);
          v54 = v22;
          v23 = j__strlen(v21);
          v55 = v22;
          dest = &v60.m128_u16[4];
          v24 = v53;
          v57 = 0;
          v58 = 0;
          v60.m128_u64[0] = 0;
          v60.m128_i8[8] = 0;
          v61 = 0;
          v56 = 1;
          src = v53;
          if ( (unsigned __int64)v23 > 0xF )
          {
            if ( v23 < 0 )
              std::__throw_length_error("basic_string::_M_create");
            v24 = (_QWORD *)operator new(v23 + 1);
            v53[0] = v23;
            src = v24;
          }
          else
          {
            if ( v23 == 1 )
            {
              LOBYTE(v53[0]) = v20;
              goto LABEL_37;
            }
            if ( !v23 )
            {
LABEL_37:
              n = v23;
              *((_BYTE *)v24 + v23) = 0;
              v25 = dest;
              v26 = dest;
              if ( src == v53 )
              {
                v49 = n;
                if ( n )
                {
                  if ( n == 1 )
                    *(_BYTE *)dest = v53[0];
                  else
                    memcpy(dest, src, n);
                  v25 = dest;
                  v49 = n;
                }
                v60.m128_u64[0] = v49;
                v25[v49] = 0;
                v26 = src;
                goto LABEL_41;
              }
              if ( dest == &v60.m128_u16[4] )
              {
                v50 = v53[0];
                dest = src;
                v60 = _mm_loadh_ps((const double *)&v50);
              }
              else
              {
                v50 = v53[0];
                v27 = v60.m128_u64[1];
                dest = src;
                v60 = _mm_loadh_ps((const double *)&v50);
                if ( v25 )
                {
                  src = v25;
                  v53[0] = v27;
LABEL_41:
                  n = 0;
                  *v26 = 0;
                  if ( src != v53 )
                    operator delete(src);
                  if ( v54 && v55 )
                    sub_14FA6F0((__int64 *)v62, (unsigned __int64)&v54);
                  v28 = 1;
                  if ( dest != &v60.m128_u16[4] )
                  {
                    v50 = 1;
                    operator delete(dest);
                    v28 = v50;
                  }
                  v50 = v28;
                  sub_AEA040((__int64)v62);
                  return v50;
                }
              }
              v26 = v53;
              src = v53;
              goto LABEL_41;
            }
          }
          memcpy(v24, v21, v23);
          v24 = src;
          goto LABEL_37;
        }
        goto LABEL_61;
      }
    }
    v33 = sub_14F7BA0(a1, a2, 1u);
    return sub_14BFE70(a1, v33, a5);
  }
  if ( (_WORD)v7 == 9 )
  {
    v32 = sub_14F7BE0(a1, a2, a3, a4);
    return sub_14BFE70(a1, v32, a5);
  }
  if ( (unsigned __int16)v7 > 9u )
  {
    if ( (unsigned __int16)v7 >= 0xEu )
    {
      if ( (unsigned __int16)v7 <= 0xFu )
      {
        v38 = sub_14F7960(a1, a2);
        return sub_14BFE70(a1, v38, a5);
      }
      if ( (_WORD)v7 == 20 )
      {
        v11 = sub_14F7CE0(a1, a2, a5);
        return sub_14BFE70(a1, v11, a5);
      }
    }
    goto LABEL_21;
  }
  if ( (_WORD)v7 != 3 )
  {
    if ( (_WORD)v7 == 7 )
    {
      v8 = sub_14F7C60(a1, a2);
      return sub_14BFE70(a1, v8, a5);
    }
    goto LABEL_21;
  }
  v29 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(v29 + 760) )
  {
    *(_BYTE *)(v29 + 968) = 1;
    *(_BYTE *)(*(_QWORD *)(v29 + 48) + 6LL) = 1;
  }
  v30 = *(_QWORD *)(a1 + 96);
  *(_WORD *)(a1 + 32) = 1;
  sub_1708710(*(_QWORD *)(v30 + 656), *(_QWORD *)(v30 + 608));
  return 1;
}
