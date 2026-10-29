__int64 __fastcall sub_1C81D0(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  unsigned int v5; // ebp
  __int64 v7; // rcx
  __int64 v8; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v9[9]; // [rsp+10h] [rbp-48h] BYREF

  v8 = a3;
  v9[3] = __readfsqword(0x28u);
  v9[0] = 0;
  v9[1] = 0;
  if ( (unsigned __int8)sub_1C5030((char *)a2, (__int64)v9)
    && (unsigned __int8)sub_1C50C0((__int64)v9, a1, &v8, a4, *(int *)(a2 + 4))
    && (v5 = sub_126F10(a2, *(_QWORD *)(a1 + 112), v8, v7), (_BYTE)v5) )
  {
    *(_DWORD *)(a2 + 4) = a4;
  }
  else
  {
    v5 = 0;
  }
  cleanup_argloc();
  return v5;
}
