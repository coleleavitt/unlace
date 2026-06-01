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
  __int64 v13; // rbp
  int v14; // eax
  unsigned int v15; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v16; // [rsp+8h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  result = 0;
  if ( a2 )
  {
    v6 = a1;
    v7 = *(__int64 **)(qword_2CCB598 + 1672);
    if ( !a1 )
      v6 = v7[1];
    v15 = 0;
    v8 = a3 & 0xFFFB;
    if ( (a3 & 1) == 0 && (unsigned __int8)sub_658BB0((__int64)v7, v6, a2, nullptr, a4, a5) )
    {
      *(_DWORD *)(v6 + 32) |= 0x40u;
      v9 = *v7;
      v10 = *(_QWORD *)(v9 + 1672);
      if ( *(_DWORD *)(v10 + 2608) == -1 )
        *(_DWORD *)(v10 + 2608) = 1;
      else
        ++*(_DWORD *)(v10 + 2608);
      v11 = 0;
      mark_builtin_widgets(1024, 0, 1);
      sub_6B8D40(v10);
      goto LABEL_9;
    }
    result = sub_6514C0(v7, v6, a2, v8, &v15);
    if ( (_BYTE)result )
    {
      *(_DWORD *)(v6 + 32) |= 0x40u;
      v9 = *v7;
      v11 = v15;
      v13 = *(_QWORD *)(v9 + 1672);
      v14 = *(_DWORD *)(v13 + 2608) + 1;
      if ( *(_DWORD *)(v13 + 2608) == -1 )
        v14 = 1;
      *(_DWORD *)(v13 + 2608) = v14;
      mark_builtin_widgets(1024, 0, 1);
      sub_6B8D40(v13);
      if ( v11 == -1 )
      {
        v12 = 0;
        v11 = 0;
        goto LABEL_10;
      }
LABEL_9:
      v12 = v11;
LABEL_10:
      sub_39ADA0(0x48u, 2, v11, a2);
      sub_52CCE0(0, 0, v12);
      sub_61A670(*(_QWORD *)(v9 + 1672), v11, a2, 1);
      return 1;
    }
  }
  return result;
}
