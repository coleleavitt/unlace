void __fastcall sub_E2E820(__int64 *a1, __int64 *a2, __int64 a3, __m128 a4, __int64 a5, unsigned __int64 a6)
{
  char v8; // al
  __int64 v9; // rdi
  _BYTE *v10; // rax
  __int64 v11; // rdi
  _BYTE *v12; // rax
  char v13; // r12
  void *v14; // rcx
  __int64 v15; // rbp
  __int64 v16; // rsi
  unsigned __int64 v17; // rdx
  __int64 v18; // rsi
  void *v19; // [rsp+0h] [rbp-38h] BYREF
  int v20; // [rsp+8h] [rbp-30h]
  void *v21; // [rsp+10h] [rbp-28h] BYREF
  unsigned int v22; // [rsp+18h] [rbp-20h]
  char v23; // [rsp+1Ch] [rbp-1Ch]

  v8 = *(_BYTE *)(a3 + 28) & 0x7F;
  switch ( v8 )
  {
    case '+':
      sub_E14540(*a2);
      sub_E27E20(*a1, a3);
      break;
    case '/':
      sub_E14540(*a2);
      sub_E146C0((__int64 *)(*a1 + 8), (_DWORD *)(*a1 + 36), *(_DWORD *)(a3 + 68) & 0xFFFFF, *(_WORD *)(a3 + 70) >> 4);
      break;
    case '!':
      v13 = *(_BYTE *)(a3 + 80);
      v14 = *(void **)(a3 + 56);
      v15 = *a1;
      v16 = *(unsigned int *)(a3 + 64);
      v17 = (unsigned __int64)(v16 + 63) >> 6;
      if ( v17 > 1 )
      {
        sub_21E18D0(&v19, v16, v17, v14);
        LODWORD(v16) = v20;
        v14 = v19;
      }
      else
      {
        v20 = v16;
        if ( (unsigned int)v16 > 0x40 )
        {
          sub_21E1730(&v19, v14, 0);
          LODWORD(v16) = v20;
          v14 = v19;
        }
      }
      v22 = v16;
      v18 = *(_QWORD *)(a3 + 48);
      v21 = v14;
      v23 = v13;
      sub_E234C0(v15, v18, (__int64)&v21, (__int64)v14, a6);
      if ( v22 > 0x40 && v21 )
        operator delete[](v21);
      break;
    default:
      v9 = *(_QWORD *)(*a1 + 8);
      v10 = *(_BYTE **)(v9 + 32);
      if ( (unsigned __int64)v10 >= *(_QWORD *)(v9 + 24) )
      {
        sub_2257CD0(v9, 76);
      }
      else
      {
        *(_QWORD *)(v9 + 32) = v10 + 1;
        *v10 = 76;
      }
      sub_E2E4C0(*a1, a3, 0, a4);
      v11 = *(_QWORD *)(*a1 + 8);
      v12 = *(_BYTE **)(v11 + 32);
      if ( (unsigned __int64)v12 >= *(_QWORD *)(v11 + 24) )
      {
        sub_2257CD0(v11, 69);
      }
      else
      {
        *(_QWORD *)(v11 + 32) = v12 + 1;
        *v12 = 69;
      }
      break;
  }
}

