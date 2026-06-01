__int64 __fastcall format_c_number(char *a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int16 a6)
{
  unsigned __int64 v9; // r12
  __int64 v12; // r8
  int v13; // ebx
  char *v14; // rbx
  unsigned __int64 v15; // rdx
  int v16; // r10d
  int v17; // ecx
  int v18; // r14d
  char *v19; // rax
  char *v20; // rcx
  char *v21; // rdx
  char v22; // si
  _BYTE *v24; // r13
  unsigned int v25; // ebx
  char *v26; // rax
  __int64 v27; // rsi
  char *v28; // rax
  char v29; // dl
  const char *v30; // rdx
  char v31; // si
  char *v32; // rax
  char v33; // si
  int v34; // esi
  unsigned __int64 v35; // rdi
  char v36; // di
  const char *v37; // rax
  char v38; // dl
  int v39; // r8d
  __int16 v40; // r9
  const char *v41; // rax
  char v42; // dl
  char v43; // [rsp+0h] [rbp-78h]
  unsigned __int8 v44; // [rsp+7h] [rbp-71h]
  char *v45; // [rsp+8h] [rbp-70h] BYREF
  void *ptr; // [rsp+10h] [rbp-68h]
  __int128 v47; // [rsp+18h] [rbp-60h]
  char v48[8]; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v49; // [rsp+38h] [rbp-40h]

  v9 = (unsigned __int64)&a1[a2];
  v49 = __readfsqword(0x28u);
  v12 = a3;
  if ( a5 <= 8 )
  {
    v16 = 8 * a5;
    v15 = 1LL << (8 * (unsigned __int8)a5 - 1);
  }
  else
  {
    v13 = a6 & 8;
    if ( a4 )
    {
      v19 = &a1[(int)qsnprintf((int)a1, a2, (int)"0x%llX%016llX", a4, a3, a6, v43)];
      if ( v13 )
        goto LABEL_15;
      goto LABEL_57;
    }
    if ( (a6 & 8) == 0 )
    {
      if ( a3 >= 0 )
      {
        v14 = a1;
        a5 = 8;
        v15 = 0x8000000000000000LL;
        v16 = 64;
LABEL_6:
        v17 = a6 & 7;
        if ( v17 != 3 )
          goto LABEL_7;
LABEL_35:
        v44 = a3;
        if ( (_BYTE)a3 )
        {
          if ( (_BYTE)a3 != 39 )
          {
            if ( (unsigned __int64)v14 >= v9 )
            {
              if ( under_debugger )
                goto LABEL_147;
              goto LABEL_80;
            }
            v24 = v14 + 1;
            *v14 = 39;
            if ( (unsigned __int64)(v14 + 1) >= v9 )
            {
              *(_BYTE *)(v9 - 1) = 0;
              v24 = (_BYTE *)(v9 - 1);
            }
            if ( (a6 & 0x100) != 0 )
            {
              v25 = v12;
              if ( (_DWORD)v12 )
              {
                v26 = v48;
                do
                {
                  *v26++ = v12;
                  LODWORD(v12) = (unsigned int)v12 >> 8;
                }
                while ( (_DWORD)v12 );
                v27 = v26 - v48;
              }
              else
              {
                v27 = 0;
                v26 = v48;
              }
              *v26 = 0;
              memrev(v48, v27);
              v45 = v48;
              if ( (unsigned int)get_utf8_char(&v45) == -1 )
                return format_c_number(a1, a2, v25, 0, 4, 129);
              if ( (unsigned __int64)v24 >= v9 )
                goto LABEL_134;
              v28 = v48;
              if ( v24 == (_BYTE *)(v9 - 1) )
              {
                *(_BYTE *)(v9 - 1) = 0;
LABEL_52:
                v14 = v24 + 1;
                *v24 = 39;
                if ( (unsigned __int64)(v24 + 1) >= v9 )
                {
                  *(_BYTE *)(v9 - 1) = 0;
                  v14 = (char *)(v9 - 1);
                }
                *v14 = 0;
                return v14 - a1;
              }
              do
              {
                v29 = *v28++;
                *v24 = v29;
                if ( !v29 )
                  goto LABEL_51;
                ++v24;
              }
              while ( v24 != (_BYTE *)(v9 - 1) );
              *(_BYTE *)(v9 - 1) = 0;
            }
            else
            {
              v47 = 0;
              ptr = nullptr;
              if ( (unsigned __int8)idb_utf8() )
              {
                if ( (unsigned __int64)v24 >= v9 )
                {
                  if ( !under_debugger )
                    interr(520);
                  goto LABEL_147;
                }
                v41 = (const char *)ptr;
                if ( !(_QWORD)v47 )
                  v41 = haystack;
                if ( v24 == (_BYTE *)(v9 - 1) )
                {
LABEL_131:
                  *v24 = 0;
                }
                else
                {
                  while ( 1 )
                  {
                    v42 = *v41++;
                    *v24 = v42;
                    if ( !v42 )
                      break;
                    if ( (_BYTE *)(v9 - 1) == ++v24 )
                      goto LABEL_131;
                  }
                }
              }
              else
              {
                v24 += (int)qsnprintf((int)v24, (int)v9 - (int)v24, (int)"\\x%02X", v44, v39, v40, v43);
              }
            }
LABEL_51:
            if ( (unsigned __int64)v24 < v9 )
              goto LABEL_52;
LABEL_140:
            if ( under_debugger )
              goto LABEL_147;
            goto LABEL_80;
          }
          if ( (unsigned __int64)v14 >= v9 )
            goto LABEL_134;
          v37 = "'\\''";
        }
        else
        {
          if ( (unsigned __int64)v14 >= v9 )
            goto LABEL_134;
          v37 = "'\\0'";
        }
        if ( (char *)(v9 - 1) == v14 )
        {
LABEL_114:
          *(_BYTE *)(v9 - 1) = 0;
          v14 = (char *)(v9 - 1);
        }
        else
        {
          while ( 1 )
          {
            v38 = *v37++;
            *v14 = v38;
            if ( !v38 )
              break;
            if ( ++v14 == (char *)(v9 - 1) )
              goto LABEL_114;
          }
        }
        return v14 - a1;
      }
      v19 = &a1[(int)qsnprintf((int)a1, a2, (int)"0x%llX%016llX", 0, a3, a6, v43)];
LABEL_57:
      if ( (unsigned __int64)v19 < v9 )
      {
        v20 = (char *)(v9 - 1);
        goto LABEL_59;
      }
      goto LABEL_134;
    }
    v15 = 0x8000000000000000LL;
    v16 = 64;
    a5 = 8;
  }
  if ( (a6 & 0x20) != 0 && (a3 & v15) != 0 && v15 != a3 )
  {
    v12 = -a3;
    if ( (unsigned __int64)a1 >= v9 )
      goto LABEL_140;
    v14 = a1 + 1;
    *a1 = 45;
    if ( (unsigned __int64)(a1 + 1) >= v9 )
    {
      *(_BYTE *)(v9 - 1) = 0;
      v14 = (char *)(v9 - 1);
    }
  }
  else
  {
    v14 = a1;
  }
  v12 &= 2 * v15 - 1;
  if ( (v12 & v15) == 0 || v15 == v12 )
    goto LABEL_6;
  if ( (a6 & 0x4F) == 0x40 )
    v12 |= -2LL * v15;
  v17 = a6 & 7;
  if ( v17 == 3 )
    goto LABEL_35;
LABEL_7:
  if ( (a6 & 4) == 0 )
  {
    if ( !v17 )
      goto LABEL_83;
    if ( v17 == 2 )
    {
      if ( ((unsigned __int64)a3 > 7) + a4 || (a6 & 0x80u) != 0 )
      {
        if ( (a6 & 0x10) == 0 )
        {
          v18 = a6 & 8;
          goto LABEL_14;
        }
        goto LABEL_87;
      }
      goto LABEL_83;
    }
LABEL_81:
    if ( ((unsigned __int64)a3 > 9) + a4 || (a6 & 0x80u) != 0 )
    {
      if ( (a6 & 0x10) != 0 )
      {
LABEL_87:
        v18 = a6 & 8;
        goto LABEL_14;
      }
      v18 = a6 & 8;
LABEL_14:
      v19 = &v14[(int)sub_4B2D50(v14)];
      if ( !v18 )
        goto LABEL_20;
LABEL_15:
      if ( (unsigned __int64)v19 < v9 )
      {
        v20 = (char *)(v9 - 1);
        if ( (char *)(v9 - 1) == v19 )
        {
          *v19 = 0;
          if ( a5 > 7 )
            goto LABEL_59;
          return v19 - a1;
        }
        goto LABEL_17;
      }
LABEL_134:
      if ( !under_debugger )
        interr(520);
      goto LABEL_147;
    }
LABEL_83:
    v18 = a6 & 8;
    if ( (a6 & 8) != 0 )
      v18 = 8;
    goto LABEL_14;
  }
  if ( v17 != 4 )
    goto LABEL_81;
  if ( (unsigned __int64)v14 >= v9 )
    goto LABEL_134;
  v20 = (char *)(v9 - 1);
  v32 = "0b";
  if ( (char *)(v9 - 1) == v14 )
  {
LABEL_103:
    *(_BYTE *)(v9 - 1) = 0;
    v14 = (char *)(v9 - 1);
  }
  else
  {
    while ( 1 )
    {
      v33 = *v32++;
      *v14 = v33;
      if ( !v33 )
        break;
      if ( ++v14 == v20 )
        goto LABEL_103;
    }
  }
  v34 = a6 & 0x10;
  if ( v16 <= 0 )
  {
    if ( (a6 & 0x10) == 0 )
    {
LABEL_91:
      if ( (unsigned __int64)v14 < v9 )
      {
        v19 = v14 + 1;
        *v14 = 48;
        if ( (unsigned __int64)(v14 + 1) >= v9 )
        {
          *(_BYTE *)(v9 - 1) = 0;
          if ( (a6 & 8) == 0 )
            goto LABEL_100;
          goto LABEL_94;
        }
LABEL_96:
        *v19 = 0;
        if ( (a6 & 8) == 0 )
          goto LABEL_101;
        if ( v20 != v19 )
        {
LABEL_17:
          v21 = "u";
          while ( 1 )
          {
            v22 = *v21++;
            *v19 = v22;
            if ( !v22 )
              break;
            if ( ++v19 == v20 )
              goto LABEL_95;
          }
LABEL_20:
          if ( a5 <= 7 )
            return v19 - a1;
          goto LABEL_57;
        }
LABEL_95:
        *v19 = 0;
        goto LABEL_20;
      }
      if ( under_debugger )
        goto LABEL_147;
LABEL_80:
      interr(518);
    }
    v19 = v14;
    if ( (unsigned __int64)v14 < v9 )
      goto LABEL_96;
    if ( !under_debugger )
      interr(519);
LABEL_147:
    BUG();
  }
  v35 = v15 & v12;
  if ( (a6 & 0x10) != 0 )
  {
    v34 = 0;
    goto LABEL_78;
  }
  if ( !v35 )
  {
    do
    {
      ++v34;
      v15 >>= 1;
      if ( v16 == v34 )
        goto LABEL_91;
    }
    while ( (v15 & v12) == 0 );
  }
  v36 = 49;
  if ( (unsigned __int64)v14 >= v9 )
  {
LABEL_79:
    if ( under_debugger )
      goto LABEL_147;
    goto LABEL_80;
  }
  while ( 1 )
  {
    v19 = v14 + 1;
    *v14 = v36;
    if ( (unsigned __int64)(v14 + 1) < v9 )
    {
      ++v34;
      v15 >>= 1;
      if ( v16 == v34 )
        goto LABEL_96;
      ++v14;
      v35 = v15 & v12;
      goto LABEL_78;
    }
    ++v34;
    *(_BYTE *)(v9 - 1) = 0;
    v15 >>= 1;
    if ( v16 == v34 )
      break;
    v14 = (char *)(v9 - 1);
    v35 = v15 & v12;
LABEL_78:
    v36 = 48 - ((v35 == 0) - 1);
    if ( (unsigned __int64)v14 >= v9 )
      goto LABEL_79;
  }
  if ( (a6 & 8) != 0 )
  {
LABEL_94:
    v19 = (char *)(v9 - 1);
    goto LABEL_95;
  }
LABEL_100:
  v19 = (char *)(v9 - 1);
LABEL_101:
  if ( a5 == 8 )
  {
LABEL_59:
    v30 = "LL";
    if ( v19 == v20 )
    {
LABEL_62:
      *(_BYTE *)(v9 - 1) = 0;
      v19 = v20;
    }
    else
    {
      while ( 1 )
      {
        v31 = *v30++;
        *v19 = v31;
        if ( !v31 )
          break;
        if ( ++v19 == v20 )
          goto LABEL_62;
      }
    }
  }
  return v19 - a1;
}

