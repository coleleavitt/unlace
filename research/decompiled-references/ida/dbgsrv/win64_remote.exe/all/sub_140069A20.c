/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140069A20
// Address: 0x0000000140069A20

//----- (0000000140069A20) ----------------------------------------------------
__int64 __fastcall sub_140069A20(unsigned __int64 *a1, const char *a2, char *a3, __int64 a4, int a5)
{
  char *v5; // rbx
  void *v8; // r10
  __int64 v9; // r11
  unsigned __int64 v10; // r15
  char *v11; // rbp
  unsigned __int16 v12; // cx
  unsigned __int16 v13; // di
  char v14; // dl
  __int64 v15; // rbx
  char v16; // r8
  char *v17; // rbx
  char v18; // dl
  __int64 v19; // rsi
  __int64 v20; // rcx
  char *v21; // r9
  void *Block; // [rsp+30h] [rbp-48h] BYREF
  __int64 v24; // [rsp+38h] [rbp-40h]
  unsigned __int64 v25; // [rsp+40h] [rbp-38h]

  v5 = a3;
  v8 = nullptr;
  Block = nullptr;
  v9 = 0;
  v24 = 0;
  v10 = 0;
  v25 = 0;
  v11 = &a3[a4];
  if ( a3 < &a3[a4] )
  {
    while ( 1 )
    {
      v12 = (unsigned __int8)*v5++;
      if ( (unsigned __int8)v12 >= 0x80u )
      {
        if ( (v12 & 0xE0) == 0xC0 )
        {
          if ( v5 >= v11 )
            goto LABEL_21;
          v14 = *v5++;
          if ( (v14 & 0xC0) != 0x80 || (v13 = v14 & 0x3F | ((v12 & 0x1F) << 6), (unsigned __int16)(v13 - 1) <= 0x7Eu) )
          {
LABEL_8:
            *errno() = 42;
            v15 = -1;
            goto LABEL_27;
          }
        }
        else
        {
          if ( (v12 & 0xF0) != 0xE0 )
            goto LABEL_8;
          if ( v5 >= v11 )
            goto LABEL_21;
          v16 = *v5;
          v17 = v5 + 1;
          if ( (v16 & 0xC0) != 0x80 )
            goto LABEL_8;
          if ( v17 >= v11 )
          {
LABEL_21:
            *errno() = 22;
            v15 = -1;
            goto LABEL_27;
          }
          v18 = *v17;
          v5 = v17 + 1;
          if ( (v18 & 0xC0) != 0x80 )
            goto LABEL_8;
          v13 = v18 & 0x3F | (((unsigned __int16)(v12 << 6) | v16 & 0x3F) << 6);
          if ( v13 < 0x800u )
            goto LABEL_8;
        }
      }
      else
      {
        v13 = v12;
      }
      v19 = v9 - 1;
      if ( !v9 )
        v19 = 0;
      if ( v19 + 3 > v10 )
      {
        v8 = sub_14005ABE0((__int64)&Block, v8, v19 + 3, 1u);
        Block = v8;
      }
      v24 = v19 + 3;
      *((_BYTE *)v8 + v19 + 2) = 0;
      *(_WORD *)((char *)Block + v19) = v13;
      v9 = v24;
      v8 = Block;
      if ( v5 >= v11 )
        break;
      v10 = v25;
    }
  }
  v20 = v9 - 1;
  if ( !v9 )
    v20 = 0;
  v21 = (char *)Str1;
  if ( v9 )
    v21 = (char *)v8;
  v15 = sub_140061280(a1, "UTF-16LE", a2, v21, v20, a5);
LABEL_27:
  if ( Block )
  {
    v24 = 0;
    j_free(Block);
  }
  return v15;
}
