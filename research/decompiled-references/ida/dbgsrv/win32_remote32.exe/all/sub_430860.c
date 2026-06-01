/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_430860
// Address: 0x00430860

//----- (00430860) --------------------------------------------------------
int __userpurge sub_430860@<eax>(int a1@<ecx>, int a2@<ebx>, unsigned int *a3, int a4, int a5, char a6)
{
  int v6; // esi
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  int v9; // eax
  int v10; // ecx
  unsigned int *v11; // eax
  int v12; // esi
  unsigned int v13; // edx
  const char *v14; // ecx
  int v15; // edi
  int v16; // eax
  void *v17; // edx
  _BYTE v19[8]; // [esp+Ch] [ebp-44h] BYREF
  int v20; // [esp+14h] [ebp-3Ch]
  unsigned int v21; // [esp+18h] [ebp-38h]
  int *v22; // [esp+1Ch] [ebp-34h]
  int v23; // [esp+20h] [ebp-30h]
  unsigned int *v24; // [esp+24h] [ebp-2Ch]
  __int128 v25; // [esp+28h] [ebp-28h] BYREF
  int v26; // [esp+38h] [ebp-18h]
  unsigned int v27; // [esp+3Ch] [ebp-14h]
  int v28; // [esp+4Ch] [ebp-4h]

  v6 = a1;
  v23 = a1;
  v24 = (unsigned int *)a1;
  v20 = a1;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  v28 = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_BYTE *)(a1 + 44) = 0;
  v22 = (int *)(a1 + 48);
  *(_DWORD *)(a1 + 48) = 0;
  LOBYTE(v28) = 1;
  *(_DWORD *)(a1 + 52) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  v7 = sub_4627C2(0x24u);
  *v7 = v7;
  v7[1] = v7;
  *(_DWORD *)(v6 + 52) = v7;
  *(_DWORD *)(v6 + 60) = 0;
  *(_DWORD *)(v6 + 64) = 0;
  *(_DWORD *)(v6 + 68) = 0;
  *(_DWORD *)(v6 + 72) = 7;
  *(_DWORD *)(v6 + 76) = 8;
  *(_DWORD *)(v6 + 48) = 1065353216;
  sub_40B9C0(v6 + 60, 0x10u, *(_DWORD *)(v6 + 52));
  *(_BYTE *)(v6 + 80) = 0;
  *(_DWORD *)(v6 + 84) = 0;
  *(_DWORD *)(v6 + 88) = 0;
  *(_DWORD *)(v6 + 92) = 0;
  *(_DWORD *)(v6 + 96) = 0;
  *(_DWORD *)(v6 + 100) = 0;
  *(_DWORD *)(v6 + 104) = 0;
  *(_DWORD *)(v6 + 108) = 0;
  *(_DWORD *)(v6 + 112) = a5;
  *(_DWORD *)(v6 + 116) = sub_433EF0;
  *(_DWORD *)(v6 + 120) = v6;
  *(_DWORD *)(v6 + 124) = 0;
  *(_DWORD *)(v6 + 128) = 0;
  *(_DWORD *)(v6 + 132) = 0;
  *(_DWORD *)(v6 + 136) = 0;
  *(_DWORD *)(v6 + 140) = 0;
  *(_DWORD *)(v6 + 144) = 0;
  *(_DWORD *)(v6 + 148) = 0;
  *(_DWORD *)(v6 + 152) = 0;
  *(_DWORD *)(v6 + 156) = 0;
  *(_DWORD *)(v6 + 160) = -1;
  *(_DWORD *)(v6 + 164) = 0;
  *(_DWORD *)(v6 + 168) = 0;
  *(_DWORD *)(v6 + 172) = 0;
  *(_BYTE *)(v6 + 176) = 0;
  *(_DWORD *)(v6 + 180) = 0;
  *(_DWORD *)(v6 + 184) = 0;
  *(_DWORD *)(v6 + 188) = 0;
  *(_DWORD *)(v6 + 192) = 0;
  *(_DWORD *)(v6 + 196) = 1;
  *(_DWORD *)(v6 + 264) = 0;
  *(_BYTE *)(v6 + 268) = 0;
  LOBYTE(v28) = 7;
  *(_BYTE *)(v6 + 272) = 0;
  *(_DWORD *)(v6 + 276) = 0;
  *(_BYTE *)(v6 + 280) = 0;
  *(_DWORD *)(v6 + 284) = 0;
  v6 += 288;
  v24 = (unsigned int *)v6;
  *(_DWORD *)v6 = 0;
  *(_DWORD *)(v6 + 4) = 0;
  *(_DWORD *)(v6 + 8) = 0;
  v8 = sub_4627C2(0x2Cu);
  *v8 = v8;
  v8[1] = v8;
  *(_DWORD *)(v6 + 4) = v8;
  *(_DWORD *)(v6 + 12) = 0;
  *(_DWORD *)(v6 + 16) = 0;
  *(_DWORD *)(v6 + 20) = 0;
  *(_DWORD *)(v6 + 24) = 7;
  *(_DWORD *)(v6 + 28) = 8;
  *(_DWORD *)v6 = 1065353216;
  sub_40B9C0(v6 + 12, 0x10u, *(_DWORD *)(v6 + 4));
  v9 = v23;
  v10 = 132;
  LOBYTE(v28) = 10;
  if ( a3 )
    v10 = a4;
  v21 = v10;
  *(_BYTE *)(v23 + 320) = 0;
  *(_DWORD *)(v9 + 324) = 5;
  v11 = (unsigned int *)off_48CA70;
  if ( a3 )
    v11 = a3;
  v12 = 0;
  if ( v10 )
  {
    while ( 1 )
    {
      v13 = *v11;
      v14 = (const char *)*v11;
      v26 = 0;
      v27 = 0;
      v24 = v11 + 1;
      v25 = 0;
      v15 = (int)(v14 + 1);
      sub_4300C0(&v25, v13, strlen(v14));
      LOBYTE(v28) = 11;
      v16 = sub_430620(v22, (int)v19, &v25);
      LOBYTE(v28) = 10;
      *(_WORD *)(*(_DWORD *)v16 + 32) = v12 + 128;
      if ( v27 > 0xF )
      {
        v17 = (void *)v25;
        LOBYTE(v28) = 12;
        if ( v27 + 1 >= 0x1000 )
        {
          v17 = *(void **)(v25 - 4);
          if ( (unsigned int)(v25 - (_DWORD)v17 - 4) > 0x1F )
          {
            sub_467F04(a2, v15);
            JUMPOUT(0x430C0B);
          }
        }
        sub_4627F2(v17);
        LOBYTE(v28) = 10;
      }
      if ( ++v12 >= v21 )
        break;
      v11 = v24;
    }
  }
  sub_435120(v23, a2, 0, a6);
  return v23;
}
// 430C06: control flows out of bounds to 430C0B
// 48CA70: using guessed type char *off_48CA70[18];
