/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_809AA40
// Address: 0x0809AA40

//----- (0809AA40) --------------------------------------------------------
unsigned int __cdecl sub_809AA40(int a1, char *a2, unsigned int a3, int a4, char a5)
{
  int v5; // eax
  volatile signed __int32 *v6; // ecx
  size_t *v7; // edx
  volatile signed __int32 *v8; // ecx
  const char *v9; // edx
  size_t v10; // edi
  unsigned int result; // eax
  int v12; // edx
  const void *v13; // [esp-14h] [ebp-64h]
  int v14; // [esp+Ch] [ebp-44h]
  char *v15; // [esp+10h] [ebp-40h]
  volatile signed __int32 *srca; // [esp+14h] [ebp-3Ch]
  _BYTE *src; // [esp+14h] [ebp-3Ch]
  size_t *v18; // [esp+18h] [ebp-38h]
  volatile signed __int32 *v19; // [esp+18h] [ebp-38h]
  unsigned int v20; // [esp+24h] [ebp-2Ch]
  char v21; // [esp+2Eh] [ebp-22h] BYREF
  char v22; // [esp+2Fh] [ebp-21h] BYREF
  volatile signed __int32 *v23; // [esp+30h] [ebp-20h] BYREF
  unsigned int v24; // [esp+34h] [ebp-1Ch]

  v15 = a2;
  v24 = __readgsdword(0x14u);
  *(float *)(a1 + 64) = 1.0;
  *(_DWORD *)(a1 + 48) = a1 + 72;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_BYTE *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 52) = 1;
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 60) = 0;
  *(_DWORD *)(a1 + 68) = 0;
  *(_OWORD *)a1 = 0;
  *(_DWORD *)(a1 + 72) = 0;
  *(_BYTE *)(a1 + 76) = 0;
  *(_DWORD *)(a1 + 108) = a4;
  *(_DWORD *)(a1 + 112) = sub_80922A0;
  *(_DWORD *)(a1 + 96) = 0;
  *(_DWORD *)(a1 + 100) = 0;
  *(_DWORD *)(a1 + 104) = 0;
  *(_DWORD *)(a1 + 116) = a1;
  *(_DWORD *)(a1 + 120) = 0;
  *(_DWORD *)(a1 + 124) = 0;
  *(_DWORD *)(a1 + 128) = 0;
  *(_DWORD *)(a1 + 132) = 0;
  *(_DWORD *)(a1 + 136) = 0;
  *(_DWORD *)(a1 + 140) = 0;
  *(_DWORD *)(a1 + 144) = 0;
  *(_DWORD *)(a1 + 148) = 0;
  *(_DWORD *)(a1 + 152) = 0;
  *(_DWORD *)(a1 + 156) = -1;
  *(_DWORD *)(a1 + 160) = 0;
  *(_DWORD *)(a1 + 164) = 0;
  *(_DWORD *)(a1 + 168) = 0;
  *(_BYTE *)(a1 + 172) = 0;
  *(_DWORD *)(a1 + 192) = 1;
  *(_DWORD *)(a1 + 352) = 0;
  *(_BYTE *)(a1 + 356) = 0;
  *(_BYTE *)(a1 + 360) = 0;
  *(_DWORD *)(a1 + 364) = 0;
  *(_BYTE *)(a1 + 368) = 0;
  *(_DWORD *)(a1 + 372) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  *(_OWORD *)(a1 + 176) = 0;
  *(_DWORD *)(a1 + 376) = a1 + 400;
  *(_DWORD *)(a1 + 380) = 1;
  *(_DWORD *)(a1 + 384) = 0;
  *(_DWORD *)(a1 + 388) = 0;
  *(_DWORD *)(a1 + 396) = 0;
  *(_DWORD *)(a1 + 400) = 0;
  *(_BYTE *)(a1 + 404) = 0;
  *(_DWORD *)(a1 + 408) = 5;
  *(float *)(a1 + 392) = 1.0;
  if ( !a2 )
  {
    a3 = 132;
    v15 = (char *)&qword_811CFF4 - 4468;
    goto LABEL_3;
  }
  if ( a3 )
  {
LABEL_3:
    v20 = 0;
    v14 = *((_DWORD *)&qword_811CFF4 - 26);
    do
    {
      v9 = *(const char **)&v15[4 * v20];
      if ( !v9 )
        JUMPOUT(0x804F88A);
      src = *(_BYTE **)&v15[4 * v20];
      v10 = strlen(v9);
      if ( !v10 )
      {
        v7 = (size_t *)v14;
        v6 = (volatile signed __int32 *)(v14 + 12);
        goto LABEL_6;
      }
      v5 = std::string::_Rep::_S_create(v10, 0, &v21);
      v18 = (size_t *)v5;
      v6 = (volatile signed __int32 *)(v5 + 12);
      if ( v10 == 1 )
      {
        *(_BYTE *)(v5 + 12) = *src;
        v7 = *((size_t **)&qword_811CFF4 - 26);
        if ( (size_t *)v5 == v7 )
          goto LABEL_6;
      }
      else
      {
        v13 = src;
        srca = (volatile signed __int32 *)(v5 + 12);
        memcpy((void *)(v5 + 12), v13, v10);
        v6 = srca;
        v7 = *((size_t **)&qword_811CFF4 - 26);
        if ( v18 == v7 )
          goto LABEL_6;
      }
      v18[2] = 0;
      *v18 = v10;
      *((_BYTE *)v18 + v10 + 12) = 0;
LABEL_6:
      v19 = (volatile signed __int32 *)v7;
      v23 = v6;
      *(_WORD *)sub_8093CC0((int *)(a1 + 48), (const void **)&v23) = v20 + 128;
      v8 = v23 - 3;
      if ( v23 - 3 != v19 )
      {
        if ( &_pthread_key_create )
        {
          v12 = _InterlockedExchangeAdd(v23 - 1, 0xFFFFFFFF);
        }
        else
        {
          v12 = *((_DWORD *)v23 - 1);
          *((_DWORD *)v23 - 1) = v12 - 1;
        }
        if ( v12 <= 0 )
          std::string::_Rep::_M_destroy(v8, &v22);
      }
      ++v20;
    }
    while ( v20 < a3 );
  }
  sub_809A780(a1, 0, a5);
  result = v24 - __readgsdword(0x14u);
  if ( result )
    sub_80D7AB0();
  return result;
}
// 809AD00: control flows out of bounds to 804F88A
// 804BAD0: using guessed type int __cdecl std::string::_Rep::_S_create(_DWORD, _DWORD, _DWORD);
// 811CFF4: using guessed type __int64 qword_811CFF4;
