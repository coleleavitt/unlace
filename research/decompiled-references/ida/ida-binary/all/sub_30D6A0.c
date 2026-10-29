__int64 __fastcall sub_30D6A0(_QWORD *a1, __int64 a2, unsigned int a3, unsigned __int8 (__fastcall *a4)(_QWORD))
{
  const char *v4; // rax
  unsigned int v5; // ebx
  bool v6; // zf
  const char *v8; // rdx
  __int64 v9; // rax
  unsigned int v11; // [rsp+1Ch] [rbp-4Ch] BYREF
  _QWORD v12[9]; // [rsp+20h] [rbp-48h] BYREF

  v4 = &s1;
  v5 = a3;
  v6 = *(_QWORD *)(a2 + 8) == 0;
  v12[1] = __readfsqword(0x28u);
  if ( !v6 )
    v4 = *(const char **)a2;
  v12[0] = v4;
  skip_utf8(v12, (int)a3);
  while ( 1 )
  {
    v8 = &s1;
    if ( *(_QWORD *)(a2 + 8) )
      v8 = *(const char **)a2;
    v9 = v12[0];
    if ( (unsigned __int64)v8 >= v12[0] )
      break;
    if ( !(unsigned __int8)prev_utf8_char(&v11, v12, v8) )
      goto LABEL_12;
    if ( !a4(v11) )
    {
      skip_utf8(v12, 1);
LABEL_12:
      v9 = v12[0];
      break;
    }
    --v5;
  }
  *a1 = v9;
  return v5;
}
