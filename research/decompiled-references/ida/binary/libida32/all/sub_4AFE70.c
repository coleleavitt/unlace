__int64 __fastcall sub_4AFE70(unsigned int *a1, unsigned __int64 a2)
{
  bool v2; // zf
  unsigned __int64 v3; // rax
  unsigned int v4; // edx
  unsigned __int64 v5; // rax
  __int64 v6; // rbx
  _DWORD v8[258]; // [rsp+0h] [rbp-428h] BYREF
  unsigned __int64 v9; // [rsp+408h] [rbp-20h]

  v2 = *(_QWORD *)(a1 + 1) == -1;
  v9 = __readfsqword(0x28u);
  if ( v2 )
    sub_4AFCF0(a1);
  v3 = sub_4AFDE0((int *)a1);
  v4 = -1;
  if ( a2 < v3 )
  {
    v5 = v3 - a2 - 1;
    v6 = (unsigned __int8)v5;
    if ( *(_QWORD *)(a1 + 1) == v5 >> 8 )
    {
      return a1[(unsigned __int8)v5 + 5];
    }
    else
    {
      netnode_supval(*a1, v5 >> 8, v8, 1024, 83);
      return (unsigned int)v8[v6];
    }
  }
  return v4;
}

