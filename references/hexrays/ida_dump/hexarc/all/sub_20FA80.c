unsigned __int64 __fastcall sub_20FA80(__int64 a1, _QWORD *a2, char a3)
{
  __int64 v3; // rax
  int v4; // edx
  __int64 v5; // rax
  _QWORD v7[5]; // [rsp+0h] [rbp-68h] BYREF
  char v8; // [rsp+28h] [rbp-40h]
  _QWORD *v9; // [rsp+30h] [rbp-38h]
  char v10; // [rsp+38h] [rbp-30h]
  unsigned __int64 v11; // [rsp+48h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  v9 = a2;
  memset(&v7[1], 0, 32);
  v8 = 0;
  v7[0] = &off_4ABED0;
  v10 = a3 ^ 1;
  sub_1194F0(a1, (__int64)v7);
  v3 = *(int *)(a1 + 480);
  if ( (_DWORD)v3 != -1 )
    *(_DWORD *)(a1 + 480) = *(_DWORD *)(*a2 + 4 * v3);
  if ( *(_QWORD *)(a1 + 464) )
  {
    v4 = 0;
    v5 = 0;
    do
    {
      ++v4;
      *(_DWORD *)(*(_QWORD *)(a1 + 456) + 4 * v5) = *(_DWORD *)(*a2 + 4LL * *(int *)(*(_QWORD *)(a1 + 456) + 4 * v5));
      v5 = v4;
    }
    while ( (unsigned __int64)v4 < *(_QWORD *)(a1 + 464) );
  }
  (*(void (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)(a1 + 936) + 96LL))(*(_QWORD *)(a1 + 936), a2);
  return v11 - __readfsqword(0x28u);
}
