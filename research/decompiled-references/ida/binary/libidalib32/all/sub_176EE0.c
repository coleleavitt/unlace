unsigned __int64 __fastcall sub_176EE0(__int64 a1)
{
  const char *v2; // rdi
  __int64 v3; // rax
  bool v4; // zf
  const char *v5; // rsi
  int v6; // ebp
  __int64 v7; // rdx
  const char *v8; // rdx
  _QWORD *v9; // rdx
  char _0[4104]; // [rsp+0h] [rbp+0h] BYREF
  unsigned __int64 vars1008; // [rsp+1008h] [rbp+1008h]

  vars1008 = __readfsqword(0x28u);
  getCurDir(_0, 0x1000u);
  v2 = *(const char **)(a1 + 4280);
  if ( v2 )
    delStr(v2);
  v3 = newStr(_0);
  v4 = *(_QWORD *)(a1 + 4448) == 0;
  *(_QWORD *)(a1 + 4280) = v3;
  v5 = (const char *)v3;
  if ( !v4 )
  {
    v6 = 0;
    v7 = 0;
    while ( 1 )
    {
      v9 = (_QWORD *)(*(_QWORD *)(a1 + 4440) + 24 * v7);
      v8 = v9[1] ? (const char *)*v9 : s1;
      TFileList::readDirectory(*(TFileList **)(a1 + 176), v5, v8, v6++ > 0);
      v7 = v6;
      if ( (unsigned __int64)v6 >= *(_QWORD *)(a1 + 4448) )
        break;
      v5 = *(const char **)(a1 + 4280);
    }
  }
  return vars1008 - __readfsqword(0x28u);
}

