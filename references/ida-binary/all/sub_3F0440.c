__int64 __fastcall sub_3F0440(unsigned __int64 a1, char **a2, __int64 a3)
{
  unsigned __int64 head; // rbx
  __int64 result; // rax
  unsigned __int64 v6; // rbp
  unsigned __int64 *func; // rax
  __int128 v8; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-30h]

  head = a1;
  v9 = __readfsqword(0x28u);
  v8 = 0;
  getinf_buf(26, &v8, 16);
  if ( a1 < (unsigned __int64)v8 )
  {
    v6 = a1 + 1;
    func = (unsigned __int64 *)get_func(a1);
    if ( !func )
      goto LABEL_6;
    goto LABEL_5;
  }
  if ( a1 < *((_QWORD *)&v8 + 1) )
    return sub_3F00C0(a1, a2, a3);
  v6 = a1 + 1;
  func = (unsigned __int64 *)get_func(a1);
  if ( func )
  {
LABEL_5:
    head = *func;
    v6 = func[1];
  }
  while ( head < v6 )
  {
LABEL_6:
    result = sub_3F00C0(head, a2, a3);
    if ( (_BYTE)result )
      return result;
    head = next_head(head, v6);
  }
  return 0;
}
