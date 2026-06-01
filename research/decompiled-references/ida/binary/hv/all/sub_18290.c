unsigned __int64 __fastcall sub_18290(__int64 *a1)
{
  void *v1; // rdx
  __int64 v2; // rbp
  __int64 *v3; // rsi
  __int64 v4; // rax
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  __int64 v10; // [rsp+0h] [rbp-40h] BYREF
  void *ptr; // [rsp+8h] [rbp-38h] BYREF
  __int128 v12; // [rsp+10h] [rbp-30h]
  unsigned __int64 v13; // [rsp+20h] [rbp-20h]

  v1 = nullptr;
  v13 = __readfsqword(0x28u);
  v12 = 0;
  ptr = nullptr;
  v2 = qword_165658;
  if ( qword_165658 )
  {
    ptr = (void *)sub_96080(&ptr, 0, qword_165658, 1);
    v1 = ptr;
  }
  *(_QWORD *)&v12 = v2;
  while ( 1 )
  {
    v4 = *a1;
    v10 = v2;
    v3 = &v10;
    if ( (*(unsigned int (__fastcall **)(__int64 *, __int64 *, void *))(v4 + 16))(a1, &v10, v1) )
      break;
    LODWORD(v3) = v10;
    if ( !v10 )
      break;
    sub_70840(ptr);
    v2 = v12;
    v1 = ptr;
  }
  if ( byte_165A12 )
    sub_708D0((unsigned int)"\n", (_DWORD)v3, v5, v6, v7, v8);
  if ( ptr )
  {
    *(_QWORD *)&v12 = 0;
    j__free(ptr);
  }
  return v13 - __readfsqword(0x28u);
}

