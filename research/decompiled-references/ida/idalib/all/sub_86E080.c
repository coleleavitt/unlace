_QWORD *__fastcall sub_86E080(unsigned int *a1, int a2, int a3, __int64 a4, int a5, __int64 a6)
{
  __int64 v10; // r8
  __int64 v12; // rax
  __int64 v13; // rax

  if ( *a1 )
    return nullptr;
  v10 = a6;
  if ( a3 == 127 && a5 != 127 )
  {
    v12 = (unsigned int)(a2 - 2);
    if ( (unsigned int)v12 <= 7 )
      a2 = dword_23C2E80[v12];
    v13 = a4;
    a3 = a5;
    a4 = a6;
    a5 = 127;
    v10 = v13;
  }
  a1[36] = a2 & 0x100;
  if ( (unsigned int)sub_868840(a1, a3, a4, a5, v10) )
    return nullptr;
  else
    return sub_868C70((__int64)a1, a2);
}
