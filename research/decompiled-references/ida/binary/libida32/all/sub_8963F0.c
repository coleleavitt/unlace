unsigned __int64 __fastcall sub_8963F0(__int64 a1)
{
  unsigned __int64 *v1; // rdx
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  unsigned int v5; // ebp
  __int64 v6; // rcx
  unsigned int v7; // edx
  __int64 v9; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v10; // [rsp+8h] [rbp-20h]

  v1 = *(unsigned __int64 **)a1;
  v2 = *(_QWORD *)(a1 + 24);
  v10 = __readfsqword(0x28u);
  v3 = *v1;
  v4 = (*v1 - 20) >> 3;
  if ( v4 < v2 && v2 + (v3 >> 3) - 1 - v4 >= v3 >> 3 )
  {
    if ( (unsigned int)sub_8962A0(a1, -1) )
      sub_894C80();
    v2 = *(_QWORD *)(a1 + 24);
  }
  v5 = *(_DWORD *)(a1 + 40);
  v6 = 20;
  v9 = *(_QWORD *)(a1 + 16);
  v7 = 0;
  if ( 16 * v2 )
  {
    do
    {
      sub_895100((__int64 *)a1, &v9, v7, v6);
      v7 = v5;
      v6 = 0;
      ++v5;
    }
    while ( v9 != *(_QWORD *)(a1 + 16) + 16LL * *(_QWORD *)(a1 + 24) );
  }
  return v10 - __readfsqword(0x28u);
}

