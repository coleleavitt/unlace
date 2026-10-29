/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40DEE0
// Address: 0x000000000040DEE0

//----- (000000000040DEE0) ----------------------------------------------------
__int64 __fastcall sub_40DEE0(int a1)
{
  FILE *v1; // rax
  FILE *v2; // rbx
  int v3; // ebp
  char *v4; // r13
  unsigned int v5; // ebx
  int v7; // edi
  unsigned __int8 *v8; // rbp
  char *s1; // [rsp+0h] [rbp-1058h] BYREF
  __int128 v10; // [rsp+8h] [rbp-1050h]
  char v11[4104]; // [rsp+20h] [rbp-1038h] BYREF
  unsigned __int64 v12; // [rsp+1028h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  sub_485490(v11, 4096, "/proc/%u/status", a1);
  v1 = sub_47FA20(v11);
  if ( v1 )
  {
    v2 = v1;
    v3 = 3;
    s1 = nullptr;
    v10 = 0;
    while ( 1 )
    {
      if ( sub_481160(&s1, v2) < 0 )
      {
        sub_480D70(v2);
        v5 = 32;
        goto LABEL_12;
      }
      if ( (unsigned __int64)v10 > 6 )
      {
        v4 = s1;
        if ( !strncmp(s1, "State:", 6u) )
          break;
      }
      if ( !--v3 )
        goto LABEL_7;
    }
    v7 = v4[6];
    v8 = (unsigned __int8 *)(v4 + 6);
    if ( !v4[6] )
    {
LABEL_7:
      sub_480D70(v2);
      if ( !byte_4C94E1 )
        sub_481AC0(30060);
      BUG();
    }
    while ( isspace(v7) )
    {
      v7 = (char)*++v8;
      if ( !(_BYTE)v7 )
        goto LABEL_7;
    }
    sub_480D70(v2);
    v5 = *v8;
LABEL_12:
    if ( s1 )
    {
      *(_QWORD *)&v10 = 0;
      j__free(s1);
    }
  }
  else
  {
    return 32;
  }
  return v5;
}
// 4C94E1: using guessed type char byte_4C94E1;
