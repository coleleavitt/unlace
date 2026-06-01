bool __fastcall sub_24EF00(__int64 a1, int a2)
{
  __int64 v3; // rax
  int v4; // ebx
  _BYTE *v5; // rdi
  __int64 (__fastcall **v7)(); // [rsp+0h] [rbp-48h] BYREF
  int v8; // [rsp+8h] [rbp-40h]
  unsigned __int64 v9; // [rsp+18h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  v3 = 0;
  if ( (_QWORD)xmmword_8CC458 )
  {
    v4 = 0;
    do
    {
      v5 = *((_BYTE **)qword_8CC450 + v3);
      if ( (v5[16] & 4) != 0 )
        (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v5 + 32LL))(v5);
      v3 = ++v4;
    }
    while ( v4 < (unsigned __int64)xmmword_8CC458 );
  }
  v7 = srcdbg_suspended_process;
  v8 = a2;
  return (unsigned int)sub_24EC60(nullptr, a1, 3u, (__int64)&v7, 0) != 0;
}
