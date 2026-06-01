unsigned __int64 __fastcall sub_445840(__int64 a1)
{
  __int64 v1; // r13
  _QWORD *v2; // rax
  unsigned int v3; // r12d
  unsigned int v4; // eax
  unsigned int v5; // ebx
  int v7; // eax
  _DWORD v8[2]; // [rsp+8h] [rbp-60h] BYREF
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v10; // [rsp+18h] [rbp-50h]
  __int64 v11; // [rsp+28h] [rbp-40h]
  int v12; // [rsp+30h] [rbp-38h]
  unsigned __int64 v13; // [rsp+38h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  v1 = switch_dbctx(*(int *)(a1 + 360));
  v2 = *(_QWORD **)(v1 + 1480);
  ptr = nullptr;
  sub_6141A0(*v2, 26, &ptr, 8);
  if ( (unsigned int)(HIDWORD(ptr) - (_DWORD)ptr) < *(_DWORD *)(a1 + 456) )
  {
    v12 = -1;
    ptr = nullptr;
    v11 = 0;
    v10 = 0;
    rangeset_t_add2((int)&ptr);
    v3 = *(_DWORD *)(a1 + 456);
    while ( 1 )
    {
      v4 = sub_41A560((__int64)&ptr, v3);
      v5 = v4;
      if ( v4 == -1 )
        break;
      if ( (unsigned __int8)sub_440900(v1, (__int64)&ptr, v4, v3) )
      {
        v7 = *(_DWORD *)(a1 + 456);
        v8[0] = v5;
        v8[1] = v5 + v7;
        sub_443DF0(v1, v8);
      }
    }
    if ( ptr )
    {
      *(_QWORD *)&v10 = 0;
      qfree(ptr);
    }
  }
  return sub_445720(a1 + 344, 8u, 0, 0xFFFFFFFF);
}

