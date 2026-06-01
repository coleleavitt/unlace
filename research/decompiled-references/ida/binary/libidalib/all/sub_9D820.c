unsigned __int64 __fastcall sub_9D820(__int64 *a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rbp
  size_t v3; // rbx
  unsigned __int64 v4; // r14
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rax
  _BYTE src[10]; // [rsp+Eh] [rbp-3Ah] BYREF
  unsigned __int64 v10; // [rsp+18h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  v1 = pack_dq() - (_QWORD)src;
  if ( v1 )
  {
    v2 = a1[1];
    v3 = v1;
    v4 = v2 + v1;
    if ( __CFADD__(v2, v1) )
    {
      if ( v2 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v2 != 0x7FFFFFFFFFFFFFFFLL )
          a1[1] = 0x7FFFFFFFFFFFFFFFLL;
LABEL_6:
        memcpy((void *)(v2 + *a1), src, v3);
        return v10 - __readfsqword(0x28u);
      }
      v4 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v6 = *a1;
    v7 = a1[1];
    if ( a1[2] < v4 )
    {
      v8 = qvector_reserve();
      *a1 = v8;
      v6 = v8;
      v7 = a1[1];
    }
    memset((void *)(v6 + v7), 0, v4 - v7);
    a1[1] = v4;
    goto LABEL_6;
  }
  return v10 - __readfsqword(0x28u);
}

