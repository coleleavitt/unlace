/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45BF0
// Address: 0x00045BF0

//----- (00045BF0) --------------------------------------------------------
unsigned __int8 *__fastcall sub_45BF0(unsigned __int8 *a1, char a2)
{
  unsigned __int8 *v2; // r5
  int v5; // r7
  unsigned __int8 *v6; // r4
  unsigned __int8 *v7; // r0
  unsigned __int8 **v8; // r12
  unsigned __int8 **v9; // r3
  unsigned __int8 *v10; // r0
  void *ptr; // [sp+0h] [bp-10h] BYREF
  int v12; // [sp+4h] [bp-Ch]
  unsigned int v13; // [sp+8h] [bp-8h]

  v2 = a1;
  if ( !a1 )
  {
    sub_70B98(1563);
    return v2;
  }
  if ( *a1 == 10 )
  {
    ptr = nullptr;
    v12 = 0;
    v13 = 0;
    v5 = sub_3E4E0();
    v6 = v2;
    while ( 1 )
    {
      v7 = (unsigned __int8 *)sub_42A90((int)(v6 + 8), v5);
      v6 = v7;
      if ( !v7 )
        break;
      if ( *v7 != 10 || (a2 & 1) != 0 )
      {
        if ( (a2 & 2) == 0 )
        {
          v2 = v7;
LABEL_18:
          if ( ptr )
          {
            v12 = 0;
            sub_77F70(ptr);
          }
          return v2;
        }
        *v2 = 2;
        if ( !sub_45B30(v2, v7) )
          goto LABEL_18;
LABEL_17:
        v2 = nullptr;
        goto LABEL_18;
      }
      v8 = (unsigned __int8 **)((char *)ptr + 4 * v12);
      if ( ptr != v8 )
      {
        if ( v7 == *(unsigned __int8 **)ptr )
          break;
        v9 = (unsigned __int8 **)((char *)ptr + 4);
        while ( v8 != v9 )
        {
          v10 = *v9++;
          if ( v6 == v10 )
            goto LABEL_16;
        }
      }
      if ( v12 + 1 > v13 )
      {
        ptr = sub_78018((int)&ptr, ptr, v12 + 1, 4u);
        v8 = (unsigned __int8 **)((char *)ptr + 4 * v12);
      }
      *v8 = v6;
      ++v12;
    }
LABEL_16:
    sub_70B98(1563);
    goto LABEL_17;
  }
  return v2;
}
