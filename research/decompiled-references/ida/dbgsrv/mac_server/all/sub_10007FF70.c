/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10007FF70
// Address: 0x000000010007FF70

//----- (000000010007FF70) ----------------------------------------------------
__int64 __fastcall sub_10007FF70(char *__s, char *a2, __int64 a3)
{
  char *v4; // r14
  size_t v5; // rax
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r12
  int v8; // eax
  __int128 v10; // [rsp+0h] [rbp-90h] BYREF
  _OWORD v11[5]; // [rsp+10h] [rbp-80h] BYREF
  __int64 v12; // [rsp+60h] [rbp-30h]

  v4 = a2;
  memset(v11, 0, sizeof(v11));
  v12 = 0;
  MD5Init((__int64)v11);
  v5 = strlen(__s);
  MD5Update((__int64)v11, __s, v5);
  MD5Final(&v10, (__int64)v11);
  v6 = (unsigned __int64)&a2[a3];
  if ( v6 > (unsigned __int64)a2 )
  {
    v7 = 0;
    do
    {
      v8 = qsnprintf(v4, v6 - (_QWORD)v4, "%02X", *((unsigned __int8 *)&v11[-1] + v7));
      if ( v7 > 0xE )
        break;
      v4 += v8;
      ++v7;
    }
    while ( (unsigned __int64)v4 < v6 );
  }
  return __stack_chk_guard;
}
