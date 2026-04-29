__int64 __fastcall sub_3FE8B0(__int64 a1, __int64 a2, char a3, double a4)
{
  __int64 v4; // r14
  int v8; // eax
  __int64 v9; // rsi
  char v10; // r15
  _DWORD *v11; // rdi
  __int64 v12; // rsi
  __int64 (__fastcall *v13)(__int64, int); // rax
  unsigned int v14; // eax
  int tinfo_size; // eax
  unsigned int v16; // ebx
  unsigned int v18; // [rsp+Ch] [rbp-5Ch]
  int v19; // [rsp+Ch] [rbp-5Ch]
  __int64 v20; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v21[9]; // [rsp+20h] [rbp-48h] BYREF

  v4 = a1 + 64;
  v21[1] = __readfsqword(0x28u);
  v8 = sub_3EE210(a1, a1 + 64, a4);
  v9 = *(_QWORD *)(a1 + 832);
  if ( v8 <= 3 )
  {
    v10 = 0;
    sub_32C760(&v20, v9, v8, 1);
  }
  else
  {
    v10 = 2;
    sub_32C480(&v20, v9, v8);
  }
  if ( a3 && (_BYTE)v20 )
    v20 |= 0x40uLL;
  sub_32C870(v21, *(_QWORD *)(a1 + 832), &v20);
  v11 = *(_DWORD **)(a1 + 832);
  v12 = *(unsigned __int16 *)(a1 + 110);
  v13 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)v11 + 168LL);
  v18 = v11[158];
  if ( v13 == sub_3EA010 )
    v14 = sub_3EA010((__int64)v11, v12);
  else
    v14 = v13((__int64)v11, v12);
  v19 = sub_3F6740(a1, v14, 7u, v18, 1, a4);
  tinfo_size = get_tinfo_size(0, v21[0], 0);
  sub_32F3F0(a2, v19, tinfo_size, (__int64)v21);
  clear_tinfo_t(v21);
  v16 = sub_3FE660(a1, a2 + 80, v4, v10, a4);
  clear_tinfo_t(&v20);
  return v16;
}
