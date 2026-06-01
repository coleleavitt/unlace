__int64 __fastcall sub_659990(__int64 *a1, __int64 a2, const char *a3, __int16 a4, double a5, double a6)
{
  __int64 result; // rax
  __int64 v7; // rbp
  __int16 v9; // r13
  __int64 v10; // r12
  __int64 v11; // rbp
  unsigned int v12; // r13d
  __int64 v13; // rbp
  __int64 v14; // rbp
  int v15; // eax
  unsigned int v16; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v17; // [rsp+8h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  result = 0;
  if ( a3 )
  {
    v7 = a2;
    if ( !a2 )
      v7 = a1[1];
    v16 = 0;
    v9 = a4 & 0xFFFB;
    if ( (a4 & 1) == 0 && (unsigned __int8)sub_658BB0((__int64)a1, v7, a3, nullptr, a5, a6) )
    {
      *(_DWORD *)(v7 + 32) |= 0x40u;
      v10 = *a1;
      v11 = *(_QWORD *)(*a1 + 1672);
      if ( *(_DWORD *)(v11 + 2608) == -1 )
        *(_DWORD *)(v11 + 2608) = 1;
      else
        ++*(_DWORD *)(v11 + 2608);
      v12 = 0;
      mark_builtin_widgets(1024, 0, 1);
      sub_6B8D40(v11);
      goto LABEL_9;
    }
    result = sub_6514C0(a1, v7, a3, v9, &v16);
    if ( (_BYTE)result )
    {
      *(_DWORD *)(v7 + 32) |= 0x40u;
      v10 = *a1;
      v12 = v16;
      v14 = *(_QWORD *)(*a1 + 1672);
      v15 = *(_DWORD *)(v14 + 2608) + 1;
      if ( *(_DWORD *)(v14 + 2608) == -1 )
        v15 = 1;
      *(_DWORD *)(v14 + 2608) = v15;
      mark_builtin_widgets(1024, 0, 1);
      sub_6B8D40(v14);
      if ( v12 == -1 )
      {
        v13 = 0;
        v12 = 0;
        goto LABEL_10;
      }
LABEL_9:
      v13 = v12;
LABEL_10:
      sub_39ADA0(0x48u, 2, v12, a3);
      sub_52CCE0(0, 0, v13);
      sub_61A670(*(_QWORD *)(v10 + 1672), v12, a3, 1);
      return 1;
    }
  }
  return result;
}
