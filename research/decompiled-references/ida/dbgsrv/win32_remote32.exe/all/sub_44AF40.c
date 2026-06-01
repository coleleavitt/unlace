/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44AF40
// Address: 0x0044AF40

//----- (0044AF40) --------------------------------------------------------
int __thiscall sub_44AF40(int this)
{
  void **v2; // edi
  unsigned int v3; // eax
  unsigned int v4; // ebx
  unsigned int v6; // [esp+14h] [ebp-14h]

  sub_43A190((char *)this);
  v2 = (void **)(this + 204);
  *(_DWORD *)this = &off_48EECC;
  *(_DWORD *)(this + 416) = -1;
  *(_DWORD *)(this + 420) = -1;
  *(_DWORD *)(this + 424) = -1;
  *(_DWORD *)(this + 428) = -1;
  *(_DWORD *)(this + 432) = -1;
  *(_DWORD *)(this + 436) = -1;
  *(_DWORD *)(this + 440) = -1;
  v3 = *(_DWORD *)(this + 208);
  v6 = v3;
  v4 = v3 + 1;
  if ( v3 + 1 < v3 )
    v4 = 0x7FFFFFFF;
  if ( v4 > v3 )
  {
    if ( v4 > *(_DWORD *)(this + 212) )
      *v2 = sub_453B00(this + 204, *v2, v4, 1u);
    sub_464890((__m128i *)(*(_DWORD *)(this + 208) + *(_DWORD *)(this + 204)), 0, v4 - *(_DWORD *)(this + 208));
    goto LABEL_9;
  }
  if ( v4 != v3 && v4 < v3 )
LABEL_9:
    *(_DWORD *)(this + 208) = v4;
  *((_BYTE *)*v2 + v6) = -52;
  *(_DWORD *)(this + 376) = -1;
  *(_DWORD *)(this + 392) = 0;
  *(_DWORD *)(this + 380) = -1;
  *(_DWORD *)(this + 396) = 0;
  *(_DWORD *)(this + 384) = -1;
  *(_DWORD *)(this + 400) = 0;
  *(_DWORD *)(this + 388) = -1;
  *(_DWORD *)(this + 404) = 0;
  *(_DWORD *)(this + 408) = 0;
  *(_DWORD *)(this + 412) = 256;
  sub_43DCF0((void *)this, "win32");
  return this;
}
// 48EECC: using guessed type int (__stdcall *off_48EECC)(int, int);
