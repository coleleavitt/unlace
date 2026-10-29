/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7C01C
// Address: 0x0007C01C

//----- (0007C01C) --------------------------------------------------------
void **__fastcall sub_7C01C(int a1, unsigned int *a2)
{
  void **v2; // r4
  int v5; // r3
  char v6; // r0
  unsigned int v7; // r2
  int v8; // r7
  _BYTE *v9; // r0
  unsigned int v10; // r7
  _BYTE *v11; // r0
  char *v12; // r8
  char *v13; // r6
  int v14; // r2
  _BYTE *v15; // r0
  char *v16; // r1
  unsigned int v17; // r2
  unsigned int v18; // r6
  void *v19; // [sp+4h] [bp-24h] BYREF
  unsigned int v20; // [sp+8h] [bp-20h]
  unsigned int v21; // [sp+Ch] [bp-1Ch]
  void *ptr; // [sp+10h] [bp-18h] BYREF
  unsigned int v23; // [sp+14h] [bp-14h]
  int v24; // [sp+18h] [bp-10h]
  int v25; // [sp+1Ch] [bp-Ch]
  char v26; // [sp+20h] [bp-8h]

  v2 = (void **)a1;
  if ( a1 )
  {
    if ( *a2 < a2[1] )
    {
      v5 = *(_DWORD *)(a1 + 16);
      v6 = 0;
      ptr = nullptr;
      v23 = 0;
      v24 = 0;
      v25 = v5;
      if ( v5 != -1 )
        v6 = sub_6AD68();
      v26 = v6;
      v2 = (void **)sub_7B638(v2, a2, (int)&ptr);
      if ( v2 )
      {
        if ( v26 )
        {
          v7 = v23;
          if ( v23 )
          {
            v19 = nullptr;
            v20 = 0;
            v21 = 0;
            v8 = 11 * v23 + 5;
            if ( 11 * v23 == -5 )
            {
              v9 = (_BYTE *)(11 * v23 + 5);
            }
            else
            {
              v19 = sub_77EB0((int)&v19, nullptr, 11 * v23 + 5, 1u);
              memset((char *)v19 + v20, 0, v8 - v20);
              v20 = v8;
              v9 = v19;
              v7 = v23;
            }
            v10 = (unsigned int)&v9[v8];
            v11 = sub_75FB0(v9, v10, v7);
            v12 = (char *)ptr + 12 * v23;
            if ( ptr != v12 )
            {
              v13 = (char *)ptr + 12;
              v14 = 0;
              while ( 1 )
              {
                if ( (unsigned int)v11 < v10 )
                  *v11++ = *(v13 - 4);
                v15 = sub_75FB0(v11, v10, *((_DWORD *)v13 - 3) - v14);
                v11 = sub_75FB0(v15, v10, *((_DWORD *)v13 - 2) - *((_DWORD *)v13 - 3));
                v14 = *((_DWORD *)v13 - 2);
                if ( v12 == v13 )
                  break;
                v13 += 12;
              }
            }
            v16 = (char *)v19;
            v17 = v20;
            v18 = v11 - (_BYTE *)v19;
            if ( v11 - (_BYTE *)v19 > v20 )
            {
              if ( v18 > v21 )
              {
                v16 = (char *)sub_77EB0((int)&v19, v19, v11 - (_BYTE *)v19, 1u);
                v17 = v20;
                v19 = v16;
              }
              memset(&v16[v17], 0, v18 - v17);
              v20 = v18;
            }
            else if ( v11 - (_BYTE *)v19 < v20 )
            {
              v20 = v11 - (_BYTE *)v19;
            }
            sub_6AD60();
            v23 = 0;
            if ( v19 )
            {
              v20 = 0;
              sub_77E08(v19);
            }
          }
        }
      }
      if ( ptr )
      {
        v23 = 0;
        sub_77E08(ptr);
      }
    }
    else
    {
      return nullptr;
    }
  }
  return v2;
}
