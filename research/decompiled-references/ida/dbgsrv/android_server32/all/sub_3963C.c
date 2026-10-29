/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3963C
// Address: 0x0003963C

//----- (0003963C) --------------------------------------------------------
int __fastcall sub_3963C(_DWORD *a1)
{
  int v1; // r1
  int v2; // r4
  const char *v3; // r6
  int v4; // r7
  const char *v5; // r0
  char *v6; // r1
  int v8; // [sp+0h] [bp-3Ch]
  int v10; // [sp+Ch] [bp-30h]
  void *v11[4]; // [sp+10h] [bp-2Ch] BYREF
  unsigned __int8 v12[8]; // [sp+20h] [bp-1Ch] BYREF
  int v13; // [sp+28h] [bp-14h]
  int v14; // [sp+2Ch] [bp-10h]
  int v15; // [sp+30h] [bp-Ch]
  int v16; // [sp+34h] [bp-8h]

  v1 = a1[16];
  v10 = a1[7];
  v8 = v1 + 52;
  if ( 40 * *(_DWORD *)(v1 + 56) )
  {
    v2 = *(_DWORD *)(v1 + 52);
    v3 = &byte_B3CBE;
    if ( v10 )
      v3 = (const char *)a1[6];
    v4 = 40 * *(_DWORD *)(v1 + 56);
    while ( 1 )
    {
      v5 = &byte_B3CBE;
      if ( *(_DWORD *)(v2 + 4) )
        v5 = *(const char **)v2;
      v2 += 40;
      if ( !strcmp(v5, v3) )
        break;
      v4 -= 40;
      if ( !v4 )
        goto LABEL_9;
    }
  }
  else
  {
LABEL_9:
    if ( v10 )
      v6 = (char *)a1[6];
    else
      v6 = &byte_B3CBE;
    sub_1B09C((int)v11, v6);
    v12[0] = 2;
    v16 = 0;
    v15 = 0;
    v14 = 0;
    v13 = 0;
    sub_39738(v8, (unsigned int)v11);
    free_idcv(v12);
    if ( v11[0] )
    {
      v11[1] = nullptr;
      qfree(v11[0]);
      v11[2] = nullptr;
      v11[0] = nullptr;
    }
  }
  return 0;
}
// B3CBE: using guessed type char byte_B3CBE;
