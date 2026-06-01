__int64 __fastcall sub_372C80(__int64 a1, __int64 a2)
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
  char v12[32]; // [rsp+0h] [rbp-468h] BYREF
  char s[1024]; // [rsp+20h] [rbp-448h] BYREF
  _BYTE v14[8]; // [rsp+420h] [rbp-48h] BYREF
  unsigned __int64 v15; // [rsp+428h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  s[0] = 0;
  if ( sub_6141A0(qword_2CA1698, 80, v12, 32) != 32 )
    goto LABEL_2;
  v5 = v12;
  v6 = s;
  do
  {
    v7 = (unsigned __int8)*v5++;
    v6 += (int)qsnprintf((int)v6, v14 - v6, (int)"%02X", v7, v2, v3, v12[0]);
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

