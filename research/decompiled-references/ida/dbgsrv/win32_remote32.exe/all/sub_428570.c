/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_428570
// Address: 0x00428570

//----- (00428570) --------------------------------------------------------
_DWORD *__thiscall sub_428570(_DWORD *this)
{
  _DWORD *v1; // ebx
  _DWORD *v2; // esi
  unsigned int v3; // edi
  unsigned int v4; // eax
  char *v5; // eax
  bool v6; // sf
  int v7; // ecx
  _DWORD *v8; // edi
  int *v9; // esi
  _DWORD *v10; // ebx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  void *v16; // eax
  void *v17; // eax
  int v18; // ecx
  _DWORD *v19; // eax
  _DWORD *result; // eax
  int v21; // [esp+10h] [ebp-1Ch]
  char *v22; // [esp+14h] [ebp-18h]
  int v24; // [esp+1Ch] [ebp-10h]

  v1 = this;
  v2 = this + 1;
  v3 = *(this + 2);
  v4 = *(this + 1) + 1;
  if ( v4 > v3 )
  {
    v5 = (char *)sub_453B00((int)this, nullptr, v4, 0x18u);
    v21 = v1[2];
    v6 = *v2 - 1 < 0;
    v7 = *v2 - 1;
    v1[2] = v3;
    v8 = (_DWORD *)*v1;
    v22 = v5;
    v24 = v7;
    if ( !v6 )
    {
      v9 = v8 + 5;
      v10 = v5 + 20;
      do
      {
        *(v10 - 5) = *v8;
        v11 = *(v9 - 4);
        *v8 = 0;
        *(v10 - 4) = v11;
        v12 = *(v9 - 3);
        *(v9 - 4) = 0;
        *(v10 - 3) = v12;
        v13 = *(v9 - 2);
        *(v9 - 3) = 0;
        *(v10 - 2) = v13;
        v14 = *(v9 - 1);
        *(v9 - 2) = 0;
        *(v10 - 1) = v14;
        v15 = *v9;
        *(v9 - 1) = 0;
        *v10 = v15;
        *v9 = 0;
        v16 = (void *)*(v9 - 2);
        if ( v16 )
        {
          *(v9 - 1) = 0;
          sub_453A20(v16);
          v7 = v24;
          *(v9 - 2) = 0;
          *v9 = 0;
        }
        v17 = (void *)*v8;
        if ( *v8 )
        {
          *(v9 - 4) = 0;
          sub_453A20(v17);
          v7 = v24;
          *v8 = 0;
          *(v9 - 3) = 0;
        }
        v8 += 6;
        v9 += 6;
        v10 += 6;
        v24 = --v7;
      }
      while ( v7 >= 0 );
      v1 = this;
      v2 = this + 1;
    }
    sub_453A20((void *)*v1);
    *v1 = v22;
    v1[2] = v21;
  }
  v18 = 3 * *v2;
  v19 = (_DWORD *)*v1;
  v19[2 * v18] = 0;
  v19[2 * v18 + 1] = 0;
  v19[2 * v18 + 2] = 0;
  result = &v19[2 * v18];
  result[3] = 0;
  result[4] = 0;
  result[5] = 0;
  ++*v2;
  return result;
}
