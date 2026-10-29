/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3C8D0
// Address: 0x000000000003C8D0

//----- (000000000003C8D0) ----------------------------------------------------
unsigned __int64 __fastcall sub_3C8D0(_QWORD *a1, unsigned int a2, unsigned int a3)
{
  _QWORD *v5; // rdi
  __int64 v6; // rcx
  _DWORD *v7; // rax
  __int64 (__fastcall **v9)(_QWORD, __int64); // [rsp+8h] [rbp-30h] BYREF
  unsigned int v10; // [rsp+10h] [rbp-28h]
  unsigned int v11; // [rsp+14h] [rbp-24h]
  unsigned __int64 v12; // [rsp+18h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  v9 = (__int64 (__fastcall **)(_QWORD, __int64))&off_146D98;
  v10 = a2;
  v11 = a3;
  if ( !(unsigned int)sub_A4130(&v9) )
  {
    if ( (a3 & 0x7F) == 0x7F )
    {
      v5 = a1 + 135;
      v6 = a1[136];
      if ( a1[137] >= (unsigned __int64)(v6 + 1) )
      {
        v7 = (_DWORD *)*v5;
      }
      else
      {
        v7 = qvector_reserve((__int64)v5, (char *)a1[135], v6 + 1, 4u);
        a1[135] = v7;
        v6 = a1[136];
      }
      v7[v6] = a2;
      ++a1[136];
    }
    else if ( (((_BYTE)a3 + 1) & 0x7E) == 0 )
    {
      sub_390A0((int)"  %d: failed to store pending status %x, killing unknown thread\n", a2, a3);
      ptrace(PTRACE_KILL, a2, 0, 0);
    }
  }
  return __readfsqword(0x28u);
}
// 146D98: using guessed type _UNKNOWN *off_146D98;
