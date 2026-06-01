/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_416440
// Address: 0x00416440

//----- (00416440) --------------------------------------------------------
char *__thiscall sub_416440(_DWORD *this, const char **a2, char *a3)
{
  char **v3; // ebx
  int v4; // edi
  char **v5; // esi
  unsigned int v6; // eax
  int v7; // ecx
  _DWORD *v8; // eax
  int v9; // ebx
  const char *v10; // eax
  unsigned int v11; // edi
  unsigned int v12; // eax
  char *v13; // edx
  void *v14; // edi
  unsigned int v15; // eax
  unsigned int v16; // eax
  const char **v17; // eax
  char *result; // eax
  unsigned int v19; // [esp-8h] [ebp-34h]
  char *v21; // [esp+14h] [ebp-18h]
  char v22; // [esp+18h] [ebp-14h] BYREF
  const char *v23; // [esp+1Ch] [ebp-10h]

  v3 = (char **)this;
  if ( *a2 )
  {
    v4 = (int)(this + 3);
    v21 = (char *)(this + 3);
    v5 = (char **)(this + 6);
    do
    {
      v6 = *(_DWORD *)(v4 + 4) + 1;
      if ( v6 > *(_DWORD *)(v4 + 8) )
        *(_DWORD *)v4 = sub_453B00(v4, *(void **)v4, v6, 0xCu);
      v7 = 3 * *(_DWORD *)(v4 + 4);
      v8 = *(_DWORD **)v4;
      v8[v7] = 0;
      v8[v7 + 1] = 0;
      v8[v7 + 2] = 0;
      ++*(_DWORD *)(v4 + 4);
      v9 = (int)&v8[v7];
      v10 = *a2;
      v23 = v10;
      ++a2;
      if ( v10 && (v11 = strlen(v10)) != 0 )
      {
        v12 = v11 + 1;
        if ( v11 + 1 > *(_DWORD *)(v9 + 8) )
        {
          *(_DWORD *)v9 = sub_453B00(v9, *(void **)v9, v11 + 1, 1u);
          v12 = v11 + 1;
        }
        v19 = (unsigned int)v23;
        *(_DWORD *)(v9 + 4) = v12;
        sub_464310(*(_DWORD *)v9, v19, v11);
        *(_BYTE *)(v11 + *(_DWORD *)v9) = 0;
      }
      else
      {
        *(_DWORD *)(v9 + 4) = 0;
      }
      v13 = *v5;
      v14 = *(void **)v9;
      if ( &v22 < *v5 || &v22 >= &v13[4 * (_DWORD)v5[2]] )
      {
        v16 = (unsigned int)(v5[1] + 1);
        if ( v16 > (unsigned int)v5[2] )
        {
          v13 = (char *)sub_453B00((int)v5, v13, v16, 4u);
          *v5 = v13;
        }
        *(_DWORD *)&v13[4 * (_DWORD)v5[1]] = v14;
      }
      else
      {
        v15 = (unsigned int)(v5[1] + 1);
        if ( v15 > (unsigned int)v5[2] )
        {
          v13 = (char *)sub_453B00((int)v5, v13, v15, 4u);
          *v5 = v13;
        }
        *(_DWORD *)&v13[4 * (_DWORD)v5[1]] = v14;
      }
      v17 = a2;
      ++v5[1];
      v4 = (int)v21;
    }
    while ( *v17 );
    v3 = (char **)this;
  }
  a2 = nullptr;
  sub_407560(v3 + 6, (LPVOID *)&a2);
  result = a3;
  v3[12] = a3;
  return result;
}
