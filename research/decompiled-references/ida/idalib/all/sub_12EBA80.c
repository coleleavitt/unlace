void __fastcall sub_12EBA80(__int64 a1, void ***a2, __int64 a3, char a4)
{
  __int64 v7; // rdx
  volatile signed __int32 *v8; // rdi
  bool v9; // zf
  unsigned int v10; // r14d
  unsigned __int8 v11; // cl
  size_t v12; // rdx
  void *v13; // rsi
  int v14; // eax
  _BYTE *v15; // rdi
  __int64 v16; // rdx
  void *ptr; // [rsp+10h] [rbp-C8h] BYREF
  __m128i si128; // [rsp+18h] [rbp-C0h]
  _BYTE v19[176]; // [rsp+28h] [rbp-B0h] BYREF

  *(_BYTE *)(a1 + 16) = a4;
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  v7 = operator new(0x70u);
  *(_QWORD *)(v7 + 8) = 0x100000001LL;
  *(_QWORD *)v7 = off_2C362F8;
  memset((void *)(v7 + 16), 0, 0x60u);
  v8 = *(volatile signed __int32 **)(a1 + 8);
  *(_BYTE *)(v7 + 60) = 1;
  *(_QWORD *)(v7 + 24) = v7 + 40;
  *(_QWORD *)(v7 + 104) = 0xFFFF00000000LL;
  *(_DWORD *)(v7 + 56) = 9;
  *(_QWORD *)a1 = v7 + 16;
  *(_QWORD *)(a1 + 8) = v7;
  if ( v8 )
    sub_4343A0(v8);
  v9 = *((_BYTE *)a2 + 33) == 1;
  v10 = *(unsigned __int8 *)(a1 + 16);
  ptr = v19;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  if ( v9 && (v11 = *((_BYTE *)a2 + 32), v11 <= 6u) && ((1LL << v11) & 0x7A) != 0 )
  {
    switch ( *((_BYTE *)a2 + 32) )
    {
      case 0:
      case 2:
      case 5:
      case 6:
        v12 = (size_t)a2[1];
        v13 = *a2;
        break;
      case 1:
        v12 = 0;
        v13 = nullptr;
        break;
      case 3:
        v13 = *a2;
        v12 = 0;
        if ( *a2 )
        {
          v13 = *a2;
          v12 = j__strlen((const char *)*a2);
        }
        break;
      case 4:
        v13 = **a2;
        v12 = (size_t)(*a2)[1];
        break;
      default:
        goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    sub_22538C0(a2, &ptr);
    v12 = si128.m128i_i64[0];
    v13 = ptr;
  }
  v14 = sub_228CAB0(*(_QWORD *)a1, v13, v12, v10);
  v15 = ptr;
  *(_DWORD *)a3 = v14;
  *(_QWORD *)(a3 + 8) = v16;
  if ( v15 != v19 )
    free(v15);
}
