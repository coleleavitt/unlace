__int64 __fastcall sub_237310(__int64 a1, int a2, __int64 a3, __int64 a4, int a5, int a6)
{
  unsigned int v6; // ebx
  _UNKNOWN **v8; // [rsp+0h] [rbp-38h] BYREF
  __int64 v9; // [rsp+10h] [rbp-28h]
  __int64 v10; // [rsp+18h] [rbp-20h]
  int v11; // [rsp+20h] [rbp-18h]
  unsigned __int64 v12; // [rsp+28h] [rbp-10h]

  v12 = __readfsqword(0x28u);
  v10 = a1;
  v11 = a2;
  v9 = 0;
  v6 = callui(86, (unsigned int)&v8, 2, (unsigned int)&callui, a5, a6, handle_debug_event, 0);
  v8 = &off_86FF78;
  qsem_free(v9);
  return v6;
}
