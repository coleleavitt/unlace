__int64 __fastcall sub_36B530(__int64 a1, __int64 a2)
{
  int v2; // edi
  int v3; // ebp
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v6; // [rsp+8h] [rbp-40h]
  int v7; // [rsp+1Ch] [rbp-2Ch]
  unsigned __int64 v8; // [rsp+28h] [rbp-20h]

  v2 = *(_DWORD *)(a1 + 8);
  v8 = __readfsqword(0x28u);
  ptr = nullptr;
  v6 = 0;
  v3 = -1;
  if ( sub_36B4D0(v2, (__int64)&ptr) )
    v3 = v7;
  if ( ptr )
  {
    *(_QWORD *)&v6 = 0;
    qfree(ptr);
  }
  *(_DWORD *)(a2 + 8) = v3;
  return 0;
}

