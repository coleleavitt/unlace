/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42EA90
// Address: 0x0042EA90

//----- (0042EA90) --------------------------------------------------------
_DWORD *__thiscall sub_42EA90(int this, char *a2)
{
  char *v3; // edx
  int v5; // ebx
  int v6; // eax
  unsigned int v7; // eax
  int v8; // ecx
  _DWORD *result; // eax
  unsigned int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // [esp+1Ch] [ebp-10h]
  int v14; // [esp+34h] [ebp+8h]

  v3 = *(char **)this;
  if ( (unsigned int)a2 < *(_DWORD *)this || a2 >= &v3[12 * *(_DWORD *)(this + 8)] )
  {
    v10 = *(_DWORD *)(this + 4) + 1;
    if ( v10 > *(_DWORD *)(this + 8) )
    {
      v3 = (char *)sub_453B00(this, v3, v10, 0xCu);
      *(_DWORD *)this = v3;
    }
    v11 = 3 * *(_DWORD *)(this + 4);
    *(_DWORD *)&v3[4 * v11] = *(_DWORD *)a2;
    v12 = *((_DWORD *)a2 + 1);
    *(_DWORD *)a2 = 0;
    *(_DWORD *)&v3[4 * v11 + 4] = v12;
    result = *((_DWORD **)a2 + 2);
    *((_DWORD *)a2 + 1) = 0;
    *(_DWORD *)&v3[4 * v11 + 8] = result;
    *((_DWORD *)a2 + 2) = 0;
  }
  else
  {
    v5 = *(_DWORD *)a2;
    v14 = *((_DWORD *)a2 + 1);
    v6 = *((_DWORD *)a2 + 2);
    *(_DWORD *)a2 = 0;
    *((_DWORD *)a2 + 1) = 0;
    v13 = v6;
    *((_DWORD *)a2 + 2) = 0;
    v7 = *(_DWORD *)(this + 4) + 1;
    if ( v7 > *(_DWORD *)(this + 8) )
      *(_DWORD *)this = sub_453B00(this, *(void **)this, v7, 0xCu);
    v8 = 3 * *(_DWORD *)(this + 4);
    result = *(_DWORD **)this;
    result[v8 + 1] = v14;
    result[v8] = v5;
    result[v8 + 2] = v13;
  }
  ++*(_DWORD *)(this + 4);
  return result;
}
