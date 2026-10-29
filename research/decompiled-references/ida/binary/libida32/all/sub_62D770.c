__int64 __fastcall sub_62D770(__int64 a1, int a2)
{
  unsigned int v2; // r14d
  __int64 v3; // rbx
  __int64 v4; // r13
  unsigned int v5; // r12d
  unsigned __int64 v6; // rax

  v2 = 1;
  v3 = *(unsigned int *)(a1 + 48);
  v4 = *(_QWORD *)(a1 + 40);
  if ( (_DWORD)v3 )
    v2 = *(_DWORD *)(a1 + 48);
  v5 = a2 + v2;
  v6 = (a2 + v2 + 63) & 0xFFFFFFC0;
  if ( (((_DWORD)v3 + 63) & 0xFFFFFFC0) != (_DWORD)v6 && (4 * v6 < v6 || (v4 = qrealloc(*(_QWORD *)(a1 + 40))) == 0) )
    sub_3B74D0((int)"type ordinals");
  if ( (unsigned int)v3 < v5 )
    memset((void *)(v4 + 4 * v3), 255, 4LL * (v5 - (unsigned int)v3 - 1) + 4);
  *(_QWORD *)(a1 + 40) = v4;
  *(_DWORD *)(a1 + 48) = v5;
  return v2;
}

