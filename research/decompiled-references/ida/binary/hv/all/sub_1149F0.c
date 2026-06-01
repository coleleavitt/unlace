unsigned __int64 __fastcall sub_1149F0(void *a1, _DWORD *a2, int *a3, _DWORD *a4, size_t a5)
{
  void *v8; // rax
  unsigned __int64 result; // rax
  __int64 v10; // rbp
  _DWORD *v11; // r8
  unsigned int v12; // edi
  int v13; // r13d
  int v14; // ecx
  unsigned int v15; // edi
  int v16; // r11d
  int v17; // r13d
  __int64 v18; // rcx
  signed int v19; // r10d
  int v20; // r9d
  unsigned __int64 v21; // r12
  unsigned __int64 v22; // r15
  int v23; // r9d
  int v24; // eax
  unsigned int v25; // edx
  int v26; // eax
  signed int v27; // edx
  unsigned int v28; // edx
  unsigned int v29; // ecx
  _DWORD *v30; // rcx
  unsigned int v33; // eax
  int v34; // ecx
  _DWORD *v37; // rax
  char v38; // r9
  char v39; // r9
  _QWORD dest[9]; // [rsp+20h] [rbp-48h] BYREF

  dest[1] = __readfsqword(0x28u);
  if ( a5 > 7 )
  {
    v10 = (unsigned int)(*a2 + 1);
    memset(a1, 0, 2 * v10);
    v11 = a4;
    result = -44;
    v12 = *a4;
    v13 = *a4 & 0xF;
    v14 = v13 + 5;
    if ( (unsigned int)(v13 + 5) <= 0xF )
    {
      *a3 = v14;
      v15 = v12 >> 4;
      v16 = 1 << v14;
      v17 = v13 + 6;
      v18 = 0;
      v19 = v16 + 1;
      v20 = 4;
      v21 = (unsigned __int64)a4 + a5 - 7;
      v22 = (unsigned __int64)a4 + a5 - 4;
      while ( 1 )
      {
        v23 = v17 + v20;
        v24 = v15 & (v16 - 1);
        v25 = 2 * v16 - v19 - 1;
        if ( v24 >= v25 )
        {
          v24 = v15 & (2 * v16 - 1);
          if ( v24 >= v16 )
            v24 -= v25;
        }
        else
        {
          --v23;
        }
        v26 = v24 - 1;
        v27 = v19 - v26;
        v19 += v26;
        *((_WORD *)a1 + v18) = v26;
        if ( v26 >= 0 )
          v19 = v27;
        v28 = v18 + 1;
        if ( v19 < v16 )
        {
          if ( v19 <= 1 )
            break;
          _BitScanReverse(&v29, v19);
          v29 ^= 0x1Fu;
          v17 = 32 - v29;
          v16 = 1 << (31 - v29);
        }
        if ( (unsigned int)v10 <= v28 )
          break;
        v30 = (_DWORD *)((char *)v11 + (v23 >> 3));
        if ( v21 >= (unsigned __int64)v11 || v22 >= (unsigned __int64)v30 )
        {
          v20 = v23 & 7;
          v11 = v30;
        }
        else
        {
          v38 = v23 + 8 * ((_BYTE)v11 - v22);
          v11 = (_DWORD *)((char *)a4 + a5 - 4);
          v20 = v38 & 0x1F;
        }
        v15 = *v11 >> v20;
        if ( v26 )
        {
          v18 = v28;
        }
        else
        {
          _EAX = ~v15 | 0x80000000;
          __asm { tzcnt   eax, eax }
          v33 = _EAX >> 1;
          if ( v33 > 0xB )
          {
            v34 = v20;
            do
            {
              v28 += 36;
              if ( (unsigned __int64)v11 > v21 )
              {
                v34 = ((_BYTE)v34 + 8 * ((_BYTE)v11 - (_BYTE)v21)) & 0x1F;
                v11 = (_DWORD *)((char *)a4 + a5 - 4);
              }
              else
              {
                v11 = (_DWORD *)((char *)v11 + 3);
              }
              v15 = *v11 >> v34;
              _EAX = ~v15 | 0x80000000;
              __asm { tzcnt   eax, eax }
              v33 = _EAX >> 1;
            }
            while ( v33 > 0xB );
            v20 = v34;
          }
          v23 = v20 + 2 * v33 + 2;
          v28 += ((v15 >> (2 * v33)) & 3) + 3 * v33;
          if ( (unsigned int)v10 <= v28 )
            break;
          v37 = (_DWORD *)((char *)v11 + (v23 >> 3));
          if ( (unsigned __int64)v11 <= v21 || v22 >= (unsigned __int64)v37 )
          {
            v20 = v23 & 7;
            v11 = v37;
          }
          else
          {
            v39 = v23 + 8 * ((_BYTE)v11 - v22);
            v11 = (_DWORD *)((char *)a4 + a5 - 4);
            v20 = v39 & 0x1F;
          }
          v15 = *v11 >> v20;
          v18 = v28;
        }
      }
      result = -20;
      if ( v19 == 1 )
      {
        result = -48;
        if ( (unsigned int)v10 >= v28 )
        {
          result = -20;
          if ( v23 <= 32 )
          {
            *a2 = v28 - 1;
            return (char *)v11 + ((v23 + 7) >> 3) - (char *)a4;
          }
        }
      }
    }
  }
  else
  {
    dest[0] = 0;
    v8 = memcpy(dest, a4, a5);
    result = sub_1149F0(a1, a2, a3, v8, 8);
    if ( result <= 0xFFFFFFFFFFFFFF88LL && a5 < result )
      return -20;
  }
  return result;
}

