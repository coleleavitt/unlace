__int64 __fastcall sub_F34A0(__int64 a1, __int64 a2)
{
  char v2; // al
  __int64 v3; // rdi
  __int64 v4; // rax
  int v5; // ebx
  __int64 result; // rax
  __int64 v7; // r12
  _QWORD v8[7]; // [rsp+0h] [rbp-38h] BYREF

  v2 = *(_BYTE *)(a2 + 32);
  v8[3] = __readfsqword(0x28u);
  if ( v2 != 5 )
  {
    if ( *(_BYTE *)(a1 + 320) )
    {
      v3 = a1 + 432;
      if ( v2 != 1 )
      {
        if ( !under_debugger )
          sub_37CFE0(51892);
        BUG();
      }
      v4 = *(_QWORD *)(a2 + 24);
      v8[0] = 3;
      v8[1] = (unsigned int)v4;
      v5 = sub_1EB300(v3, v8, 1, 0);
      cleanup_argloc(v8);
      return v5 == -1;
    }
    return 0;
  }
  v7 = *(_QWORD *)(a2 + 24);
  if ( (unsigned __int8)sub_1EA5F0(a1, v7, 1) || v7 + 1 > *(_QWORD *)(a1 + 144) - *(int *)(a1 + 120) )
    return 0;
  result = 1;
  if ( v7 + *(int *)(a2 + 40) > *(_QWORD *)(a1 + 136) )
    return 2;
  return result;
}
