__int64 __fastcall sub_2FCC0(__int64 a1, __int64 *a2, const char *a3, int a4)
{
  __int64 v5; // rdi
  char v6; // bp
  unsigned int v7; // ebx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  int v12; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v13; // [rsp+8h] [rbp-30h]

  v5 = *(_QWORD *)(a1 + 32);
  v13 = __readfsqword(0x28u);
  v6 = a4;
  v7 = sub_2FB70(v5, &v12, a3, a4);
  if ( !v7 )
  {
    v9 = operator new(0x18u);
    v10 = *(_QWORD *)(a1 + 32);
    *a2 = v9;
    *(_QWORD *)(v9 + 8) = v10;
    LODWORD(v10) = v12;
    *(_QWORD *)v9 = &off_1612B0;
    *(_DWORD *)(v9 + 16) = v10;
    v11 = *(_QWORD *)(a1 + 32);
    *(_DWORD *)(v11 + 252) = v6 & 3;
    *(_DWORD *)(v11 + 248) = 0;
  }
  return v7;
}

