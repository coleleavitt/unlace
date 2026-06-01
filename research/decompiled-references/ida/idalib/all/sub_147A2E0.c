__int64 __fastcall sub_147A2E0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        const void *a6,
        unsigned int a7,
        __int16 a8,
        int a9)
{
  __int64 v10; // rbx
  __int16 v11; // ax
  __int64 v12; // rax

  v10 = sub_15D92D0(*(_QWORD *)a1, 8LL * a7 + 80);
  v11 = sub_F963B0(a2, a4, a8 & 0xF);
  *(_QWORD *)v10 = a2;
  *(_WORD *)(v10 + 32) = v11;
  LOBYTE(v11) = *(_BYTE *)(v10 + 35);
  *(_BYTE *)(v10 + 34) = (16 * ((unsigned __int8)a8 >> 4)) | a8 & 0xF;
  *(_QWORD *)(v10 + 8) = a4;
  *(_QWORD *)(v10 + 16) = a5;
  *(_QWORD *)(v10 + 24) = a3;
  *(_BYTE *)(v10 + 35) = HIBYTE(a8) & 1 | v11 & 0xFC | (2 * ((a8 & 0x200) != 0));
  *(_QWORD *)(v10 + 40) = 0;
  *(_DWORD *)(v10 + 52) = a9;
  *(_DWORD *)(v10 + 48) = 0;
  *(_WORD *)(v10 + 56) = a7;
  *(_QWORD *)(v10 + 56) &= 0x7F80FFFFuLL;
  *(_QWORD *)(v10 + 72) = sub_15D7D80(v10);
  if ( a7 )
    memcpy((void *)(v10 + 80), a6, 8LL * a7);
  v12 = *(unsigned int *)(a1 + 16);
  if ( v12 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 20) )
  {
    sub_2237220(a1 + 8, a1 + 24, v12 + 1, 8);
    v12 = *(unsigned int *)(a1 + 16);
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v12) = v10;
  ++*(_DWORD *)(a1 + 16);
  return v10;
}
