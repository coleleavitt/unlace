__int64 __fastcall sub_23E3C0(int a1, double a2, __int64 a3, __int64 a4, char *a5)
{
  __int64 v6; // rax
  void *v7; // rdi
  __int64 v9; // rdi
  _QWORD v10[2]; // [rsp+0h] [rbp-68h] BYREF
  char v11; // [rsp+10h] [rbp-58h]
  int v12; // [rsp+14h] [rbp-54h]
  unsigned __int64 v13; // [rsp+48h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  if ( a1 )
  {
    v6 = qword_8CC430;
    a4 = qword_8CC430 + ((_QWORD)xmmword_8CC438 << 8);
    if ( qword_8CC430 != a4 )
    {
      while ( a1 != *(_DWORD *)v6 )
      {
        v6 += 256;
        if ( a4 == v6 )
          goto LABEL_9;
      }
      if ( v6 )
      {
        a4 = *(_QWORD *)(v6 + 200);
        if ( a4 )
        {
          a5 = (char *)*(unsigned int *)(*(_QWORD *)(v6 + 192) + 4 * a4-- - 4);
          *(_QWORD *)(v6 + 200) = a4;
          *(_DWORD *)(v6 + 216) = (_DWORD)a5;
        }
      }
    }
  }
LABEL_9:
  if ( (_QWORD)xmmword_8CC628 )
  {
    v11 = 0;
    v12 = 0;
    v10[1] = -1;
    v10[0] = 0xFFFFFFFFLL;
    copy_debug_event(v10, qword_8CC620 + 72 * xmmword_8CC628 - 72);
    if ( (_QWORD)xmmword_8CC628 )
    {
      v9 = 9 * (xmmword_8CC628 - 1);
      *(_QWORD *)&xmmword_8CC628 = xmmword_8CC628 - 1;
      free_debug_event(qword_8CC620 + 8 * v9);
    }
    copy_debug_event(&qword_8CC340, v10);
    free_debug_event(v10);
  }
  v7 = qword_8CC600;
  *(_DWORD *)qword_8CC600 = a1;
  return sub_23D480((__int64)v7, 22, a4, a5, a2);
}
