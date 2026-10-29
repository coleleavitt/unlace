void __fastcall sub_E52560(__int64 *a1, __int64 *a2, __int64 a3, __m128 a4)
{
  char v6; // al
  __int64 v7; // rdi
  _BYTE *v8; // rax
  __int64 v9; // rdi
  _BYTE *v10; // rax
  char v11; // r12
  void *v12; // rcx
  __int64 v13; // rbp
  __int64 v14; // rsi
  unsigned __int64 v15; // rdx
  __int64 v16; // rsi
  void *v17; // [rsp+0h] [rbp-38h] BYREF
  int v18; // [rsp+8h] [rbp-30h]
  void *v19; // [rsp+10h] [rbp-28h] BYREF
  unsigned int v20; // [rsp+18h] [rbp-20h]
  char v21; // [rsp+1Ch] [rbp-1Ch]

  v6 = *(_BYTE *)(a3 + 28) & 0x7F;
  switch ( v6 )
  {
    case '+':
      sub_E38280(*a2);
      sub_E4BB60(*a1, a3);
      break;
    case '/':
      sub_E38280(*a2);
      sub_E38400((__int64 *)(*a1 + 8), (_DWORD *)(*a1 + 36), *(_DWORD *)(a3 + 68) & 0xFFFFF, *(_WORD *)(a3 + 70) >> 4);
      break;
    case '!':
      v11 = *(_BYTE *)(a3 + 80);
      v12 = *(void **)(a3 + 56);
      v13 = *a1;
      v14 = *(unsigned int *)(a3 + 64);
      v15 = (unsigned __int64)(v14 + 63) >> 6;
      if ( v15 > 1 )
      {
        sub_2205610(&v17, v14, v15, v12);
        LODWORD(v14) = v18;
        v12 = v17;
      }
      else
      {
        v18 = v14;
        if ( (unsigned int)v14 > 0x40 )
        {
          sub_2205470(&v17, v12, 0);
          LODWORD(v14) = v18;
          v12 = v17;
        }
      }
      v20 = v14;
      v16 = *(_QWORD *)(a3 + 48);
      v19 = v12;
      v21 = v11;
      sub_E47200(v13, v16, (__int64)&v19);
      if ( v20 > 0x40 && v19 )
        operator delete[](v19);
      break;
    default:
      v7 = *(_QWORD *)(*a1 + 8);
      v8 = *(_BYTE **)(v7 + 32);
      if ( (unsigned __int64)v8 >= *(_QWORD *)(v7 + 24) )
      {
        sub_227BA10(v7, 76);
      }
      else
      {
        *(_QWORD *)(v7 + 32) = v8 + 1;
        *v8 = 76;
      }
      sub_E52200(*a1, a3, 0, a4);
      v9 = *(_QWORD *)(*a1 + 8);
      v10 = *(_BYTE **)(v9 + 32);
      if ( (unsigned __int64)v10 >= *(_QWORD *)(v9 + 24) )
      {
        sub_227BA10(v9, 69);
      }
      else
      {
        *(_QWORD *)(v9 + 32) = v10 + 1;
        *v10 = 69;
      }
      break;
  }
}
