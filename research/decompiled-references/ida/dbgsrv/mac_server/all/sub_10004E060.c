/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004E060
// Address: 0x000000010004E060

//----- (000000010004E060) ----------------------------------------------------
void __fastcall sub_10004E060(__int64 a1, unsigned __int64 a2)
{
  void *v4; // rax
  void *v5; // rdi
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  void *v8; // rdi
  _QWORD *v9; // rsi
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  _QWORD *v12; // r8
  unsigned __int64 v13; // rax

  if ( a2 )
  {
    if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
      sub_10000AF40();
    v4 = operator new(8 * a2);
    v5 = *(void **)a1;
    *(_QWORD *)a1 = v4;
    if ( v5 )
      operator delete(v5);
    *(_QWORD *)(a1 + 8) = a2;
    v6 = a2 & 3;
    if ( a2 >= 4 )
    {
      v7 = 0;
      do
      {
        *(_QWORD *)(*(_QWORD *)a1 + 8 * v7) = 0;
        *(_QWORD *)(*(_QWORD *)a1 + 8 * v7 + 8) = 0;
        *(_QWORD *)(*(_QWORD *)a1 + 8 * v7 + 16) = 0;
        *(_QWORD *)(*(_QWORD *)a1 + 8 * v7 + 24) = 0;
        v7 += 4;
      }
      while ( (a2 & 0x1FFFFFFFFFFFFFFCLL) != v7 );
    }
    else
    {
      v7 = 0;
    }
    if ( (a2 & 3) != 0 )
    {
      do
      {
        *(_QWORD *)(*(_QWORD *)a1 + 8 * v7++) = 0;
        --v6;
      }
      while ( v6 );
    }
    v9 = *(_QWORD **)(a1 + 16);
    if ( v9 )
    {
      v10 = v9[1];
      v11 = (0x101010101010101LL
           * ((((a2 - ((a2 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
             + (((a2 - ((a2 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
             + ((((a2 - ((a2 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
               + (((a2 - ((a2 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4))
            & 0xF0F0F0F0F0F0F0FLL)) >> 56;
      if ( v11 > 1 )
      {
        if ( v10 >= a2 )
        {
          if ( (a2 | v10) >> 32 )
            v10 %= a2;
          else
            v10 = (unsigned int)v10 % (unsigned int)a2;
        }
      }
      else
      {
        v10 &= a2 - 1;
      }
      *(_QWORD *)(*(_QWORD *)a1 + 8 * v10) = a1 + 16;
      v12 = (_QWORD *)*v9;
      if ( *v9 )
      {
        while ( 1 )
        {
          v13 = v12[1];
          if ( (unsigned int)v11 <= 1 )
          {
            v13 &= a2 - 1;
            if ( v13 == v10 )
              goto LABEL_24;
            goto LABEL_33;
          }
          if ( v13 < a2 )
            goto LABEL_32;
          if ( (a2 | v13) >> 32 )
            break;
          v13 = (unsigned int)v13 % (unsigned int)a2;
          if ( v13 == v10 )
            goto LABEL_24;
LABEL_33:
          if ( !*(_QWORD *)(*(_QWORD *)a1 + 8 * v13) )
          {
            *(_QWORD *)(*(_QWORD *)a1 + 8 * v13) = v9;
            goto LABEL_25;
          }
          *v9 = *v12;
          *v12 = **(_QWORD **)(*(_QWORD *)a1 + 8 * v13);
          **(_QWORD **)(*(_QWORD *)a1 + 8 * v13) = v12;
          v12 = v9;
LABEL_24:
          v13 = v10;
LABEL_25:
          v9 = v12;
          v12 = (_QWORD *)*v12;
          v10 = v13;
          if ( !v12 )
            return;
        }
        v13 %= a2;
LABEL_32:
        if ( v13 == v10 )
          goto LABEL_24;
        goto LABEL_33;
      }
    }
  }
  else
  {
    v8 = *(void **)a1;
    *(_QWORD *)a1 = 0;
    if ( v8 )
      operator delete(v8);
    *(_QWORD *)(a1 + 8) = 0;
  }
}
