/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46BD18
// Address: 0x0046BD18

//----- (0046BD18) --------------------------------------------------------
int __usercall sub_46BD18@<eax>(int a1@<ebx>, int a2, int a3, unsigned int a4, _DWORD *a5)
{
  unsigned __int8 *v5; // edi
  _BYTE *v7; // ebx
  unsigned int v8; // esi
  int v9; // ecx
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // edx
  _DWORD v14[3]; // [esp+4h] [ebp-14h] BYREF
  char v15; // [esp+10h] [ebp-8h]
  int v16; // [esp+14h] [ebp-4h]

  v5 = (unsigned __int8 *)a2;
  if ( a2 )
  {
    v7 = (_BYTE *)a3;
    if ( a3 )
    {
      v8 = a4;
      if ( a4 <= 0x7FFFFFFF )
      {
        if ( a4 )
        {
          sub_467FF8((int)v14, a5);
          v9 = *(_DWORD *)(v14[1] + 148);
          v16 = v9;
          do
          {
            v10 = *v5++;
            v11 = *(unsigned __int8 *)(v10 + v9);
            LOBYTE(v10) = *v7++;
            v12 = *(unsigned __int8 *)((unsigned __int8)v10 + v16);
            v13 = v11 - v12;
            if ( v11 != v12 )
              break;
            if ( !v11 )
              break;
            v9 = v16;
            --v8;
          }
          while ( v8 );
          if ( v15 )
            *(_DWORD *)(v14[0] + 848) &= ~2u;
          return v13;
        }
        else
        {
          return 0;
        }
      }
      else
      {
        *sub_46B984() = 22;
        sub_467EF4(a3, a2);
        return 0x7FFFFFFF;
      }
    }
    else
    {
      *sub_46B984() = 22;
      sub_467EF4(0, a2);
      return 0x7FFFFFFF;
    }
  }
  else
  {
    *sub_46B984() = 22;
    sub_467EF4(a1, 0);
    return 0x7FFFFFFF;
  }
}
