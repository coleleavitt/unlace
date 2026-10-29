/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42D890
// Address: 0x0042D890

//----- (0042D890) --------------------------------------------------------
int __thiscall sub_42D890(int this, _DWORD *a2, char a3, int a4)
{
  int v5; // eax
  int result; // eax
  _DWORD *v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // ebp
  unsigned int *v11; // eax
  unsigned int v12; // esi
  char v13; // bl
  int v14; // esi
  unsigned int v15; // eax
  int v16; // ebp
  unsigned int *v17; // eax
  unsigned int v18; // esi
  _DWORD *v19; // esi
  int v20; // eax
  int v21; // ebp

  switch ( *a2 )
  {
    case 1:
      v5 = a2[2];
      if ( *(_DWORD *)(v5 + 4) )
        result = sub_42D5F0(this, *(const char **)v5, a3, a4);
      else
        result = sub_42D5F0(this, MultiByteStr, a3, a4);
      break;
    case 2:
      sub_42E650(this, 170);
      v17 = (unsigned int *)a2[1];
      v18 = v17[1];
      sub_4272C0(*(unsigned int **)(this + 104), *v17, v18);
      *(_DWORD *)(this + 108) += v18;
      v19 = (_DWORD *)a2[2];
      if ( *v19 == 1 )
      {
        v20 = v19[2];
        if ( *(_DWORD *)(v20 + 4) )
          result = sub_42D380(this, *(const char **)v20, a2[3]);
        else
          result = sub_42D380(this, MultiByteStr, a2[3]);
      }
      else
      {
        if ( *v19 == 5 )
        {
          v21 = sub_42D890(v19[2], 0, 0);
          sub_42E840((void *)this, v19[1]);
          sub_42E650(this, 247);
        }
        else
        {
          v21 = sub_42D890(v19, 0, 0);
          sub_42E650(this, 164);
        }
        result = v21;
      }
      break;
    case 3:
    case 4:
      if ( a3 && (v7 = (_DWORD *)a2[2], *v7 == 1) )
      {
        v8 = v7[2];
        if ( *(_DWORD *)(v8 + 4) )
          v9 = sub_42DCA0((int *)this, *(const char **)v8);
        else
          v9 = sub_42DCA0((int *)this, MultiByteStr);
      }
      else
      {
        v9 = sub_42D890(a2[2], 0, 0);
      }
      v10 = v9;
      v11 = (unsigned int *)a2[1];
      v12 = v11[1];
      sub_4272C0(*(unsigned int **)(this + 104), *v11, v12);
      *(_DWORD *)(this + 108) += v12;
      if ( *a2 == 3 )
        v13 = (a3 ^ 1) - 5;
      else
        v13 = a3 - 2;
      v14 = *(_DWORD *)(this + 104);
      *(_BYTE *)(this + 112) = v13;
      v15 = *(_DWORD *)(v14 + 4) + 1;
      if ( v15 > *(_DWORD *)(v14 + 8) )
        *(_DWORD *)v14 = sub_453B00(v14, *(void **)v14, v15, 1u);
      *(_BYTE *)(*(_DWORD *)v14 + (*(_DWORD *)(v14 + 4))++) = v13;
      ++*(_DWORD *)(this + 108);
      result = v10;
      break;
    case 5:
      v16 = sub_42D890(a2[2], 0, 0);
      sub_42E840((void *)this, a2[1]);
      if ( a4 )
        sub_42E650(this, (a4 < 0) - 11);
      else
        sub_42E650(this, a3 - 14);
      result = v16;
      break;
    default:
      if ( byte_4B70F0 )
        __debugbreak();
      sub_4533F0(273);
  }
  return result;
}
// 4B70F0: using guessed type char byte_4B70F0;
