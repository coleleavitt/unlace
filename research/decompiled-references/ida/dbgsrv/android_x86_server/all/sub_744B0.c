/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_744B0
// Address: 0x000744B0

//----- (000744B0) --------------------------------------------------------
_DWORD *__fastcall sub_744B0(char *file, int a2)
{
  unsigned int v4; // eax
  char *v5; // edi
  int v6; // ecx
  _DWORD *v7; // eax
  int v8; // ecx
  int v9; // eax
  _BYTE *v10; // eax
  _DWORD *v12; // [esp+20h] [ebp-505Ch]
  int v13; // [esp+24h] [ebp-5058h]
  int v14; // [esp+28h] [ebp-5054h] BYREF
  int v15; // [esp+2Ch] [ebp-5050h]
  unsigned int v16; // [esp+30h] [ebp-504Ch]
  int v17; // [esp+38h] [ebp-5044h] BYREF
  _DWORD v18[4107]; // [esp+3Ch] [ebp-5040h] BYREF
  char v19[4096]; // [esp+4068h] [ebp-1014h] BYREF
  unsigned int v20; // [esp+5068h] [ebp-14h] BYREF

  v4 = __readgsdword(0x14u);
  v20 = v4;
  LOBYTE(v4) = 1;
  v12 = (_DWORD *)v4;
  if ( !qfileexist(file) )
  {
    v13 = a2;
    v19[0] = 0;
    v14 = 0;
    v15 = 0;
    v16 = 0;
    while ( 1 )
    {
      v5 = qbasename(file);
      v6 = v15;
      if ( v16 >= v15 + 1 )
      {
        v7 = (_DWORD *)v14;
      }
      else
      {
        v7 = qvector_reserve((int)&v14, (void *)v14, v15 + 1, 4u);
        v14 = (int)v7;
        v6 = v15;
      }
      v7[v6] = v5;
      v8 = ++v15;
      if ( v5 == file )
        break;
      *(v5 - 1) = 0;
      if ( qisdir(file) )
      {
        v7 = (_DWORD *)qstrncpy((unsigned int)v19, (int)file, 4096);
        v8 = v15;
        break;
      }
    }
    if ( v8 )
    {
      while ( 1 )
      {
        v9 = *(_DWORD *)(v14 + 4 * v8 - 4);
        v15 = v8 - 1;
        if ( v19[0] )
          qmakepath(v19, 4096, v19, v9);
        else
          qstrncpy((unsigned int)v19, v9, 4096);
        v18[2054] = 0;
        v18[2056] = 0;
        if ( qfindfirst((int)v19, (int)&v17, (v15 != 0) << 14) )
          break;
        v10 = qbasename(v19);
        qstrncpy((unsigned int)v10, (int)v18, (char *)&v20 - v10);
        qfindclose((int)&v17);
        v8 = v15;
        if ( !v15 )
          goto LABEL_15;
      }
      qfindclose((int)&v17);
      v12 = nullptr;
    }
    else
    {
LABEL_15:
      LOBYTE(v7) = 1;
      v12 = v7;
      qstrncpy((unsigned int)file, (int)v19, v13);
    }
    if ( v14 )
    {
      v15 = 0;
      qfree((void *)v14);
      v14 = 0;
      v16 = 0;
    }
  }
  return v12;
}
// 7469E: variable 'v7' is possibly undefined
