unsigned __int64 __fastcall sub_BB1290(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 result; // rax
  _BYTE *v4; // rax
  __int64 v5; // r12
  __int64 *v6; // r13
  __int64 v7; // r12
  __int64 *v8; // rbx
  __int64 v9; // r15
  __int64 v10; // rsi
  double v11[2]; // [rsp+0h] [rbp-58h] BYREF
  _OWORD v12[4]; // [rsp+10h] [rbp-48h] BYREF

  result = *(unsigned int *)(a1 + 48);
  if ( (_DWORD)result )
  {
    v4 = *(_BYTE **)(a2 + 32);
    *(_QWORD *)&v11[0] = a3;
    if ( (unsigned __int64)v4 >= *(_QWORD *)(a2 + 24) )
    {
      sub_227BA10(a2, 32);
    }
    else
    {
      *(_QWORD *)(a2 + 32) = v4 + 1;
      *v4 = 32;
    }
    v5 = *(unsigned int *)(a1 + 48);
    v6 = *(__int64 **)(a1 + 40);
    *(_QWORD *)&v11[1] = a2;
    v7 = v5;
    result = (unsigned __int64)&v6[v7];
    v12[0] = _mm_loadh_ps(v11);
    *(_QWORD *)&v11[0] = &v6[v7];
    if ( v6 != &v6[v7] )
    {
      v8 = v6;
      do
      {
        v9 = *v8;
        if ( *v8 )
        {
          v10 = *v8;
          switch ( *(_BYTE *)(v9 + 8) )
          {
            case 0:
              result = sub_EAE7B0(v12, v10);
              break;
            case 1:
              result = sub_EAEB70(v12, v10);
              break;
            case 2:
              result = sub_EB0210(v12, v10);
              break;
            case 3:
              result = sub_EB0A00(v12, v10);
              break;
            case 4:
              result = sub_EB0320(v12, v10);
              break;
            case 5:
            case 6:
            case 7:
              result = sub_EB15F0(v12, v10);
              break;
            case 8:
            case 9:
            case 0xA:
              result = sub_EB2220(v12, v10);
              break;
            case 0xB:
            case 0xC:
            case 0xD:
              result = sub_EB23C0(v12, v10);
              break;
            case 0xE:
            case 0xF:
            case 0x10:
              result = sub_EB2560(v12, v10);
              break;
            case 0x11:
              result = sub_EADD60(v12, v10);
              break;
            case 0x12:
              result = sub_EAE6E0(v12, v10);
              break;
            case 0x13:
              result = sub_EAEE30(v12, v10);
              break;
            case 0x14:
              result = sub_EAECD0(v12, v10);
              break;
            case 0x15:
              result = sub_EAF660(v12, v10);
              break;
            case 0x16:
              result = sub_EAE610(v12, v10);
              break;
            case 0x17:
              result = sub_EAF0F0(v12, v10);
              break;
            case 0x18:
              result = sub_EAF910(v12, v10);
              break;
            case 0x19:
            case 0x1A:
              result = sub_EB0F60(v12, v10);
              break;
            case 0x1B:
              result = sub_EB0970(v12, v10);
              break;
            case 0x1C:
              result = sub_EAEA10(v12, v10);
              break;
            case 0x1D:
              result = sub_EB0440(v12, v10);
              break;
            case 0x1E:
              result = sub_EAF510(v12, v10);
              break;
            case 0x1F:
              result = sub_EADEE0(v12, v10);
              break;
            case 0x20:
              result = sub_EB09B0(v12, v10);
              break;
            case 0x21:
              result = sub_EB0250(v12, v10);
              break;
            case 0x22:
              result = sub_EAF7C0(v12, v10);
              break;
            case 0x23:
              result = sub_EAF250(v12, v10);
              break;
            case 0x24:
              result = sub_EB02E0(v12, v10);
              break;
            case 0x25:
              result = sub_EAE1D0(v12, v10);
              break;
            case 0x26:
              result = sub_EAE480(v12, v10);
              break;
            case 0x27:
              result = sub_EAF3B0(v12, v10);
              break;
            case 0x28:
              result = sub_EAE8B0(v12, v10);
              break;
            case 0x29:
              result = sub_EAFA60(v12, v10);
              break;
            case 0x2A:
              result = sub_EADF90(v12, v10);
              break;
            case 0x2B:
              result = sub_EB02A0(v12, v10);
              break;
            case 0x2C:
              result = sub_EAE330(v12, v10);
              break;
            case 0x2D:
              result = sub_EAEF90(v12, v10);
              break;
            case 0x2E:
              result = sub_EB0850(v12, v10);
              break;
            case 0x2F:
              result = sub_EAE540(v12, v10);
              break;
            case 0x30:
              result = sub_EAFF40(v12, v10);
              break;
            case 0x31:
              result = sub_EB0730(v12, v10);
              break;
          }
        }
        if ( v9 != v6[v7 - 1] )
        {
          result = *(_QWORD *)(*(_QWORD *)&v12[0] + 32LL);
          if ( result >= *(_QWORD *)(*(_QWORD *)&v12[0] + 24LL) )
          {
            result = sub_227BA10(*(_QWORD *)&v12[0], 32);
          }
          else
          {
            *(_QWORD *)(*(_QWORD *)&v12[0] + 32LL) = result + 1;
            *(_BYTE *)result = 32;
          }
        }
        ++v8;
      }
      while ( *(__int64 **)&v11[0] != v8 );
    }
  }
  return result;
}
