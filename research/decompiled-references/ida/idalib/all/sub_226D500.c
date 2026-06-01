__int64 sub_226D500()
{
  __int64 v0; // rbx
  __int64 *v1; // rax
  __int64 v2; // rcx
  __int64 *v4; // [rsp+8h] [rbp-20h]

  if ( !(_BYTE)byte_2D0AC28 && __cxa_guard_acquire(&byte_2D0AC28) )
  {
    qword_2D0AC48 = 13;
    qword_2D0AC40 = (__int64)"Color Options";
    qword_2D0AC50 = (__int64)&byte_22F0C30;
    qword_2D0AC58 = 0;
    sub_22106F0((__int64)&qword_2D0AC40);
    __cxa_guard_release(&byte_2D0AC28);
  }
  v0 = operator new(0xB8u);
  *(_QWORD *)(v0 + 16) = 0;
  *(_QWORD *)(v0 + 24) = 0;
  *(_QWORD *)v0 = &off_2C758B0;
  *(_QWORD *)(v0 + 8) &= 0x80000000uLL;
  *(_QWORD *)(v0 + 72) = 0x100000000LL;
  *(_QWORD *)(v0 + 32) = 0;
  *(_QWORD *)(v0 + 40) = 0;
  *(_QWORD *)(v0 + 48) = 0;
  *(_QWORD *)(v0 + 56) = 0;
  *(_QWORD *)(v0 + 64) = v0 + 80;
  *(_QWORD *)(v0 + 88) = v0 + 112;
  *(_QWORD *)(v0 + 96) = 1;
  *(_DWORD *)(v0 + 104) = 0;
  *(_BYTE *)(v0 + 108) = 1;
  v1 = sub_2210FF0((const char *)&qword_B8);
  v2 = *(unsigned int *)(v0 + 72);
  if ( v2 + 1 > (unsigned __int64)*(unsigned int *)(v0 + 76) )
  {
    v4 = v1;
    sub_2237220(v0 + 64, (const void *)(v0 + 80), v2 + 1, 8);
    v2 = *(unsigned int *)(v0 + 72);
    v1 = v4;
  }
  *(_QWORD *)(*(_QWORD *)(v0 + 64) + 8 * v2) = v1;
  *(__m128 *)(v0 + 168) = _mm_loadh_ps((const double *)off_2C77B30);
  ++*(_DWORD *)(v0 + 72);
  *(_QWORD *)(v0 + 128) = off_2BEAAC8;
  *(_DWORD *)(v0 + 120) = 0;
  *(_BYTE *)(v0 + 140) = 0;
  *(_QWORD *)v0 = off_2C72A80;
  *(_DWORD *)(v0 + 136) = 0;
  *(_QWORD *)(v0 + 144) = off_2BEAB38;
  sub_2217250(v0, (__int64 *)"color", 5u);
  sub_22107D0(v0, &qword_2D0AC40);
  *(_QWORD *)(v0 + 40) = 41;
  *(_QWORD *)(v0 + 32) = "Use colors in output (default=autodetect)";
  *(_DWORD *)(v0 + 120) = 0;
  *(_BYTE *)(v0 + 140) = 1;
  *(_DWORD *)(v0 + 136) = 0;
  sub_2218140(v0);
  return v0;
}
