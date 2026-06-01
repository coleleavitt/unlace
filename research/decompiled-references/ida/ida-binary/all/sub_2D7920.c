__int64 __fastcall sub_2D7920(void (__fastcall **a1)(void **, __int64), __int64 *a2, __int64 *a3)
{
  __int64 v3; // rbx
  __int64 v4; // rsi
  void *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx
  void *ptr; // [rsp+0h] [rbp-28h] BYREF
  __int64 v10; // [rsp+8h] [rbp-20h]
  __int64 v11; // [rsp+10h] [rbp-18h]
  unsigned __int64 v12; // [rsp+18h] [rbp-10h]

  v3 = *a3;
  v4 = *a2;
  v12 = __readfsqword(0x28u);
  (*a1)(&ptr, v4);
  v5 = *(void **)v3;
  *(_QWORD *)v3 = ptr;
  v6 = *(_QWORD *)(v3 + 8);
  ptr = v5;
  *(_QWORD *)(v3 + 8) = v10;
  v10 = v6;
  v7 = *(_QWORD *)(v3 + 16);
  *(_QWORD *)(v3 + 16) = v11;
  v11 = v7;
  if ( v5 && !_InterlockedSub((volatile signed __int32 *)v5, 1u) )
    free(ptr);
  return 1;
}
