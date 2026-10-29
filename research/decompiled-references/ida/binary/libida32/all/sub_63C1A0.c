__int64 __fastcall sub_63C1A0(__int64 *a1, __int64 a2, const char *a3, __int16 a4, double a5, double a6)
{
  __int64 result; // rax
  __int64 v7; // rbp
  __int16 v9; // r13
  __int64 v10; // r12
  __int64 v11; // rbp
  unsigned int v12; // r13d
  __int64 v13; // rbp
  int v14; // eax
  unsigned int v15; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v16; // [rsp+8h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  result = 0;
  if ( a3 )
  {
    v7 = a2;
    if ( !a2 )
      v7 = a1[1];
    v15 = 0;
    v9 = a4 & 0xFFFB;
    if ( (a4 & 1) == 0 && (unsigned __int8)sub_63B3D0((__int64)a1, v7, a3, nullptr, a5, a6) )
    {
      *(_DWORD *)(v7 + 32) |= 0x40u;
      v10 = *a1;
      v11 = *(_QWORD *)(*a1 + 1480);
      if ( *(_DWORD *)(v11 + 2484) == -1 )
        *(_DWORD *)(v11 + 2484) = 1;
      else
        ++*(_DWORD *)(v11 + 2484);
      v12 = 0;
      mark_builtin_widgets(1024, 0, 1);
      sub_698450(v11);
LABEL_9:
      sub_396090(0x48u, 2, v12, a3);
      sub_514A50(0, 0, v12);
      sub_5FE6F0(*(_QWORD *)(v10 + 1480), v12, a3, 1);
      return 1;
    }
    result = sub_633EC0(a1, v7, a3, v9, &v15);
    if ( (_BYTE)result )
    {
      *(_DWORD *)(v7 + 32) |= 0x40u;
      v10 = *a1;
      v12 = v15;
      v13 = *(_QWORD *)(*a1 + 1480);
      v14 = *(_DWORD *)(v13 + 2484) + 1;
      if ( *(_DWORD *)(v13 + 2484) == -1 )
        v14 = 1;
      *(_DWORD *)(v13 + 2484) = v14;
      mark_builtin_widgets(1024, 0, 1);
      sub_698450(v13);
      if ( v12 == -1 )
        v12 = 0;
      goto LABEL_9;
    }
  }
  return result;
}

