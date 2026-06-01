__int64 __fastcall sub_40FCA0(__int64 a1, __int64 a2, unsigned int a3, char a4, double a5)
{
  char v6; // bp
  __int64 v7; // rbx
  char v8; // al
  __int64 v9; // rdx
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  __int64 result; // rax
  bool v14; // zf
  unsigned int v15; // ebp
  void (__fastcall ***v16)(void *); // r12
  void *v17; // rdi

  v6 = 4 * (a4 & 1);
  v7 = sub_186B270(0x70u);
  sub_400BE0(v7, *(_QWORD *)(a1 + 8), a2, a3);
  v8 = *(_BYTE *)(v7 + 108);
  ++*(_DWORD *)v7;
  *(_BYTE *)(v7 + 108) = v6 | v8 & 0xFB;
  LODWORD(result) = sub_40F760((_QWORD **)(a1 + 176), v7, v9, v10, v11, v12, a5);
  v14 = (*(_DWORD *)v7)-- == 1;
  v15 = result;
  if ( !v14 )
    return (unsigned int)result;
  v16 = *(void (__fastcall ****)(void *))(v7 + 88);
  if ( v16 )
  {
    v14 = (*((_DWORD *)v16 + 4))-- == 1;
    if ( v14 )
    {
      (**v16)(v16);
      sub_186B220(v16);
    }
  }
  v17 = *(void **)(v7 + 80);
  if ( v17 )
    sub_41CD50(v17);
  sub_2B4F40((__int64 *)(v7 + 64));
  sub_2B4F40((__int64 *)(v7 + 48));
  sub_2334C0((__int64 *)(v7 + 32));
  sub_3FCDF0(*(_QWORD *)(v7 + 16), *(_QWORD *)(v7 + 24));
  sub_186B220((void *)v7);
  return v15;
}

