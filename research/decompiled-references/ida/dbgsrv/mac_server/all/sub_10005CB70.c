/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005CB70
// Address: 0x000000010005CB70

//----- (000000010005CB70) ----------------------------------------------------
__int64 __fastcall sub_10005CB70(__int64 a1, int a2)
{
  unsigned int v2; // r14d
  __int64 v3; // r15
  int v4; // r13d
  const char *v5; // rbx
  _QWORD *v6; // rax
  char v7; // r12
  size_t v8; // rdx
  _QWORD *__p; // [rsp+10h] [rbp-860h]
  _WORD v11[2]; // [rsp+18h] [rbp-858h] BYREF
  _BYTE v12[4]; // [rsp+1Ch] [rbp-854h] BYREF
  __int16 v13; // [rsp+20h] [rbp-850h]
  _BYTE __s1[2078]; // [rsp+22h] [rbp-84Eh] BYREF

  v11[0] = 0;
  __bzero(v12, 2084);
  v2 = 0;
  if ( a2 )
    v3 = 0;
  else
    v3 = *(_QWORD *)(a1 + 1136);
  v4 = *(_DWORD *)(a1 + 1144);
  sub_100000AE0((int)"Looking for GNU DWARF file at \"%s\"... ", a1 + 8);
  v5 = "no.\n";
  if ( qfileexist((const char *)(a1 + 8)) )
  {
    v2 = 0;
    v6 = open_linput((const char *)(a1 + 8), 0);
    __p = v6;
    if ( v6 )
    {
      if ( v4 == 11 )
      {
        v7 = sub_100052790((__int64)v11, (__int64)v6);
        v6 = __p;
      }
      else
      {
        v7 = 0;
      }
      close_linput(v6);
      v2 = 0;
      if ( v7 )
      {
        if ( !v3 || (v8 = *(unsigned __int16 *)(v3 + 8), (_WORD)v8 == v13) && !memcmp(__s1, (const void *)(v3 + 10), v8) )
        {
          v5 = "found!\n";
          v2 = 1;
        }
      }
    }
  }
  sub_100000AE0((int)v5);
  return v2;
}
// 100082B16: using guessed type __int64 __fastcall __bzero(_QWORD, _QWORD);
