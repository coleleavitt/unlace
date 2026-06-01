unsigned __int64 __fastcall sub_114D20(void *s, _DWORD *a2, int *a3, char *a4, size_t a5)
{
  _DWORD *v8; // rax
  unsigned __int64 result; // rax
  __int64 v10; // rbp
  int v11; // r13d
  int v12; // edx
  unsigned int v13; // eax
  int v14; // r8d
  char *v15; // rcx
  unsigned int v16; // eax
  signed int v17; // edi
  __int64 v18; // r9
  int v19; // r13d
  int v20; // esi
  unsigned __int64 v21; // r12
  int v22; // esi
  int v23; // r11d
  unsigned int v24; // r10d
  signed int v25; // eax
  unsigned int v26; // eax
  char *v27; // rax
  int v28; // r11d
  unsigned int v29; // r10d
  char v30; // si
  unsigned int v33; // edx
  char *v34; // rax
  char v35; // si
  char v36; // si
  char *v39; // [rsp+10h] [rbp-58h]
  char *v40; // [rsp+18h] [rbp-50h]
  _QWORD dest[9]; // [rsp+20h] [rbp-48h] BYREF

  dest[1] = __readfsqword(0x28u);
  if ( a5 > 7 )
  {
    v10 = (unsigned int)(*a2 + 1);
    memset(s, 0, 2 * v10);
    result = -44;
    v11 = *(_DWORD *)a4 & 0xF;
    v12 = v11 + 5;
    if ( (unsigned int)(v11 + 5) <= 0xF )
    {
      v13 = *(_DWORD *)a4;
      *a3 = v12;
      v14 = 1 << v12;
      v15 = a4;
      v16 = v13 >> 4;
      v40 = &a4[a5];
      v17 = (1 << v12) + 1;
      v18 = 0;
      v19 = v11 + 6;
      v20 = 4;
      v21 = (unsigned __int64)&a4[a5 - 7];
      v39 = &a4[a5 - 4];
      while ( 1 )
      {
        v22 = v19 + v20;
        v28 = v16 & (v14 - 1);
        v29 = 2 * v14 - v17 - 1;
        if ( v28 < v29 )
        {
          --v22;
        }
        else
        {
          v28 = v16 & (2 * v14 - 1);
          if ( v28 >= v14 )
            v28 -= v29;
        }
        v23 = v28 - 1;
        v24 = v18 + 1;
        v25 = v17 - v23;
        v17 += v23;
        *((_WORD *)s + v18) = v23;
        if ( v23 >= 0 )
          v17 = v25;
        if ( v17 < v14 )
        {
          if ( v17 <= 1 )
            break;
          v26 = __lzcnt(v17);
          v19 = 32 - v26;
          v14 = 1 << (31 - v26);
        }
        if ( (unsigned int)v10 <= v24 )
          break;
        v27 = &v15[v22 >> 3];
        if ( v21 >= (unsigned __int64)v15 || v39 >= v27 )
        {
          v20 = v22 & 7;
          v15 = v27;
        }
        else
        {
          v35 = v22 + 8 * ((_BYTE)v15 - (_BYTE)v39);
          v15 = &a4[a5 - 4];
          v20 = v35 & 0x1F;
        }
        v16 = *(_DWORD *)v15 >> v20;
        if ( !v23 )
        {
          while ( 1 )
          {
            _EDX = ~v16 | 0x80000000;
            __asm { tzcnt   edx, edx }
            v33 = _EDX >> 1;
            if ( v33 <= 0xB )
              break;
            v24 += 36;
            if ( (unsigned __int64)v15 > v21 )
            {
              v30 = v20 + 8 * ((_BYTE)v15 - v21);
              v15 = v40 - 4;
              v20 = v30 & 0x1F;
              v16 = *((_DWORD *)v40 - 1) >> v20;
            }
            else
            {
              v15 += 3;
              v16 = *(_DWORD *)v15 >> v20;
            }
          }
          v22 = v20 + 2 * v33 + 2;
          v24 += ((v16 >> (2 * v33)) & 3) + 3 * v33;
          if ( (unsigned int)v10 <= v24 )
            break;
          v34 = &v15[v22 >> 3];
          if ( (unsigned __int64)v15 <= v21 || v39 >= v34 )
          {
            v15 += v22 >> 3;
            v20 = v22 & 7;
            v16 = *(_DWORD *)v34 >> v20;
          }
          else
          {
            v36 = v22 + 8 * ((_BYTE)v15 - (_BYTE)v39);
            v15 = &a4[a5 - 4];
            v20 = v36 & 0x1F;
            v16 = *(_DWORD *)v39 >> v20;
          }
        }
        v18 = v24;
      }
      result = -20;
      if ( v17 == 1 )
      {
        result = -48;
        if ( (unsigned int)v10 >= v24 )
        {
          result = -20;
          if ( v22 <= 32 )
          {
            *a2 = v24 - 1;
            return &v15[(v22 + 7) >> 3] - a4;
          }
        }
      }
    }
  }
  else
  {
    dest[0] = 0;
    v8 = memcpy(dest, a4, a5);
    result = sub_1149F0(s, a2, a3, v8, 8u);
    if ( result <= 0xFFFFFFFFFFFFFF88LL && a5 < result )
      return -20;
  }
  return result;
}

