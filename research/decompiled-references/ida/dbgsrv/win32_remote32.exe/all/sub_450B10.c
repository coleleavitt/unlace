/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_450B10
// Address: 0x00450B10

//----- (00450B10) --------------------------------------------------------
int __thiscall sub_450B10(int *this, int a2)
{
  int v3; // ebp
  unsigned int *v4; // eax
  int v5; // ebx
  unsigned int v6; // edi
  __int64 v7; // rax
  __int64 v8; // kr00_8
  unsigned int v9; // eax
  unsigned int v10; // kr08_4
  bool v11; // zf
  unsigned int v13; // [esp+10h] [ebp-28h]
  int v14; // [esp+24h] [ebp-14h]

  if ( *(this + 22) )
    return 1;
  v3 = a2;
  v4 = (unsigned int *)(this + 18);
  v5 = 0;
  v6 = 0;
  v13 = 0;
  do
  {
    if ( *(this + 19) )
    {
      if ( !sub_451690((int)this, (int)(this + 21), v4) )
        return -1;
      if ( *(this + 22) )
        return 1;
    }
    if ( v3 != -1 )
    {
      LODWORD(v7) = sub_453720();
      v14 = v7;
      if ( v6 | v5 )
      {
        v8 = v7 - __PAIR64__(v6, v13);
        v10 = (((446676599 * (unsigned __int64)((unsigned int)v7 - v13)) >> 32)
             + 446676599LL * HIDWORD(v8)
             + 103079215LL * (unsigned int)v8) >> 32;
        v9 = ((unsigned int)(__CFADD__(
                               ((446676599 * (unsigned __int64)((unsigned int)v7 - v13)) >> 32)
                             + 446676599 * HIDWORD(v8),
                               103079215 * v8)
                           + ((103079215 * (unsigned __int64)(unsigned int)v8) >> 32))
            + ((((446676599 * (unsigned __int64)((unsigned int)v7 - v13)) >> 32) + 446676599LL * HIDWORD(v8)) >> 32)) >> 32;
        v3 = a2
           - ((__PAIR64__(v9, v10)
             + 103079215LL * HIDWORD(v8)
             + ((v8 - (__PAIR64__(v9, v10) + 103079215LL * HIDWORD(v8))) >> 1)) >> 9);
        if ( v3 <= 0 )
          v3 = 0;
        LODWORD(v7) = v14;
        a2 = v3;
      }
      v6 = HIDWORD(v7);
      v5 = v7;
      v13 = v7;
    }
    v11 = sub_452350(this, (int)(this + 18), v3) == 0;
    v4 = (unsigned int *)(this + 18);
  }
  while ( !v11 );
  return -1;
}
// 450B93: variable 'v7' is possibly undefined
