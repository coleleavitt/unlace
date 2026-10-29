unsigned __int64 __fastcall sub_CF670(__int64 a1)
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

  v1 = *(_DWORD *)(a1 + 16);
  v14 = __readfsqword(0x28u);
  if ( v1 )
  {
    v3 = qword_252590;
    v4 = qword_252590 + ((_QWORD)xmmword_252598 << 8);
    if ( qword_252590 != v4 )
    {
      while ( v1 != *(_DWORD *)v3 )
      {
        v3 += 256;
        if ( v4 == v3 )
          goto LABEL_10;
      }
      if ( v3 )
      {
        v5 = *(_QWORD *)(v3 + 200);
        v6 = *(_DWORD *)(v3 + 216);
        v7 = *(_QWORD *)(v3 + 192);
        if ( *(_QWORD *)(v3 + 208) < (unsigned __int64)(v5 + 1) )
        {
          v13 = qvector_reserve();
          *(_QWORD *)(v3 + 192) = v13;
          v7 = v13;
          v5 = *(_QWORD *)(v3 + 200);
        }
        *(_DWORD *)(v7 + 4 * v5) = v6;
        ++*(_QWORD *)(v3 + 200);
      }
    }
  }
LABEL_10:
  copy_debug_event();
  v8 = xmmword_252778;
  v9 = qword_252770;
  if ( *((_QWORD *)&xmmword_252778 + 1) < (unsigned __int64)(xmmword_252778 + 1) )
  {
    qword_252770 = qvector_reserve();
    v8 = xmmword_252778;
    v9 = qword_252770;
  }
  v10 = (_QWORD *)(v9 + 72 * v8);
  *v10 = 0xFFFFFFFFLL;
  v10[1] = -1;
  v10[2] = 0;
  copy_debug_event();
  *(_QWORD *)&xmmword_252778 = xmmword_252778 + 1;
  free_debug_event();
  v11 = qword_252758;
  *((_QWORD *)qword_252758 + 7) = a1;
  if ( (int)sub_CDCF0((__int64)v11, 21) < 0 )
    *(_QWORD *)(a1 + 8) = -1;
  return v14 - __readfsqword(0x28u);
}

