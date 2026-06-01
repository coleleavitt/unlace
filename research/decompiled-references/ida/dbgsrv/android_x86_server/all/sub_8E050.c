/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8E050
// Address: 0x0008E050

//----- (0008E050) --------------------------------------------------------
int __cdecl sub_8E050(int a1, int a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // kr08_8
  unsigned __int64 v4; // kr10_8
  char v5; // cl
  unsigned int v6; // ebx
  unsigned int v7; // eax
  int v8; // edi
  unsigned int v9; // ecx
  int v10; // edx
  unsigned int v11; // esi
  int v12; // edi
  unsigned int v13; // kr04_4
  int v14; // esi
  int v15; // edi
  int v16; // eax
  bool v17; // zf
  int v18; // eax
  int v19; // ebx
  unsigned int v20; // edx
  unsigned __int64 v21; // kr20_8
  bool v22; // cf
  unsigned int v24; // [esp+Ch] [ebp-30h]
  int v25; // [esp+Ch] [ebp-30h]
  unsigned int v26; // [esp+10h] [ebp-2Ch]
  int v27; // [esp+10h] [ebp-2Ch]
  unsigned int v28; // [esp+14h] [ebp-28h]
  int v29; // [esp+1Ch] [ebp-20h]
  _BYTE v30[21]; // [esp+27h] [ebp-15h] BYREF

  *(_DWORD *)&v30[1] = __readgsdword(0x14u);
  v3 = a3;
  if ( (*(int (__cdecl **)(int, int, _DWORD, _DWORD, _BYTE *, int))(*(_DWORD *)a1 + 192))(
         a1,
         a2,
         a3 - 1,
         (a3 - 1) >> 32,
         v30,
         1) == 1 )
  {
    v4 = a3;
    do
    {
      v5 = HIDWORD(v3) < (unsigned int)((_DWORD)v3 != -1) + 0x7FFFFFFF;
      v24 = v3 << v5 >> 32;
      v26 = (_DWORD)v3 << v5;
      v6 = v4 + v3;
      v17 = (*(int (__cdecl **)(int, int, unsigned int, _DWORD, _BYTE *, int))(*(_DWORD *)a1 + 192))(
              a1,
              a2,
              v6 - 1,
              (v6 != 0) + ((v4 + v3) >> 32) - 1,
              v30,
              1) == 1;
      v8 = HIDWORD(v4);
      v7 = v4;
      v9 = v4 + v3;
      v10 = (v4 + v3) >> 32;
      v3 = __PAIR64__(v24, v26);
      v4 = __PAIR64__(v10, v9);
    }
    while ( v17 );
  }
  else
  {
    v8 = 0;
    v10 = HIDWORD(a3);
    v6 = a3;
    v7 = 0;
  }
  v27 = v8;
  if ( __PAIR64__(v8, v7) + 1 >= __PAIR64__(v10, v6) )
    return v7;
  v11 = v6;
  v12 = v7;
  do
  {
    v28 = v11;
    v25 = v12;
    v13 = v11;
    v29 = v10;
    v14 = v27;
    v15 = (__PAIR64__(v10, v12) + __PAIR64__(v27, v13)) >> 1;
    v16 = (*(int (__cdecl **)(int, int, int, int, _BYTE *, int))(*(_DWORD *)a1 + 192))(
            a1,
            a2,
            v15 - 1,
            (v15 - 1) >> 31,
            v30,
            1);
    v17 = v16 == 1;
    if ( v16 == 1 )
      v14 = v15 >> 31;
    v18 = v25;
    if ( v17 )
      v18 = v15;
    v19 = v29;
    if ( !v17 )
      v19 = v15 >> 31;
    v20 = v28;
    if ( !v17 )
      v20 = v15;
    v12 = v18;
    v27 = v14;
    v21 = __PAIR64__(v14, v18) + 1;
    v11 = v20;
    v22 = (unsigned int)v21 < v20;
    v10 = v19;
  }
  while ( HIDWORD(v21) < (unsigned int)v22 + v19 );
  return v12;
}
