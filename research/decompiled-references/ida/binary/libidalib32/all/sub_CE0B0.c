unsigned __int64 __fastcall sub_CE0B0(__int64 a1)
{
  int v1; // edx
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rax
  int v6; // r12d
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rsi
  _QWORD *v10; // rdi
  void *v11; // rdi
  __int64 v13; // rax
  unsigned __int64 v14; // [rsp+48h] [rbp-20h]

  v1 = *(_DWORD *)(a1 + 12);
  v14 = __readfsqword(0x28u);
  if ( v1 )
  {
    v3 = qword_251410;
    v4 = qword_251410 + 232 * xmmword_251418;
    if ( qword_251410 != v4 )
    {
      while ( v1 != *(_DWORD *)v3 )
      {
        v3 += 232;
        if ( v4 == v3 )
          goto LABEL_10;
      }
      if ( v3 )
      {
        v5 = *(_QWORD *)(v3 + 184);
        v6 = *(_DWORD *)(v3 + 200);
        v7 = *(_QWORD *)(v3 + 176);
        if ( *(_QWORD *)(v3 + 192) < (unsigned __int64)(v5 + 1) )
        {
          v13 = qvector_reserve();
          *(_QWORD *)(v3 + 176) = v13;
          v7 = v13;
          v5 = *(_QWORD *)(v3 + 184);
        }
        *(_DWORD *)(v7 + 4 * v5) = v6;
        ++*(_QWORD *)(v3 + 184);
      }
    }
  }
LABEL_10:
  copy_debug_event();
  v8 = xmmword_2515D8;
  v9 = qword_2515D0;
  if ( *((_QWORD *)&xmmword_2515D8 + 1) < (unsigned __int64)(xmmword_2515D8 + 1) )
  {
    qword_2515D0 = qvector_reserve();
    v8 = xmmword_2515D8;
    v9 = qword_2515D0;
  }
  v10 = (_QWORD *)(v9 + 60 * v8);
  *v10 = 0xFFFFFFFFLL;
  v10[1] = 0xFFFFFFFFLL;
  v10[2] = 0;
  copy_debug_event();
  *(_QWORD *)&xmmword_2515D8 = xmmword_2515D8 + 1;
  free_debug_event();
  v11 = qword_2515B0;
  *((_QWORD *)qword_2515B0 + 6) = a1;
  if ( (int)sub_CC780((__int64)v11, 21) < 0 )
    *(_DWORD *)(a1 + 8) = -1;
  return v14 - __readfsqword(0x28u);
}

