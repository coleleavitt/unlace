__int64 __fastcall sub_11F96A0(__int64 a1, __int64 a2, __int64 a3)
{
  void (__fastcall *v4)(__int64, __int64, __int64); // rax
  int v5; // eax
  __int64 result; // rax
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  __m128i v9; // [rsp+0h] [rbp-58h] BYREF
  __int64 v10; // [rsp+10h] [rbp-48h] BYREF
  __int64 v11; // [rsp+18h] [rbp-40h]
  __int16 v12; // [rsp+30h] [rbp-28h]

  sub_11F9480(a1, a2, a3);
  if ( !sub_10DECA0(a2, 0x199u, 0x3F1u) && (unsigned __int8)sub_11E7200((_DWORD *)a1) )
    sub_10DC5D0(a3, (__int64)"-faligned-alloc-unavailable");
  if ( !sub_10DECA0(a2, 0x70Fu, 0x57Cu) && (unsigned __int8)sub_11E7320((_DWORD *)a1) )
    sub_10DC5D0(a3, (__int64)"-fno-sized-deallocation");
  v4 = *(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 576LL);
  if ( v4 == sub_11F07E0 )
  {
    if ( *(_BYTE *)(a1 + 4104) )
    {
      sub_10DC5D0(a3, (__int64)"-darwin-target-variant-triple");
      v12 = 260;
      v10 = a1 + 4048;
      v7 = sub_10DA6C0(a2, (__int64)&v10);
      sub_10DC5D0(a3, v7);
    }
    if ( *(_BYTE *)(a1 + 4040) )
      sub_11EFF80(a1, a2, a3);
  }
  else
  {
    v4(a1, a2, a3);
  }
  sub_10DC5D0(a3, (__int64)"-fcompatibility-qualified-id-block-type-checking");
  if ( !sub_10DECA0(a2, 0x793u, 0x5C4u) )
    sub_10DC5D0(a3, (__int64)"-fvisibility-inlines-hidden-static-local-var");
  if ( *(_BYTE *)(a1 + 4040) )
  {
    v5 = *(_DWORD *)(a1 + 4008) - 5;
    v9 = _mm_loadu_si128((const __m128i *)(a1 + 3976));
    switch ( v5 )
    {
      case 0:
      case 22:
        v10 = 18;
        goto LABEL_13;
      case 4:
        v10 = 15;
        goto LABEL_13;
      case 23:
        v10 = 11;
        goto LABEL_13;
      case 26:
        v10 = 2;
LABEL_13:
        v11 = 0;
        if ( (unsigned __int8)sub_A09E20((unsigned int *)&v9, (unsigned int *)&v10) == 1 )
          break;
        goto LABEL_15;
      default:
        goto LABEL_15;
    }
  }
  sub_10DC5D0(a3, (__int64)"-fbuiltin-headers-in-system-modules");
LABEL_15:
  result = sub_10DECA0(a2, 0x24Eu, 0x43Fu);
  if ( !result )
    result = sub_10DC5D0(a3, (__int64)"-fdefine-target-os-macros");
  if ( *(_BYTE *)(a1 + 4040) )
  {
    result = sub_21B7850(a2, 947, 1218, 0);
    if ( !(_BYTE)result )
    {
      v9 = _mm_loadu_si128((const __m128i *)(a1 + 3976));
      switch ( *(_DWORD *)(a1 + 3932) )
      {
        case 0:
          v8 = 0x800000000000000FLL;
          goto LABEL_30;
        case 1:
        case 2:
          v8 = 0x8000000000000012LL;
          goto LABEL_30;
        case 3:
          v8 = 0x800000000000000BLL;
          goto LABEL_30;
        case 5:
          v8 = 0x8000000000000002LL;
LABEL_30:
          v10 = v8;
          v11 = 0;
          result = sub_A09E20((unsigned int *)&v9, (unsigned int *)&v10);
          if ( !(_BYTE)result )
            result = sub_10DC5D0(a3, (__int64)"-fno-modulemap-allow-subdirectory-search");
          break;
        default:
          return result;
      }
    }
  }
  return result;
}
