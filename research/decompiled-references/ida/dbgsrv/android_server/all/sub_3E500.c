/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3E500
// Address: 0x000000000003E500

//----- (000000000003E500) ----------------------------------------------------
__int64 __fastcall sub_3E500(unsigned __int64 a1, unsigned int a2, __int64 a3, unsigned __int64 *a4, int a5, char a6)
{
  unsigned __int64 v7; // x19
  int v13; // w26
  char v14; // w28
  int v15; // w27
  _DWORD *v16; // x25
  __int64 v17; // x20
  int v18; // w19
  __int64 v19; // x9
  unsigned __int64 v20; // x10
  __int64 v21; // [xsp+8h] [xbp-78h]
  char v22; // [xsp+14h] [xbp-6Ch]
  unsigned __int64 *v23; // [xsp+18h] [xbp-68h]

  if ( *(_BYTE *)(a1 + 1853) )
    return 0;
  v7 = a1;
  if ( *(_DWORD *)(a1 + 1844) == -1 )
    return 0;
  if ( (a6 & 1) != 0 )
    a1 = sub_3B6B4(a1, 0, 1);
  v22 = a6;
  if ( a2 == -1 )
    a2 = *(_DWORD *)(v7 + 1844);
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v21 = v7;
  v23 = a4;
  if ( (unsigned int)a5 < 0x19 )
    goto LABEL_10;
  do
  {
    v15 = 1;
LABEL_10:
    if ( v13 != a5 && (v14 & 1) == 0 )
    {
      if ( a5 < 1 )
      {
        v13 = 0;
        v14 = 1;
      }
      else
      {
        v16 = (_DWORD *)__errno(a1);
        v13 = 0;
        v14 = 1;
        while ( 1 )
        {
          v17 = a3 & 7;
          *v16 = 0;
          v18 = 8 - (int)v17 <= a5 - v13 ? 8 - v17 : a5 - v13;
          a1 = ptrace(PTRACE_PEEKTEXT, a2, a3 - v17, 0);
          if ( *v16 )
            break;
          if ( v18 == 8 )
          {
            *a4 = a1;
          }
          else if ( v18 >= 1 )
          {
            v19 = 0;
            v20 = a1 >> (8 * ((unsigned __int8)a3 & 7u));
            do
            {
              *((_BYTE *)a4 + v19++) = v20;
              v20 >>= 8;
            }
            while ( v19 < v18 );
          }
          v13 += v18;
          a4 = (unsigned __int64 *)((char *)a4 + v18);
          a3 += v18;
          if ( v13 >= a5 )
          {
            v14 = 1;
            break;
          }
        }
        a4 = v23;
      }
    }
  }
  while ( ((v13 < a5) & ~v15) != 0 );
  if ( (v22 & 1) != 0 )
    sub_409C0(v21, 0, 1);
  return v13 & (unsigned int)~(v13 >> 31);
}
// 372E0: using guessed type __int64 __fastcall __errno(_QWORD);
