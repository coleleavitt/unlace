/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_90FA0
// Address: 0x0000000000090FA0

//----- (0000000000090FA0) ----------------------------------------------------
__int64 __fastcall sub_90FA0(__int64 a1, __int64 a2, char a3, char a4)
{
  unsigned int v6; // r14d
  int v7; // eax
  int v8; // eax
  __int16 v9; // ax
  char v10; // dl
  __int64 v11; // rsi
  int *v12; // r13
  int v13; // eax
  __int64 v14; // rax
  int v15; // esi
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  unsigned int v20; // [rsp+4h] [rbp-44h] BYREF
  _QWORD v21[8]; // [rsp+8h] [rbp-40h] BYREF

  v21[1] = __readfsqword(0x28u);
  v20 = 0;
  *(_BYTE *)(a1 + 600) = 0;
  v6 = 0;
  qlseek(a2, 0, 0);
  if ( qlread(a2, (void *)(a1 + 32), 28) != 28 )
    return v6;
  v7 = *(unsigned __int16 *)(a1 + 32);
  if ( v7 == 19802 || (unsigned __int16)v7 == 23117 )
  {
    if ( qlread(a2, v21, 8) == 8 && v21[0] == 0x6B6E694C696E55LL )
      *(_BYTE *)(a1 + 600) = 1;
    v6 = 0;
    qlseek(a2, 60, 0);
    if ( qlread(a2, &v20, 4) != 4 )
      return v6;
    v11 = v20;
  }
  else
  {
    if ( (unsigned __int16)v7 == 23126 )
    {
      v6 = 0;
      qlseek(a2, 0, 0);
      if ( qlread(a2, (void *)(a1 + 32), 40) == 40 )
      {
        *(_OWORD *)(a1 + 72) = 0;
        *(_OWORD *)(a1 + 296) = 0;
        *(_OWORD *)(a1 + 280) = 0;
        *(_OWORD *)(a1 + 264) = 0;
        *(_OWORD *)(a1 + 248) = 0;
        *(_OWORD *)(a1 + 232) = 0;
        *(_OWORD *)(a1 + 216) = 0;
        *(_OWORD *)(a1 + 200) = 0;
        *(_OWORD *)(a1 + 184) = 0;
        *(_OWORD *)(a1 + 168) = 0;
        *(_OWORD *)(a1 + 152) = 0;
        *(_OWORD *)(a1 + 136) = 0;
        *(_OWORD *)(a1 + 120) = 0;
        *(_OWORD *)(a1 + 104) = 0;
        *(_OWORD *)(a1 + 88) = 0;
        *(_QWORD *)(a1 + 312) = 0;
        *(_DWORD *)(a1 + 72) = *(unsigned __int16 *)(a1 + 32);
        v8 = *(unsigned __int16 *)(a1 + 34);
        *(_WORD *)(a1 + 76) = v8;
        *(_WORD *)(a1 + 78) = *(unsigned __int8 *)(a1 + 36);
        if ( v8 == 34404 || (unsigned __int16)v8 == 512 || (unsigned __int16)v8 == 43620 )
        {
          v9 = 523;
          v10 = 1;
        }
        else
        {
          v9 = 267;
          v10 = 0;
        }
        *(_WORD *)(a1 + 96) = v9;
        v15 = *(_DWORD *)(a1 + 44);
        *(_DWORD *)(a1 + 112) = *(_DWORD *)(a1 + 40);
        *(_DWORD *)(a1 + 116) = v15;
        *(_DWORD *)(a1 + 156) = v15 + 40 - *(unsigned __int16 *)(a1 + 38);
        v16 = *(_QWORD *)(a1 + 48);
        if ( v10 )
        {
          *(_QWORD *)(a1 + 120) = v16;
          v16 >>= 32;
        }
        else
        {
          *(_DWORD *)(a1 + 124) = v16;
        }
        *(_WORD *)(a1 + 164) = *(unsigned __int8 *)(a1 + 37);
        *(_OWORD *)(a1 + 232) = *(_OWORD *)(a1 + 56);
        *(_QWORD *)(a1 + 128) = 0x100000001LL;
        if ( v9 == 523 )
          v17 = *(_QWORD *)(a1 + 120);
        else
          v17 = (unsigned int)v16;
        *(_QWORD *)(a1 + 584) = v17;
        *(_QWORD *)(a1 + 592) = 0;
        goto LABEL_34;
      }
      return v6;
    }
    v11 = 0;
  }
  *(_QWORD *)(a1 + 592) = v11;
  v6 = 0;
  qlseek(a2, v11, 0);
  v12 = (int *)(a1 + 320);
  memset((void *)(a1 + 320), 0, 0x108u);
  qlseek(a2, *(_QWORD *)(a1 + 592), 0);
  if ( qlread(a2, (void *)(a1 + 320), 264) - 93 <= 0xAB )
  {
    v13 = *v12;
    if ( (*v12 == 17744 || v13 == 4542530 || v13 == 19536)
      && (unsigned __int8)sub_9B900((_OWORD *)(a1 + 72), (_OWORD *)(a1 + 320), a3, a4) )
    {
      if ( *(_WORD *)(a1 + 96) == 523 )
        v14 = *(_QWORD *)(a1 + 120);
      else
        v14 = *(unsigned int *)(a1 + 124);
      *(_QWORD *)(a1 + 584) = v14;
LABEL_34:
      LOBYTE(v6) = 1;
      return v6;
    }
    return 0;
  }
  return v6;
}
