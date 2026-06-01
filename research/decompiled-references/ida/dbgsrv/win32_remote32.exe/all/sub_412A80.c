/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_412A80
// Address: 0x00412A80

//----- (00412A80) --------------------------------------------------------
char __thiscall sub_412A80(int this, unsigned int a2, __m128i *a3, __m128i *a4, unsigned int a5, DWORD a6)
{
  unsigned int v6; // edi
  int v8; // ecx
  int v9; // edx
  int v10; // edi
  char v11; // cl
  unsigned int v12; // eax
  int v13; // edx
  int v15; // [esp+Ch] [ebp-Ch] BYREF
  int v16; // [esp+14h] [ebp-4h]

  v6 = a5;
  sub_408C10((int *)(this + 604), &v15, &a5);
  v8 = v16;
  if ( *(_BYTE *)(v16 + 13) || v6 < *(_DWORD *)(v16 + 16) )
    v8 = *(_DWORD *)(this + 604);
  v9 = 0;
  if ( v8 != *(_DWORD *)(this + 604) )
    v9 = v8 + 20;
  if ( !v9 || !sub_4157F0(v9, a2, a6) )
    return 0;
  v10 = *(_DWORD *)(a2 + 12);
  sub_464890(a3, 0, 0x40u);
  sub_464890(a4, 0, 0x290u);
  a3->m128i_i32[0] = *(_DWORD *)(v10 + 176);
  a3->m128i_i32[1] = *(_DWORD *)(v10 + 164);
  a3->m128i_i32[2] = *(_DWORD *)(v10 + 172);
  a3->m128i_i32[3] = *(_DWORD *)(v10 + 168);
  v11 = a6;
  a3[1].m128i_i32[0] = *(_DWORD *)(v10 + 156);
  a3[1].m128i_i32[1] = *(_DWORD *)(v10 + 160);
  a3[1].m128i_i32[2] = *(_DWORD *)(v10 + 180);
  a3[1].m128i_i32[3] = *(_DWORD *)(v10 + 196);
  a3[2].m128i_i32[0] = *(_DWORD *)(v10 + 184);
  a3[2].m128i_i32[1] = *(_DWORD *)(v10 + 192);
  a3[2].m128i_i32[3] = *(_DWORD *)(v10 + 188);
  a3[3].m128i_i32[2] = *(_DWORD *)(v10 + 144);
  a3[3].m128i_i32[3] = *(_DWORD *)(v10 + 140);
  a3[2].m128i_i32[2] = *(_DWORD *)(v10 + 200);
  a3[3].m128i_i32[0] = *(_DWORD *)(v10 + 152);
  a3[3].m128i_i32[1] = *(_DWORD *)(v10 + 148);
  if ( (v11 & 0xC) != 0 )
  {
    if ( (v11 & 4) != 0 )
    {
      a4[40].m128i_i32[1] = *(_DWORD *)(v10 + 28);
      a4[40].m128i_i32[2] = *(_DWORD *)(v10 + 32);
      a4[40].m128i_i32[3] = *(_DWORD *)(v10 + 36);
    }
    a4->m128i_i64[0] = *(_QWORD *)(v10 + 56);
    a4->m128i_i16[4] = *(_WORD *)(v10 + 64);
    a4[1].m128i_i64[0] = *(_QWORD *)(v10 + 66);
    a4[1].m128i_i16[4] = *(_WORD *)(v10 + 74);
    a4[2].m128i_i64[0] = *(_QWORD *)(v10 + 76);
    a4[2].m128i_i16[4] = *(_WORD *)(v10 + 84);
    a4[3].m128i_i64[0] = *(_QWORD *)(v10 + 86);
    a4[3].m128i_i16[4] = *(_WORD *)(v10 + 94);
    a4[4].m128i_i64[0] = *(_QWORD *)(v10 + 96);
    a4[4].m128i_i16[4] = *(_WORD *)(v10 + 104);
    a4[5].m128i_i64[0] = *(_QWORD *)(v10 + 106);
    a4[5].m128i_i16[4] = *(_WORD *)(v10 + 114);
    a4[6].m128i_i64[0] = *(_QWORD *)(v10 + 116);
    a4[6].m128i_i16[4] = *(_WORD *)(v10 + 124);
    a4[7].m128i_i64[0] = *(_QWORD *)(v10 + 126);
    a4[7].m128i_i16[4] = *(_WORD *)(v10 + 134);
  }
  if ( (v11 & 0x30) != 0 )
  {
    sub_464310((unsigned int)&a4[8], v10 + 364, 16 * *(_DWORD *)(this + 720));
    v11 = a6;
    a4[40].m128i_i32[0] = *(_DWORD *)(v10 + 228);
  }
  if ( (v11 & 0x20) != 0 && *(int *)(this + 716) > 0 && (*(int (__stdcall **)(int, int, _DWORD))(this + 708))(v10, 4, 0) )
  {
    a6 = 0;
    (*(void (__stdcall **)(int, int, DWORD *))(this + 704))(v10, 1, &a6);
    v12 = (*(int (__stdcall **)(int, int, _DWORD))(this + 704))(v10, 2, 0);
    v13 = 16;
    if ( a6 >> 4 < 0x10 )
      v13 = a6 >> 4;
    sub_464310((unsigned int)&a4[24], v12, 16 * v13);
  }
  return 1;
}
