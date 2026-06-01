unsigned __int64 __fastcall sub_465130(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rax
  void *v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  void *ptr; // [rsp+0h] [rbp-28h] BYREF
  __int64 v9; // [rsp+8h] [rbp-20h]
  __int64 v10; // [rsp+10h] [rbp-18h]
  unsigned __int64 v11; // [rsp+18h] [rbp-10h]

  v2 = *a1;
  v11 = __readfsqword(0x28u);
  (*(void (__fastcall **)(void **, __int64 *))(v2 + 1088))(&ptr, a1);
  v3 = ptr;
  v4 = *a2;
  if ( *a2 )
  {
    v3 = *(void **)v4;
    *(_QWORD *)v4 = ptr;
    v5 = *(_QWORD *)(v4 + 8);
    ptr = v3;
    *(_QWORD *)(v4 + 8) = v9;
    v9 = v5;
    v6 = *(_QWORD *)(v4 + 16);
    *(_QWORD *)(v4 + 16) = v10;
    v10 = v6;
  }
  if ( v3 && !_InterlockedSub((volatile signed __int32 *)v3, 1u) )
    free(ptr);
  return v11 - __readfsqword(0x28u);
}
