/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_62270
// Address: 0x00062270

//----- (00062270) --------------------------------------------------------
int __fastcall sub_62270(int a1, unsigned __int8 *a2)
{
  char *v4; // r4
  unsigned int v5; // r3
  unsigned int v6; // r1
  void **v7; // r0
  int v8; // r4
  char *v9; // r0
  char v10; // r7
  int v11; // r0
  int v12; // r6
  void *v13; // r1
  void *v15; // r0
  unsigned int v16; // r4
  void *v17; // r0
  void **v18; // [sp+8h] [bp-28h]
  char *v19; // [sp+14h] [bp-1Ch]
  _DWORD *v20; // [sp+18h] [bp-18h]
  char *s1; // [sp+1Ch] [bp-14h] BYREF
  int v22; // [sp+20h] [bp-10h]
  int v23; // [sp+24h] [bp-Ch]
  _BYTE v24[4]; // [sp+28h] [bp-8h] BYREF

  v22 = 0;
  s1 = nullptr;
  v23 = 0;
  ((void (__fastcall *)(char **, unsigned __int8 *, _DWORD))loc_58BE0)(&s1, a2, *(_DWORD *)(a1 + 8));
  v4 = s1;
  v19 = s1;
  if ( !v22 )
    v4 = &byte_B3CBE;
  if ( !strcmp(v4, ".debug_info") )
  {
    *(_BYTE *)(a1 + 12) = 1;
  }
  else if ( strcmp(v4, ".note.gnu.build-id")
         || (v5 = (((a2[19] << 8) + a2[18]) << 16) + (a2[17] << 8) + a2[16], HIWORD(v5)) )
  {
    if ( !strcmp(v4, ".gnu_debuglink") )
    {
      qlseek(*(_DWORD *)(a1 + 4), (((a2[23] << 8) + a2[22]) << 16) + (a2[21] << 8) + a2[20], 0);
      v20 = (_DWORD *)(a1 + 28);
      while ( qlread(*(_DWORD *)(a1 + 4), v24, 1) == 1 )
      {
        v10 = v24[0];
        if ( !v24[0] )
          goto LABEL_19;
        v11 = *(_DWORD *)(a1 + 32);
        v12 = v11 - 1;
        if ( !v11 )
          v12 = 0;
        v13 = *(void **)(a1 + 28);
        if ( *(_DWORD *)(a1 + 36) < (unsigned int)(v12 + 2) )
        {
          v13 = qvector_reserve((int)v20, v13, v12 + 2, 1u);
          *v20 = v13;
        }
        *(_DWORD *)(a1 + 32) = v12 + 2;
        *((_BYTE *)v13 + v12) = v10;
        *(_BYTE *)(*(_DWORD *)(a1 + 28) + v12 + 1) = 0;
      }
      v15 = *(void **)(a1 + 28);
      if ( v15 )
      {
        *(_DWORD *)(a1 + 32) = 0;
        qfree(v15);
        *(_DWORD *)(a1 + 36) = 0;
        *(_DWORD *)(a1 + 28) = 0;
      }
    }
  }
  else
  {
    v6 = *(_DWORD *)(a1 + 20);
    v7 = (void **)(a1 + 16);
    v18 = (void **)(a1 + 16);
    if ( v6 >= v5 )
    {
      if ( v6 != v5 )
      {
        v24[0] = 0;
        sub_370F6(v18, v5, v24);
      }
    }
    else
    {
      if ( *(_DWORD *)(a1 + 24) >= v5 )
      {
        v9 = (char *)*v7;
      }
      else
      {
        v8 = (((a2[19] << 8) + a2[18]) << 16) + (a2[17] << 8) + a2[16];
        v9 = (char *)qvector_reserve((int)v7, *v7, v5, 1u);
        *(_DWORD *)(a1 + 16) = v9;
        v6 = *(_DWORD *)(a1 + 20);
        v5 = v8;
      }
      v16 = v5;
      memset(&v9[v6], 0, v5 - v6);
      *(_DWORD *)(a1 + 20) = v16;
    }
    qlseek(*(_DWORD *)(a1 + 4), (((a2[23] << 8) + a2[22]) << 16) + (a2[21] << 8) + a2[20], 0);
    if ( qlread(*(_DWORD *)(a1 + 4), *(void **)(a1 + 16), (((a2[19] << 8) + a2[18]) << 16) + (a2[17] << 8) + a2[16]) != (((a2[19] << 8) + a2[18]) << 16) + (a2[17] << 8) + a2[16] )
    {
      v17 = *v18;
      if ( *v18 )
      {
        *(_DWORD *)(a1 + 20) = 0;
        qfree(v17);
        *(_DWORD *)(a1 + 24) = 0;
        *(_DWORD *)(a1 + 16) = 0;
      }
    }
  }
LABEL_19:
  if ( v19 )
  {
    v22 = 0;
    qfree(v19);
    v23 = 0;
    s1 = nullptr;
  }
  return 0;
}
// B3CBE: using guessed type char byte_B3CBE;
