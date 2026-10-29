__int64 __fastcall sub_BDCD00(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v7; // rdi
  _DWORD *v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rcx
  bool v13; // zf
  unsigned __int8 v14; // al
  __m128 v15; // rax
  __m128i v16; // [rsp+0h] [rbp-28h] BYREF
  __int64 v17; // [rsp+18h] [rbp-10h]

  switch ( (*(_WORD *)a1 + 509) & 0x1FF )
  {
    case 0:
      return *(unsigned int *)(a1 + 32);
    case 1:
      return *(unsigned int *)(a1 + 4);
    case 2:
      return *(unsigned int *)(a1 + 24);
    case 3:
      return *(unsigned int *)(a1 + 16);
    case 4:
      return *(unsigned int *)(a1 + 36);
    case 5:
      return *(unsigned int *)(a1 + 4);
    case 6:
      return *(unsigned int *)(a1 + 20);
    case 7:
      return *(unsigned int *)(a1 + 24);
    case 8:
      return *(unsigned int *)(a1 + 16);
    case 9:
      return *(unsigned int *)(a1 + 16);
    case 0xA:
      return *(unsigned int *)(a1 + 16);
    case 0xB:
      return *(unsigned int *)(a1 + 16);
    case 0xC:
      return *(unsigned int *)(a1 + 4);
    case 0xD:
      return *(unsigned int *)(a1 + 16);
    case 0xE:
    case 0x21:
    case 0x2C:
    case 0x2E:
      return sub_BDCD00(*(_QWORD *)(a1 + 16));
    case 0xF:
      return *(unsigned int *)(a1 + 4);
    case 0x10:
      return *(unsigned int *)(a1 + 16);
    case 0x11:
      return *(unsigned int *)(a1 + 16);
    case 0x12:
    case 0x13:
    case 0x19:
    case 0x71:
    case 0x7D:
    case 0x7E:
      return sub_EC7AA0(*(_QWORD *)(a1 + 24));
    case 0x14:
      return *(unsigned int *)(a1 + 24);
    case 0x15:
      v13 = *(_QWORD *)(a1 + 40) == 0;
      v16 = _mm_loadu_si128((const __m128i *)(a1 + 40));
      if ( v13 )
        return *(unsigned int *)(a1 + 24);
      else
        return sub_BD2EB0(&v16);
    case 0x16:
      return *(unsigned int *)(a1 + 16);
    case 0x17:
      v9 = *(_QWORD *)(a1 + 16);
      if ( v9 )
        return sub_BDCD00(v9);
      return *(unsigned int *)(a1 + 4);
    case 0x18:
      return *(unsigned int *)(a1 + 16);
    case 0x1A:
      return *(unsigned int *)(a1 + 24);
    case 0x1B:
      return *(unsigned int *)(a1 + 24);
    case 0x1C:
      return *(unsigned int *)(a1 + 24);
    case 0x1D:
      v7 = *(_QWORD *)(a1 + 40);
      if ( (v7 & 6) != 0 )
        return *(unsigned int *)(a1 + 36);
      else
        return sub_EC7AA0(v7 & 0xFFFFFFFFFFFFFFF8LL);
    case 0x1E:
      return *(unsigned int *)(a1 + 32);
    case 0x1F:
      if ( (*(_BYTE *)(a1 + 40) & 2) != 0 )
        return *(unsigned int *)(a1 + 32);
      else
        return sub_EC7AA0(*(_QWORD *)(a1 + 24));
    case 0x20:
      return *(unsigned int *)(a1 + 24);
    case 0x22:
      return *(unsigned int *)(a1 + 24);
    case 0x23:
    case 0x27:
      return *(unsigned int *)(a1 + 20);
    case 0x24:
      return *(unsigned int *)(a1 + 32);
    case 0x25:
      return *(unsigned int *)(a1 + 20);
    case 0x26:
      return *(unsigned int *)(a1 + 32);
    case 0x28:
      return *(unsigned int *)(a1 + 16);
    case 0x29:
      return *(unsigned int *)(a1 + 16);
    case 0x2A:
    case 0x33:
    case 0x7B:
      return 0;
    case 0x2B:
      return *(unsigned int *)(a1 + 40);
    case 0x2D:
      v10 = *(_QWORD *)(a1 + 16);
      if ( (v10 & 4) != 0 )
        v8 = *(_DWORD **)((v10 & 0xFFFFFFFFFFFFFFF8LL) + 40);
      else
        v8 = (_DWORD *)(v10 & 0xFFFFFFFFFFFFFFF8LL);
      goto LABEL_110;
    case 0x2F:
      v12 = *(_QWORD *)(a1 + 16);
      if ( !v12 || !(unsigned __int8)sub_BDA5C0(*(_QWORD *)(a1 + 16)) )
        return sub_EC7AA0(v12);
      if ( *(_QWORD *)(a1 + 40) )
        return sub_BD2EB0((const __m128i *)(a1 + 40));
      else
        return *(unsigned int *)(a1 + 32);
    case 0x30:
      return *(unsigned int *)(a1 + 16);
    case 0x31:
      return *(unsigned int *)(a1 + 28);
    case 0x32:
      return sub_BD7480(a1);
    case 0x34:
    case 0x35:
    case 0x39:
    case 0x3A:
    case 0x3D:
    case 0x40:
    case 0x4C:
    case 0x60:
    case 0x63:
      return sub_EC7AA0(*(_QWORD *)(a1 + 16));
    case 0x36:
      return *(unsigned int *)(a1 + 4);
    case 0x37:
      return *(unsigned int *)(a1 + 16);
    case 0x38:
      return *(unsigned int *)(a1 + 24);
    case 0x3B:
      return *(unsigned int *)(a1 + 28);
    case 0x3C:
      return *(unsigned int *)(a1 + 28);
    case 0x3E:
      return *(unsigned int *)(a1 + 16);
    case 0x3F:
      return *(unsigned int *)(a1 + 16);
    case 0x41:
      return sub_BDCC90(a1);
    case 0x42:
      return sub_BD2EB0((const __m128i *)(a1 + 16));
    case 0x43:
      return *(unsigned int *)(a1 + 16);
    case 0x44:
      if ( (*(_QWORD *)a1 & 0x80000LL) == 0 )
        return *(unsigned int *)(a1 + 4);
      v16 = (__m128i)_mm_loadh_ps((const double *)(a1 + 40));
      return sub_BD2EB0(&v16);
    case 0x45:
    case 0x46:
      return *(unsigned int *)(a1 + 16);
    case 0x47:
      return *(unsigned int *)(a1 + 32);
    case 0x48:
      return *(unsigned int *)(*(_QWORD *)(a1 + 16) + 32LL);
    case 0x49:
      v8 = *(_DWORD **)(a1 + 32);
      result = 0;
      if ( v8 )
      {
        result = *(unsigned int *)(a1 + 16);
        if ( !(_DWORD)result )
          goto LABEL_110;
      }
      return result;
    case 0x4A:
      return *(unsigned int *)(a1 + 40);
    case 0x4B:
      return *(unsigned int *)(a1 + 20);
    case 0x4D:
      return *(unsigned int *)(a1 + 32);
    case 0x4E:
    case 0x4F:
    case 0x50:
    case 0x51:
    case 0x52:
      return *(unsigned int *)(a1 + 32);
    case 0x53:
      return sub_C70DC0(a1);
    case 0x54:
      return *(unsigned int *)(a1 + 32);
    case 0x55:
      return *(unsigned int *)(a1 + 32);
    case 0x56:
    case 0x5A:
      return sub_BD3030(a1);
    case 0x57:
      if ( (unsigned int)sub_C70E10() == 1 )
        return *(unsigned int *)(a1 + 20);
      else
        return sub_EC7AA0(*(_QWORD *)(a1 + 8 * (((*(_BYTE *)(a1 + 2) & 8) != 0) + 1LL) + 32));
    case 0x58:
      v14 = (*(_BYTE *)(a1 + 3) >> 1) & 0x3F;
      if ( (unsigned int)v14 - 5 > 0x23 || ((v14 + 27) & 0x3Fu) <= 1 )
        return *(unsigned int *)(a1 + 24);
      else
        return *(unsigned int *)(a1 + 20);
    case 0x59:
      return sub_BDD390();
    case 0x5B:
      return *(unsigned int *)(a1 + 32);
    case 0x5C:
      return sub_C717C0();
    case 0x5D:
    case 0x66:
      return *(unsigned int *)(a1 + 24);
    case 0x5E:
      return *(unsigned int *)(a1 + 4);
    case 0x5F:
      return *(unsigned int *)(a1 + 4);
    case 0x61:
      return sub_C701E0();
    case 0x62:
      sub_C6FDE0(&v16);
      return sub_BDCD00(v17);
    case 0x64:
      return *(unsigned int *)(a1 + 28);
    case 0x65:
      return *(unsigned int *)(a1 + 4);
    case 0x67:
      return *(unsigned int *)(a1 + 40);
    case 0x68:
      return *(unsigned int *)(a1 + 24);
    case 0x69:
      result = *(unsigned int *)(a1 + 16);
      if ( (_DWORD)result )
        return result;
      v8 = *(_DWORD **)(a1 + 40);
      if ( v8 && (*v8 & 0x4000) != 0 )
        goto LABEL_110;
      result = *(unsigned int *)(a1 + 20);
      break;
    case 0x6A:
      if ( *(_QWORD *)(a1 + 16) && !(unsigned __int8)sub_BDA5C0(*(_QWORD *)(a1 + 16)) )
        return sub_EC7AA0(v12);
      v15.m128_u64[0] = *(_QWORD *)(a1 + 32);
      if ( !v15.m128_u64[0] )
        return *(unsigned int *)(a1 + 56);
      v15.m128_u64[1] = *(_QWORD *)(a1 + 40);
      v16 = (__m128i)v15;
      return sub_BD2EB0(&v16);
    case 0x6B:
      return *(unsigned int *)(a1 + 4);
    case 0x6C:
      return *(unsigned int *)(a1 + 4);
    case 0x6D:
      return *(unsigned int *)(a1 + 4);
    case 0x6E:
      return sub_C70710(a1);
    case 0x6F:
      return sub_C71040();
    case 0x70:
      return *(unsigned int *)(a1 + 4);
    case 0x72:
      return *(unsigned int *)(*(_QWORD *)(a1 + 16) + 24LL);
    case 0x73:
    case 0x74:
      return *(unsigned int *)(a1 + 4);
    case 0x75:
      return *(unsigned int *)(a1 + 76);
    case 0x76:
      return *(unsigned int *)(a1 + 24);
    case 0x77:
      return *(unsigned int *)(a1 + 32);
    case 0x78:
      if ( sub_9C8B50(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4, a5) )
        v9 = *(_QWORD *)(a1 + 16);
      else
        v9 = *(_QWORD *)(a1 + 24);
      return sub_BDCD00(v9);
    case 0x79:
      return sub_BDCD00(*(_QWORD *)(a1 + 24));
    case 0x7A:
      v11 = *(_QWORD *)(a1 + 16);
      v8 = *(_DWORD **)(v11 + 16);
      if ( v8 )
LABEL_110:
        result = sub_EC7AA0(v8);
      else
        result = *(unsigned int *)(v11 + 4);
      break;
    case 0x7C:
      result = *(unsigned int *)(a1 + 16);
      break;
  }
  return result;
}

