__int64 __fastcall sub_1AE80F0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  void *v10[2]; // [rsp+10h] [rbp-158h] BYREF
  _BYTE v11[128]; // [rsp+20h] [rbp-148h] BYREF
  void *ptr[2]; // [rsp+A0h] [rbp-C8h] BYREF
  _BYTE v13[184]; // [rsp+B0h] [rbp-B8h] BYREF

  v4 = 0;
  v10[1] = (void *)0x2000000000LL;
  v10[0] = v11;
  v5 = sub_BFBAE0(a3);
  v6 = sub_BFB840(v5);
  sub_F1A490(v6, (__int64)v10, *(_QWORD *)(a1 + 248), 1, 0);
  while ( 1 )
  {
    v7 = *(_QWORD *)(a2 + 8 * v4 + 27576);
    ptr[0] = v13;
    ptr[1] = (void *)0x2000000000LL;
    v8 = sub_BFB840(v7);
    sub_F1A490(v8, (__int64)ptr, *(_QWORD *)(a1 + 248), 1, 0);
    if ( (unsigned __int8)sub_2222ED0(v10, ptr) )
      break;
    if ( ptr[0] == v13 )
    {
      if ( ++v4 == 9 )
      {
LABEL_5:
        LODWORD(v4) = 9;
        goto LABEL_6;
      }
    }
    else
    {
      free(ptr[0]);
      if ( ++v4 == 9 )
        goto LABEL_5;
    }
  }
  if ( ptr[0] != v13 )
    free(ptr[0]);
LABEL_6:
  if ( v10[0] != v11 )
    free(v10[0]);
  return (unsigned int)v4;
}
