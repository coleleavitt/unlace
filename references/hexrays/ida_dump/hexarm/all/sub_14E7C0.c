__int64 __fastcall sub_14E7C0(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // r12
  int v7; // ebp
  _DWORD *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // rdx
  unsigned __int8 *v12; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int8 *v13; // [rsp+8h] [rbp-50h] BYREF
  char v14[24]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v15; // [rsp+28h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  if ( *(_BYTE *)a2 != 4 )
    return 0;
  v4 = *(_DWORD **)(a2 + 8);
  if ( *v4 != 20 )
    return 0;
  v5 = sub_11C2E0((__int64)v4, &v12);
  if ( !v5 )
    return 0;
  v6 = sub_32AEF0(*(_QWORD *)(*(_QWORD *)(v5 + 8) + 16LL), *(unsigned int *)(v5 + 4), 0);
  if ( (sub_32AEF0(-16, *(unsigned int *)(a1 + 84), 0) & ~v6) != 0 || *v12 != 4 || **((_DWORD **)v12 + 1) != 12 )
    return 0;
  sub_123480((__int64)v14, v12);
  sub_11C7E0(a2);
  sub_11C450((char *)a2, v14);
  sub_11C7E0((__int64)v14);
  v7 = sub_32AEF0(~v6, *(unsigned int *)(a1 + 84), 0);
  if ( *(_BYTE *)a2 == 4 )
  {
    v8 = *(_DWORD **)(a2 + 8);
    if ( *v8 == 12 )
    {
      v9 = sub_11C2E0((__int64)v8, &v13);
      v10 = v9;
      if ( v9 )
      {
        v11 = sub_14E2F0(*(_DWORD *)(v9 + 4), *(_QWORD *)(v9 + 8));
        if ( v7 == v11 )
        {
          sub_123480((__int64)v14, v13);
          sub_11C7E0(a2);
          sub_11C450((char *)a2, v14);
          sub_11C7E0((__int64)v14);
        }
        else if ( v7 < v11 )
        {
          sub_14E2B0(*(_DWORD *)(v10 + 4), *(__m128i **)(v10 + 8), *(_QWORD *)(*(_QWORD *)(v10 + 8) + 16LL) - v7);
        }
      }
    }
  }
  return 1;
}
