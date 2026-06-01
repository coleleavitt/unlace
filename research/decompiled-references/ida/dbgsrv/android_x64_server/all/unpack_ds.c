/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: unpack_ds
// Address: 0x00000000000C0540

//----- (00000000000C0540) ----------------------------------------------------
_BYTE *__fastcall unpack_ds(const void **a1, unsigned __int64 a2, char a3)
{
  unsigned __int8 *v4; // rcx
  unsigned int v5; // ebx
  unsigned __int8 *v6; // rax
  int v7; // ecx
  int v8; // edi
  __int16 v9; // di
  unsigned __int16 v10; // di
  int v11; // eax
  __int16 v12; // bx
  size_t v13; // r15
  unsigned __int8 *v14; // r12
  _BYTE *v15; // rbx
  _BYTE *v16; // rax

  v4 = (unsigned __int8 *)*a1;
  v5 = 0;
  if ( (unsigned __int64)*a1 < a2 )
  {
    v6 = v4 + 1;
    v5 = *v4;
    if ( (v5 & 0x80u) == 0 )
      goto LABEL_21;
    if ( (v5 & 0xFFFFFFC0) == 0xC0 )
    {
      if ( (v5 & 0xFFFFFFE0) == 0xE0 )
      {
        if ( (unsigned __int64)v6 >= a2 )
        {
          v7 = 0;
        }
        else
        {
          v6 = v4 + 2;
          v7 = v4[1] << 8;
          if ( (unsigned __int64)v6 < a2 )
          {
            v8 = *v6++;
            v7 |= v8;
          }
        }
        if ( (unsigned __int64)v6 < a2 )
        {
LABEL_9:
          v9 = *v6++;
          v10 = v9 << 8;
          if ( (unsigned __int64)v6 < a2 )
            goto LABEL_19;
          goto LABEL_20;
        }
      }
      else if ( (unsigned __int64)v6 >= a2 )
      {
        v7 = 0;
      }
      else
      {
        v6 = v4 + 2;
        v7 = ((v5 & 0x3F) << 8) | v4[1];
        if ( (unsigned __int64)v6 < a2 )
          goto LABEL_9;
      }
      v10 = 0;
      if ( (unsigned __int64)v6 < a2 )
      {
LABEL_19:
        v12 = *v6++;
        v10 |= v12;
      }
LABEL_20:
      v5 = (v7 << 16) | v10;
      goto LABEL_21;
    }
    if ( (unsigned __int64)v6 >= a2 )
    {
LABEL_21:
      v4 = v6;
      goto LABEL_22;
    }
    v11 = v4[1];
    v4 += 2;
    v5 = v11 | ((v5 & 0x7F) << 8);
  }
LABEL_22:
  *a1 = v4;
  v13 = v5;
  v14 = &v4[v5];
  v15 = nullptr;
  if ( (unsigned __int64)v14 <= a2 && v14 >= v4 )
  {
    if ( !a3 || (_DWORD)v13 && *v4 )
    {
      v16 = qalloc(v13 + 1);
      if ( !v16 )
        sub_6E800((int)"unpack_ds");
      v15 = v16;
      memcpy(v16, *a1, v13);
      v15[v13] = 0;
      *a1 = v14;
    }
    else
    {
      return nullptr;
    }
  }
  return v15;
}
