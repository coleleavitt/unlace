__int64 __fastcall sub_4AFDE0(int *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  unsigned int v4; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v5; // [rsp+8h] [rbp-10h]

  v5 = __readfsqword(0x28u);
  v1 = *(_QWORD *)(a1 + 1);
  if ( v1 == -1 )
  {
    v4 = *a1;
    if ( !(unsigned __int8)netnode_exist(&v4) )
      return v1;
    v1 = (unsigned int)netnode_altval(v4, 1, 65);
    v2 = (unsigned int)netnode_altval(v4, 2, 65);
  }
  else
  {
    v2 = *(_QWORD *)(a1 + 3);
  }
  return v2 + (v1 << 8);
}

