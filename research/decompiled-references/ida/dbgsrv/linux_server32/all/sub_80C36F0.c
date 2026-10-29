/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C36F0
// Address: 0x080C36F0

//----- (080C36F0) --------------------------------------------------------
unsigned int __usercall sub_80C36F0@<eax>(int a1@<eax>, const char *a2@<edx>, signed int a3@<ecx>, int a4)
{
  int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // edi
  unsigned int v8; // eax
  unsigned __int8 *v9; // eax
  char v10; // dl
  char v11; // dl
  size_t v12; // ecx
  int v13; // esi
  int v14; // eax
  unsigned int v15; // edx
  void *v16; // eax
  unsigned int result; // eax
  size_t v18; // ebp
  unsigned __int8 *v19; // esi
  int v20; // eax
  size_t v21; // esi
  size_t v22; // [esp+0h] [ebp-58h]
  signed int v23; // [esp+4h] [ebp-54h]
  unsigned int v25; // [esp+14h] [ebp-44h]
  int v26; // [esp+14h] [ebp-44h]
  size_t v27; // [esp+18h] [ebp-40h]
  unsigned __int8 *v28; // [esp+24h] [ebp-34h] BYREF
  _BYTE v29[16]; // [esp+28h] [ebp-30h] BYREF
  unsigned int v30; // [esp+38h] [ebp-20h]

  v23 = a3;
  v30 = __readgsdword(0x14u);
  if ( a3 == -1 )
    v23 = strlen(a2);
  v5 = v23;
  if ( v23 < a4 )
    v5 = a4;
  v6 = v5 + 16;
  if ( *(_DWORD *)(a1 + 8) < v6 )
    *(_DWORD *)a1 = sub_80CF920(a1, *(void **)a1, v6, 1u);
  v7 = (unsigned int)a2;
  v28 = (unsigned __int8 *)a2;
  if ( v23 > 0 )
  {
    do
    {
      v8 = sub_80C7170(&v28);
      if ( v8 - 1 > 0xFFFFFFFD )
      {
        v9 = v28++;
        v8 = *v9;
      }
      if ( v8 > 0x22 )
      {
        v10 = 92;
        if ( v8 == 92 )
        {
LABEL_25:
          v29[1] = v10;
          v12 = 2;
          v29[0] = 92;
          v7 = (unsigned int)v29;
          if ( a4 > 0 )
          {
LABEL_16:
            v13 = *(_DWORD *)(a1 + 4);
            v14 = v13;
            if ( v13 )
              goto LABEL_17;
            if ( v12 >= a4 )
              break;
            goto LABEL_34;
          }
          goto LABEL_26;
        }
      }
      else if ( v8 > 6 )
      {
        switch ( v8 )
        {
          case 7u:
            v10 = 97;
            goto LABEL_25;
          case 8u:
            v10 = 98;
            goto LABEL_25;
          case 9u:
            v10 = 116;
            goto LABEL_25;
          case 0xAu:
            v10 = 110;
            goto LABEL_25;
          case 0xBu:
            v10 = 118;
            goto LABEL_25;
          case 0xCu:
            v10 = 102;
            goto LABEL_25;
          case 0xDu:
            v10 = 114;
            goto LABEL_25;
          case 0x22u:
            v10 = 34;
            goto LABEL_25;
          default:
            break;
        }
      }
      v11 = sub_80C3CA0(v8);
      v12 = (size_t)&v28[-v7];
      if ( !v11 )
      {
        if ( v7 >= (unsigned int)v28 )
        {
          if ( a4 > 0 )
          {
            v13 = *(_DWORD *)(a1 + 4);
            v14 = v13;
            if ( v13 )
            {
              v12 = 0;
              v7 = (unsigned int)v29;
LABEL_17:
              if ( v12 + v14 - 1 >= a4 )
                break;
              v13 = v14;
LABEL_19:
              --v13;
              v22 = v12 + v13;
              v15 = v12 + v13 + 1;
            }
            else
            {
              v22 = 0;
              v12 = 0;
              v15 = 1;
              v7 = (unsigned int)v29;
            }
            v16 = *(void **)a1;
            if ( *(_DWORD *)(a1 + 8) < v15 )
              goto LABEL_35;
            goto LABEL_21;
          }
          v12 = 0;
          v7 = (unsigned int)v29;
          goto LABEL_26;
        }
        v26 = a1;
        v18 = 0;
        v19 = (unsigned __int8 *)v7;
        do
        {
          v20 = *v19++;
          v18 += sub_80D3B60(&v29[v18], 16 - v18, "\\x%02X", v20);
        }
        while ( v19 < v28 );
        v21 = v18;
        v7 = (unsigned int)v29;
        a1 = v26;
        v12 = v21;
      }
      if ( a4 > 0 )
        goto LABEL_16;
LABEL_26:
      v13 = *(_DWORD *)(a1 + 4);
      if ( v13 )
        goto LABEL_19;
LABEL_34:
      v22 = v12;
      v16 = *(void **)a1;
      v15 = v12 + 1;
      if ( *(_DWORD *)(a1 + 8) < v12 + 1 )
      {
LABEL_35:
        v27 = v12;
        v25 = v15;
        v16 = sub_80CF920(a1, v16, v15, 1u);
        v12 = v27;
        v15 = v25;
        *(_DWORD *)a1 = v16;
      }
LABEL_21:
      *(_DWORD *)(a1 + 4) = v15;
      *((_BYTE *)v16 + v22) = 0;
      memmove((void *)(*(_DWORD *)a1 + v13), (const void *)v7, v12);
      v7 = (unsigned int)v28;
    }
    while ( v23 > v28 - (unsigned __int8 *)a2 );
  }
  result = v30 - __readgsdword(0x14u);
  if ( result )
    sub_80D7AB0();
  return result;
}
