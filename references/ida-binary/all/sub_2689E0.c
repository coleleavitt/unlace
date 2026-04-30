__int64 sub_2689E0()
{
  __int64 *v0; // rsi
  unsigned int v1; // ebx
  _DWORD *v3; // rax
  __int64 v4; // [rsp+0h] [rbp-38h] BYREF
  __int128 v5; // [rsp+8h] [rbp-30h]
  unsigned __int64 v6; // [rsp+18h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  if ( !(_BYTE)byte_8CC718 && __cxa_guard_acquire(&byte_8CC718) )
  {
    xmmword_8CC728 = 0;
    qword_8CC720 = 0;
    qword_8CC720 = qvector_reserve(&qword_8CC720, 0, 5, 1);
    *(_QWORD *)&xmmword_8CC728 = 5;
    strcpy((char *)qword_8CC720, "Live");
    word_8CC738 = 257;
    xmmword_8CC748 = 0;
    qword_8CC740 = 0;
    __cxa_atexit((void (*)(void *))sub_230E20, &qword_8CC720, &off_85BC80);
    __cxa_guard_release(&byte_8CC718);
  }
  if ( !(_BYTE)byte_8CC6D8 && __cxa_guard_acquire(&byte_8CC6D8) )
  {
    xmmword_8CC6E8 = 0;
    qword_8CC6E0 = 0;
    v3 = (_DWORD *)qvector_reserve(&qword_8CC6E0, 0, 8, 1);
    qword_8CC6E0 = (__int64)v3;
    *(_QWORD *)&xmmword_8CC6E8 = 8;
    *v3 = 1634100548;
    *(_DWORD *)((char *)v3 + 3) = 1953264993;
    *(_BYTE *)(qword_8CC6E0 + 7) = 0;
    word_8CC6F8 = 257;
    xmmword_8CC708 = 0;
    qword_8CC700 = 0;
    __cxa_atexit((void (*)(void *))sub_230E20, &qword_8CC6E0, &off_85BC80);
    __cxa_guard_release(&byte_8CC6D8);
  }
  v0 = &qword_8CC720;
  v4 = 0;
  v5 = 0;
  if ( (unsigned __int8)sub_2661C0(&v4, (__int64)&qword_8CC720, 1)
    && (v0 = &v4, (unsigned __int8)sub_266310((__int64)&qword_8CC6E0, &v4, 2, 0.0)) )
  {
    v0 = nullptr;
    v1 = sub_266310((__int64)&qword_8CC720, nullptr, 1, 0.0);
  }
  else
  {
    v1 = 0;
  }
  if ( v4 )
  {
    *(_QWORD *)&v5 = 0;
    qfree(v4, (const char *)v0);
  }
  return v1;
}
