__int64 __fastcall sub_519200(__int64 a1)
{
  unsigned int v1; // ebp
  __int64 v2; // rax
  __int64 v3; // rdx
  volatile signed __int32 *v4; // rax
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int64 v7; // [rsp+8h] [rbp-30h]
  __int64 v8; // [rsp+10h] [rbp-28h]
  unsigned __int64 v9; // [rsp+18h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  v1 = 0;
  if ( !a1 )
    return v1;
  QT::QApplication::allWidgets((QT::QApplication *)&ptr);
  if ( v8 <= 0 )
  {
LABEL_7:
    v4 = (volatile signed __int32 *)ptr;
    if ( !ptr )
      return v1;
    goto LABEL_8;
  }
  v2 = v7;
  do
  {
    v3 = v2;
    if ( v7 + 8 * v8 == v2 )
    {
      v1 = 0;
      goto LABEL_7;
    }
    v2 += 8;
  }
  while ( a1 != *(_QWORD *)(v2 - 8) );
  v4 = (volatile signed __int32 *)ptr;
  LOBYTE(v1) = v3 - v7 != -8;
  if ( ptr )
  {
LABEL_8:
    if ( !_InterlockedSub(v4, 1u) )
      free(ptr);
  }
  return v1;
}
