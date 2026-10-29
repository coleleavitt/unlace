/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: idadir
// Address: 0x00073848

//----- (00073848) --------------------------------------------------------
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

  sub_7A278(&v8);
  if ( byte_D4C08 )
    goto LABEL_8;
  v9 = nullptr;
  v10 = 0;
  v11 = 0;
  if ( !byte_D4BC1 )
    goto LABEL_3;
  if ( !sub_7A894("IDADIR", (int)&v9) )
  {
    if ( byte_D4BC1 )
    {
      v12 = nullptr;
      v13 = 0;
      v14 = 0;
      v15 = 0;
      if ( dladdr(idadir) )
      {
        sub_7968C(&byte_D4C08, v12, 4096);
LABEL_4:
        if ( !sub_775B0((int)&byte_D4C08) )
          sub_76BD4(&byte_D4C08, 0x1000u, &byte_D4C08);
        goto LABEL_6;
      }
    }
LABEL_3:
    sub_737FC(&byte_D4C08, 0x1000u);
    goto LABEL_4;
  }
  sub_7968C(&byte_D4C08, v9, 4096);
LABEL_6:
  if ( v9 )
  {
    v10 = 0;
    sub_77F70(v9);
  }
LABEL_8:
  if ( a1 )
  {
    if ( *a1 )
    {
      sub_76B98(v16, 4096, (unsigned __int8 *)&byte_D4C08, a1, 0);
      v4 = sub_70DBC();
      v5 = strlen(v16);
      v2 = *(char **)v4;
      v6 = v5;
      if ( v5 )
      {
        v7 = v5 + 1;
        if ( v5 + 1 > *(_DWORD *)(v4 + 8) )
        {
          v2 = (char *)sub_78018(v4, *(void **)v4, v5 + 1, 1u);
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
      v2 = &byte_D4C08;
    }
  }
  else
  {
    v2 = &byte_D4C08;
  }
  sub_7A290(v8);
  return v2;
}
// 14894: using guessed type int __fastcall dladdr(_DWORD);
// D4BC1: using guessed type char byte_D4BC1;
// D4C08: using guessed type char byte_D4C08;
