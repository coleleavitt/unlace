/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D40A0
// Address: 0x000D40A0

//----- (000D40A0) --------------------------------------------------------
__int64 *__cdecl sub_D40A0(int a1, void **a2)
{
  int v2; // ecx
  __int64 *result; // eax
  int v4; // esi
  void **v5; // edx
  int v6; // edi
  __int64 *v7; // ebx
  unsigned int v8; // eax
  char *v9; // eax
  size_t v10; // eax
  void **v11; // edi
  _BYTE *v12; // esi
  void **v13; // edi
  int v14; // edi
  int v15; // [esp+Ch] [ebp-20h]
  __int64 *v16; // [esp+10h] [ebp-1Ch]
  int v17; // [esp+14h] [ebp-18h]
  __int64 *v18; // [esp+18h] [ebp-14h]

  result = &qword_13ACD8;
  v4 = a1;
  if ( *(_DWORD *)(a1 + 12) )
  {
    v5 = a2;
    result = (__int64 *)a2[1];
    v6 = 0;
    LOBYTE(v2) = 1;
    do
    {
      v17 = v2;
      v16 = result;
      v15 = v6;
      if ( (v2 & 1) == 0 )
      {
        v7 = result;
        v8 = (unsigned int)v5[2];
        if ( (unsigned int)v16 + 2 >= v8 )
        {
          v10 = 2 * v8;
          if ( v10 < (unsigned int)v16 + 2 )
            v10 = (size_t)v16 + 2;
          v5[2] = (void *)v10;
          v11 = v5;
          v9 = (char *)realloc(*v5, v10);
          v5 = v11;
          v6 = v15;
          *v5 = v9;
          v7 = (__int64 *)v5[1];
        }
        else
        {
          v9 = (char *)*v5;
        }
        *(_WORD *)((char *)v7 + (_DWORD)v9) = 8236;
        result = (__int64 *)((char *)v5[1] + 2);
        v5[1] = result;
      }
      v18 = result;
      v12 = *(_BYTE **)(*(_DWORD *)(v4 + 8) + 4 * v6);
      v13 = v5;
      (*(void (__cdecl **)(_BYTE *, void **))(*(_DWORD *)v12 + 12))(v12, v5);
      if ( v12[5] != 1 )
        (*(void (__cdecl **)(_BYTE *, void **))(*(_DWORD *)v12 + 16))(v12, v13);
      result = (__int64 *)v13[1];
      v5 = v13;
      if ( v18 == result )
      {
        result = v16;
        v13[1] = v16;
        v4 = a1;
        v14 = v15;
        v2 = v17;
      }
      else
      {
        v2 = 0;
        v4 = a1;
        v14 = v15;
      }
      v6 = v14 + 1;
    }
    while ( v6 != *(_DWORD *)(v4 + 12) );
  }
  return result;
}
// D40E0: variable 'v2' is possibly undefined
// 13ACD8: using guessed type __int64 qword_13ACD8;
