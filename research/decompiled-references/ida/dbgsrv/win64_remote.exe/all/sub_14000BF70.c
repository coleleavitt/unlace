/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14000BF70
// Address: 0x000000014000BF70

//----- (000000014000BF70) ----------------------------------------------------
__int128 *__fastcall sub_14000BF70(__int64 a1, unsigned int *a2, char a3, __int64 a4, __int64 a5)
{
  int v7; // r11d
  int v8; // ecx
  int v9; // eax
  __int128 *result; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int128 v13; // xmm0

  v7 = (2 * (a3 & 2)) | 0x10000B;
  if ( (a3 & 0xC) == 0 )
    v7 = (2 * (a3 & 2)) | 0x100003;
  v8 = v7 | 0x100008;
  if ( (a3 & 0x10) == 0 )
    v8 = v7;
  v9 = v8 | 0x100048;
  if ( (a3 & 0x20) == 0 )
    v9 = v8;
  *(_DWORD *)(a1 + 48) = v9;
  if ( a4 && *(int *)(a5 + 48) > 0 )
    (*(void (__fastcall **)(__int64, __int64, __int64))(a5 + 40))(a1, 1048640, a4);
  *(_QWORD *)(a1 + 72) = a2[1];
  *(_QWORD *)(a1 + 80) = a2[2];
  *(_QWORD *)(a1 + 88) = a2[3];
  *(_QWORD *)(a1 + 96) = a2[4];
  *(_QWORD *)(a1 + 104) = a2[5];
  *(_QWORD *)(a1 + 112) = a2[6];
  *(_WORD *)(a1 + 64) = *((_WORD *)a2 + 70);
  *(_WORD *)(a1 + 62) = *((_WORD *)a2 + 72);
  *(_WORD *)(a1 + 60) = *((_WORD *)a2 + 74);
  *(_WORD *)(a1 + 58) = *((_WORD *)a2 + 76);
  *(_QWORD *)(a1 + 176) = a2[39];
  *(_QWORD *)(a1 + 168) = a2[40];
  *(_QWORD *)(a1 + 144) = a2[41];
  *(_QWORD *)(a1 + 136) = a2[42];
  *(_QWORD *)(a1 + 128) = a2[43];
  *(_QWORD *)(a1 + 120) = a2[44];
  *(_QWORD *)(a1 + 160) = a2[45];
  *(_WORD *)(a1 + 56) = *((_WORD *)a2 + 94);
  *(_DWORD *)(a1 + 68) = a2[48];
  *(_WORD *)(a1 + 66) = *((_WORD *)a2 + 100);
  *(_QWORD *)(a1 + 248) = a2[46];
  *(_QWORD *)(a1 + 152) = a2[49];
  result = (__int128 *)*a2;
  if ( ((unsigned int)result & 0x10020) != 0 )
  {
    v11 = a1 + 256;
    v12 = 4;
    result = (__int128 *)(a2 + 51);
    do
    {
      v11 += 128;
      v13 = *result;
      result += 8;
      *(_OWORD *)(v11 - 128) = v13;
      *(_OWORD *)(v11 - 112) = *(result - 7);
      *(_OWORD *)(v11 - 96) = *(result - 6);
      *(_OWORD *)(v11 - 80) = *(result - 5);
      *(_OWORD *)(v11 - 64) = *(result - 4);
      *(_OWORD *)(v11 - 48) = *(result - 3);
      *(_OWORD *)(v11 - 32) = *(result - 2);
      *(_OWORD *)(v11 - 16) = *(result - 1);
      --v12;
    }
    while ( v12 );
  }
  else if ( ((unsigned int)result & 0x10008) != 0 )
  {
    *(_WORD *)(a1 + 256) = *((_WORD *)a2 + 14);
    *(_WORD *)(a1 + 258) = *((_WORD *)a2 + 16);
    *(_BYTE *)(a1 + 260) = *((_BYTE *)a2 + 36);
    *(_DWORD *)(a1 + 264) = a2[10];
    *(_WORD *)(a1 + 268) = *((_WORD *)a2 + 22);
    *(_DWORD *)(a1 + 272) = a2[12];
    *(_WORD *)(a1 + 276) = *((_WORD *)a2 + 26);
    *(_OWORD *)(a1 + 288) = 0;
    *(_OWORD *)(a1 + 304) = 0;
    *(_OWORD *)(a1 + 320) = 0;
    *(_OWORD *)(a1 + 336) = 0;
    *(_OWORD *)(a1 + 352) = 0;
    *(_OWORD *)(a1 + 368) = 0;
    *(_OWORD *)(a1 + 384) = 0;
    *(_OWORD *)(a1 + 400) = 0;
    *(_QWORD *)(a1 + 288) = *((_QWORD *)a2 + 7);
    *(_WORD *)(a1 + 296) = *((_WORD *)a2 + 32);
    *(_QWORD *)(a1 + 304) = *(_QWORD *)((char *)a2 + 66);
    *(_WORD *)(a1 + 312) = *((_WORD *)a2 + 37);
    *(_QWORD *)(a1 + 320) = *(_QWORD *)(a2 + 19);
    *(_WORD *)(a1 + 328) = *((_WORD *)a2 + 42);
    *(_QWORD *)(a1 + 336) = *(_QWORD *)((char *)a2 + 86);
    *(_WORD *)(a1 + 344) = *((_WORD *)a2 + 47);
    *(_QWORD *)(a1 + 352) = *((_QWORD *)a2 + 12);
    *(_WORD *)(a1 + 360) = *((_WORD *)a2 + 52);
    *(_QWORD *)(a1 + 368) = *(_QWORD *)((char *)a2 + 106);
    *(_WORD *)(a1 + 376) = *((_WORD *)a2 + 57);
    *(_QWORD *)(a1 + 384) = *(_QWORD *)(a2 + 29);
    *(_WORD *)(a1 + 392) = *((_WORD *)a2 + 62);
    *(_QWORD *)(a1 + 400) = *(_QWORD *)((char *)a2 + 126);
    result = (__int128 *)*((unsigned __int16 *)a2 + 67);
    *(_WORD *)(a1 + 408) = (_WORD)result;
  }
  return result;
}
