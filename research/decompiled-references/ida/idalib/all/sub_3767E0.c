__int64 __fastcall sub_3767E0(__int64 a1, __int64 a2)
{
  int v2; // r8d
  int v3; // r9d
  char *v5; // rbx
  char *v6; // rbp
  int v7; // ecx
  size_t v8; // rax
  size_t v9; // rbx
  size_t v10; // rbp
  void *v11; // rax
  _BYTE v12[16]; // [rsp+0h] [rbp-458h] BYREF
  char s[1024]; // [rsp+10h] [rbp-448h] BYREF
  _BYTE v14[8]; // [rsp+410h] [rbp-48h] BYREF
  unsigned __int64 v15; // [rsp+418h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  s[0] = 0;
  if ( sub_630CA0(qword_2CCB598, 76, v12, 16) != 16 )
    goto LABEL_2;
  v5 = v12;
  v6 = s;
  do
  {
    v7 = (unsigned __int8)*v5++;
    v6 += (int)qsnprintf((_DWORD)v6, v14 - v6, (unsigned int)"%02X", v7, v2, v3);
  }
  while ( v5 != s );
  if ( v6 - s > 0 )
  {
    v8 = strlen(s);
    *(_BYTE *)a2 = 7;
    *(_QWORD *)(a2 + 8) = 0;
    v9 = v8;
    *(_OWORD *)(a2 + 16) = 0;
    if ( v8 )
    {
      v10 = v8 + 1;
      v11 = (void *)qvector_reserve(a2 + 8, 0, v8 + 1, 1);
      *(_QWORD *)(a2 + 8) = v11;
      *(_QWORD *)(a2 + 16) = v10;
      memmove(v11, s, v9);
      *(_BYTE *)(*(_QWORD *)(a2 + 8) + v9) = 0;
    }
  }
  else
  {
LABEL_2:
    *(_BYTE *)a2 = 7;
    *(_QWORD *)(a2 + 8) = 0;
    *(_OWORD *)(a2 + 16) = 0;
  }
  return 0;
}
