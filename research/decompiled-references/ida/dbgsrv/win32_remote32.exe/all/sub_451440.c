/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_451440
// Address: 0x00451440

//----- (00451440) --------------------------------------------------------
int __thiscall sub_451440(int this, int a2, int a3, int a4, char a5)
{
  unsigned int v6; // eax
  void **v7; // ebx
  unsigned int v8; // eax
  int v9; // ecx
  _DWORD *v10; // ecx
  int v11; // eax
  int v12; // eax
  void **v13; // esi
  char *v14; // edx
  char *v15; // ebp
  void *v16; // ebx
  unsigned int v17; // eax
  unsigned int v18; // eax
  int result; // eax
  char v20; // [esp+8h] [ebp-4h] BYREF
  int v21; // [esp+18h] [ebp+Ch]
  unsigned int v22; // [esp+1Ch] [ebp+10h]

  v6 = *(_DWORD *)(this + 4) + 1;
  if ( v6 > *(_DWORD *)(this + 8) )
    *(_DWORD *)this = sub_453B00(this, *(void **)this, v6, 1u);
  v7 = (void **)(this + 12);
  *(_BYTE *)(*(_DWORD *)this + (*(_DWORD *)(this + 4))++) = a5;
  v8 = *(_DWORD *)(this + 16) + 1;
  if ( v8 > *(_DWORD *)(this + 20) )
    *v7 = sub_453B00(this + 12, *v7, v8, 0xCu);
  v9 = *(_DWORD *)(this + 16);
  v22 = 0;
  *(_DWORD *)(this + 16) = v9 + 1;
  v10 = (char *)*v7 + 12 * v9;
  *v10 = a4;
  v10[1] = a2;
  v10[2] = a3;
  v11 = *(_DWORD *)(this + 16);
  *(_DWORD *)(this + 40) = v11;
  *(_DWORD *)(this + 28) = 0;
  if ( v11 )
  {
    v12 = 0;
    v13 = (void **)(this + 24);
    v21 = 0;
    do
    {
      v14 = (char *)*v13;
      v15 = (char *)*v7 + v12;
      v16 = *v13;
      if ( &v20 < *v13 || &v20 >= &v14[4 * *(_DWORD *)(this + 32)] )
      {
        v18 = *(_DWORD *)(this + 28) + 1;
        if ( v18 > *(_DWORD *)(this + 32) )
        {
          v16 = sub_453B00(this + 24, v16, v18, 4u);
          *v13 = v16;
        }
        *((_DWORD *)v16 + *(_DWORD *)(this + 28)) = v15;
      }
      else
      {
        v17 = *(_DWORD *)(this + 28) + 1;
        if ( v17 > *(_DWORD *)(this + 32) )
        {
          v14 = (char *)sub_453B00(this + 24, v14, v17, 4u);
          *v13 = v14;
        }
        *(_DWORD *)&v14[4 * *(_DWORD *)(this + 28)] = v15;
      }
      v7 = (void **)(this + 12);
      ++*(_DWORD *)(this + 28);
      v12 = v21 + 12;
      ++v22;
      v21 += 12;
    }
    while ( v22 < *(_DWORD *)(this + 40) );
  }
  result = **(_DWORD **)(this + 24);
  *(_DWORD *)(this + 44) = result;
  return result;
}
