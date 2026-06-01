__int64 sub_17F720()
{
  QT::QAction *v0; // r12
  unsigned int v1; // ebx
  __int64 v2; // rdx
  char *v3; // rax
  char merge_state; // al
  int v5; // ecx
  void *ptr[7]; // [rsp+0h] [rbp-38h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  if ( dword_8CC5E8 )
  {
    if ( byte_8CC5EC )
      goto LABEL_13;
    goto LABEL_6;
  }
  if ( dword_8CC5F0 <= 0 )
  {
LABEL_6:
    if ( dbg )
    {
      merge_state = get_merge_state();
      v5 = dword_8CC5F0;
      v1 = (merge_state & 3) == 0 ? 3 : 7;
      goto LABEL_8;
    }
LABEL_13:
    v5 = dword_8CC5F0;
    v1 = 7;
LABEL_8:
    v0 = qword_8CA2D8;
    v2 = 13;
    v3 = "Start process";
    if ( !v5 )
      goto LABEL_9;
    goto LABEL_4;
  }
  v0 = qword_8CA2D8;
  v1 = 7;
LABEL_4:
  v2 = 16;
  v3 = "Continue process";
LABEL_9:
  QT::QString::fromUtf8(ptr, v2, v3);
  QT::QAction::setText(v0, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return v1;
}
