/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_446C70
// Address: 0x00446C70

//----- (00446C70) --------------------------------------------------------
unsigned int __thiscall sub_446C70(_DWORD *this, unsigned int a2)
{
  _DWORD *v2; // ebx
  unsigned int v3; // esi
  unsigned int result; // eax
  char *v5; // eax
  int v6; // ecx
  char *v7; // edx
  _DWORD *v8; // eax
  _DWORD *v9; // edx
  int *v10; // ebx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  void *v15; // eax
  void *v16; // eax
  bool v17; // sf
  int v18; // [esp+10h] [ebp-20h]
  char *v19; // [esp+14h] [ebp-1Ch]
  int v21; // [esp+1Ch] [ebp-14h]
  _DWORD *v22; // [esp+20h] [ebp-10h]
  _DWORD *v23; // [esp+38h] [ebp+8h]

  v2 = this;
  v3 = *(this + 2);
  result = a2;
  if ( a2 > v3 )
  {
    v5 = (char *)sub_453B00((int)this, nullptr, a2, 0x100u);
    v6 = v2[1];
    v7 = v5;
    v18 = v2[2];
    v8 = (_DWORD *)*v2;
    v19 = v7;
    v2[2] = v3;
    v22 = v8;
    v21 = v6 - 1;
    if ( v6 - 1 >= 0 )
    {
      v9 = v7 + 12;
      v10 = v8 + 7;
      v23 = v9;
      do
      {
        *(v9 - 3) = *v8;
        *(v9 - 2) = *(v10 - 6);
        v11 = *(v10 - 5);
        *(v10 - 6) = 0;
        *(v9 - 1) = v11;
        v12 = *(v10 - 4);
        *(v10 - 5) = 0;
        *v9 = v12;
        *(v10 - 4) = 0;
        v9[1] = *(v10 - 3);
        v9[2] = *(v10 - 2);
        v13 = *(v10 - 1);
        *(v10 - 2) = 0;
        v9[3] = v13;
        v14 = *v10;
        *(v10 - 1) = 0;
        v9[4] = v14;
        *v10 = 0;
        qmemcpy(v9 + 5, v10 + 1, 0xD9u);
        v9[60] = v10[56];
        v15 = (void *)*(v10 - 2);
        if ( v15 )
        {
          *(v10 - 1) = 0;
          sub_453A20(v15);
          v9 = v23;
          *(v10 - 2) = 0;
          *v10 = 0;
        }
        v16 = (void *)*(v10 - 6);
        if ( v16 )
        {
          *(v10 - 5) = 0;
          sub_453A20(v16);
          v9 = v23;
          *(v10 - 6) = 0;
          *(v10 - 4) = 0;
        }
        v9 += 64;
        v8 = v22 + 64;
        v10 += 64;
        v22 += 64;
        v17 = --v21 < 0;
        v23 = v9;
      }
      while ( !v17 );
      v2 = this;
    }
    sub_453A20((void *)*v2);
    *v2 = v19;
    v2[2] = v18;
    return v18;
  }
  return result;
}
