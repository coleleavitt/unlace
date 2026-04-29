__int64 __fastcall sub_35510(__int64 a1)
{
  __int64 v2; // rdi
  char v3; // dl
  __int64 result; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 *v7; // rax
  const char *v8; // rbp
  __int64 *v9; // rax
  __int64 *v10; // rax
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  const char *v14; // rsi
  _QWORD v15[5]; // [rsp+0h] [rbp-28h] BYREF

  v15[1] = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 88);
  v3 = *(_BYTE *)(v2 + 142);
  result = *(unsigned __int8 *)(a1 + 142);
  if ( v3 != (_BYTE)result )
  {
    result = 0;
    if ( v3 )
    {
      if ( v3 != 5 )
      {
        if ( (unsigned __int8)sub_350A0(v2, a1 + 8) )
        {
          sub_345A0(a1, *(_DWORD *)(*(_QWORD *)(a1 + 88) + 136LL));
          v15[0] = 0x66F4B9ED2B2D4ED6LL;
          v5 = sub_85700(v15, a1 + 16);
          v6 = sub_85680(v5, *(unsigned int *)(a1 + 136));
          v7 = (__int64 *)sub_856E0(v6, *(_QWORD *)(a1 + 88) + 72LL);
          sub_349E0(a1, v7);
          return *(unsigned __int8 *)(*(_QWORD *)(a1 + 88) + 142LL);
        }
        if ( (debug & 0x400000) != 0 )
        {
          v8 = src;
          v9 = sub_34340(*(_QWORD *)(a1 + 88));
          if ( v9[1] )
            v8 = (const char *)*v9;
          v10 = sub_34340(a1);
          v14 = src;
          if ( v10[1] )
            v14 = (const char *)*v10;
          sub_88B80(
            (unsigned int)"Error parameter DIE %s propagating DIE %s type information\n",
            (_DWORD)v14,
            (_DWORD)v8,
            v11,
            v12,
            v13);
        }
      }
      return 5;
    }
  }
  return result;
}
