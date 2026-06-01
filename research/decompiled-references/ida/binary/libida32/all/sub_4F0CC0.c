__int64 __fastcall sub_4F0CC0(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  unsigned __int64 v3; // rax
  __int64 result; // rax
  char *v5; // rbx
  char *v6; // rdx
  int v7; // [rsp+0h] [rbp-18h] BYREF
  unsigned int v8; // [rsp+4h] [rbp-14h] BYREF
  char v9[16]; // [rsp+8h] [rbp-10h] BYREF

  *(_QWORD *)v9 = __readfsqword(0x28u);
  v3 = netnode_supval(a1, a2, &v7, 8, a3);
  if ( v3 <= 7 )
    return 0xFFFFFFFFLL;
  v5 = (char *)&v7 + v3;
  if ( (char *)&v7 + v3 < (char *)&v8 || v7 != 16909060 )
    return 0xFFFFFFFFLL;
  v6 = v9;
  if ( v5 < v9 )
  {
    v6 = (char *)&v8;
    result = 0xFFFFFFFFLL;
  }
  else
  {
    result = v8;
  }
  if ( v6 < v5 )
    return 0xFFFFFFFFLL;
  return result;
}

