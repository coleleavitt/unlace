__int64 __fastcall enable_debugger_menu(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdi
  int v5; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v6; // [rsp+8h] [rbp-10h]

  v2 = 0;
  v3 = *(_QWORD *)(a2 + 72);
  v6 = __readfsqword(0x28u);
  v5 = 0;
  if ( (unsigned int)qsscanf(v3, "cpuregs:%d", &v5) == 1 )
  {
    v2 = 1;
    sub_1E3DE0(v5);
  }
  return v2;
}
