/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4585E0
// Address: 0x004585E0

//----- (004585E0) --------------------------------------------------------
int __cdecl sub_4585E0(DWORD *a1, const WCHAR *a2, int a3, unsigned int a4, int a5)
{
  int v5; // esi
  unsigned int v6; // edi
  int v7; // ebp
  int v8; // edx
  unsigned int v9; // esi
  BOOL v10; // ecx
  unsigned int v11; // ebx
  char *v12; // ecx
  int v13; // esi
  int v14; // eax
  int v15; // edi
  const WCHAR *v16; // eax
  signed int v17; // esi
  DWORD v19; // [esp-Ch] [ebp-50h]
  int v20; // [esp+18h] [ebp-2Ch] BYREF
  const WCHAR *v21; // [esp+1Ch] [ebp-28h]
  DWORD *v22; // [esp+20h] [ebp-24h]
  DWORD v23; // [esp+24h] [ebp-20h] BYREF
  unsigned int v24; // [esp+28h] [ebp-1Ch]
  CHAR v25; // [esp+30h] [ebp-14h] BYREF
  char v26[15]; // [esp+31h] [ebp-13h] BYREF

  v5 = a3;
  v21 = a2;
  v24 = a4;
  v6 = 0;
  v19 = *a1;
  v22 = a1;
  v20 = 16;
  v7 = 0;
  v23 = 0;
  if ( ConvertINetUnicodeToMultiByte(&v23, v19, a2, &a3, &v25, &v20) || v5 != a3 )
    goto LABEL_30;
  v8 = v20;
  if ( a5 >= v20 )
  {
    if ( v20 == 1 )
    {
      v9 = dword_4B5D00[0];
      v7 = 0;
      v10 = v25 == 14;
      v11 = v10;
    }
    else
    {
      v12 = (char *)off_4B5D08;
      v13 = 1;
      if ( off_4B5D08 )
      {
        v14 = 4;
        while ( 1 )
        {
          v6 = dword_4B5CFC[v14];
          if ( !sub_467F80((int)&v25, v12, v6) )
            break;
          ++v13;
          v14 = 4 * v13;
          v12 = (&off_4B5CF8)[4 * v13];
          if ( !v12 )
            goto LABEL_13;
        }
        v7 = dword_4B5D04[4 * v13];
LABEL_13:
        v8 = v20;
      }
      if ( !(&off_4B5CF8)[4 * v13] )
        goto LABEL_30;
      v11 = v6 + 1;
      v10 = v26[v6 - 1] == 14;
      if ( v26[v6 - 1] != 14 )
        v11 = v6;
      v9 = dword_4B5D00[4 * v7];
      if ( v7 )
      {
LABEL_19:
        if ( v8 >= (int)(v11 + v9) )
        {
          v15 = v10 | (v7 << 8);
          v16 = (const WCHAR *)v22[6];
          v21 = v16;
          if ( v16 == (const WCHAR *)v15 )
          {
            if ( v11 )
              sub_464310((unsigned int)&v25, (unsigned int)&v26[v11 - 1], v9);
            v11 = 0;
          }
          else
          {
            if ( !v7 )
            {
              v11 = dword_4B5CFC[0];
              sub_464310((unsigned int)&v26[dword_4B5CFC[0] - 1], (unsigned int)&v25, v9);
              sub_464310((unsigned int)&v25, (unsigned int)off_4B5CF8, v11);
              LOBYTE(v16) = (_BYTE)v21;
            }
            if ( (_BYTE)v16 == 1 )
            {
              sub_464310((unsigned int)v26, (unsigned int)&v25, v9 + v11);
              v25 = 15;
              ++v11;
            }
          }
          v17 = v11 + v9;
          if ( a5 >= v17 )
          {
            sub_464310(v24, (unsigned int)&v25, v17);
            v22[6] = v15;
            return v17;
          }
          goto LABEL_4;
        }
LABEL_30:
        *sub_46B984() = 42;
        return -1;
      }
    }
    if ( *v21 >= 0x80u )
      goto LABEL_30;
    goto LABEL_19;
  }
LABEL_4:
  *sub_46B984() = 7;
  return -1;
}
// 4B5CF8: using guessed type char *off_4B5CF8;
// 4B5CFC: using guessed type int dword_4B5CFC[];
// 4B5D00: using guessed type int dword_4B5D00[];
// 4B5D04: using guessed type int dword_4B5D04[];
// 4B5D08: using guessed type _UNKNOWN **off_4B5D08;
