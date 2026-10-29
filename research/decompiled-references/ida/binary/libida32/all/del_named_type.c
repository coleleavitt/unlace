__int64 __fastcall del_named_type(__int64 a1, const char *a2, __int16 a3, double a4, double a5)
{
  __int64 result; // rax
  __int64 v6; // rbp
  __int64 *v7; // r12
  __int16 v8; // r13
  __int64 v9; // r12
  __int64 v10; // rbp
  unsigned int v11; // r13d
  __int64 v12; // rbp
  int v13; // eax
  unsigned int v14; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v15; // [rsp+8h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  result = 0;
  if ( a2 )
  {
    v6 = a1;
    v7 = *(__int64 **)(qword_2CA1698 + 1480);
    if ( !a1 )
      v6 = v7[1];
    v14 = 0;
    v8 = a3 & 0xFFFB;
    if ( (a3 & 1) == 0 && (unsigned __int8)sub_63B3D0((__int64)v7, v6, a2, nullptr, a4, a5) )
    {
      *(_DWORD *)(v6 + 32) |= 0x40u;
      v9 = *v7;
      v10 = *(_QWORD *)(v9 + 1480);
      if ( *(_DWORD *)(v10 + 2484) == -1 )
        *(_DWORD *)(v10 + 2484) = 1;
      else
        ++*(_DWORD *)(v10 + 2484);
      v11 = 0;
      mark_builtin_widgets(1024, 0, 1);
      sub_698450(v10);
LABEL_9:
      sub_396090(0x48u, 2, v11, a2);
      sub_514A50(0, 0, v11);
      sub_5FE6F0(*(_QWORD *)(v9 + 1480), v11, a2, 1);
      return 1;
    }
    result = sub_633EC0(v7, v6, a2, v8, &v14);
    if ( (_BYTE)result )
    {
      *(_DWORD *)(v6 + 32) |= 0x40u;
      v9 = *v7;
      v11 = v14;
      v12 = *(_QWORD *)(v9 + 1480);
      v13 = *(_DWORD *)(v12 + 2484) + 1;
      if ( *(_DWORD *)(v12 + 2484) == -1 )
        v13 = 1;
      *(_DWORD *)(v12 + 2484) = v13;
      mark_builtin_widgets(1024, 0, 1);
      sub_698450(v12);
      if ( v11 == -1 )
        v11 = 0;
      goto LABEL_9;
    }
  }
  return result;
}

