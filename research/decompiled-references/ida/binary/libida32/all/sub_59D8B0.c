__int64 __fastcall sub_59D8B0(__int64 *a1, unsigned __int64 *a2, void *a3)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // r8d
  int v6; // r9d
  int v7; // r12d
  unsigned int v8; // ebx
  _DWORD *v10; // rax
  unsigned int v11; // eax
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int128 v13; // [rsp+8h] [rbp-30h]
  unsigned __int64 v14; // [rsp+18h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  ptr = nullptr;
  v13 = 0;
  if ( sub_69C980(a3)
    && (v7 = sub_59CCD0(a1, &ptr, v3, v4, v5, v6), v7 != -1)
    && (v10 = (_DWORD *)sub_5AFCE0(a1)) != nullptr
    && *v10 == v7
    && (v11 = sub_3B90A0(a1, v7), v11 != -1) )
  {
    v8 = sub_532DA0(a1, a2, v11);
  }
  else
  {
    v8 = 0;
  }
  if ( ptr )
  {
    *(_QWORD *)&v13 = 0;
    qfree(ptr);
  }
  return v8;
}

