void *__fastcall sub_7F3A90(__int64 a1)
{
  void *v1; // rax
  void *v2; // rbp
  __int64 v3; // rax
  void *v4; // rbx
  _QWORD v6[2]; // [rsp+0h] [rbp-48h] BYREF
  void *v7[2]; // [rsp+10h] [rbp-38h]
  unsigned __int64 v8; // [rsp+28h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  v1 = (void *)open_linput(a1, 0);
  if ( !v1 )
    return nullptr;
  v2 = v1;
  v7[1] = nullptr;
  v7[0] = v1;
  v6[0] = 0;
  v6[1] = sub_7F19F0;
  v3 = sub_7F2620((__int64)v6);
  v4 = (void *)v3;
  if ( !v3 )
    goto LABEL_5;
  if ( (unsigned int)sub_7F2940((unsigned __int8 *)v6, *(_QWORD *)(v3 + 80), *(_WORD *)(v3 + 41), v3, 0) - 1 <= 1 )
  {
    free_idasgn(v4);
LABEL_5:
    v4 = nullptr;
  }
  byte_2CABFC0 = 0;
  if ( LOBYTE(v7[1]) )
    close_linput(v7[0]);
  close_linput(v2);
  return v4;
}

