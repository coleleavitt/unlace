void __fastcall sub_F498F0(_QWORD *a1, __int64 a2, int a3, _QWORD *a4, unsigned int a5)
{
  __int64 v7; // rbp
  _QWORD *v8; // rbx
  __int64 v9; // rsi
  _QWORD *v10; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r9
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rax
  unsigned int v19; // [rsp+8h] [rbp-78h]
  __int64 v20; // [rsp+18h] [rbp-68h] BYREF
  __int64 v21; // [rsp+20h] [rbp-60h] BYREF
  void *ptr[2]; // [rsp+28h] [rbp-58h] BYREF
  __int64 v23; // [rsp+38h] [rbp-48h]

  if ( a3 )
  {
    v7 = (__int64)&a4[(unsigned int)(a3 - 1) + 1];
    v8 = a4;
    while ( 1 )
    {
      switch ( *(_DWORD *)a2 & 0x7FFFFFFF )
      {
        case 1:
          *v8 = (unsigned __int64)sub_A5DBD0(a1, *(_QWORD *)(a2 + 8), a5) & 0xFFFFFFFFFFFFFFFCLL | 2;
          goto LABEL_5;
        case 2:
        case 3:
        case 4:
        case 5:
        case 9:
          *v8 = 0;
          goto LABEL_5;
        case 6:
        case 7:
          v9 = *(_QWORD *)(a2 + 8);
          v23 = 0;
          *(_OWORD *)ptr = 0;
          sub_EFED50(&v21, v9);
          v20 = v21;
          v10 = (_QWORD *)sub_EFF230(&v20);
          if ( v10 )
          {
            v11 = ((unsigned __int64)a5 << 32) | a5;
            v12 = *v10 & 0xFFFFFFFFFFFFFFF8LL;
          }
          else
          {
            v18 = sub_EFF210(&v20);
            if ( !v18 )
              goto LABEL_12;
            v11 = ((unsigned __int64)a5 << 32) | a5;
            v12 = *(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          }
          sub_E6CB50((__int64)ptr, a1, v12, v11);
LABEL_12:
          v15 = 0;
          if ( (*(_DWORD *)a2 & 0x7FFFFFFF) != 6 )
            v15 = a5;
          v19 = v15;
          v16 = sub_E6D460((__int64 *)ptr, a1, v13, v14, (__int64)ptr, v15);
          sub_EFAF60((unsigned __int64 *)&v21, a1, v16, v17, a5, v19);
          *v8 = v21;
          if ( HIDWORD(v23) )
            free(ptr[1]);
LABEL_5:
          ++v8;
          a2 += 24;
          if ( v8 == (_QWORD *)v7 )
            return;
          break;
        case 8:
          *v8 = *(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFFCLL | 1;
          goto LABEL_5;
        default:
          goto LABEL_5;
      }
    }
  }
}

