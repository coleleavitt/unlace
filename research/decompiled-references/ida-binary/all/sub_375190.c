__int64 __fastcall path_color_ah_t__::vfunc_4(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rsi
  unsigned int v5; // eax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx
  unsigned int v10; // eax
  void *ptr[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v12; // [rsp+10h] [rbp-48h]
  _QWORD v13[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v14[5]; // [rsp+30h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v14[3] = __readfsqword(0x28u);
  v4 = *(unsigned int *)(a2 + 8);
  v5 = sub_525030(*(_QWORD *)(v2 + 16) + 40LL, v4);
  v12 = 0;
  *(_OWORD *)ptr = 0;
  v6 = QT::QColor::fromRgb((QT::QColor *)(unsigned int)__ROR4__(_byteswap_ulong(v5), 8), v4);
  v14[1] = v7;
  v14[0] = v6;
  v13[0] = sub_4AF930(v14, 0, ptr, 0);
  v13[1] = v8;
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
  {
    free(ptr[0]);
    if ( !LODWORD(v13[0]) )
      return 1;
LABEL_6:
    v10 = QT::QColor::rgb((QT::QColor *)v13);
    sub_370650((__int64 *)a2, __ROR4__(_byteswap_ulong(v10), 8) & 0xFFFFFF);
    return 1;
  }
  if ( LODWORD(v13[0]) )
    goto LABEL_6;
  return 1;
}
