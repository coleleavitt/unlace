__int64 __fastcall sub_2688B0(__int64 a1)
{
  int v1; // ebp
  _DWORD *v2; // rax
  unsigned int v3; // ebx
  _DWORD *v5; // [rsp+0h] [rbp-58h] BYREF
  __int128 v6; // [rsp+8h] [rbp-50h]
  char v7; // [rsp+18h] [rbp-40h]
  char v8; // [rsp+19h] [rbp-3Fh]
  __int64 v9; // [rsp+20h] [rbp-38h]
  __int128 v10; // [rsp+28h] [rbp-30h]
  unsigned __int64 v11; // [rsp+38h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  if ( (get_merge_state() & 3) != 0 )
    v1 = is_diff_merge_mode() + 3;
  else
    LOBYTE(v1) = 1 - ((dword_8CC5F0 == 0) - 1);
  v5 = nullptr;
  v6 = 0;
  v2 = (_DWORD *)qvector_reserve(&v5, 0, 8, 1);
  v5 = v2;
  *(_QWORD *)&v6 = 8;
  *v2 = 1634100548;
  *(_DWORD *)((char *)v2 + 3) = 1953264993;
  *((_BYTE *)v5 + 7) = 0;
  v7 = 1;
  v8 = v1;
  v9 = 0;
  v10 = 0;
  v3 = sub_268730(a1, (__int64)&v5, 1u);
  if ( v9 )
  {
    *(_QWORD *)&v10 = 0;
    qfree(v9, (const char *)&v5);
  }
  if ( v5 )
  {
    *(_QWORD *)&v6 = 0;
    qfree(v5, (const char *)&v5);
  }
  return v3;
}
