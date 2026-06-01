/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42D5F0
// Address: 0x0042D5F0

//----- (0042D5F0) --------------------------------------------------------
int __thiscall sub_42D5F0(int this, const char *a2, char a3, int a4)
{
  int v5; // ecx
  int result; // eax
  int v7; // edi
  unsigned int v8; // eax
  int v9; // edi
  unsigned int v10; // eax
  unsigned int v11; // edi
  __int16 v12; // ax
  int v13; // edi
  unsigned int v14; // eax
  int v15; // edi
  unsigned int v16; // eax
  unsigned int v17; // edi
  int (__stdcall ***v18)(_DWORD, const char *); // ecx
  unsigned int v19; // eax
  int v20; // [esp+8h] [ebp-4h] BYREF

  v5 = sub_42D200((_DWORD *)this, a2, &v20);
  switch ( v20 )
  {
    case 0:
    case 5:
      v18 = *(int (__stdcall ****)(_DWORD, const char *))(this + 220);
      if ( v18 )
      {
        v19 = (**v18)(v18, a2);
        if ( v19 != -1 )
        {
          sub_42E3C0(this, v19);
          return 0;
        }
      }
      sub_45CB10(0, a2);
      return 53;
    case 1:
      sub_42E770(this, 32 * ((a3 ^ 1) + 2), v5);
      goto LABEL_29;
    case 2:
      if ( a3 && *(_DWORD *)(this + 96) && !v5 )
        return 1539;
      sub_42E770(this, 32 * (a3 ^ 1) + 80, v5);
      goto LABEL_29;
    case 3:
      sub_42E270(this, 4 * a3 - 43, v5);
      goto LABEL_29;
    case 4:
      if ( a3 )
      {
        if ( dword_4B4088 <= 0 )
        {
          result = 1611;
          goto LABEL_25;
        }
        v7 = *(_DWORD *)(this + 104);
        *(_BYTE *)(this + 112) = -44;
        v8 = *(_DWORD *)(v7 + 4) + 1;
        if ( v8 > *(_DWORD *)(v7 + 8) )
          *(_DWORD *)v7 = sub_453B00(v7, *(void **)v7, v8, 1u);
        *(_BYTE *)(*(_DWORD *)(v7 + 4) + *(_DWORD *)v7) = -44;
        ++*(_DWORD *)(v7 + 4);
        v9 = *(_DWORD *)(this + 104);
        ++*(_DWORD *)(this + 108);
        *(_BYTE *)(this + 112) = -88;
        v10 = *(_DWORD *)(v9 + 4) + 1;
        if ( v10 > *(_DWORD *)(v9 + 8) )
          *(_DWORD *)v9 = sub_453B00(v9, *(void **)v9, v10, 1u);
        *(_BYTE *)(*(_DWORD *)v9 + (*(_DWORD *)(v9 + 4))++) = -88;
        ++*(_DWORD *)(this + 108);
        v11 = strlen(a2);
        sub_42E320((int *)this, v11);
        sub_42E320((int *)this, SHIWORD(v11));
        sub_4272C0(*(unsigned int **)(this + 104), (unsigned int)a2, v11);
        *(_DWORD *)(this + 108) += v11;
        v12 = dword_4B4088;
      }
      else
      {
        if ( dword_4B4084 <= 0 )
        {
          result = 1610;
          goto LABEL_25;
        }
        v13 = *(_DWORD *)(this + 104);
        *(_BYTE *)(this + 112) = -86;
        v14 = *(_DWORD *)(v13 + 4) + 1;
        if ( v14 > *(_DWORD *)(v13 + 8) )
          *(_DWORD *)v13 = sub_453B00(v13, *(void **)v13, v14, 1u);
        *(_BYTE *)(*(_DWORD *)v13 + (*(_DWORD *)(v13 + 4))++) = -86;
        v15 = *(_DWORD *)(this + 104);
        ++*(_DWORD *)(this + 108);
        *(_BYTE *)(this + 112) = -88;
        v16 = *(_DWORD *)(v15 + 4) + 1;
        if ( v16 > *(_DWORD *)(v15 + 8) )
          *(_DWORD *)v15 = sub_453B00(v15, *(void **)v15, v16, 1u);
        *(_BYTE *)(*(_DWORD *)v15 + (*(_DWORD *)(v15 + 4))++) = -88;
        ++*(_DWORD *)(this + 108);
        v17 = strlen(a2);
        sub_42E320((int *)this, v17);
        sub_42E320((int *)this, SHIWORD(v17));
        sub_4272C0(*(unsigned int **)(this + 104), (unsigned int)a2, v17);
        *(_DWORD *)(this + 108) += v17;
        v12 = dword_4B4084;
      }
      sub_42E770(this, 0, v12);
      result = 0;
LABEL_25:
      if ( !result )
      {
LABEL_29:
        if ( a4 )
          return sub_42E690((const char **)this, a4);
        else
          return 0;
      }
      return result;
    case 6:
      if ( a3 )
        return 53;
      sub_42E870(this, a2, 0);
      sub_42E650(this, 174);
      goto LABEL_29;
    default:
      if ( byte_4B70F0 )
        __debugbreak();
      sub_4533F0(271);
  }
}
// 4B4084: using guessed type int dword_4B4084;
// 4B4088: using guessed type int dword_4B4088;
// 4B70F0: using guessed type char byte_4B70F0;
