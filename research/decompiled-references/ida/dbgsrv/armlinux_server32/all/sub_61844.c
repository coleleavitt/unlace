/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_61844
// Address: 0x00061844

//----- (00061844) --------------------------------------------------------
unsigned int __fastcall sub_61844(int a1, __int64 *a2)
{
  unsigned int result; // r0
  int v5; // r9
  unsigned int v6; // r11
  int v7; // r6
  char *v8; // r10
  char *v9; // r0
  char *v10; // r5
  __int64 v11; // kr08_8
  unsigned __int8 *v12; // r3
  size_t v14; // r10
  unsigned int v15; // r2
  void *v16; // r0
  unsigned int v17; // [sp+4h] [bp-8h]

  result = sub_762E4((unsigned __int8 **)a2, *((_DWORD *)a2 + 1));
  if ( result )
  {
    v5 = 0;
    v6 = result;
    do
    {
      v7 = *(_DWORD *)(a1 + 4);
      v8 = *(char **)a1;
      if ( (unsigned int)(v7 + 1) > *(_DWORD *)(a1 + 8) )
      {
        v9 = (char *)sub_78018(a1, *(void **)a1, v7 + 1, 0x10u);
        v7 = *(_DWORD *)(a1 + 4);
        v8 = v9;
        *(_DWORD *)a1 = v9;
      }
      v10 = &v8[16 * v7];
      *((_DWORD *)v10 + 1) = 0;
      *((_DWORD *)v10 + 2) = 0;
      *((_DWORD *)v10 + 3) = 0;
      ++*(_DWORD *)(a1 + 4);
      result = sub_762E4((unsigned __int8 **)a2, *((_DWORD *)a2 + 1));
      *(_DWORD *)v10 = result;
      v11 = *a2;
      if ( HIDWORD(v11) > (unsigned int)v11 )
      {
        v12 = (unsigned __int8 *)(v11 + 1);
        if ( *(_BYTE *)v11 )
        {
          while ( v12 != (unsigned __int8 *)HIDWORD(v11) )
          {
            if ( !*v12++ )
              goto LABEL_13;
          }
        }
        else
        {
LABEL_13:
          *(_DWORD *)a2 = v12;
          if ( (_DWORD)v11 )
          {
            result = strlen((const char *)v11);
            v14 = result;
            if ( result )
            {
              v15 = result + 1;
              v17 = v15;
              v16 = *((void **)v10 + 1);
              if ( v15 > *((_DWORD *)v10 + 3) )
              {
                v16 = sub_78018((int)(v10 + 4), *((void **)v10 + 1), v15, 1u);
                *((_DWORD *)v10 + 1) = v16;
              }
              *((_DWORD *)v10 + 2) = v17;
              result = (unsigned int)memmove(v16, (const void *)v11, v14);
              *(_BYTE *)(*((_DWORD *)v10 + 1) + v14) = 0;
              goto LABEL_11;
            }
          }
        }
      }
      *((_DWORD *)v10 + 2) = 0;
LABEL_11:
      ++v5;
    }
    while ( v5 != v6 );
  }
  return result;
}
