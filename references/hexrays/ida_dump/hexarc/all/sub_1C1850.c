__int64 __fastcall sub_1C1850(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  unsigned int v5; // ebp
  __int64 v7; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v8[9]; // [rsp+10h] [rbp-48h] BYREF

  v7 = a3;
  v8[3] = __readfsqword(0x28u);
  v8[0] = 0;
  v8[1] = 0;
  if ( (unsigned __int8)sub_1BE7B0((char *)a2, (__int64)v8)
    && (unsigned __int8)sub_1BE840((__int64)v8, a1, &v7, a4, *(int *)(a2 + 4))
    && (v5 = sub_120850(a2, *(_QWORD *)(a1 + 112), v7), (_BYTE)v5) )
  {
    *(_DWORD *)(a2 + 4) = a4;
  }
  else
  {
    v5 = 0;
  }
  cleanup_argloc(v8);
  return v5;
}
