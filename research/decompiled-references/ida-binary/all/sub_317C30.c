unsigned __int64 __fastcall sub_317C30(__int64 a1)
{
  char v1; // r12
  void **v2; // rbx
  void **v3; // r14
  __int128 v5; // [rsp+0h] [rbp-58h] BYREF
  void *ptr; // [rsp+10h] [rbp-48h] BYREF
  void **v7; // [rsp+18h] [rbp-40h]
  __int64 v8; // [rsp+20h] [rbp-38h]
  unsigned __int64 v9; // [rsp+28h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  sub_53EBD0(a1);
  v5 = 0;
  sub_536580(&ptr, "Edit/Rename", 0);
  v1 = sub_535E60(&v5, &ptr, 0);
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
  {
    v2 = v7;
    v3 = &v7[3 * v8];
    if ( v7 != v3 )
    {
      do
      {
        if ( *v2 && !_InterlockedSub((volatile signed __int32 *)*v2, 1u) )
          free(*v2);
        v2 += 3;
      }
      while ( v3 != v2 );
    }
    free(ptr);
  }
  if ( v1 )
    sub_314AC0(a1, (QT::QWidget **)&v5);
  return v9 - __readfsqword(0x28u);
}
