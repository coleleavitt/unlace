__int64 __fastcall sub_21FFCB0(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *v5; // rax
  __int64 v6; // rbp
  _QWORD *v7; // rbx
  unsigned int v8; // edx
  _QWORD *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rax
  _QWORD *v12; // rdx
  char v13; // al
  __int64 *v14; // rbx
  __int64 result; // rax

  *a1 = a2;
  v5 = (_QWORD *)operator new[](0x38u);
  *v5 = 2;
  v6 = (__int64)(v5 + 1);
  v7 = v5;
  sub_21F9140(v5 + 1, (__int64)dword_26F7D20);
  *((_BYTE *)v7 + 28) = *((_BYTE *)v7 + 28) & 0xF0 | 2;
  v8 = *(_DWORD *)(v7[1] + 8LL) + 64;
  if ( v8 > 0x7F )
  {
    v10 = v8 >> 6;
    v9 = (_QWORD *)v7[2];
  }
  else
  {
    v9 = v7 + 2;
    v10 = 1;
  }
  sub_22096E0(v9, 0, v10);
  v11 = v7[1];
  *((_DWORD *)v7 + 6) = 52;
  v12 = v7 + 2;
  if ( (unsigned int)(*(_DWORD *)(v11 + 8) + 64) > 0x7F )
    v12 = (_QWORD *)v7[2];
  *v12 = a3;
  v13 = *((_BYTE *)v7 + 28);
  if ( (v13 & 6) != 0 && (v13 & 7) != 3 )
    sub_21FAC20(v6, 1, 0);
  v14 = v7 + 4;
  sub_21F9140(v14, (__int64)dword_26F7D20);
  result = sub_21FB9A0(v14, 0);
  a1[1] = v6;
  return result;
}
