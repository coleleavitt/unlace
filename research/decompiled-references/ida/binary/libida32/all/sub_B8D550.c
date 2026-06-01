unsigned __int64 __fastcall sub_B8D550(__int64 a1, __int64 a2, __int64 a3)
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
      sub_2257CD0(a2, 32);
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
              result = sub_E8AA70(v12, v10);
              break;
            case 1:
              result = sub_E8AE30(v12, v10);
              break;
            case 2:
              result = sub_E8C4D0(v12, v10);
              break;
            case 3:
              result = sub_E8CCC0(v12, v10);
              break;
            case 4:
              result = sub_E8C5E0(v12, v10);
              break;
            case 5:
            case 6:
            case 7:
              result = sub_E8D8B0(v12, v10);
              break;
            case 8:
            case 9:
            case 0xA:
              result = sub_E8E4E0(v12, v10);
              break;
            case 0xB:
            case 0xC:
            case 0xD:
              result = sub_E8E680(v12, v10);
              break;
            case 0xE:
            case 0xF:
            case 0x10:
              result = sub_E8E820(v12, v10);
              break;
            case 0x11:
              result = sub_E8A020(v12, v10);
              break;
            case 0x12:
              result = sub_E8A9A0(v12, v10);
              break;
            case 0x13:
              result = sub_E8B0F0(v12, v10);
              break;
            case 0x14:
              result = sub_E8AF90(v12, v10);
              break;
            case 0x15:
              result = sub_E8B920(v12, v10);
              break;
            case 0x16:
              result = sub_E8A8D0(v12, v10);
              break;
            case 0x17:
              result = sub_E8B3B0(v12, v10);
              break;
            case 0x18:
              result = sub_E8BBD0(v12, v10);
              break;
            case 0x19:
            case 0x1A:
              result = sub_E8D220(v12, v10);
              break;
            case 0x1B:
              result = sub_E8CC30(v12, v10);
              break;
            case 0x1C:
              result = sub_E8ACD0(v12, v10);
              break;
            case 0x1D:
              result = sub_E8C700(v12, v10);
              break;
            case 0x1E:
              result = sub_E8B7D0(v12, v10);
              break;
            case 0x1F:
              result = sub_E8A1A0(v12, v10);
              break;
            case 0x20:
              result = sub_E8CC70(v12, v10);
              break;
            case 0x21:
              result = sub_E8C510(v12, v10);
              break;
            case 0x22:
              result = sub_E8BA80(v12, v10);
              break;
            case 0x23:
              result = sub_E8B510(v12, v10);
              break;
            case 0x24:
              result = sub_E8C5A0(v12, v10);
              break;
            case 0x25:
              result = sub_E8A490(v12, v10);
              break;
            case 0x26:
              result = sub_E8A740(v12, v10);
              break;
            case 0x27:
              result = sub_E8B670(v12, v10);
              break;
            case 0x28:
              result = sub_E8AB70(v12, v10);
              break;
            case 0x29:
              result = sub_E8BD20(v12, v10);
              break;
            case 0x2A:
              result = sub_E8A250(v12, v10);
              break;
            case 0x2B:
              result = sub_E8C560(v12, v10);
              break;
            case 0x2C:
              result = sub_E8A5F0(v12, v10);
              break;
            case 0x2D:
              result = sub_E8B250(v12, v10);
              break;
            case 0x2E:
              result = sub_E8CB10(v12, v10);
              break;
            case 0x2F:
              result = sub_E8A800(v12, v10);
              break;
            case 0x30:
              result = sub_E8C200(v12, v10);
              break;
            case 0x31:
              result = sub_E8C9F0(v12, v10);
              break;
          }
        }
        if ( v9 != v6[v7 - 1] )
        {
          result = *(_QWORD *)(*(_QWORD *)&v12[0] + 32LL);
          if ( result >= *(_QWORD *)(*(_QWORD *)&v12[0] + 24LL) )
          {
            result = sub_2257CD0(*(_QWORD *)&v12[0], 32);
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

