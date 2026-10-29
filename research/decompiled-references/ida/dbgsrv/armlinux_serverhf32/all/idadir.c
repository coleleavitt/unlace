/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: idadir
// Address: 0x000736DC

//----- (000736DC) --------------------------------------------------------
char *__fastcall idadir(_BYTE *a1)
{
  char *v2; // r5
  int v4; // r6
  size_t v5; // r0
  size_t v6; // r8
  size_t v7; // r10
  pthread_mutex_t *v8; // [sp+Ch] [bp-1024h] BYREF
  unsigned __int8 *v9; // [sp+10h] [bp-1020h] BYREF
  int v10; // [sp+14h] [bp-101Ch]
  int v11; // [sp+18h] [bp-1018h]
  unsigned __int8 *v12; // [sp+1Ch] [bp-1014h]
  int v13; // [sp+20h] [bp-1010h]
  int v14; // [sp+24h] [bp-100Ch]
  int v15; // [sp+28h] [bp-1008h]
  char v16[4]; // [sp+2Ch] [bp-1004h] BYREF

  sub_7A110(&v8);
  if ( byte_D3BE8 )
    goto LABEL_8;
  v9 = nullptr;
  v10 = 0;
  v11 = 0;
  if ( !byte_D3BA1 )
    goto LABEL_3;
  if ( !sub_7A72C("IDADIR", (int)&v9) )
  {
    if ( byte_D3BA1 )
    {
      v12 = nullptr;
      v13 = 0;
      v14 = 0;
      v15 = 0;
      if ( dladdr(idadir) )
      {
        sub_79524(&byte_D3BE8, v12, 4096);
LABEL_4:
        if ( !sub_77448((int)&byte_D3BE8) )
          sub_76A6C(&byte_D3BE8, 0x1000u, &byte_D3BE8);
        goto LABEL_6;
      }
    }
LABEL_3:
    sub_73690(&byte_D3BE8, 0x1000u);
    goto LABEL_4;
  }
  sub_79524(&byte_D3BE8, v9, 4096);
LABEL_6:
  if ( v9 )
  {
    v10 = 0;
    sub_77E08(v9);
  }
LABEL_8:
  if ( a1 )
  {
    if ( *a1 )
    {
      sub_76A30(v16, 4096, (unsigned __int8 *)&byte_D3BE8, a1, 0);
      v4 = sub_70C50();
      v5 = strlen(v16);
      v2 = *(char **)v4;
      v6 = v5;
      if ( v5 )
      {
        v7 = v5 + 1;
        if ( v5 + 1 > *(_DWORD *)(v4 + 8) )
        {
          v2 = (char *)sub_77EB0(v4, *(void **)v4, v5 + 1, 1u);
          *(_DWORD *)v4 = v2;
        }
        *(_DWORD *)(v4 + 4) = v7;
        memmove(v2, v16, v6);
        *(_BYTE *)(*(_DWORD *)v4 + v6) = 0;
        v2 = *(char **)v4;
      }
      else
      {
        *(_DWORD *)(v4 + 4) = 0;
      }
    }
    else
    {
      v2 = &byte_D3BE8;
    }
  }
  else
  {
    v2 = &byte_D3BE8;
  }
  sub_7A128(v8);
  return v2;
}
// 146F8: using guessed type int __fastcall dladdr(_DWORD);
// D3BA1: using guessed type char byte_D3BA1;
// D3BE8: using guessed type char byte_D3BE8;
