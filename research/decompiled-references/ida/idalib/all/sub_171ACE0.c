void __fastcall sub_171ACE0(int a1, __m128i *a2, __int64 a3, const __m128i *a4)
{
  __int64 v4; // rax
  unsigned __int64 v5; // r9
  __int64 v6; // r8
  __int64 v10; // rsi
  unsigned __int64 v11; // rcx
  __int64 v12; // rdi
  char v13; // al
  _QWORD *v14; // r14
  char **v15; // r15
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  char *v19; // rax
  unsigned __int64 v20; // r13
  int v21; // r8d
  const char *v22; // rsi
  char **v23; // r12
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  char *v28; // rax
  void *v29[2]; // [rsp+0h] [rbp-88h] BYREF
  _BYTE v30[16]; // [rsp+10h] [rbp-78h] BYREF
  const void **v31[4]; // [rsp+20h] [rbp-68h] BYREF
  __int16 v32; // [rsp+40h] [rbp-48h]

  if ( !*(_QWORD *)(a3 + 40) )
    return;
  v4 = *(_QWORD *)(a3 + 40) & 7LL;
  v5 = *(_QWORD *)(a3 + 40) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (_DWORD)v4 == 7 )
  {
    v21 = 3;
    if ( *(_DWORD *)v5 <= 3u )
      v21 = *(_DWORD *)v5;
    v6 = (unsigned int)(v21 + 8);
    if ( (unsigned int)v6 > 9 )
      return;
  }
  else
  {
    v6 = (unsigned int)v4;
  }
  v10 = 1LL << v6;
  if ( ((1LL << v6) & 0x231) != 0 )
  {
LABEL_23:
    v23 = (char **)a4->m128i_i64[0];
    sub_B86A00((__int64)v29, (__int64 *)(a3 + 40));
    v31[0] = (const void **)v29;
    v32 = 260;
    v28 = sub_15A4EB0(v23, v31, v24, v25, v26, v27);
    sub_15A2F70((__int64)a4, (__int64)v28);
    if ( v29[0] != v30 )
      operator delete(v29[0]);
    return;
  }
  if ( (v10 & 8) != 0 )
  {
    v11 = 0;
    if ( (unsigned int)(v4 - 3) <= 2 )
      v11 = *(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL;
    v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v11 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    v13 = *(_BYTE *)(v12 + 16);
    if ( v13 == 48 )
    {
      v14 = sub_F60F10(v12, v10, a3, v11, v6, v5);
LABEL_10:
      v15 = (char **)a4->m128i_i64[0];
      sub_B86A00((__int64)v29, v14 + 5);
      v32 = 260;
      v31[0] = (const void **)v29;
      v19 = sub_15A4EB0(v15, v31, v16, 260, v17, v18);
      sub_15A2F70((__int64)a4, (__int64)v19);
      if ( v29[0] != v30 )
        operator delete(v29[0]);
      v20 = sub_B97230((__int64)v14);
      if ( v20 )
      {
        sub_15A3210((__int64)a4, 13, (char *)&byte_22F0C30);
        sub_171A7C0(a1, a2, v20, a4, 0, 0, 0);
        sub_15A3210((__int64)a4, 14, (char *)&byte_22F0C30);
      }
      return;
    }
    if ( v13 == 29 )
    {
      v14 = sub_F61460(v12, v10, a3, v11, v6, v5);
      goto LABEL_10;
    }
    goto LABEL_23;
  }
  if ( ((1LL << v6) & 0x40) != 0 )
  {
    v22 = "operator";
    if ( (_DWORD)v4 == 6 )
    {
      switch ( *(_DWORD *)v5 )
      {
        case 0:
        case 0x2C:
        case 0x2E:
          v22 = "operator";
          break;
        case 1:
          v22 = "operator new";
          break;
        case 2:
          v22 = "operator delete";
          break;
        case 3:
          v22 = "operator new[]";
          break;
        case 4:
          v22 = "operator delete[]";
          break;
        case 5:
          v22 = "operator+";
          break;
        case 6:
          v22 = "operator-";
          break;
        case 7:
          v22 = "operator*";
          break;
        case 8:
          v22 = "operator/";
          break;
        case 9:
          v22 = "operator%";
          break;
        case 0xA:
          v22 = "operator^";
          break;
        case 0xB:
          v22 = "operator&";
          break;
        case 0xC:
          v22 = "operator|";
          break;
        case 0xD:
          v22 = "operator~";
          break;
        case 0xE:
          v22 = "operator!";
          break;
        case 0xF:
          v22 = "operator=";
          break;
        case 0x10:
          v22 = "operator<";
          break;
        case 0x11:
          v22 = "operator>";
          break;
        case 0x12:
          v22 = "operator+=";
          break;
        case 0x13:
          v22 = "operator-=";
          break;
        case 0x14:
          v22 = "operator*=";
          break;
        case 0x15:
          v22 = "operator/=";
          break;
        case 0x16:
          v22 = "operator%=";
          break;
        case 0x17:
          v22 = "operator^=";
          break;
        case 0x18:
          v22 = "operator&=";
          break;
        case 0x19:
          v22 = "operator|=";
          break;
        case 0x1A:
          v22 = "operator<<";
          break;
        case 0x1B:
          v22 = "operator>>";
          break;
        case 0x1C:
          v22 = "operator<<=";
          break;
        case 0x1D:
          v22 = "operator>>=";
          break;
        case 0x1E:
          v22 = "operator==";
          break;
        case 0x1F:
          v22 = "operator!=";
          break;
        case 0x20:
          v22 = "operator<=";
          break;
        case 0x21:
          v22 = "operator>=";
          break;
        case 0x22:
          v22 = "operator<=>";
          break;
        case 0x23:
          v22 = "operator&&";
          break;
        case 0x24:
          v22 = "operator||";
          break;
        case 0x25:
          v22 = "operator++";
          break;
        case 0x26:
          v22 = "operator--";
          break;
        case 0x27:
          v22 = "operator,";
          break;
        case 0x28:
          v22 = "operator->*";
          break;
        case 0x29:
          v22 = "operator->";
          break;
        case 0x2A:
          v22 = "operator()";
          break;
        case 0x2B:
          v22 = "operator[]";
          break;
        case 0x2D:
          v22 = "operatorco_await";
          break;
        default:
          v22 = nullptr;
          break;
      }
    }
    sub_15A2F70((__int64)a4, (__int64)v22);
  }
}
