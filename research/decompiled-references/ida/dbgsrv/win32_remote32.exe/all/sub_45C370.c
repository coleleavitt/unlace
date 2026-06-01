/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45C370
// Address: 0x0045C370

//----- (0045C370) --------------------------------------------------------
int __thiscall sub_45C370(int this, unsigned int a2, signed int a3)
{
  unsigned int v4; // ebx
  int v5; // esi
  _DWORD *v6; // edi
  __int64 v7; // rax
  unsigned int v8; // ecx
  signed __int64 v9; // kr08_8
  int result; // eax
  int v11; // esi
  signed int v12; // ebx
  signed int v13; // eax
  bool v14; // zf
  int v15; // eax
  int v16; // edi
  int v17; // edi
  unsigned int v18; // edx
  int v19; // [esp+14h] [ebp-8h]
  int v20; // [esp+18h] [ebp-4h]

  if ( a3 < 0 )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(1225);
  }
  v4 = *(_DWORD *)(this + 24);
  v5 = *(_DWORD *)(this + 28);
  v20 = v5;
  v6 = (_DWORD *)(this + 24);
  if ( v5 < 0 )
    return 0;
  v9 = __PAIR64__(v5, v4) + (unsigned int)a3;
  v8 = HIDWORD(v9);
  LODWORD(v7) = v9;
  if ( v9 < __SPAIR64__(v5, v4) )
    return 0;
  if ( *(_DWORD *)(this + 40) )
  {
    HIDWORD(v7) = *(_DWORD *)(this + 16);
    if ( v9 <= *(_QWORD *)(this + 16) )
    {
LABEL_10:
      HIDWORD(v7) = v8;
      v11 = -1;
      v19 = sub_462A90(*(unsigned int *)(this + 40) + v7 - 1, *(unsigned int *)(this + 40));
      v12 = sub_463510(__PAIR64__(v20, v4), *(unsigned int *)(this + 40));
      v13 = v19;
      v14 = v12 == v19;
      if ( v12 <= v19 )
      {
        while ( 1 )
        {
          if ( v14
            || (v13 = v19,
                ((unsigned __int8)(1 << (v12 & 7)) & *(_BYTE *)(((unsigned int)v12 >> 3) + *(_DWORD *)(this + 32))) != 0) )
          {
            if ( v11 != -1 )
            {
              v15 = v11 * *(_DWORD *)(this + 40);
              v16 = v12 * *(_DWORD *)(this + 40);
              if ( (unsigned int)v16 > *(__int64 *)(this + 16) )
                v16 = *(_DWORD *)(this + 16);
              v17 = v16 - v15;
              if ( v17 < 0
                || (***(int (__stdcall ****)(_DWORD, int, _DWORD, int, int))(this + 8))(
                     *(_DWORD *)(this + 8),
                     v11 * *(_DWORD *)(this + 40),
                     0,
                     v15 + *(_DWORD *)(this + 36),
                     v17) != v17 )
              {
                return -1;
              }
              for ( ; v11 < v12; *(_BYTE *)(*(_DWORD *)(this + 32) + (v18 >> 3)) |= 1 << (v18 & 7) )
                v18 = v11++;
              v13 = v19;
              v11 = -1;
            }
          }
          else if ( v11 == -1 )
          {
            v11 = v12;
          }
          v14 = ++v12 == v13;
          if ( v12 > v13 )
          {
            v6 = (_DWORD *)(this + 24);
            break;
          }
        }
      }
      sub_464310(a2, *v6 + *(_DWORD *)(this + 36), a3);
      result = a3;
LABEL_26:
      *(_QWORD *)v6 += (unsigned int)result;
      return result;
    }
    v8 = *(_DWORD *)(this + 20);
    if ( __SPAIR64__(v5, v4) < __SPAIR64__(v8, HIDWORD(v7)) )
    {
      v6 = (_DWORD *)(this + 24);
      a3 = HIDWORD(v7) - v4;
      LODWORD(v7) = *(_DWORD *)(this + 16);
      goto LABEL_10;
    }
    return 0;
  }
  result = (***(int (__stdcall ****)(_DWORD, unsigned int, int, unsigned int, signed int))(this + 8))(
             *(_DWORD *)(this + 8),
             v4,
             v5,
             a2,
             a3);
  if ( result >= 0 )
    goto LABEL_26;
  return result;
}
// 4B70F0: using guessed type char byte_4B70F0;
