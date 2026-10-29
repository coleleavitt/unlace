/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400291D0
// Address: 0x00000001400291D0

//----- (00000001400291D0) ----------------------------------------------------
char *__fastcall sub_1400291D0(char *a1, char a2)
{
  char *v5; // rbx
  _QWORD *v6; // rbp
  __int64 i; // rcx
  char *v8; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  void *v11; // rdx
  char **v12; // rax
  char **v13; // r8
  void *Block; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+28h] [rbp-20h]
  unsigned __int64 v16; // [rsp+30h] [rbp-18h]

  if ( a1 )
  {
    if ( *a1 == 10 )
    {
      v5 = a1;
      Block = nullptr;
      v15 = 0;
      v16 = 0;
      v6 = sub_14002DA30();
      for ( i = 0; ; i = ++v15 )
      {
        v8 = v5 + 8;
        v5 = nullptr;
        v9 = *((int *)v8 + 2);
        if ( (v9 & 0x80000000) != 0LL )
        {
          v5 = (char *)sub_1400258A0((__int64)v6, ~(_DWORD)v9);
          i = v15;
        }
        else
        {
          v10 = *(_QWORD *)v8;
          if ( v10 && *(_DWORD *)v10 == 289621065 && v9 < *(_QWORD *)(v10 + 32) )
            v5 = (char *)(*(_QWORD *)(v10 + 24) + 32 * v9);
        }
        if ( !v5 )
          goto LABEL_25;
        if ( *v5 != 10 || (a2 & 1) != 0 )
          break;
        v11 = Block;
        v12 = (char **)Block;
        v13 = (char **)((char *)Block + 8 * i);
        if ( Block != v13 )
        {
          while ( v5 != *v12 )
          {
            if ( ++v12 == v13 )
              goto LABEL_18;
          }
LABEL_25:
          sub_1400640B0(0x61Bu);
          goto LABEL_26;
        }
LABEL_18:
        if ( v12 != v13 )
          goto LABEL_25;
        if ( i + 1 > v16 )
        {
          v11 = sub_14005ABE0((__int64)&Block, Block, i + 1, 8u);
          Block = v11;
          i = v15;
        }
        *((_QWORD *)v11 + i) = v5;
      }
      if ( (a2 & 2) == 0 )
        goto LABEL_27;
      *a1 = 2;
      if ( !(unsigned int)sub_140028E70(a1, v5) )
      {
        v5 = a1;
        goto LABEL_27;
      }
LABEL_26:
      v5 = nullptr;
LABEL_27:
      if ( Block )
      {
        v15 = 0;
        j_free(Block);
      }
      return v5;
    }
    else
    {
      return a1;
    }
  }
  else
  {
    sub_1400640B0(0x61Bu);
    return nullptr;
  }
}
