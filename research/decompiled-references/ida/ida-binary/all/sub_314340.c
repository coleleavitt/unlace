__int64 sub_314340()
{
  __int64 v0; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx
  unsigned int v3; // ebx
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int64 v6; // [rsp+8h] [rbp-30h]
  __int64 v7; // [rsp+10h] [rbp-28h]
  unsigned __int64 v8; // [rsp+18h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  sub_2DDEB0((__int64)&ptr, 2);
  if ( v7 > 0 )
  {
    v0 = sub_47A7A0(QT::QCoreApplication::self);
    if ( v7 > 0 )
    {
      v1 = v6;
      while ( 1 )
      {
        v2 = v1;
        if ( v6 + 8 * v7 == v1 )
          break;
        v1 += 8;
        if ( v0 == *(_QWORD *)(v1 - 8) )
        {
          if ( (unsigned int)((v2 - v6) >> 3) == -1 )
            break;
          sub_4CB2D0(qword_8CD8B8);
          v3 = 1;
          goto LABEL_7;
        }
      }
    }
  }
  v3 = 0;
LABEL_7:
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    free(ptr);
  return v3;
}
