__int64 __fastcall sub_3B390(__int64 *a1)
{
  unsigned int v1; // ebp
  __int64 *v3; // rax
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d
  const char *v8; // rsi

  v1 = sub_3B1B0((__int64)a1);
  if ( (_BYTE)v1 != 5 && !(unsigned __int8)sub_2C6A0(a1[10], a1[13], 0x38u, a1 + 21) && (debug & 0x400000) != 0 )
  {
    v3 = sub_34340((__int64)a1);
    v8 = src;
    if ( v3[1] )
      v8 = (const char *)*v3;
    sub_88B80((unsigned int)"warning: complex member DIE %s retrieving container offset\n", (_DWORD)v8, v4, v5, v6, v7);
  }
  return v1;
}
